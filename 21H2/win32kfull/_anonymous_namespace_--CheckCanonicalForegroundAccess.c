/*
 * XREFs of _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1C00A66BC
 * Callers:
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1C00056A0 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C00A94FC (_anonymous_namespace_--CanSetForegroundWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     CanForceForeground @ 0x1C007B000 (CanForceForeground.c)
 *     IsForegroundLocked @ 0x1C00A6740 (IsForegroundLocked.c)
 */

char __fastcall anonymous_namespace_::CheckCanonicalForegroundAccess(char a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edx
  int v8; // r8d

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !(unsigned int)IsForegroundLocked(v4, v3, v5, ThreadWin32Thread) || *(_QWORD *)(v6 + 424) == gppiInputProvider )
  {
    if ( (*(_DWORD *)(v6 + 488) & 0x2C) != 0 || CanForceForeground(*(_QWORD *)(v6 + 424)) )
      return 1;
    if ( gptiForeground
      && *(_DWORD *)(gptiForeground + 632LL) <= 0x400u
      && (*(_DWORD *)(gptiForeground + 648LL) & 0x40) != 0 )
    {
      LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          v8,
          84,
          4,
          2,
          84,
          (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
      }
      return 1;
    }
    if ( (a1 & 4) != 0 )
      return 1;
  }
  return 0;
}
