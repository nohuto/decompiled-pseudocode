/*
 * XREFs of ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0211CAC
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0191440 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C020C968 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     DpiSetSchedulerCallbackState @ 0x1C00247C0 (DpiSetSchedulerCallbackState.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C003AC6C (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C005DE10 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C015F5C4 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z @ 0x1C026B8F4 (-RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Destroy(ADAPTER_DISPLAY **this, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int i; // esi
  __int64 v6; // rdi
  ADAPTER_DISPLAY *v7; // rax
  void *v8; // rcx
  unsigned int j; // edi
  __int64 v10; // rsi
  ReferenceCounted *v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rdi
  ADAPTER_DISPLAY *v14; // rax
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rdx
  unsigned int k; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  ADAPTER_DISPLAY *v22; // rdi
  MONITOR_MGR *v23; // rcx
  ADAPTER_DISPLAY *v24; // rax
  __int64 v25; // rcx
  DXGDODPRESENT *v26; // rcx
  ADAPTER_DISPLAY *v27; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v29; // rdx
  _BYTE v30[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( this[38] != (ADAPTER_DISPLAY *)(this + 38) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 4957LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = *((_DWORD *)this + 20);
  for ( i = 0; i < v4; v4 = *((_DWORD *)this + 20) )
  {
    v6 = 3968LL * i;
    v7 = this[14];
    v8 = *(void **)((char *)v7 + v6 + 1080);
    if ( v8 )
    {
      operator delete[](v8);
      *(_QWORD *)((char *)this[14] + v6 + 1080) = 0LL;
      v7 = this[14];
    }
    *(_DWORD *)((char *)v7 + v6 + 1088) = 0;
    ++i;
    *((_BYTE *)this[14] + v6 + 1092) = 0;
    *(_DWORD *)((char *)this[14] + v6 + 1104) = -1;
    *(_DWORD *)((char *)this[14] + v6 + 1108) = -1;
  }
  for ( j = 0; j < v4; ++j )
  {
    v10 = 3968LL * j;
    v11 = *(ReferenceCounted **)((char *)this[14] + v10 + 904);
    if ( v11 )
    {
      ReferenceCounted::Release(v11, a2);
      *(_QWORD *)((char *)this[14] + v10 + 904) = 0LL;
    }
    v4 = *((_DWORD *)this + 20);
  }
  v12 = 0;
  if ( v4 )
  {
    do
    {
      v13 = 3968LL * v12;
      v14 = this[14];
      v15 = *(void **)((char *)v14 + v13 + 760);
      if ( v15 )
      {
        operator delete[](v15);
        *(_QWORD *)((char *)this[14] + v13 + 760) = 0LL;
        *(_DWORD *)((char *)this[14] + v13 + 776) = 0;
        v14 = this[14];
      }
      v16 = *(void **)((char *)v14 + v13 + 808);
      if ( v16 )
      {
        operator delete[](v16);
        *(_QWORD *)((char *)this[14] + v13 + 808) = 0LL;
        v14 = this[14];
      }
      v17 = *(void **)((char *)v14 + v13 + 848);
      if ( v17 )
      {
        operator delete[](v17);
        *(_QWORD *)((char *)this[14] + v13 + 848) = 0LL;
      }
      ++v12;
    }
    while ( v12 < *((_DWORD *)this + 20) );
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (struct DXGFASTMUTEX *const)(this + 65), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  for ( k = 0; k < *((_DWORD *)this + 20); ++k )
    DISPLAY_SOURCE::ClearAllDisplayState((ADAPTER_DISPLAY *)((char *)this[14] + 3968 * k));
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30, v18);
  v22 = this[11];
  if ( v22 )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v22 + 5));
    (**(void (__fastcall ***)(ADAPTER_DISPLAY *, __int64))v22)(v22, 1LL);
    this[11] = 0LL;
  }
  if ( this[12] )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20) + 24) = this;
    v23 = this[12];
    if ( v23 )
      MONITOR_MGR::`scalar deleting destructor'(v23);
    this[12] = 0LL;
  }
  v24 = this[2];
  v25 = *((_QWORD *)v24 + 27);
  if ( v25 && !*((_QWORD *)v24 + 338) )
  {
    DpiSetSchedulerCallbackState(v25, 0);
    KeFlushQueuedDpcs();
  }
  v26 = this[48];
  if ( v26 )
  {
    DXGDODPRESENT::`scalar deleting destructor'(v26);
    this[48] = 0LL;
  }
  v27 = this[2];
  Global = DXGGLOBAL::GetGlobal((__int64)v26, v20);
  DXGADAPTERSOURCEHASH::RemoveAdapter(
    (struct DXGGLOBAL *)((char *)Global + 1272),
    (const struct _LUID *)((char *)v27 + 316));
  if ( v30[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30, v29);
}
