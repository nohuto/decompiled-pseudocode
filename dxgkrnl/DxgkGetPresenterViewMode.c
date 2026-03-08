/*
 * XREFs of DxgkGetPresenterViewMode @ 0x1C01DCE10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool DxgkGetPresenterViewMode()
{
  return *((_DWORD *)DXGGLOBAL::GetGlobal() + 338) != 0;
}
