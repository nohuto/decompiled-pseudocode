/*
 * XREFs of ??$_Construct_n@AEBQEAPEAVCResource@@AEBQEAPEAV1@@?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@AEAAX_KAEBQEAPEAVCResource@@1@Z @ 0x1800E8F74
 * Callers:
 *     ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800E8EA4 (-OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

void __fastcall std::vector<CResource *>::_Construct_n<CResource * * const &,CResource * * const &>(
        _QWORD *a1,
        unsigned __int64 a2,
        const void **a3,
        _QWORD *a4)
{
  SIZE_T size_of; // rax
  char *v9; // rax
  char *v10; // rdi
  signed __int64 v11; // rbx

  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<8>(a2);
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v9;
    v10 = v9;
    a1[1] = v9;
    a1[2] = &v9[8 * a2];
    v11 = *a4 - (_QWORD)*a3;
    memmove_0(v9, *a3, v11);
    a1[1] = &v10[8 * (v11 >> 3)];
  }
}
