/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAPEAU?$pair@PEBGPEBG@1@QEAU21@$$QEAU21@@Z @ 0x18020B30C
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18020F4A8 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18020F608 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAXQEAUguid@winrt@@_K1@Z @ 0x1800ED2EC (-_Change_array@-$vector@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@AEAAXQEAUguid@winrt@@.c)
 */

unsigned __int64 __fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        _QWORD *a1,
        _OWORD *a2,
        _OWORD *a3)
{
  _OWORD *v4; // rbx
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  size_t v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r10
  unsigned __int64 v15; // r14
  _OWORD *v16; // rdx
  _OWORD *v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 result; // rax
  void *v20; // [rsp+58h] [rbp+10h]

  v4 = a2;
  v6 = (unsigned __int64)a2 - *a1;
  v7 = (__int64)(a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 4;
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
  v20 = v13;
  try
  {
    v15 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    *(_OWORD *)((char *)v13 + v15) = *a3;
    v16 = (_OWORD *)a1[1];
    v17 = (_OWORD *)*a1;
    if ( v4 == v16 )
    {
      while ( v17 != v16 )
      {
        *(_OWORD *)v13 = *v17;
        v13 += 2;
        ++v17;
      }
    }
    else
    {
      if ( v17 != v4 )
      {
        do
        {
          *(_OWORD *)v13 = *v17;
          v13 += 2;
          ++v17;
        }
        while ( v17 != v4 );
        v16 = (_OWORD *)a1[1];
      }
      if ( v4 != v16 )
      {
        v18 = v14 + v15 + 16 - (_QWORD)v4;
        do
        {
          *(_OWORD *)((char *)v4 + v18) = *v4;
          ++v4;
        }
        while ( v4 != v16 );
      }
    }
    std::vector<winrt::guid>::_Change_array((__int64)a1, v14, v8, v11);
    result = v15 + *a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(16 * v11));
    throw;
  }
  return result;
}
