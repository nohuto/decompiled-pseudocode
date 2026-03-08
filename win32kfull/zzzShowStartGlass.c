/*
 * XREFs of zzzShowStartGlass @ 0x1C01B48F8
 * Callers:
 *     NtUserShowStartGlass @ 0x1C01DFD80 (NtUserShowStartGlass.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     zzzCalcStartCursorHide @ 0x1C00612C0 (zzzCalcStartCursorHide.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowStartGlass(__int64 a1)
{
  unsigned int v1; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // rbx
  int v7; // ecx
  char v8; // dl

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v3 = -*(_QWORD *)CurrentProcessWin32Process;
    v4 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v6 = v4 & CurrentProcessWin32Process;
  }
  v7 = *(_DWORD *)(v6 + 12);
  if ( (v7 & 0x400) != 0 )
  {
    gdwPUDFlags |= 0x8000000u;
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
        v5,
        4,
        2,
        15,
        (__int64)&WPP_b2df51b585c137d44ad42ff4c9684e7b_Traceguids);
    }
    v7 = *(_DWORD *)(v6 + 12) | 0x100;
    *(_DWORD *)(v6 + 12) = v7;
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control,
        4u,
        2u,
        0x10u,
        (__int64)&WPP_b2df51b585c137d44ad42ff4c9684e7b_Traceguids,
        v6);
      v7 = *(_DWORD *)(v6 + 12);
    }
  }
  *(_DWORD *)(v6 + 12) = v7 | 0x400;
  zzzCalcStartCursorHide(v6, v1);
  return 1LL;
}
