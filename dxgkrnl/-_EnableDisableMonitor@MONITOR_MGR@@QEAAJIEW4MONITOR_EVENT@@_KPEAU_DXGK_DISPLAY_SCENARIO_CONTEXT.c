/*
 * XREFs of ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x1C0167CF4
 * Callers:
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0168BB8 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorEnableDisableMonitor @ 0x1C01E18AC (MonitorEnableDisableMonitor.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C2D18 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C0001F08 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0167EEC (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C017E630 (-_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x1C01E48A0 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  unsigned int v7; // edi
  char v8; // r12
  int v11; // eax
  int v12; // ebx
  int v13; // ebx
  char v14; // al
  char v15; // dl
  unsigned __int8 v16; // r15
  __int64 v17; // r8
  char v18; // al
  __int64 v20; // rax
  DXGMONITOR *v21; // rbx
  DXGFASTMUTEX **i; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned int v25; // r14d
  unsigned int *v26; // rbx
  __int64 v27; // r8
  __int64 j; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int *v32; // r15
  __int64 v33; // r12
  __int64 v34; // r14
  int v35; // eax
  __int64 v36; // [rsp+40h] [rbp-30h] BYREF
  DXGFASTMUTEX *v37; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v38; // [rsp+50h] [rbp-20h]
  int v39; // [rsp+54h] [rbp-1Ch]
  unsigned __int64 v40; // [rsp+58h] [rbp-18h]
  __int128 v41; // [rsp+60h] [rbp-10h]

  v7 = 0;
  v8 = a3;
  if ( a7 )
    *a7 = 0;
  if ( a4 != 8 && (unsigned int)(a4 - 1) > 1 )
    return 3221225485LL;
  v11 = *(_BYTE *)(a1 + 17) & 1;
  v12 = 2 * (*(_BYTE *)(a1 + 18) & 1);
  v39 = a4;
  v40 = a5;
  v13 = a3 & 1 | (2 * (*(_BYTE *)(a1 + 16) & 1 | (2 * (v11 | v12))));
  v41 = 0LL;
  if ( (_DWORD)a2 != -1 )
    return MONITOR_MGR::_EnableDisableMonitorInternal(a1, a2, a3);
  if ( a4 != 8 && a4 != 2 )
    WdLogSingleEntry0(1LL);
  if ( a5 >= 2 )
    WdLogSingleEntry0(1LL);
  if ( a4 == 8 )
  {
    *(_BYTE *)(a1 + 17) = v8 == 0;
    v14 = *(_BYTE *)(a1 + 18);
  }
  else
  {
    v14 = v8 == 0;
    *(_BYTE *)(a1 + 18) = v8 == 0;
  }
  v15 = *(_BYTE *)(a1 + 17);
  if ( v15 || (v16 = 1, v14) )
    v16 = 0;
  v38 = v13 & 0xFFFFFF8F | (16 * (v16 | (2 * (v15 & 1 | (2 * (v14 & 1))))));
  MONITOR_MGR::_LogMonitorPresentEvent(a1, 14LL, 0xFFFFFFFFLL);
  v18 = 0;
  if ( *(_BYTE *)(a1 + 18) && *(_BYTE *)(a1 + 17) )
  {
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v36, (struct DXGFASTMUTEX *)(a1 + 80));
    v20 = *(_QWORD *)(a1 + 40);
    if ( v20 == a1 + 40 )
    {
      v21 = 0LL;
    }
    else
    {
      v21 = (DXGMONITOR *)(v20 - 152);
      if ( !v20 )
        v21 = 0LL;
    }
    for ( i = (DXGFASTMUTEX **)&v36; ; i = &v37 )
    {
      MUTEX_LOCK::~MUTEX_LOCK(i);
      if ( !v21 )
      {
        v18 = 0;
        goto LABEL_13;
      }
      RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v36, (__int64)v21, 0);
      if ( *(_DWORD *)(*((_QWORD *)v21 + 30) + 16LL) )
      {
        if ( !DXGMONITOR::_IsMonitorDisabled(v21) )
          break;
      }
      if ( v36 )
      {
        ExReleaseResourceLite((PERESOURCE)(v36 + 24));
        KeLeaveCriticalRegion();
      }
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v37, (struct DXGFASTMUTEX *)(a1 + 80));
      v23 = *((_QWORD *)v21 + 19);
      if ( v23 == a1 + 40 )
      {
        v21 = 0LL;
      }
      else
      {
        v21 = (DXGMONITOR *)(v23 - 152);
        if ( !v23 )
          v21 = 0LL;
      }
    }
    v18 = 1;
    if ( v36 )
    {
      ExReleaseResourceLite((PERESOURCE)(v36 + 24));
      KeLeaveCriticalRegion();
      v18 = 1;
    }
  }
LABEL_13:
  if ( v16 != *(_BYTE *)(a1 + 16) || v18 )
  {
    LOBYTE(v17) = v16;
    v7 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, 0xFFFFFFFFLL, v17);
    *(_BYTE *)(a1 + 16) = v16;
    return v7;
  }
  if ( !v8 || v16 || !*(_BYTE *)(a1 + 17) )
    return v7;
  v24 = 4LL * *(unsigned int *)(a1 + 32);
  v25 = 0;
  if ( !is_mul_ok(*(unsigned int *)(a1 + 32), 4uLL) )
    v24 = -1LL;
  v36 = operator new[](v24, 0x4D677844u, 256LL);
  v26 = (unsigned int *)v36;
  if ( v36 )
  {
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v37, (struct DXGFASTMUTEX *)(a1 + 80));
    v27 = a1 + 40;
    for ( j = *(_QWORD *)(a1 + 40); j != v27; j = *(_QWORD *)(v29 + 152) )
    {
      v29 = j - 152;
      if ( !j )
        v29 = 0LL;
      if ( !v29 )
        break;
      if ( *(_DWORD *)(*(_QWORD *)(v29 + 240) + 16LL) && DXGMONITOR::_IsMonitorDisabled((DXGMONITOR *)v29) )
      {
        v30 = v25++;
        v26[v30] = *(_DWORD *)(v29 + 180);
      }
    }
    MUTEX_LOCK::~MUTEX_LOCK(&v37);
    if ( v25 )
    {
      v32 = v26;
      v33 = v25;
      do
      {
        v34 = *v32;
        if ( (_DWORD)v34 == -1 )
          WdLogSingleEntry0(1LL);
        LOBYTE(v31) = 1;
        v35 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, (unsigned int)v34, v31);
        if ( v35 < 0 )
          WdLogSingleEntry3(2LL, v34, a1, v35);
        ++v32;
        --v33;
      }
      while ( v33 );
      v26 = (unsigned int *)v36;
    }
    operator delete(v26);
    return v7;
  }
  WdLogSingleEntry0(2LL);
  return 3221225495LL;
}
