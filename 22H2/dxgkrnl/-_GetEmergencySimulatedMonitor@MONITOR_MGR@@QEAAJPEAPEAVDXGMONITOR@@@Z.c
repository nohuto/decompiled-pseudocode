/*
 * XREFs of ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C0185500
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0185280 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F27C8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C005DF18 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_GetEmergencySimulatedMonitor(struct _FAST_MUTEX *this, struct DXGMONITOR **a2)
{
  struct _FAST_MUTEX *v4; // rbx
  __int64 v5; // rdx
  ULONG *p_Contention; // rcx
  char *i; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  char *v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rax

  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v9);
  }
  v4 = this + 3;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  for ( i = *(char **)&this[2].Contention; ; i = (char *)*((_QWORD *)v11 + 2) )
  {
    if ( i == (char *)p_Contention )
      goto LABEL_15;
    v11 = i - 16;
    if ( !i )
      v11 = 0LL;
    if ( !v11 )
    {
LABEL_15:
      v12 = -1073741275;
      v11 = 0LL;
      goto LABEL_6;
    }
    if ( *((_DWORD *)v11 + 108) == 5 )
      break;
  }
  if ( DXGMONITOR::_GetAttachedPhysicalMonitor((DXGMONITOR *)v11, v5) )
  {
    v13 = WdLogNewEntry5_WdAssertion(p_Contention, v5);
    WdLogEvent5_WdAssertion(v13);
  }
  v12 = 0;
LABEL_6:
  *a2 = (struct DXGMONITOR *)v11;
  if ( !v4 )
  {
    v14 = WdLogNewEntry5_WdAssertion(p_Contention, v5);
    WdLogEvent5_WdAssertion(v14);
  }
  KeReleaseGuardedMutex(v4);
  return v12;
}
