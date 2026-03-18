/*
 * XREFs of DpiKsrIsSoftBoot @ 0x1C0228ED4
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0200110 (DpiFdoStartAdapter.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C0370490 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     DpiKsrGetSavedAdapterState @ 0x1C03A61D8 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1C03A641C (DpiKsrRestoreAdapterDriverState.c)
 * Callees:
 *     <none>
 */

char DpiKsrIsSoftBoot()
{
  char result; // al

  result = 0;
  if ( qword_1C01409A0 )
  {
    if ( !*(_BYTE *)(qword_1C01409A0 + 28) )
      return 1;
  }
  return result;
}
