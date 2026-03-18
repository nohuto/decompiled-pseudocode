/*
 * XREFs of ?DxgIsRemoteSession@@YAHXZ @ 0x1C016C898
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C016C7F0 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02B7170 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C00049B8 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

DXGPROCESS *DxgIsRemoteSession(void)
{
  DXGPROCESS *result; // rax

  result = DXGPROCESS::GetCurrent();
  if ( result )
    return (DXGPROCESS *)DXGPROCESS::IsRemoteConnection(result);
  return result;
}
