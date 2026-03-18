/*
 * XREFs of NtRIMUpdateInputObserverRegistration @ 0x1C0175770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     rimObsCheckForObservationPermissions @ 0x1C01AD668 (rimObsCheckForObservationPermissions.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C01AF70C (rimObsUpdateInputObserverRegistration.c)
 */

__int64 __fastcall NtRIMUpdateInputObserverRegistration(HANDLE Handle, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int updated; // ebx
  char v7; // dl
  __int64 v9; // [rsp+40h] [rbp-38h]

  v4 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      1,
      161,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  if ( v4 )
  {
    if ( (unsigned int)rimObsCheckForObservationPermissions(v4, a2, a3, a4) )
      updated = rimObsUpdateInputObserverRegistration(Handle, 1);
    else
      updated = -1073741790;
  }
  else
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        1,
        162,
        (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
        0);
    }
    updated = -1073741811;
  }
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = updated;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      1u,
      0xA3u,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v9);
  }
  return updated;
}
