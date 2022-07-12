#ifndef TEXTURE_H
#define TEXTURE_H

// Third-party Headers
#include "thirdparty/glad/glad.h"
#include "thirdparty/GLFW/glfw3.h"
#include "thirdparty/stb_image.h"
#include "Config.h"

// Standard Headers
#include <iostream>

// Texture class for the Renderer
class Texture
{
public:
    unsigned int id;  // ID for the texture data
    std::string path; // Local path for the texture file
    std::string type;

    // Default Texture Constructor
    Texture();
    // Path constructor for the Texture
    Texture(std::string path_);
    // Loads the textures from local path
    void load_texture_from_path();
    // Generates Texture ID
    void generate_texture();
    // Binds the current ID to the renderer
    void bind_texture();
    // Unbinds the current ID from the renderer
    void unbind_texture();

private:
};

// Sets the active texture based on index to the renderer
void set_active_texture(int index);

// Texture path for loading textures
extern std::string texturePaths[LOADED_TEXTURES_COUNT];

// Texture names for the actor ui
static const char *textureNames[] = {
    "bricks",
    "brickwall",
    "container",
    "continer_but_cooler",
    "container(specular)",
    "marble",
    "matrix",
    "metal",
    "wall",
    "wood",
};

#endif // !TEXTURE_H
