/*
 * XREFs of ?CancelForegroundActivate@@YAXXZ @ 0x1C0017A88
 * Callers:
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00388C0 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall CancelForegroundActivate(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // di
  __int64 i; // rbx
  int v6; // edx
  int v7; // r8d

  if ( (gdwPUDFlags & 0x8000000) != 0 )
  {
    v4 = 1;
    for ( i = gppiStarting; i; i = *(_QWORD *)(i + 360) )
    {
      if ( !PsGetProcessDebugPort(*(_QWORD *)i) )
      {
        *(_DWORD *)(i + 12) &= ~0x100u;
        LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v6,
            v7,
            (_DWORD)gFullLog,
            4,
            2,
            23,
            (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
            *(_DWORD *)(i + 56));
        }
      }
    }
    gdwPUDFlags &= ~0x8000000u;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v4 = 0;
    }
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        a4,
        4,
        2,
        24,
        (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids);
  }
}
