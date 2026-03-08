/*
 * XREFs of DXGPROCESS_GetCurrent @ 0x1C0008C30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

struct DXGPROCESS *DXGPROCESS_GetCurrent()
{
  return DXGPROCESS::GetCurrent();
}
