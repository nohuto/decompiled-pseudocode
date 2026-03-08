/*
 * XREFs of ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C02B6F10
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C01EC350 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02B1790 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     DpiSetSchedulerCallbackState @ 0x1C0024230 (DpiSetSchedulerCallbackState.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C0040A38 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ??_EMONITOR_MGR@@UEAAPEAXI@Z @ 0x1C006AEB0 (--_EMONITOR_MGR@@UEAAPEAXI@Z.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01D779C (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z @ 0x1C030FF84 (-RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Destroy(ADAPTER_DISPLAY **this)
{
  unsigned int v2; // eax
  unsigned int i; // esi
  __int64 v4; // rdi
  void *v5; // rcx
  unsigned int v6; // ebp
  __int64 v7; // rsi
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  unsigned int j; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  ADAPTER_DISPLAY *v16; // rdi
  MONITOR_MGR *v17; // rcx
  ADAPTER_DISPLAY *v18; // rax
  __int64 v19; // rcx
  DXGDODPRESENT *v20; // rcx
  struct DXGGLOBAL *Global; // rax
  _BYTE v22[16]; // [rsp+50h] [rbp-18h] BYREF

  if ( this[44] != (ADAPTER_DISPLAY *)(this + 44) )
  {
    WdLogSingleEntry1(1LL, 5239LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsListEmpty(&m_OpmHandleMappingList)",
      5239LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = *((_DWORD *)this + 24);
  for ( i = 0; i < v2; v2 = *((_DWORD *)this + 24) )
  {
    v4 = 4000LL * i;
    v5 = *(void **)((char *)this[16] + v4 + 1104);
    if ( v5 )
    {
      operator delete(v5);
      *(_QWORD *)((char *)this[16] + v4 + 1104) = 0LL;
    }
    ++i;
    *(_DWORD *)((char *)this[16] + v4 + 1112) = 0;
    *((_BYTE *)this[16] + v4 + 1116) = 0;
    *(_DWORD *)((char *)this[16] + v4 + 1120) = -1;
    *(_DWORD *)((char *)this[16] + v4 + 1132) = -1;
    *(_DWORD *)((char *)this[16] + v4 + 1136) = -1;
  }
  v6 = 0;
  if ( v2 )
  {
    do
    {
      v7 = 4000LL * v6;
      v8 = *(void **)((char *)this[16] + v7 + 800);
      if ( v8 )
      {
        operator delete(v8);
        *(_QWORD *)((char *)this[16] + v7 + 800) = 0LL;
        *(_DWORD *)((char *)this[16] + v7 + 816) = 0;
      }
      v9 = *(void **)((char *)this[16] + v7 + 848);
      if ( v9 )
      {
        operator delete(v9);
        *(_QWORD *)((char *)this[16] + v7 + 848) = 0LL;
      }
      v10 = *(void **)((char *)this[16] + v7 + 888);
      if ( v10 )
      {
        operator delete(v10);
        *(_QWORD *)((char *)this[16] + v7 + 888) = 0LL;
      }
      ++v6;
    }
    while ( v6 < *((_DWORD *)this + 24) );
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)(this + 76), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  for ( j = 0; j < *((_DWORD *)this + 24); ++j )
    DISPLAY_SOURCE::ClearAllDisplayState((ADAPTER_DISPLAY *)((char *)this[16] + 4000 * j));
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  v16 = this[13];
  if ( v16 )
  {
    DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)v16 + 40));
    (**(void (__fastcall ***)(ADAPTER_DISPLAY *, __int64))v16)(v16, 1LL);
    this[13] = 0LL;
  }
  if ( this[14] )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = this;
    v17 = this[14];
    if ( v17 )
      MONITOR_MGR::`vector deleting destructor'(v17, 1);
    this[14] = 0LL;
  }
  v18 = this[2];
  v19 = *((_QWORD *)v18 + 27);
  if ( v19 && !*((_QWORD *)v18 + 366) )
  {
    DpiSetSchedulerCallbackState(v19, 0);
    KeFlushQueuedDpcs();
  }
  v20 = this[56];
  if ( v20 )
  {
    DXGDODPRESENT::`scalar deleting destructor'(v20);
    this[56] = 0LL;
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGADAPTERSOURCEHASH::RemoveAdapter(
    (struct DXGGLOBAL *)((char *)Global + 1384),
    (const struct _LUID *)((char *)this[2] + 404));
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
}
