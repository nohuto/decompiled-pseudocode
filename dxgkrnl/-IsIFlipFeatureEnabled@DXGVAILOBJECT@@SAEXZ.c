/*
 * XREFs of ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C035D5D4
 * Callers:
 *     ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C02DC3D0 (-BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSA.c)
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038FEB0 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     Feature_Vail_iFLIP__private_ReportDeviceUsage @ 0x1C0026548 (Feature_Vail_iFLIP__private_ReportDeviceUsage.c)
 */

bool DXGVAILOBJECT::IsIFlipFeatureEnabled(void)
{
  bool v0; // zf
  bool v1; // sf

  v0 = g_IsVailIFlipEnabled == 0;
  v1 = g_IsVailIFlipEnabled < 0;
  if ( g_IsVailIFlipEnabled < 0 )
  {
    Feature_Vail_iFLIP__private_ReportDeviceUsage();
    _InterlockedCompareExchange(&g_IsVailIFlipEnabled, 1, -1);
    v0 = g_IsVailIFlipEnabled == 0;
    v1 = g_IsVailIFlipEnabled < 0;
  }
  return !v1 && !v0;
}
