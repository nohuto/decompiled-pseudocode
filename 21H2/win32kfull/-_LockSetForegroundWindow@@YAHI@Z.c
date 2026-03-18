/*
 * XREFs of ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01CE668
 * Callers:
 *     NtUserLockSetForegroundWindow @ 0x1C01F8D80 (NtUserLockSetForegroundWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     CanForceForeground @ 0x1C007B000 (CanForceForeground.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _LockSetForegroundWindow(__int64 a1)
{
  int v1; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v3; // rdx
  int v4; // r8d
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // r8d

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
    goto LABEL_25;
  v5 = v1 - 1;
  if ( !v5 )
  {
    if ( CanForceForeground(CurrentProcessWin32Process) && !gppiLockSFW )
    {
      MEMORY[0] = CurrentProcessWin32Process;
      LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v3,
          v7,
          47,
          4,
          2,
          47,
          (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
          CurrentProcessWin32Process);
      }
      return 1LL;
    }
LABEL_25:
    v6 = 5LL;
    goto LABEL_26;
  }
  if ( v5 == 1 )
  {
    if ( CurrentProcessWin32Process == gppiLockSFW )
    {
      gppiLockSFW = 0LL;
      LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v3,
          v4,
          48,
          4,
          2,
          48,
          (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
      }
      return 1LL;
    }
    goto LABEL_25;
  }
  v6 = 87LL;
LABEL_26:
  UserSetLastError(v6, v3);
  return 0LL;
}
