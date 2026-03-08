/*
 * XREFs of ?_Change_array@?$vector@U_D3DCOLORVALUE@@V?$allocator@U_D3DCOLORVALUE@@@std@@@std@@AEAAXQEAU_D3DCOLORVALUE@@_K1@Z @ 0x1802AC9E8
 * Callers:
 *     ??$_Emplace_reallocate@AEBU_D3DCOLORVALUE@@@?$vector@U_D3DCOLORVALUE@@V?$allocator@U_D3DCOLORVALUE@@@std@@@std@@QEAAPEAU_D3DCOLORVALUE@@QEAU2@AEBU2@@Z @ 0x1802AC8D0 (--$_Emplace_reallocate@AEBU_D3DCOLORVALUE@@@-$vector@U_D3DCOLORVALUE@@V-$allocator@U_D3DCOLORVAL.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<_D3DCOLORVALUE>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
