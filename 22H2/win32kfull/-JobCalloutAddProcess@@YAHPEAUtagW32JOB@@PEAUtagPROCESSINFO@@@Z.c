/*
 * XREFs of ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00A2DDC
 * Callers:
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C009E500 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     UserJobCallout @ 0x1C00E2D70 (UserJobCallout.c)
 * Callees:
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00A2E0C (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00E4DF4 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

__int64 __fastcall JobCalloutAddProcess(struct tagW32JOB *a1, struct tagPROCESSINFO *a2)
{
  bool v3; // al
  _UNKNOWN **v4; // r8
  void *v5; // rdx
  char v6; // [rsp+48h] [rbp-10h]

  if ( *(_QWORD *)a2 )
  {
    if ( (*((_DWORD *)a2 + 3) & 0x8000) != 0 )
      return JobCalloutAddProcessWorker(a1, a2);
    v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v4 = &WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = (char)a2;
      v5 = &WPP_090d4d5f29eb3fcb74eab38ddd0f4c5f_Traceguids;
      LOBYTE(v5) = v3;
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v5,
        (_DWORD)v4,
        (_DWORD)gFullLog,
        4,
        8,
        23,
        (__int64)&WPP_090d4d5f29eb3fcb74eab38ddd0f4c5f_Traceguids,
        (char)a1,
        v6);
    }
  }
  return 0LL;
}
