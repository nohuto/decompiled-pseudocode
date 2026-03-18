/*
 * XREFs of NtUserGetAppImeLevel @ 0x1C01F39C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetAppImeLevel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int Prop; // ebx
  __int64 v8; // rdi
  __int64 ThreadWin32Thread; // rax

  EnterSharedCrit(a1, a2, a3);
  v4 = ValidateHwnd(a1);
  Prop = 0;
  v8 = v4;
  if ( v4 )
  {
    if ( (*gpsi & 4) != 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v6 = *(_QWORD *)(v8 + 16);
      if ( *(_QWORD *)(v6 + 424) == *(_QWORD *)(ThreadWin32Thread + 424) )
        Prop = GetProp(v8, (unsigned __int16)atomImeLevel, 1u);
    }
    else
    {
      UserSetLastError(120LL, v5);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return Prop;
}
