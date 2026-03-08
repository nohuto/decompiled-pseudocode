/*
 * XREFs of ACPIDeviceCompleteOscReevalPhase @ 0x1C001C630
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C001C4F4 (ACPIDeviceCompletePhase3Common.c)
 */

void __fastcall ACPIDeviceCompleteOscReevalPhase(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int *v5; // rcx
  int v6; // eax

  if ( a2 >= 0 && *(_WORD *)(a3 + 2) == 3 && *(_DWORD *)(a3 + 24) >= 8u )
  {
    v5 = *(int **)(a3 + 32);
    if ( v5 )
    {
      v6 = *v5;
      Usb4OscReEvaluated = 1;
      if ( (v6 & 0xE) == 0 )
      {
        AcpiRootFeaturesGranted = v5[1];
        if ( (AcpiRootFeaturesGranted & 0x40000) != 0 )
        {
          Usb4ControlRetained = 1;
        }
        else
        {
          Usb4ControlGranted = 0;
          Usb4ControlRetained = 0;
        }
      }
    }
  }
  ExFreePoolWithTag((PVOID)a3, 0);
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 208), *(_DWORD *)(a4 + 212));
}
