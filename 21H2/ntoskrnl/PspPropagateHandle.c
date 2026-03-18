/*
 * XREFs of PspPropagateHandle @ 0x14066F1F0
 * Callers:
 *     PspUpdateCreateInfo @ 0x14066EFE8 (PspUpdateCreateInfo.c)
 * Callees:
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 */

__int64 __fastcall PspPropagateHandle(char a1, _QWORD *a2, _QWORD *a3)
{
  _KPROCESS *Process; // r11
  __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  result = 0LL;
  if ( a1 )
    return ObDuplicateObject((ULONG_PTR)Process, 0, 0, 2, 0);
  *a3 = *a2;
  *a2 = 0LL;
  return result;
}
