/*
 * XREFs of ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x18029D0AC
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18029F0F0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18004269C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z @ 0x1800A7214 (-_Calculate_growth@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z @ 0x1800A7250 (-_Change_array@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1801AF7D8 (-_Xlength@-$vector@V-$unique_ptr@UICheckMPOCache@@U-$default_delete@UICheckMPOCache@@@std@@@std@.c)
 */

char *__fastcall std::vector<tagRECT>::_Emplace_reallocate<tagRECT const &>(__int64 *a1, _BYTE *a2, _OWORD *a3)
{
  _BYTE *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  SIZE_T size_of; // rax
  char *v11; // rax
  __int64 v12; // rsi
  char *v13; // rbp
  void *v14; // rcx
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  size_t v17; // r8

  v3 = (_BYTE *)*a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<tagRECT>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (__int64)v11;
  v13 = &v11[(a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL];
  v14 = v11;
  *(_OWORD *)v13 = *a3;
  v15 = (_BYTE *)a1[1];
  v16 = (_BYTE *)*a1;
  if ( a2 == v15 )
  {
    v17 = v15 - v16;
  }
  else
  {
    memmove_0(v11, v16, (size_t)&a2[-*a1]);
    v14 = v13 + 16;
    v17 = a1[1] - (_QWORD)a2;
    v16 = a2;
  }
  memmove_0(v14, v16, v17);
  std::vector<tagRECT>::_Change_array(a1, v12, v8, v9);
  return v13;
}
