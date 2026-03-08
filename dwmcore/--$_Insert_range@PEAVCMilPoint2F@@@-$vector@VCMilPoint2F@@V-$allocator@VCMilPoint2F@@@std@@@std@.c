/*
 * XREFs of ??$_Insert_range@PEAVCMilPoint2F@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VCMilPoint2F@@@std@@@std@@@1@PEAVCMilPoint2F@@1Uforward_iterator_tag@1@@Z @ 0x180083A20
 * Callers:
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x180082A70 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800E18F0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801A3990 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1801AF7D8 (-_Xlength@-$vector@V-$unique_ptr@UICheckMPOCache@@U-$default_delete@UICheckMPOCache@@@std@@@std@.c)
 */

void __fastcall std::vector<CMilPoint2F>::_Insert_range<CMilPoint2F *>(__int64 a1, __int64 *a2, char *a3, char *a4)
{
  __int64 *v4; // rbp
  __int64 *v5; // rsi
  unsigned __int64 v6; // r14
  char *v8; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 *v28; // rcx
  signed __int64 v29; // rdi
  __int64 *v30; // rax
  __int64 *v31; // rcx
  __int64 v32; // xmm0_8
  char *v33; // rdi
  unsigned __int64 v34; // [rsp+70h] [rbp+8h] BYREF
  void *v35; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v36; // [rsp+80h] [rbp+18h]
  __int64 v37; // [rsp+88h] [rbp+20h]

  v4 = *(__int64 **)a1;
  v5 = *(__int64 **)(a1 + 8);
  v6 = (a4 - a3) >> 3;
  v8 = a3;
  if ( v6 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    if ( v6 <= (v11 - (__int64)v5) >> 3 )
    {
      v26 = 8 * v6;
      if ( v6 >= v5 - a2 )
      {
        v30 = &a2[(unsigned __int64)v26 / 8];
        if ( a2 != v5 )
        {
          v31 = a2;
          do
          {
            v32 = *v31++;
            *v30++ = v32;
          }
          while ( v31 != v5 );
        }
        *(_QWORD *)(a1 + 8) = v30;
        if ( a3 != a4 )
        {
          v33 = (char *)((char *)a2 - a3);
          do
          {
            *(_QWORD *)&v33[(_QWORD)v8] = *(_QWORD *)v8;
            v8 += 8;
          }
          while ( v8 != a4 );
        }
      }
      else
      {
        v27 = &v5[v26 / 0xFFFFFFFFFFFFFFF8uLL];
        v28 = v5;
        while ( v27 != v5 )
          *v28++ = *v27++;
        *(_QWORD *)(a1 + 8) = v28;
        memmove_0(&a2[v6], a2, (size_t)v5 - 8 * v6 - (_QWORD)a2);
        if ( v8 != a4 )
        {
          v29 = (char *)a2 - v8;
          do
          {
            *(_QWORD *)&v8[v29] = *(_QWORD *)v8;
            v8 += 8;
          }
          while ( v8 != a4 );
        }
      }
    }
    else
    {
      v12 = v5 - v4;
      if ( v6 > 0x1FFFFFFFFFFFFFFFLL - v12 )
        std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
      v13 = v12 + v6;
      v14 = (v11 - (__int64)v4) >> 3;
      v36 = v12 + v6;
      if ( v14 > 0x1FFFFFFFFFFFFFFFLL - (v14 >> 1) )
      {
        v15 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v15 = v12 + v6;
        if ( (v14 >> 1) + v14 >= v13 )
          v15 = (v14 >> 1) + v14;
        if ( v15 > 0x1FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
      }
      v37 = 8 * v15;
      v16 = std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v15);
      v17 = a2 - v4;
      if ( v8 != a4 )
      {
        v18 = v16 + 8 * v17 - (_QWORD)v8;
        do
        {
          *(_QWORD *)&v8[v18] = *(_QWORD *)v8;
          v8 += 8;
        }
        while ( v8 != a4 );
      }
      if ( v6 == 1 && a2 == v5 )
      {
        if ( v4 != v5 )
        {
          v24 = v16 - (_QWORD)v4;
          do
          {
            *(__int64 *)((char *)v4 + v24) = *v4;
            ++v4;
          }
          while ( v4 != v5 );
        }
      }
      else
      {
        if ( v4 != a2 )
        {
          v19 = v16 - (_QWORD)v4;
          do
          {
            *(__int64 *)((char *)v4 + v19) = *v4;
            ++v4;
          }
          while ( v4 != a2 );
        }
        if ( a2 != v5 )
        {
          v25 = v16 + 8 * (v17 + v6) - (_QWORD)a2;
          do
          {
            *(__int64 *)((char *)a2 + v25) = *a2;
            ++a2;
          }
          while ( a2 != v5 );
        }
      }
      v20 = *(_QWORD **)a1;
      if ( *(_QWORD *)a1 )
      {
        v21 = *(_QWORD *)(a1 + 16) - (_QWORD)v20;
        v35 = *(void **)a1;
        v22 = v21 & 0xFFFFFFFFFFFFFFF8uLL;
        v34 = v22;
        if ( v22 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v35, &v34);
          v22 = v34;
          v20 = v35;
        }
        operator delete(v20, v22);
      }
      v23 = v36;
      *(_QWORD *)a1 = v16;
      *(_QWORD *)(a1 + 8) = v16 + 8 * v23;
      *(_QWORD *)(a1 + 16) = v16 + v37;
    }
  }
}
