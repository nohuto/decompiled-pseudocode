/*
 * XREFs of ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C00D4F70
 * Callers:
 *     UserJobCallout @ 0x1C003C000 (UserJobCallout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00D935C (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00D948C (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall UpdateJob(struct tagW32JOB *a1, __int64 a2, __int64 a3)
{
  struct tagPROCESSINFO *i; // rbx

  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      17LL,
      4u,
      0xDu,
      0x11u,
      (__int64)&WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids,
      a1);
  for ( i = (struct tagPROCESSINFO *)gppiList; i; i = (struct tagPROCESSINFO *)*((_QWORD *)i + 46) )
  {
    if ( PsGetProcessJob(*(_QWORD *)i, a2, a3) == *((_QWORD *)a1 + 1) )
    {
      if ( *((_QWORD *)i + 95) )
        SetProcessFlags(a1, i);
      else
        JobCalloutAddProcess(a1, i);
    }
  }
}
