/*
 * XREFs of ?resize@?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEB_N@Z @ 0x1800D9E5C
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005F2F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEA_N_K0@Z @ 0x1800D9F1C (-reserve_region@-$vector_facade@_NV-$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@de.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ?clear_region@?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801F80EC (-clear_region@-$vector_facade@_NV-$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@deta.c)
 */

char __fastcall detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::resize(
        _QWORD *a1,
        unsigned __int64 a2,
        _BYTE *a3)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // edx
  unsigned __int64 v9; // rcx
  _BYTE *v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rbx

  v5 = a1[1] - *a1;
  if ( a2 <= v5 )
  {
    LOBYTE(v7) = detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::clear_region(
                   a1,
                   a2,
                   a1[1] - (a2 + *a1));
  }
  else
  {
    v6 = a2 - v5;
    v7 = detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::reserve_region(
           a1,
           v5,
           v6);
    v9 = 0LL;
    v10 = (_BYTE *)v7;
    if ( v6 )
    {
      if ( v6 < 0x10 )
        goto LABEL_9;
      v11 = v7 + v6 - 1;
      if ( v10 <= a3 && v11 >= (unsigned __int64)a3 )
        goto LABEL_9;
      v12 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      do
      {
        v9 += 16LL;
        v13 = v9;
      }
      while ( v9 < v12 );
      LOBYTE(v8) = *a3;
      LOBYTE(v7) = (unsigned __int8)memset_0(v10, v8, v6 & 0xFFFFFFFFFFFFFFF0uLL);
      v10 += v12;
      v9 = v13;
      if ( v13 < v6 )
      {
LABEL_9:
        v14 = v6 - v9;
        do
        {
          LOBYTE(v7) = *a3;
          *v10++ = *a3;
          --v14;
        }
        while ( v14 );
      }
    }
  }
  return v7;
}
