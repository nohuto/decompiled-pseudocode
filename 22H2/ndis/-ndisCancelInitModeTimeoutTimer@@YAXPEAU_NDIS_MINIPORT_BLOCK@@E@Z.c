/*
 * XREFs of ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00FEC24
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00149E8 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C003F6B0 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C010B050 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0138C08 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisCancelTimer @ 0x1C001A060 (NdisCancelTimer.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F9820 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisCancelInitModeTimeoutTimer(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  BOOLEAN TimerCancelled; // [rsp+30h] [rbp+8h] BYREF

  TimerCancelled = 0;
  NdisCancelTimer(&a1->InitModeTimeoutTimer, &TimerCancelled);
  if ( TimerCancelled )
  {
    KeSetEvent(&a1->InitModeTimeoutTimerQueuedEvent, 0, 0);
    ndisDereferenceMiniport(a1, 0x17u);
  }
  else if ( a2 )
  {
    ndisWaitForKernelObject(&a1->InitModeTimeoutTimerQueuedEvent);
  }
}
