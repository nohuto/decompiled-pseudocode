/*
 * XREFs of ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@@Z @ 0x1C0130654
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C013042C (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C013062C (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02C01C4 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 */

void __fastcall DXGGLOBAL::StartCoreDripsBlockerTracking(DXGGLOBAL *this, __int64 a2, char *a3, struct _EPROCESS *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int FirstProfilerInterface; // eax
  __int64 v12; // rdx
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdEvent(this, 0LL);
    *(_QWORD *)(v8 + 24) = 504LL;
LABEL_7:
    WdLogEvent5_WdEvent(v8);
    return;
  }
  if ( !a4 )
  {
    v8 = WdLogNewEntry5_WdEvent(this, a2);
    *(_QWORD *)(v8 + 24) = 510LL;
    goto LABEL_7;
  }
  if ( *((_DWORD *)this + 494) && *((_BYTE *)this + 304216) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGGLOBAL *)((char *)this + 1984), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface(v10, v9);
    DripsBlockerTrackingHelper::AddProcessEntry((char *)this + 2136, a2, a3, a4, FirstProfilerInterface);
    if ( v13[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v12);
  }
}
