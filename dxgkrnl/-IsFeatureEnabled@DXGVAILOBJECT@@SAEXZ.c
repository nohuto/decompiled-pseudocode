/*
 * XREFs of ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C035D59C
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C004CDD0 (DxgkDeviceIoctl.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C03407BC (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C035FB20 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     Feature_Vail__private_ReportDeviceUsage @ 0x1C00264E4 (Feature_Vail__private_ReportDeviceUsage.c)
 */

bool DXGVAILOBJECT::IsFeatureEnabled(void)
{
  bool v0; // zf
  bool v1; // sf

  v0 = g_IsVailEnabled == 0;
  v1 = g_IsVailEnabled < 0;
  if ( g_IsVailEnabled < 0 )
  {
    Feature_Vail__private_ReportDeviceUsage();
    _InterlockedCompareExchange(&g_IsVailEnabled, 1, -1);
    v0 = g_IsVailEnabled == 0;
    v1 = g_IsVailEnabled < 0;
  }
  return !v1 && !v0;
}
