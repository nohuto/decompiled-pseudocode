/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18020830C
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180026B5C (-clear@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$_Uh.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1802082C4 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkin.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  _QWORD *v7; // r12
  _QWORD *v8; // rax
  __int64 appended; // rax
  __int64 i; // r11
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r13
  bool v14; // bl
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r13
  bool v20; // bl
  _QWORD *v21; // rax
  _QWORD *v23; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v24; // [rsp+28h] [rbp-18h]
  __int64 v25; // [rsp+30h] [rbp-10h]
  __int64 v27; // [rsp+88h] [rbp+48h]
  _QWORD *v28; // [rsp+90h] [rbp+50h]

  if ( a2 != a3 )
  {
    v6 = a1[3];
    v7 = (_QWORD *)a1[1];
    v23 = a1 + 1;
    v8 = *(_QWORD **)(a2 + 8);
    v25 = a2;
    v28 = v8;
    v24 = v8;
    appended = std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)(a2 + 16), 2uLL);
    v11 = 2 * (a1[6] & appended);
    v12 = *(_QWORD *)(v6 + 16 * (a1[6] & appended) + 8);
    v13 = *(_QWORD *)(v6 + 8 * v11);
    v27 = *(_QWORD *)(v6 + 8 * v11 + 8);
    while ( 1 )
    {
      v14 = i == v12;
      std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Range_eraser::_Bump_erased(&v23);
      if ( v14 )
        break;
      i = v25;
      v12 = v27;
      if ( v25 == a3 )
      {
        if ( v13 == a2 )
          *(_QWORD *)(v6 + 8 * v11) = v25;
        goto LABEL_15;
      }
    }
    if ( v13 == a2 )
    {
      *(_QWORD *)(v6 + 8 * v11) = v7;
      v16 = v7;
    }
    else
    {
      v16 = v28;
    }
    *(_QWORD *)(v6 + 8 * v11 + 8) = v16;
    for ( i = v25; i != a3; *(_QWORD *)(v6 + 8 * v18 + 8) = v7 )
    {
      v17 = std::_Fnv1a_append_bytes(v15, (const unsigned __int8 *const)(i + 16), 2uLL);
      v18 = 2 * (a1[6] & v17);
      v19 = *(_QWORD *)(v6 + 16 * (a1[6] & v17) + 8);
      while ( 1 )
      {
        v20 = i == v19;
        std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Range_eraser::_Bump_erased(&v23);
        i = v25;
        if ( v20 )
          break;
        if ( v25 == a3 )
        {
          *(_QWORD *)(v6 + 8 * v18) = v25;
          goto LABEL_15;
        }
      }
      *(_QWORD *)(v6 + 8 * v18) = v7;
    }
LABEL_15:
    v21 = v24;
    *v24 = i;
    *(_QWORD *)(i + 8) = v21;
  }
  return a3;
}
