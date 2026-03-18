/*
 * XREFs of NtUserDestroyWindow @ 0x1C0063880
 * Callers:
 *     <none>
 * Callees:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 */

__int64 __fastcall NtUserDestroyWindow(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  EnterCrit(0LL, 0LL);
  v2 = (_QWORD *)ValidateHwnd(a1);
  v4 = 0;
  if ( v2 )
    v4 = xxxDestroyWindow(v2);
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
