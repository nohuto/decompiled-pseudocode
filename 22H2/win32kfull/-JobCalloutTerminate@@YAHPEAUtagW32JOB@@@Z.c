/*
 * XREFs of ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C01142F0
 * Callers:
 *     UserJobCallout @ 0x1C0113CA0 (UserJobCallout.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C004F390 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall JobCalloutTerminate(struct tagW32JOB *a1)
{
  void *v2; // rcx
  struct tagW32JOB *v3; // rdx
  struct tagW32JOB *v4; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q((_DWORD)a1, 4, 13, 24, (__int64)&WPP_8a8a5c1bf24e3db582f892aeb1cd1399_Traceguids, (char)a1);
  v2 = (void *)*((_QWORD *)a1 + 7);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_DWORD *)a1 + 12) = 0;
    *((_DWORD *)a1 + 13) = 0;
  }
  v3 = (struct tagW32JOB *)gpJobsList;
  v4 = (struct tagW32JOB *)gpJobsList;
  if ( gpJobsList )
  {
    while ( v4 != a1 )
    {
      v3 = v4;
      v4 = *(struct tagW32JOB **)v4;
      if ( !v4 )
        goto LABEL_8;
    }
    *(_QWORD *)v3 = *(_QWORD *)a1;
  }
LABEL_8:
  RtlDestroyAtomTable(*((PRTL_ATOM_TABLE *)a1 + 2));
  Win32FreePool(a1);
  return 1LL;
}
