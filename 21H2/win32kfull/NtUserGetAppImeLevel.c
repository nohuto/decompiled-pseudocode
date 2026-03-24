/*
 * XREFs of NtUserGetAppImeLevel @ 0x1C01F90E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetAppImeLevel(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int Prop; // ebx
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  Prop = 0;
  v7 = v2;
  if ( v2 )
  {
    if ( (*gpsi & 4) != 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v4 = *(_QWORD *)(v7 + 16);
      if ( *(_QWORD *)(v4 + 424) == *(_QWORD *)(ThreadWin32Thread + 424) )
        Prop = GetProp(v7, (unsigned __int16)atomImeLevel, 1LL);
    }
    else
    {
      UserSetLastError(120LL, v3, v5);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return Prop;
}
