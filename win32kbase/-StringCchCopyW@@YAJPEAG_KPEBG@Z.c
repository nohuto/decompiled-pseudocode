/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005D400
 * Callers:
 *     ?TelemetrySetApplicationId@CApplicationChannel@DirectComposition@@QEAAJPEBG@Z @ 0x1C005D104 (-TelemetrySetApplicationId@CApplicationChannel@DirectComposition@@QEAAJPEBG@Z.c)
 *     ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C005D1C0 (-SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0075884 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     DrvSetGraphicsDevices @ 0x1C00D2EA0 (DrvSetGraphicsDevices.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1C005D46C (StringCopyWorkerW.c)
 */

HRESULT __fastcall StringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  HRESULT result; // eax

  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, 0x7FFFFFFEuLL);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
