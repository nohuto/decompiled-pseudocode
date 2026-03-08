/*
 * XREFs of ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C016AFF0
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C016D3D0 (_BmlGetPathModalityForAdapter.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02027E0 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03A79C8 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00029F4 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDPN::IsFunctional(DMMVIDPN *this)
{
  char *v1; // rdi
  DMMVIDPN *v2; // rbx
  DMMVIDPNPRESENTPATH *v3; // rbx
  char *v4; // rax

  v1 = (char *)this + 120;
  v2 = (DMMVIDPN *)*((_QWORD *)this + 15);
  if ( v2 == (DMMVIDPN *)((char *)this + 120) )
    return 1;
  v3 = (DMMVIDPN *)((char *)v2 - 8);
  if ( !v3 )
    return 1;
  while ( DMMVIDPNPRESENTPATH::IsFunctional(v3) )
  {
    v4 = (char *)*((_QWORD *)v3 + 1);
    v3 = (DMMVIDPNPRESENTPATH *)(v4 - 8);
    if ( v4 == v1 )
      v3 = 0LL;
    if ( !v3 )
      return 1;
  }
  return 0;
}
