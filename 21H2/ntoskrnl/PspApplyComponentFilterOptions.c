/*
 * XREFs of PspApplyComponentFilterOptions @ 0x1405CF994
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall PspApplyComponentFilterOptions(__int64 a1, __int64 a2)
{
  unsigned int *result; // rax

  result = *(unsigned int **)(a2 + 480);
  if ( result )
  {
    result = (unsigned int *)*result;
    *(_DWORD *)(a1 + 2592) = (_DWORD)result;
  }
  return result;
}
