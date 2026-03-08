/*
 * XREFs of ?reset@?$auto_ptr@U_DXGK_VIDPNTARGETMODESET_INTERFACE@@@@QEAAXPEAU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C001FCD8
 * Callers:
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0207188 (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall auto_ptr<_DXGK_VIDPNTARGETMODESET_INTERFACE>::reset(void **a1, void *a2)
{
  void *v4; // rcx

  v4 = *a1;
  if ( a2 != v4 && v4 )
    ExFreePoolWithTag(v4, 0);
  *a1 = a2;
}
