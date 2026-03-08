/*
 * XREFs of ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01FBE38
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FAC68 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FB6A0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CO.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C343C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C3A14 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_InsertMonitorToList(MONITOR_MGR *this, struct DXGMONITOR *a2)
{
  unsigned int v2; // ebx
  char *v5; // rcx
  MONITOR_MGR *v6; // rdx
  char **v7; // rdx
  char *v8; // rax
  char *v10; // rax
  __int64 v11; // rdx
  char *v12; // rdx
  DXGFASTMUTEX *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v13, (MONITOR_MGR *)((char *)this + 80));
  v5 = (char *)this + 40;
  v6 = (MONITOR_MGR *)*((_QWORD *)this + 5);
  if ( v6 == (MONITOR_MGR *)((char *)this + 40) )
    goto LABEL_4;
  v10 = (char *)v6 - 152;
  if ( !v6 )
    v10 = 0LL;
  if ( !v10 )
  {
LABEL_4:
    v7 = (char **)*((_QWORD *)this + 6);
    v8 = (char *)a2 + 152;
    if ( *v7 != v5 )
      __fastfail(3u);
    *(_QWORD *)v8 = v5;
    *((_QWORD *)a2 + 20) = v7;
    *v7 = v8;
    *((_QWORD *)this + 6) = v8;
    ++*((_DWORD *)this + 8);
  }
  else
  {
    while ( 1 )
    {
      v11 = *((unsigned int *)v10 + 45);
      if ( *((_DWORD *)a2 + 45) == (_DWORD)v11 )
        break;
      v12 = (char *)*((_QWORD *)v10 + 19);
      if ( v12 != v5 )
      {
        v10 = v12 - 152;
        if ( !v12 )
          v10 = 0LL;
        if ( v10 )
          continue;
      }
      goto LABEL_4;
    }
    WdLogSingleEntry1(2LL, v11);
    v2 = -1071774952;
  }
  MUTEX_LOCK::~MUTEX_LOCK(&v13);
  return v2;
}
