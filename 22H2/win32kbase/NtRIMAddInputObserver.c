/*
 * XREFs of NtRIMAddInputObserver @ 0x1C0152EE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     rimObsAddInputObserver @ 0x1C017D7DC (rimObsAddInputObserver.c)
 *     rimObsCheckForObservationPermissions @ 0x1C017DDB4 (rimObsCheckForObservationPermissions.c)
 */

__int64 __fastcall NtRIMAddInputObserver(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7, __int64 a8)
{
  int v10; // ebp
  unsigned int v12; // ebx

  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      23,
      149,
      (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  if ( a7 )
  {
    if ( (unsigned int)rimObsCheckForObservationPermissions(a7) )
      v12 = rimObsAddInputObserver(a1, v10, a3, 1, a4, a5, a6, a7, a8);
    else
      v12 = -1073741790;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        23,
        150,
        (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
        0);
    }
    v12 = -1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      23,
      151,
      (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
      v12);
  }
  return v12;
}
