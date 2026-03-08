/*
 * XREFs of ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@@Z @ 0x1C017FB6C
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C017F7AC (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C017FCE4 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02FEAF4 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 */

void __fastcall DXGGLOBAL::StartCoreDripsBlockerTracking(DXGGLOBAL *this, __int64 a2, char *a3, struct _EPROCESS *a4)
{
  int FirstProfilerInterface; // eax
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( a2 )
  {
    if ( a4 )
    {
      if ( *((_DWORD *)this + 530) && *((_BYTE *)this + 304376) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 2128), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
        FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
        DripsBlockerTrackingHelper::AddProcessEntry((char *)this + 2296, a2, a3, a4, FirstProfilerInterface);
        if ( v9[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, 510LL);
    }
  }
  else
  {
    WdLogSingleEntry1(4LL, 504LL);
  }
}
