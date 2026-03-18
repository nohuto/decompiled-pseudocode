/*
 * XREFs of PspApplyComponentFilterOptions @ 0x1406DF640
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall PspApplyComponentFilterOptions(__int64 a1, __int64 a2)
{
  unsigned int *result; // rax

  result = *(unsigned int **)(a2 + 456);
  if ( result )
  {
    result = (unsigned int *)*result;
    *(_DWORD *)(a1 + 2872) = (_DWORD)result;
  }
  return result;
}
