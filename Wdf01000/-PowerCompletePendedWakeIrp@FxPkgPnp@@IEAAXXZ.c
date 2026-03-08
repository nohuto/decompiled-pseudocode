/*
 * XREFs of ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C006DF68
 * Callers:
 *     ?PowerD0DisarmingWakeAtBus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E180 (-PowerD0DisarmingWakeAtBus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0DisarmingWakeAtBusNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E1C0 (-PowerD0DisarmingWakeAtBusNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerDxStoppedArmForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E630 (-PowerDxStoppedArmForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerDxStoppedArmForWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E680 (-PowerDxStoppedArmForWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerEnablingWakeAtBus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E790 (-PowerEnablingWakeAtBus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerEnablingWakeAtBusNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E7E0 (-PowerEnablingWakeAtBusNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C006F820 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerWakePending@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00701C0 (-PowerWakePending@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0071FB0 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

void __fastcall FxPkgPnp::PowerCompletePendedWakeIrp(FxPkgPnp *this)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v3; // al
  _LIST_ENTRY *p_m_WaitWakeIrpToBeProcessedList; // rdx
  FxPkgPnp **Flink; // rbx
  _LIST_ENTRY *v6; // r8
  int v7; // r8d
  FxIrp irp; // [rsp+30h] [rbp+8h] BYREF

  if ( this->m_SharedPower.m_WaitWakeOwner )
  {
    p_m_Lock = &this->m_PowerMachine.m_WaitWakeLock.m_Lock;
    v3 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_WaitWakeLock.m_Lock);
    p_m_WaitWakeIrpToBeProcessedList = &this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList;
    Flink = (FxPkgPnp **)this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList.Flink;
    if ( Flink[1] != (FxPkgPnp *)&this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList
      || (v6 = (_LIST_ENTRY *)*Flink, *(FxPkgPnp ***)&(*Flink)->m_Type != Flink) )
    {
      __fastfail(3u);
    }
    p_m_WaitWakeIrpToBeProcessedList->Flink = v6;
    v6->Blink = p_m_WaitWakeIrpToBeProcessedList;
    KeReleaseSpinLock(p_m_Lock, v3);
    Flink[1] = (FxPkgPnp *)Flink;
    *Flink = (FxPkgPnp *)Flink;
    v7 = *((_DWORD *)Flink - 30);
    irp.m_Irp = (_IRP *)(Flink - 21);
    FxPkgPnp::CompletePowerRequest(this, &irp, v7);
  }
}
