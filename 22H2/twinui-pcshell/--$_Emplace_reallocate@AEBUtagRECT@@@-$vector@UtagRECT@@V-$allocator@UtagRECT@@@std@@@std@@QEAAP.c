/*
 * XREFs of ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x180460704
 * Callers:
 *     ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x180460850 (-GetAdjacentPosition@WindowRelativePositioning@@YA-AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApp.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x180091313 (memmove_0.c)
 *     ?_Change_array@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAXQEAUguid@winrt@@_K1@Z @ 0x1800ED2EC (-_Change_array@-$vector@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@AEAAXQEAUguid@winrt@@.c)
 */

unsigned __int64 __fastcall std::vector<tagRECT>::_Emplace_reallocate<tagRECT const &>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  signed __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8
  unsigned __int64 result; // rax
  void *v21; // [rsp+58h] [rbp+10h]

  v6 = a2 - (_BYTE *)*a1;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = (__int64)v13;
  v21 = v13;
  try
  {
    v15 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    *(_OWORD *)((char *)v13 + v15) = *a3;
    v16 = a1[1];
    v17 = *a1;
    v18 = v13;
    if ( a2 == v16 )
    {
      v19 = v16 - v17;
    }
    else
    {
      memmove_0(v13, v17, a2 - (_BYTE *)*a1);
      v18 = (void *)(v14 + v15 + 16);
      v19 = (_BYTE *)a1[1] - a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
    std::vector<winrt::guid>::_Change_array((__int64)a1, v14, v8, v11);
    result = (unsigned __int64)*a1 + v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(16 * v11));
    throw;
  }
  return result;
}
