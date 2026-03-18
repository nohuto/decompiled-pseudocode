/*
 * XREFs of MasterInputThreadPrepareForRitTakeover @ 0x1C00FD2F0
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C00FCE60 (EditionDeactivateMitInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C007BAF4 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ResetPointerDevices @ 0x1C00FD4D4 (ResetPointerDevices.c)
 */

__int64 MasterInputThreadPrepareForRitTakeover()
{
  bool v0; // bl
  bool v1; // di
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // al
  const char *v6; // rcx
  int v7; // edx

  v0 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v1 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit )
    {
      v6 = "Rit";
    }
    else
    {
      v5 = IsInputThread(gptiRit, v2, v3, v4);
      v6 = "Mit";
      if ( !v5 )
        v6 = (const char *)&unk_1C02F2D0B;
    }
    v7 = 10;
    LOBYTE(v3) = v1;
    LOBYTE(v7) = v0;
    WPP_RECORDER_AND_TRACE_SF_s(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      16,
      10,
      (__int64)&WPP_ed3cca2335013cd4d07b347013ccd9ee_Traceguids,
      (__int64)v6);
  }
  ResetPointerDevices();
  gbPendRecreateTouchInjectionDevices = 1;
  CleanupSensorExplicitly(2LL);
  return EtwTraceDitDisEngaged();
}
