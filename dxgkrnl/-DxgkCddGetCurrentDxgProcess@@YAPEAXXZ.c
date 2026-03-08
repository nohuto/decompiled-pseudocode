/*
 * XREFs of ?DxgkCddGetCurrentDxgProcess@@YAPEAXXZ @ 0x1C01DD960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

struct DXGPROCESS *__fastcall DxgkCddGetCurrentDxgProcess(__int64 a1)
{
  return DXGPROCESS::GetCurrent(a1);
}
