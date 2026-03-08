/*
 * XREFs of IrqPolicyUpdatePolicy @ 0x1C00AC5CC
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C00ABA48 (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     ProcessorPreferredCpuSetActive @ 0x1C009AF38 (ProcessorPreferredCpuSetActive.c)
 *     ProcessorQueryGroupInformation @ 0x1C009AF48 (ProcessorQueryGroupInformation.c)
 *     IrqPolicyQueryInterruptSteeringEnabled @ 0x1C009FDA4 (IrqPolicyQueryInterruptSteeringEnabled.c)
 */

__int64 __fastcall IrqPolicyUpdatePolicy(__int64 a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v2 = 0;
  if ( !IrqPolicyRegistrySpecified
    && !IrqDisableInterruptSteeringPolicy
    && (int)ProcessorQueryGroupInformation(a1, &v3, &v2) >= 0 )
  {
    IrqInterruptSteeringEnabled = IrqPolicyQueryInterruptSteeringEnabled(0LL);
    if ( IrqInterruptSteeringEnabled )
    {
      if ( !ProcessorPreferredCpuSetActive() && (v3 == 1 || v3 == 3 && !v2) )
        IrqMachinePolicy = 6;
    }
  }
  return 0LL;
}
