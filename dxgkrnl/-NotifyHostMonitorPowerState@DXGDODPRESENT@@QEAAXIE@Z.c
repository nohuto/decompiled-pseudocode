/*
 * XREFs of ?NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z @ 0x1C03CD5E0
 * Callers:
 *     ?VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037B8A0 (-VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C01C7320 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall DXGDODPRESENT::NotifyHostMonitorPowerState(DXGDODPRESENT *this, unsigned int a2, char a3)
{
  BLTQUEUE *v3; // rcx

  if ( a2 < *(_DWORD *)this )
  {
    v3 = (BLTQUEUE *)(*((_QWORD *)this + 1) + 2920LL * a2);
    *((_BYTE *)v3 + 584) = a3;
    *((_BYTE *)v3 + 577) = 1;
    BLTQUEUE::IssueCommand(v3);
  }
}
