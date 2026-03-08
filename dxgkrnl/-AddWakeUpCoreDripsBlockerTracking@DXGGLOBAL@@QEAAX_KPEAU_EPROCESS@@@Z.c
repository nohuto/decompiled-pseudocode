/*
 * XREFs of ?AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z @ 0x1C01E2D3C
 * Callers:
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C01E2C60 (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02E1970 (-ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C017FCE4 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02FEC54 (-AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_T.c)
 */

void __fastcall DXGGLOBAL::AddWakeUpCoreDripsBlockerTracking(DXGGLOBAL *this, __int64 a2, struct _EPROCESS *a3)
{
  unsigned int FirstProfilerInterface; // eax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    if ( *((_DWORD *)this + 530) && *((_BYTE *)this + 304376) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGGLOBAL *)((char *)this + 2128), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
      FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
      DripsBlockerTrackingHelper::AddWakeUpToProcessEntry((char *)this + 2296, a2, a3, FirstProfilerInterface);
      if ( v7[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
    }
  }
  else
  {
    WdLogSingleEntry1(4LL, 427LL);
  }
}
