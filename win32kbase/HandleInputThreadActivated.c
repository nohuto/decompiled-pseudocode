/*
 * XREFs of HandleInputThreadActivated @ 0x1C002EFA0
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C00942B4 (UserActivateMITInputProcessing.c)
 * Callees:
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C002EFEC (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 */

__int64 __fastcall HandleInputThreadActivated(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi

  result = SGDGetUserSessionState(a1, a2, a3, a4);
  v5 = result + 3280;
  v6 = result + 3424;
  while ( v5 != v6 )
  {
    result = CBaseInput::HandleInputThreadStateChange(*(_QWORD *)(v5 + 24), 0LL);
    v5 += 48LL;
  }
  return result;
}
