/*
 * XREFs of MIDL_user_allocate @ 0x180278D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__stdcall MIDL_user_allocate(size_t size)
{
  return DefaultHeap::Alloc(size);
}
