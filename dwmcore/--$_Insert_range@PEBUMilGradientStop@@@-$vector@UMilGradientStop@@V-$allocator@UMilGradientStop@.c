/*
 * XREFs of ??$_Insert_range@PEBUMilGradientStop@@@?$vector@UMilGradientStop@@V?$allocator@UMilGradientStop@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilGradientStop@@@std@@@std@@@1@PEBUMilGradientStop@@1Uforward_iterator_tag@1@@Z @ 0x1801BC138
 * Callers:
 *     ??$insert@PEBUMilGradientStop@@$0A@@?$vector@UMilGradientStop@@V?$allocator@UMilGradientStop@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMilGradientStop@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilGradientStop@@@std@@@std@@@1@PEBUMilGradientStop@@1@Z @ 0x1801BCC30 (--$insert@PEBUMilGradientStop@@$0A@@-$vector@UMilGradientStop@@V-$allocator@UMilGradientStop@@@s.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800BC3DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Change_array@?$vector@UMilGradientStop@@V?$allocator@UMilGradientStop@@@std@@@std@@AEAAXQEAUMilGradientStop@@_K1@Z @ 0x1801C785C (-_Change_array@-$vector@UMilGradientStop@@V-$allocator@UMilGradientStop@@@std@@@std@@AEAAXQEAUMi.c)
 */

void __fastcall std::vector<MilGradientStop>::_Insert_range<MilGradientStop const *>(
        __int64 a1,
        _BYTE *a2,
        const void *a3,
        __int64 a4)
{
  _BYTE *v4; // r12
  _BYTE *v5; // rsi
  size_t v6; // r13
  unsigned __int64 v8; // rdi
  __int64 v11; // r8
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  SIZE_T size_of; // rax
  char *v18; // r14
  size_t v19; // r8
  const void *v20; // rdx
  char *v21; // rcx
  __int64 v22; // r12
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // [rsp+20h] [rbp-58h]

  v4 = *(_BYTE **)a1;
  v5 = *(_BYTE **)(a1 + 8);
  v6 = a4 - (_QWORD)a3;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a4 - (__int64)a3) >> 3);
  if ( v8 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    if ( v8 <= (v11 - (__int64)v5) / 24 )
    {
      v22 = 24 * v8;
      v23 = 0xAAAAAAAAAAAAAAABuLL * ((v5 - a2) >> 3);
      if ( v8 >= v23 )
      {
        memmove_0(&a2[v22], a2, v5 - a2);
        *(_QWORD *)(a1 + 8) = &a2[24 * v23 + v22];
      }
      else
      {
        memmove_0(v5, &v5[-v22], 24 * v8);
        *(_QWORD *)(a1 + 8) = &v5[24 * (v22 / 24)];
        memmove_0(&a2[24 * v8], a2, (size_t)&v5[-24LL * v8 - (_QWORD)a2]);
      }
      memmove_0(a2, a3, v6);
    }
    else
    {
      v12 = 0xAAAAAAAAAAAAAAALL;
      v13 = 0xAAAAAAAAAAAAAAABuLL * ((v5 - v4) >> 3);
      if ( v8 > 0xAAAAAAAAAAAAAAALL - v13 )
        std::_Xlength_error("vector too long");
      v14 = v13 + v8;
      v15 = 0xAAAAAAAAAAAAAAABuLL * ((v11 - (__int64)v4) >> 3);
      v24 = v13 + v8;
      v16 = v15 >> 1;
      if ( v15 <= 0xAAAAAAAAAAAAAAALL - (v15 >> 1) )
      {
        v12 = v16 + v15;
        if ( v16 + v15 < v14 )
          v12 = v14;
      }
      size_of = std::_Get_size_of_n<24>(v12);
      v18 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      memmove_0(&v18[8 * ((a2 - v4) >> 3)], a3, v6);
      if ( v8 == 1 && a2 == v5 )
      {
        v19 = v5 - v4;
        v20 = v4;
        v21 = v18;
      }
      else
      {
        memmove_0(v18, v4, a2 - v4);
        v19 = v5 - a2;
        v20 = a2;
        v21 = &v18[24 * (v8 - 0x5555555555555555LL * ((a2 - v4) >> 3))];
      }
      memmove_0(v21, v20, v19);
      std::vector<MilGradientStop>::_Change_array(a1, v18, v24, v12);
    }
  }
}
