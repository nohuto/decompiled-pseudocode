/*
 * XREFs of ?AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z @ 0x1C02BF4E0
 * Callers:
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02847E0 (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C013062C (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?AddGPUTimeToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02BFFDC (-AddGPUTimeToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER.c)
 */

void __fastcall DXGGLOBAL::AddGPUTimeCoreDripsBlockerTracking(
        DXGGLOBAL *this,
        __int64 a2,
        struct _EPROCESS *a3,
        __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int FirstProfilerInterface; // eax
  __int64 v12; // rdx
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( a2 )
  {
    if ( *((_DWORD *)this + 494) && *((_BYTE *)this + 304216) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGGLOBAL *)((char *)this + 1984), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
      FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface(v10, v9);
      DripsBlockerTrackingHelper::AddGPUTimeToProcessEntry((char *)this + 2136, a2, a3, a4, FirstProfilerInterface);
      if ( v13[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v12);
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdEvent(this, 0LL);
    *(_QWORD *)(v8 + 24) = 330LL;
    WdLogEvent5_WdEvent(v8);
  }
}
