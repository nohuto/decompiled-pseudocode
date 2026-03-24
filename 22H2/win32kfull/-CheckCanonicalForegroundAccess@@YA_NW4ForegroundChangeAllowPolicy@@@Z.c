/*
 * XREFs of ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C003D134
 * Callers:
 *     NtUserCanBrokerForceForeground @ 0x1C0006C40 (NtUserCanBrokerForceForeground.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C003CA90 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     NtUserSetWindowArrangement @ 0x1C0202730 (NtUserSetWindowArrangement.c)
 * Callees:
 *     CanForceForeground @ 0x1C003C490 (CanForceForeground.c)
 *     IsForegroundLocked @ 0x1C003D1C4 (IsForegroundLocked.c)
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

bool __fastcall CheckCanonicalForegroundAccess(char a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  int v8; // edx

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  LOBYTE(v7) = 0;
  if ( (unsigned int)IsForegroundLocked(v4, v3, v5, ThreadWin32Thread) && *(_QWORD *)(v6 + 424) != gppiInputProvider )
    return 0;
  if ( (*(_DWORD *)(v6 + 488) & 0x2C) != 0 || CanForceForeground(*(_QWORD *)(v6 + 424)) )
    return 1;
  if ( gptiForeground )
  {
    if ( *(_DWORD *)(gptiForeground + 632LL) <= 0x400u )
      v7 = *(_DWORD *)(gptiForeground + 648LL);
    if ( (v7 & 0x40) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_(gptiForeground, v8, 2, 53, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids);
      }
      return 1;
    }
  }
  return (a1 & 4) != 0;
}
