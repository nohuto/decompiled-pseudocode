/*
 * XREFs of _malloc_base @ 0x18003C15A
 * Callers:
 *     __tlregdtor @ 0x18003D1FC (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl malloc_base(size_t Size)
{
  return _malloc_base(Size);
}
