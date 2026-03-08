/*
 * XREFs of PspPropagateHandle @ 0x14070E0B4
 * Callers:
 *     PspUpdateCreateInfo @ 0x14070DEE4 (PspUpdateCreateInfo.c)
 * Callees:
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 */

__int64 __fastcall PspPropagateHandle(char a1, void **a2, unsigned __int64 *a3)
{
  void *v3; // r10
  _KPROCESS *Process; // r11
  __int64 result; // rax

  v3 = *a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  result = 0LL;
  if ( a1 )
    return ObDuplicateObject((ULONG_PTR)Process, v3, (ULONG_PTR)Process, a3, 0, 0, 2, 0);
  *a3 = (unsigned __int64)v3;
  *a2 = 0LL;
  return result;
}
