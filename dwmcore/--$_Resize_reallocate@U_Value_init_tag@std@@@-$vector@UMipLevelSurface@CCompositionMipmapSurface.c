/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMipLevelSurface@CCompositionMipmapSurface@@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802207CC
 * Callers:
 *     ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z @ 0x180220DDC (-ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x180085FC4 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAPEAUMipLevelSurface@CCompositionMipmapSurface@@PEAU12@_KAEAV?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@0@@Z @ 0x1802208B8 (--$_Uninitialized_value_construct_n@V-$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@st.c)
 */

__int64 __fastcall std::vector<CCompositionMipmapSurface::MipLevelSurface>::_Resize_reallocate<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  __int64 v10; // rax
  _OWORD *v11; // r10
  _OWORD *v12; // rcx
  _OWORD *v13; // rdx
  _OWORD *v14; // r9
  __int128 v15; // xmm1

  v2 = 0x7FFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = a1[1] - *a1;
  v6 = (__int64)(a1[2] - *a1) >> 5;
  v7 = v5 >> 5;
  v8 = v6 >> 1;
  if ( v6 <= 0x7FFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<32>(v2);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>(
    v10 + 32 * v7,
    a2 - v7);
  v12 = (_OWORD *)*a1;
  v13 = v11;
  v14 = (_OWORD *)a1[1];
  while ( v12 != v14 )
  {
    *v13 = *v12;
    v13 += 2;
    v15 = v12[1];
    v12 += 2;
    *(v13 - 1) = v15;
  }
  return std::vector<CCompositionMipmapSurface::MipLevelSurface>::_Change_array(a1, v11, a2, v2);
}
