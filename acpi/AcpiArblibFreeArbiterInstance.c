/*
 * XREFs of AcpiArblibFreeArbiterInstance @ 0x1C000B64C
 * Callers:
 *     AcpiArblibInitializeArbiter @ 0x1C000B688 (AcpiArblibInitializeArbiter.c)
 *     ACPIBuildPdo @ 0x1C000DC84 (ACPIBuildPdo.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0017830 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIInitResetDeviceExtension @ 0x1C002D7B0 (ACPIInitResetDeviceExtension.c)
 * Callees:
 *     ArbDeleteArbiterInstance @ 0x1C00A17E4 (ArbDeleteArbiterInstance.c)
 */

void __fastcall AcpiArblibFreeArbiterInstance(_BYTE *P)
{
  if ( P[128] )
    ArbDeleteArbiterInstance(P + 136);
  ExFreePoolWithTag(P, 0);
}
