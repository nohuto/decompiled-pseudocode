/*
 * XREFs of PspPropagateHandle @ 0x14069C7DC
 * Callers:
 *     PspUpdateCreateInfo @ 0x14069C5D4 (PspUpdateCreateInfo.c)
 * Callees:
 *     ObDuplicateObject @ 0x1406E4910 (ObDuplicateObject.c)
 */

__int64 __fastcall PspPropagateHandle(char a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // r10
  _KPROCESS *Process; // r11
  __int64 result; // rax

  v3 = *a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  result = 0LL;
  if ( a1 )
    return ObDuplicateObject(Process, v3, Process, a3, 0, 0, 2, 0);
  *a3 = v3;
  *a2 = 0LL;
  return result;
}
