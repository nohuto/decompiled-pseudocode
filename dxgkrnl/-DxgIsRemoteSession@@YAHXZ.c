/*
 * XREFs of ?DxgIsRemoteSession@@YAHXZ @ 0x1C01C3D28
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C01C3C80 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02B22B0 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0009F04 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

DXGPROCESS *__fastcall DxgIsRemoteSession(__int64 a1)
{
  DXGPROCESS *result; // rax

  result = DXGPROCESS::GetCurrent(a1);
  if ( result )
    return (DXGPROCESS *)DXGPROCESS::IsRemoteConnection(result);
  return result;
}
