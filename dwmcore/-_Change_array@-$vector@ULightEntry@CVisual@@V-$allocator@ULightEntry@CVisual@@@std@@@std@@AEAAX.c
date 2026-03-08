/*
 * XREFs of ?_Change_array@?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@AEAAXQEAULightEntry@CVisual@@_K1@Z @ 0x180011EAC
 * Callers:
 *     ??$_Emplace_reallocate@ULightEntry@CVisual@@@?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@QEAAPEAULightEntry@CVisual@@QEAU23@$$QEAU23@@Z @ 0x180011DBC (--$_Emplace_reallocate@ULightEntry@CVisual@@@-$vector@ULightEntry@CVisual@@V-$allocator@ULightEn.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CVisual::LightEntry>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    result = std::_Deallocate<16,0>(v6, (a1[2] - v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *a1 = a2;
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
  return result;
}
