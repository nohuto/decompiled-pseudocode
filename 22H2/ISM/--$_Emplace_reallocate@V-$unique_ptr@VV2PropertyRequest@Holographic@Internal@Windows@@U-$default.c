/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180151918
 * Callers:
 *     ?AddDevicePropertyRequest@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBU_GUID@@W4SpatialGraphPropertyFlags@234@P6AJPEBX_K@Z@Z @ 0x1801591EC (-AddDevicePropertyRequest@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHologr.c)
 *     ?AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBUSPATIAL_NODE_ID@@@Z @ 0x180159890 (-AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHologra.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180012E00 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@PEAV12@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@0@@Z @ 0x180155E9C (--$_Uninitialized_move@PEAV-$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U-$defa.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@2@_K1@Z @ 0x180166F48 (-_Change_array@-$vector@V-$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U-$defaul.c)
 */

__int64 __fastcall std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>::_Emplace_reallocate<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  size_t size_of; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx
  __int64 result; // rax
  void *v20; // [rsp+20h] [rbp-48h]
  _QWORD *v21; // [rsp+70h] [rbp+8h]
  _QWORD *v23; // [rsp+88h] [rbp+20h]

  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) >> 3;
  v9 = v8 >> 1;
  if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  size_of = std::_Get_size_of_n<8>(v10);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = &v12[v5];
  v14 = v13 + 1;
  v23 = v13 + 1;
  try
  {
    v15 = *a3;
    *a3 = 0LL;
    *v13 = v15;
    v21 = &v12[v5];
    v16 = a1[1];
    v17 = v12;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest> *,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest> *,std::allocator<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>(
        v18,
        a2,
        v12);
      v21 = v12;
      v17 = v14;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest> *,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest> *,std::allocator<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>(
      v18,
      v16,
      v17);
    std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>::_Change_array(
      a1,
      v12,
      v7,
      v10,
      v12);
    result = *a1 + 8 * v5;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>(v21, v23);
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(8 * v10));
    throw;
  }
  return result;
}
