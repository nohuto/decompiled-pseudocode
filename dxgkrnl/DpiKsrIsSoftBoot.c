/*
 * XREFs of DpiKsrIsSoftBoot @ 0x1C021A914
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C036B9E0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     DpiKsrGetSavedAdapterState @ 0x1C03A1908 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1C03A1B4C (DpiKsrRestoreAdapterDriverState.c)
 * Callees:
 *     <none>
 */

char DpiKsrIsSoftBoot()
{
  char result; // al

  result = 0;
  if ( qword_1C013B9A0 )
  {
    if ( !*(_BYTE *)(qword_1C013B9A0 + 28) )
      return 1;
  }
  return result;
}
