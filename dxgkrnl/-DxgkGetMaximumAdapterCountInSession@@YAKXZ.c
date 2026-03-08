/*
 * XREFs of ?DxgkGetMaximumAdapterCountInSession@@YAKXZ @ 0x1C01DD920
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ @ 0x1C01BC43C (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ.c)
 */

__int64 DxgkGetMaximumAdapterCountInSession(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
}
