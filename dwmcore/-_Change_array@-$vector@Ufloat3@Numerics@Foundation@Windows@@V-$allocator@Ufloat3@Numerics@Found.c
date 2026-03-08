/*
 * XREFs of ?_Change_array@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@AEAAXQEAUfloat3@Numerics@Foundation@Windows@@_K1@Z @ 0x1801C7ACC
 * Callers:
 *     ?_Reallocate_exactly@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1801C7CB4 (-_Reallocate_exactly@-$vector@Ufloat3@Numerics@Foundation@Windows@@V-$allocator@Ufloat3@Numerics.c)
 *     ??$_Emplace_reallocate@AEBUfloat3@Numerics@Foundation@Windows@@@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat3@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x18023E788 (--$_Emplace_reallocate@AEBUfloat3@Numerics@Foundation@Windows@@@-$vector@Ufloat3@Numerics@Founda.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Windows::Foundation::Numerics::float3>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 2));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 12 * a3;
  result = 3 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 12 * a4;
  return result;
}
