/*
 * XREFs of ACPIThermalReevaluateConstraints @ 0x1C0041A74
 * Callers:
 *     ACPIThermalAssocaiteConstraint @ 0x1C003FE24 (ACPIThermalAssocaiteConstraint.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C0041C30 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIThermalUpdateConstraints @ 0x1C004221C (ACPIThermalUpdateConstraints.c)
 *     AcpiThermalDestroyContraints @ 0x1C0042508 (AcpiThermalDestroyContraints.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIThermalReevaluateConstraints(PVOID Context)
{
  bool v1; // zf

  v1 = *((_BYTE *)Context + 45) == 0;
  *((_BYTE *)Context + 44) = 1;
  if ( v1 )
  {
    IoQueueWorkItemEx(*((PIO_WORKITEM *)Context + 6), ACPIThermalReevaluateConstraintsWorker, DelayedWorkQueue, Context);
    *((_BYTE *)Context + 45) = 1;
  }
}
