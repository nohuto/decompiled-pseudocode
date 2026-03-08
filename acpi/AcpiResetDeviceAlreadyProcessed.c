/*
 * XREFs of AcpiResetDeviceAlreadyProcessed @ 0x1C0023E24
 * Callers:
 *     AcpiDeviceResetCompleteResetWorker @ 0x1C0023530 (AcpiDeviceResetCompleteResetWorker.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C0023ABC (AcpiDeviceResetInvokeReset.c)
 *     AcpiPlatformLevelDeviceReset @ 0x1C0023D14 (AcpiPlatformLevelDeviceReset.c)
 * Callees:
 *     <none>
 */

char __fastcall AcpiResetDeviceAlreadyProcessed(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 i; // rax

  v2 = a1 + 48;
  for ( i = *(_QWORD *)(a2 + 48); ; i = *(_QWORD *)(i + 8) )
  {
    if ( i == v2 )
      return 0;
    if ( *(_QWORD *)(i - 8) == *(_QWORD *)(a2 + 32) )
      break;
  }
  return 1;
}
