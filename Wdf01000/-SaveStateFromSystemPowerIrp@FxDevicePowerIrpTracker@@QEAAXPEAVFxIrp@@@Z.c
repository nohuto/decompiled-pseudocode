/*
 * XREFs of ?SaveStateFromSystemPowerIrp@FxDevicePowerIrpTracker@@QEAAXPEAVFxIrp@@@Z @ 0x1C00820C0
 * Callers:
 *     ?DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00804B8 (-DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchSystemSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0082F84 (-DispatchSystemSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxDevicePowerIrpTracker::SaveStateFromSystemPowerIrp(FxDevicePowerIrpTracker *this, FxIrp *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int LowPart; // r10d
  POWER_ACTION ShutdownType; // r9d
  unsigned int Length; // r8d
  unsigned int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d

  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  ShutdownType = CurrentStackLocation->Parameters.Power.ShutdownType;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( LowPart == 1 )
    v6 = HIWORD(Length);
  else
    v6 = Length >> 12;
  v7 = (v6 & 0xF) - 1;
  if ( !v7 )
  {
LABEL_10:
    ShutdownType = PowerActionNone;
    goto LABEL_11;
  }
  v8 = v7 - 1;
  if ( v8 && (v9 = v8 - 1) != 0 && (v10 = v9 - 1) != 0 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
        goto LABEL_11;
      goto LABEL_10;
    }
    ShutdownType = PowerActionHibernate;
  }
  else
  {
    ShutdownType = PowerActionSleep;
  }
LABEL_11:
  if ( LowPart == 1 )
    this->m_S0PowerAction = ShutdownType;
  else
    this->m_SxPowerAction = ShutdownType;
}
