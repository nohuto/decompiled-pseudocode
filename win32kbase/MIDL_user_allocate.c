/*
 * XREFs of MIDL_user_allocate @ 0x1C0274880
 * Callers:
 *     <none>
 * Callees:
 *     ImpAllocate @ 0x1C0089EE4 (ImpAllocate.c)
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  return (void *)ImpAllocate(size, 1, 1);
}
