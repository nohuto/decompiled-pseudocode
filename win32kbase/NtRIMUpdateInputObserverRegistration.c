/*
 * XREFs of NtRIMUpdateInputObserverRegistration @ 0x1C01A3010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimObsCheckForObservationPermissions @ 0x1C01DB780 (rimObsCheckForObservationPermissions.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C01DD920 (rimObsUpdateInputObserverRegistration.c)
 */

__int64 __fastcall NtRIMUpdateInputObserverRegistration(HANDLE Handle, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  char v5; // di
  unsigned int updated; // ebx

  v3 = a2;
  v5 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      161,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  if ( v3 )
  {
    if ( (unsigned int)rimObsCheckForObservationPermissions(v3, a2, a3) )
      updated = rimObsUpdateInputObserverRegistration(Handle, 1);
    else
      updated = -1073741790;
  }
  else
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
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
        23,
        162,
        (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
        0);
    }
    updated = -1073741811;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = v5;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      163,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      updated);
  }
  return updated;
}
