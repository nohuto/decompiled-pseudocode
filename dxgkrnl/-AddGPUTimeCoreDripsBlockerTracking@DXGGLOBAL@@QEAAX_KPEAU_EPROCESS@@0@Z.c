/*
 * XREFs of ?AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z @ 0x1C02E1464
 * Callers:
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C033E9E0 (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C017FCE4 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?AddGPUTimeToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02FE918 (-AddGPUTimeToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER.c)
 */

void __fastcall DXGGLOBAL::AddGPUTimeCoreDripsBlockerTracking(
        DXGGLOBAL *this,
        __int64 a2,
        struct _EPROCESS *a3,
        __int64 a4)
{
  int FirstProfilerInterface; // eax
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( a2 )
  {
    if ( *((_DWORD *)this + 530) && *((_BYTE *)this + 304376) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 2128), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
      FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
      DripsBlockerTrackingHelper::AddGPUTimeToProcessEntry((char *)this + 2296, a2, a3, a4, FirstProfilerInterface);
      if ( v9[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
    }
  }
  else
  {
    WdLogSingleEntry1(4LL, 330LL);
  }
}
