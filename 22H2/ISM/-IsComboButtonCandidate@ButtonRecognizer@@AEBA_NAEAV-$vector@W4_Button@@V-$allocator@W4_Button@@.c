/*
 * XREFs of ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x180173ADC
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x180173318 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B08C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800694A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??$?8W4_Button@@V?$allocator@W4_Button@@@std@@@std@@YA_NAEBV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@0@0@Z @ 0x180172174 (--$-8W4_Button@@V-$allocator@W4_Button@@@std@@@std@@YA_NAEBV-$vector@W4_Button@@V-$allocator@W4_.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x180172B3C (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180172E9C (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ButtonRecognizer::IsComboButtonCandidate(__int64 a1, int **a2)
{
  __int64 *v4; // r11
  __int64 v5; // rax
  char v6; // bl
  __int64 v7; // r8
  int *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  char *v11; // r9
  int *i; // rcx
  int **v13; // rdx
  int *v14; // rcx
  int *v15; // rax
  int *v17; // [rsp+20h] [rbp-28h] BYREF
  int *v18; // [rsp+28h] [rbp-20h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  std::vector<enum _Button>::vector<enum _Button>((void **)&v17, (__int64)a2);
  std::_Sort_unchecked<enum _Button *,std::less<void>>(v17, v18, v18 - v17, v19);
  v4 = *(__int64 **)(a1 + 32);
  v5 = *v4;
  v19 = *v4;
  v6 = 0;
  while ( (__int64 *)v5 != v4 )
  {
    v7 = v5 + 48;
    v8 = *(int **)(v5 + 48);
    if ( *(_BYTE *)(v5 + 40) )
    {
      v9 = a2[1] - *a2;
      if ( (__int64)(*(_QWORD *)(v5 + 56) - (_QWORD)v8) >> 2 < v9 )
        goto LABEL_24;
      v10 = *(_QWORD *)(v5 + 56) - 4 * v9;
      v11 = (char *)((char *)v8 - (char *)*a2);
LABEL_6:
      for ( i = *a2; i != a2[1]; ++i )
      {
        if ( *(_DWORD *)&v11[(_QWORD)i] != *i )
        {
          if ( v8 == (int *)v10 )
            goto LABEL_24;
          ++v8;
          v11 += 4;
          goto LABEL_6;
        }
      }
      if ( v8 == *(int **)(v5 + 56) )
        goto LABEL_24;
      v13 = a2;
    }
    else
    {
      v14 = v17;
      while ( v8 != *(int **)(v7 + 8) )
      {
        if ( v14 == v18 )
          goto LABEL_22;
        if ( *v14 < *v8 )
          goto LABEL_24;
        v15 = v14 + 1;
        if ( *v14 > *v8 )
          v15 = v14;
        v14 = v15;
        ++v8;
      }
      if ( v14 != v18 )
        goto LABEL_24;
LABEL_22:
      v13 = &v17;
    }
    if ( !std::operator==<enum _Button,std::allocator<enum _Button>>(v7, v13) )
    {
      v6 = 1;
      break;
    }
LABEL_24:
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v19);
    v5 = v19;
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v17);
  return v6;
}
