/*
 * XREFs of ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C0008CC8
 * Callers:
 *     UserJobCallout @ 0x1C003C000 (UserJobCallout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

__int64 __fastcall JobCalloutTerminate(struct tagW32JOB *a1)
{
  bool v2; // dl
  void *v3; // rcx
  struct tagW32JOB *v4; // rdx
  struct tagW32JOB *v5; // rcx

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      24,
      4,
      13,
      24,
      (__int64)&WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids,
      (char)a1);
  v3 = (void *)*((_QWORD *)a1 + 7);
  if ( v3 )
  {
    Win32FreePool(v3);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_DWORD *)a1 + 12) = 0;
    *((_DWORD *)a1 + 13) = 0;
  }
  v4 = (struct tagW32JOB *)gpJobsList;
  v5 = (struct tagW32JOB *)gpJobsList;
  if ( gpJobsList )
  {
    while ( v5 != a1 )
    {
      v4 = v5;
      v5 = *(struct tagW32JOB **)v5;
      if ( !v5 )
        goto LABEL_14;
    }
    *(_QWORD *)v4 = *(_QWORD *)a1;
  }
LABEL_14:
  RtlDestroyAtomTable(*((PRTL_ATOM_TABLE *)a1 + 2));
  Win32FreePool(a1);
  return 1LL;
}
