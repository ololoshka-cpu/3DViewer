#ifndef ERRORS_H
#define ERRORS_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum errors {
  SUCCESS,
  FILE_OPEN_ERROR,
  FILE_EMPTY_ERROR,
  READ_FILE_ERROR,
  FILE_CLOSE_ERROR,
  FILE_WRITE_ERROR,
  FIGURE_NOT_LOADED,
  SIZE_POINTS_ERROR,
  SIZE_EDGES_ERROR,
  SIZE_FACES_ERROR,
  SCENE_WRONG_ERROR,
  MEMORY_ALLOCATE_ERROR,
  COEFF_SCALE_ERROR,
  NOT_DATA_WRITE_ERROR,
  COMMAND_UNDEFINED,
  INVALID_ARGUMENT
} my_error_t;

#ifdef __cplusplus
}
#endif

#endif  // ERRORS_H
