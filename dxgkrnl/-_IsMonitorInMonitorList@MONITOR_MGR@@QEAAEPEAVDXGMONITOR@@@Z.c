/*
 * XREFs of ?_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z @ 0x1C03C3BE8
 * Callers:
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0225178 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C03C323C (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 * Callees:
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 */

char __fastcall MONITOR_MGR::_IsMonitorInMonitorList(MONITOR_MGR *this, struct DXGMONITOR *a2)
{
  struct DXGMONITOR **v4; // rcx
  char v5; // bl
  struct DXGMONITOR *v6; // rax
  DXGFASTMUTEX *v8; // [rsp+30h] [rbp+8h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v8, (MONITOR_MGR *)((char *)this + 80));
  v4 = (struct DXGMONITOR **)((char *)this + 40);
  v5 = 0;
  if ( a2 )
  {
    v6 = *v4;
    if ( *v4 != (struct DXGMONITOR *)v4 )
    {
      while ( v6 != (struct DXGMONITOR *)((char *)a2 + 152) )
      {
        if ( v4 == (struct DXGMONITOR **)v6 )
          goto LABEL_8;
        v6 = *(struct DXGMONITOR **)v6;
      }
      v5 = 1;
    }
  }
LABEL_8:
  MUTEX_LOCK::~MUTEX_LOCK(&v8);
  return v5;
}
