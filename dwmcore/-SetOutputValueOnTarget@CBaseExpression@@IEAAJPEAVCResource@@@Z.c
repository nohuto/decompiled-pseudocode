__int64 __fastcall CBaseExpression::SetOutputValueOnTarget(CBaseExpression *this, struct CResource *a2)
{
  __int64 v2; // rax
  char v5; // r14
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned __int64 v14; // rax
  int v15; // r9d
  unsigned int v16; // r10d
  unsigned int ExpressionTypeChannelCount; // r11d
  __int64 v18; // rdx
  __int64 v19; // rax
  __int128 *v20; // rcx
  char *v21; // r9
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // r8
  __int64 v25; // r14
  __int64 v26; // r14
  int *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  wchar_t *v31; // rsi
  wchar_t **v32; // r15
  unsigned int v33; // ebx
  __int64 v34; // rax
  _QWORD *v35; // r9
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r14
  __int64 v39; // r8
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rcx
  __int128 v43; // xmm0
  __int64 v44; // rcx
  __int64 v45; // rax
  __int128 *v46; // r9
  int v47; // eax
  unsigned int v48; // ecx
  __int64 v49; // rbx
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 inserted; // rax
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rbx
  __int64 v57; // rbx
  struct CAnimationLoggingManager *AnimationLoggingManagerNoRef; // rax
  unsigned int v59; // ecx
  struct CAnimationLoggingManager *v60; // rax
  unsigned int v61; // [rsp+20h] [rbp-E0h]
  __int64 v62; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+58h] [rbp-A8h]
  __int128 v64; // [rsp+70h] [rbp-90h] BYREF
  __int128 v65; // [rsp+88h] [rbp-78h] BYREF
  __int128 v66; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v67; // [rsp+B0h] [rbp-50h]
  __int128 v68; // [rsp+C0h] [rbp-40h]
  __int128 v69; // [rsp+D0h] [rbp-30h]
  __int128 *v70; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v71; // [rsp+E8h] [rbp-18h]
  char v72; // [rsp+ECh] [rbp-14h]
  __int128 v73; // [rsp+F0h] [rbp-10h] BYREF
  int v74; // [rsp+100h] [rbp+0h]
  __int128 Buf1; // [rsp+110h] [rbp+10h] BYREF
  __int128 v76; // [rsp+120h] [rbp+20h]
  __int128 v77; // [rsp+130h] [rbp+30h]
  __int128 v78; // [rsp+140h] [rbp+40h]
  __int64 v79; // [rsp+150h] [rbp+50h]
  int v80; // [rsp+158h] [rbp+58h]
  char v81; // [rsp+15Ch] [rbp+5Ch]
  __int128 v82; // [rsp+160h] [rbp+60h] BYREF
  __int64 v83; // [rsp+170h] [rbp+70h]

  v2 = *(_QWORD *)a2;
  *(_QWORD *)&v65 = this;
  Buf1 = 0LL;
  v79 = 0LL;
  v76 = 0LL;
  v81 = 0;
  v77 = 0LL;
  v80 = 18;
  v5 = 0;
  v78 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, __int128 *))(v2 + 136))(
         a2,
         *((unsigned int *)this + 48),
         &Buf1);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x2A4u, 0LL);
  }
  else
  {
    v9 = *((_QWORD *)this + 25);
    if ( v9 && *(_BYTE *)(v9 + 4) )
    {
      v70 = 0LL;
      v66 = 0LL;
      v71 = 18;
      v67 = 0LL;
      v72 = 0;
      v68 = 0LL;
      v69 = 0LL;
      LODWORD(v12) = *(_DWORD *)v9 - 1;
      if ( *(_DWORD *)v9 == 1 )
      {
        v13 = v80;
        v14 = (unsigned int)(v80 - 18);
        if ( (unsigned int)v14 <= 0x33 )
        {
          v12 = 0x8000400020001LL;
          if ( _bittest64(&v12, v14) )
            goto LABEL_14;
        }
        v61 = 2052;
      }
      else
      {
        if ( *(_DWORD *)v9 != 2 )
        {
          v8 = -2147467259;
          v61 = 2071;
LABEL_125:
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v8, v61, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v8, 0x2C7u, 0LL);
          goto LABEL_126;
        }
        v13 = v80;
        if ( v80 == 104 || v80 == 265 )
        {
LABEL_14:
          if ( v13 == 35 )
          {
            DWORD1(v66) = DWORD1(Buf1);
            v71 = 35;
LABEL_16:
            LODWORD(v66) = Buf1;
LABEL_17:
            v72 = 1;
          }
          else
          {
            switch ( v13 )
            {
              case 0xBu:
                v71 = 11;
                v72 = 1;
                Microsoft::WRL::ComPtr<CPathData>::operator=(&v70, v79);
                v13 = v80;
                break;
              case 0x11u:
                LOBYTE(v66) = Buf1;
                v71 = 17;
                goto LABEL_17;
              case 0x12u:
                goto LABEL_16;
              case 0x2Au:
                v71 = 42;
                goto LABEL_16;
              case 0x34u:
                *(_QWORD *)&v66 = Buf1;
                v71 = 52;
                DWORD2(v66) = DWORD2(Buf1);
                goto LABEL_17;
              case 0x45u:
                v66 = Buf1;
                v71 = 69;
                goto LABEL_17;
              case 0x46u:
                v66 = Buf1;
                v71 = 70;
                goto LABEL_17;
              case 0x47u:
                v66 = Buf1;
                v71 = 71;
                goto LABEL_17;
              case 0x68u:
                v66 = Buf1;
                *(_QWORD *)&v67 = v76;
                v71 = 104;
                goto LABEL_17;
              case 0x109u:
                v66 = Buf1;
                v67 = v76;
                v68 = v77;
                v69 = v78;
                v71 = 265;
                goto LABEL_17;
              default:
                break;
            }
          }
          if ( *(_BYTE *)(v9 + 4) )
          {
            ExpressionTypeChannelCount = GetExpressionTypeChannelCount(v13);
            while ( 1 )
            {
              if ( *(_DWORD *)v9 == 1 )
              {
                LOBYTE(v15) = 2 * (v15 - v16);
                LODWORD(v12) = v15 - 2;
                LODWORD(v18) = (*(unsigned __int8 *)(v9 + 8) >> (v15 - 2)) & 3;
              }
              else if ( *(_DWORD *)v9 == 2 )
              {
                LODWORD(v12) = 4 * ((unsigned __int8)v15 - v16) - 4;
                v18 = (*(_QWORD *)(v9 + 8) >> (4 * ((unsigned __int8)v15 - (unsigned __int8)v16) - 4)) & 0xFLL;
              }
              else
              {
                LODWORD(v18) = -1;
              }
              if ( (unsigned int)v18 >= ExpressionTypeChannelCount || (unsigned int)v18 >= 0x10 )
                break;
              v19 = v16++;
              LODWORD(v12) = v18;
              *((_DWORD *)&v66 + (unsigned int)v18) = *((_DWORD *)this + v19 + 18);
              LODWORD(v19) = *(unsigned __int8 *)(v9 + 4);
              v15 = (unsigned __int8)v19;
              if ( v16 >= (unsigned int)v19 )
                goto LABEL_25;
            }
            v8 = -2147467259;
            v61 = 2110;
            goto LABEL_125;
          }
LABEL_25:
          if ( !(unsigned __int8)CExpressionValue::operator==(&v66)
            || (*(unsigned __int8 (__fastcall **)(struct CResource *))(*(_QWORD *)a2 + 128LL))(a2) )
          {
            if ( v71 == 11 )
              v46 = v70;
            else
              v46 = &v66;
            v47 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _QWORD, __int128 *))(*(_QWORD *)a2 + 96LL))(
                    a2,
                    *((unsigned int *)this + 48),
                    v71,
                    v46);
            v8 = v47;
            if ( v47 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x2CBu, 0LL);
LABEL_126:
              Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v70);
              goto LABEL_7;
            }
            v5 = 1;
            if ( (*((_BYTE *)this + 232) & 4) != 0 )
            {
              AnimationLoggingManagerNoRef = CBaseExpression::GetAnimationLoggingManagerNoRef(this);
              CAnimationLoggingManager::LogDebugPropertyUpdate(
                AnimationLoggingManagerNoRef,
                a2,
                2LL,
                *((_QWORD *)this + 21),
                *((_DWORD *)this + 53),
                *((_DWORD *)this + 52),
                *((_DWORD *)this + 48),
                *((_QWORD *)this + 25),
                &v66);
            }
          }
          v20 = v70;
          if ( v70 )
          {
            v70 = 0LL;
            (*(void (__fastcall **)(__int128 *))(*(_QWORD *)v20 + 16LL))(v20);
          }
          if ( !v5 )
          {
LABEL_6:
            v8 = 0;
            goto LABEL_7;
          }
LABEL_36:
          if ( !(*(unsigned __int8 (__fastcall **)(CBaseExpression *, __int64))(*(_QWORD *)this + 56LL))(this, 92LL) )
            goto LABEL_6;
          v25 = *((_QWORD *)this + 6);
          if ( !v25 )
            goto LABEL_6;
          v26 = *(_QWORD *)(v25 + 64);
          if ( !v26 )
            goto LABEL_6;
          *(_QWORD *)&v73 = this;
          v27 = 0LL;
          if ( this )
          {
            v24 = *(_QWORD *)(v26 + 104);
            v28 = *(_QWORD *)(v26 + 120);
            v29 = *(_QWORD *)(v28
                            + 16
                            * ((0x100000001B3LL
                              * (BYTE7(v65) ^ (0x100000001B3LL
                                             * (BYTE6(v65) ^ (0x100000001B3LL
                                                            * (BYTE5(v65) ^ (0x100000001B3LL
                                                                           * (BYTE4(v65) ^ (0x100000001B3LL
                                                                                          * (BYTE3(v65) ^ (0x100000001B3LL * (BYTE2(v65) ^ (0x100000001B3LL * (BYTE1(v65) ^ (0x100000001B3LL * ((unsigned __int8)this ^ 0xCBF29CE484222325uLL)))))))))))))))) & *(_QWORD *)(v26 + 144))
                            + 8);
            if ( v29 == v24 )
            {
LABEL_87:
              v29 = 0LL;
            }
            else
            {
              v30 = *(_QWORD *)(v28
                              + 16
                              * ((0x100000001B3LL
                                * (BYTE7(v65) ^ (0x100000001B3LL
                                               * (BYTE6(v65) ^ (0x100000001B3LL
                                                              * (BYTE5(v65) ^ (0x100000001B3LL
                                                                             * (BYTE4(v65) ^ (0x100000001B3LL
                                                                                            * (BYTE3(v65) ^ (0x100000001B3LL * (BYTE2(v65) ^ (0x100000001B3LL * (BYTE1(v65) ^ (0x100000001B3LL * ((unsigned __int8)this ^ 0xCBF29CE484222325uLL)))))))))))))))) & *(_QWORD *)(v26 + 144)));
              while ( this != *(CBaseExpression **)(v29 + 16) )
              {
                if ( v29 == v30 )
                  goto LABEL_87;
                v29 = *(_QWORD *)(v29 + 8);
              }
            }
            if ( !v29 )
              goto LABEL_81;
            if ( v29 != v24 )
              v27 = (int *)(v29 + 24);
          }
          if ( v27 )
          {
LABEL_47:
            v31 = word_1803392B0;
            v32 = (wchar_t **)(v27 + 2);
            if ( *((_QWORD *)v27 + 3) )
            {
              v31 = (wchar_t *)(v27 + 2);
              if ( *((_QWORD *)v27 + 4) >= 8uLL )
                v31 = *v32;
            }
            if ( !*v31 )
            {
              if ( !*(_QWORD *)(v26 + 176) )
                goto LABEL_83;
              v31 = (wchar_t *)(v26 + 160);
              if ( *(_QWORD *)(v26 + 184) >= 8uLL )
                v31 = *(wchar_t **)v31;
              if ( !*v31 )
              {
LABEL_83:
                v50 = anonymous_namespace_::SynthesizeDescription((__int64)&v82, (__int64)this, v24);
                if ( v32 != (wchar_t **)v50 )
                {
                  std::wstring::_Tidy_deallocate((_QWORD *)v27 + 1);
                  *(_OWORD *)v32 = *(_OWORD *)v50;
                  *(_OWORD *)(v27 + 6) = *(_OWORD *)(v50 + 16);
                  *(_QWORD *)(v50 + 16) = 0LL;
                  *(_QWORD *)(v50 + 24) = 7LL;
                  *(_WORD *)v50 = 0;
                }
                std::wstring::_Tidy_deallocate(&v82);
                v31 = (wchar_t *)(v27 + 2);
                if ( *((_QWORD *)v27 + 4) >= 8uLL )
                  v31 = *v32;
              }
            }
            v33 = *v27;
            v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 160LL))(v26);
            v35 = qword_1803E2C80;
            DWORD2(v65) = v33;
            v83 = 0LL;
            v36 = *(_QWORD *)(v34 + 16);
            v37 = *((_QWORD *)qword_1803E2C80 + 5);
            *(_QWORD *)&v65 = v36;
            LODWORD(v63) = 0;
            v38 = v37 + 144;
            v39 = *(_QWORD *)(v37 + 144);
            v82 = v65;
            v40 = v39;
            v41 = *(_QWORD *)(v39 + 8);
            v62 = v41;
            while ( !*(_BYTE *)(v41 + 25) )
            {
              v62 = v41;
              if ( *(_QWORD *)(v41 + 32) >= v36 || *(_DWORD *)(v41 + 40) >= v33 )
              {
                v40 = v41;
                LODWORD(v63) = 1;
                v41 = *(_QWORD *)v41;
              }
              else
              {
                v41 = *(_QWORD *)(v41 + 16);
                LODWORD(v63) = 0;
              }
            }
            if ( *(_BYTE *)(v40 + 25) || v36 < *(_QWORD *)(v40 + 32) && v33 < *(_DWORD *)(v40 + 40) )
            {
              if ( *(_QWORD *)(v37 + 152) == 0x492492492492492LL )
                goto LABEL_128;
              v51 = std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void________std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____(
                      &v65,
                      v37 + 144,
                      v39,
                      &v82);
              v52 = *(_QWORD *)(v51 + 8);
              *(_QWORD *)(v51 + 8) = 0LL;
              if ( *((_QWORD *)&v65 + 1) )
                std::_Deallocate<16,0>(*((_QWORD *)&v65 + 1), 56LL);
              inserted = std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Insert_node(
                           v38,
                           &v62,
                           v52);
              v35 = qword_1803E2C80;
              v40 = inserted;
            }
            if ( v31 )
            {
              v42 = -1LL;
              do
                ++v42;
              while ( v31[v42] );
              if ( v42 && !*(_QWORD *)(v40 + 48) )
              {
                v56 = v35[5];
                std::wstring::wstring(&v82, (__int64)v31);
                v57 = *(_QWORD *)std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::insert<0,0>(
                                   v56 + 160,
                                   &v62,
                                   &v82)
                    + 32LL;
                std::wstring::_Tidy_deallocate(&v82);
                *(_QWORD *)(v40 + 48) = v57;
              }
            }
            v43 = *(_OWORD *)(v40 + 32);
            v74 = 0;
            v44 = qword_1803E2B50;
            DWORD2(v64) = 0;
            v45 = *(_QWORD *)(qword_1803E2B50 + 8);
            v73 = v43;
            *(_QWORD *)&v64 = v45;
            while ( !*(_BYTE *)(v45 + 25) )
            {
              *(_QWORD *)&v64 = v45;
              if ( *(_QWORD *)(v45 + 32) >= (unsigned __int64)v43 || *(_DWORD *)(v45 + 40) >= DWORD2(v43) )
              {
                v44 = v45;
                DWORD2(v64) = 1;
                v45 = *(_QWORD *)v45;
              }
              else
              {
                v45 = *(_QWORD *)(v45 + 16);
                DWORD2(v64) = 0;
              }
            }
            if ( !*(_BYTE *)(v44 + 25)
              && ((unsigned __int64)v43 >= *(_QWORD *)(v44 + 32) || DWORD2(v43) >= *(_DWORD *)(v44 + 40)) )
            {
              goto LABEL_69;
            }
            if ( qword_1803E2B58 != 0x492492492492492LL )
            {
              v54 = std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void________std::pair__anonymous_namespace_::AnimationId_unsigned_int___(
                      &v62,
                      &qword_1803E2B50,
                      qword_1803E2B50,
                      &v73);
              v55 = *(_QWORD *)(v54 + 8);
              *(_QWORD *)(v54 + 8) = 0LL;
              if ( v63 )
                std::_Deallocate<16,0>(v63, 56LL);
              v73 = v64;
              v44 = std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Insert_node(
                      &qword_1803E2B50,
                      &v73,
                      v55);
LABEL_69:
              ++*(_DWORD *)(v44 + 48);
              goto LABEL_6;
            }
LABEL_128:
            std::_Xlength_error("map/set too long");
          }
LABEL_81:
          v49 = *(_QWORD *)std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_Try_emplace<CResource * const &,>(
                             (float *)(v26 + 96),
                             (__int64)&v64,
                             (const unsigned __int8 *)&v73);
          ++*(_DWORD *)(v26 + 192);
          v27 = (int *)(v49 + 24);
          *v27 = *(_DWORD *)(v26 + 192);
          *(_DWORD *)(v73 + 32) |= 0x10u;
          goto LABEL_47;
        }
        v61 = 2061;
      }
      v8 = -2147024809;
      goto LABEL_125;
    }
    if ( (unsigned __int8)CExpressionValue::operator==(&Buf1)
      && !(*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 272LL))(this)
      && !(*(unsigned __int8 (__fastcall **)(struct CResource *))(*(_QWORD *)a2 + 128LL))(a2) )
    {
      goto LABEL_6;
    }
    if ( *((_DWORD *)this + 36) == 11 )
      v21 = (char *)*((_QWORD *)this + 17);
    else
      v21 = (char *)this + 72;
    v22 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _QWORD, char *))(*(_QWORD *)a2 + 96LL))(
            a2,
            *((unsigned int *)this + 48),
            *((unsigned int *)this + 38),
            v21);
    v8 = v22;
    if ( v22 >= 0 )
    {
      if ( (*((_BYTE *)this + 232) & 4) != 0 )
      {
        v60 = CBaseExpression::GetAnimationLoggingManagerNoRef(this);
        CAnimationLoggingManager::LogDebugPropertyUpdate(
          v60,
          a2,
          2LL,
          *((_QWORD *)this + 21),
          *((_DWORD *)this + 53),
          *((_DWORD *)this + 52),
          *((_DWORD *)this + 48),
          0LL,
          (char *)this + 72);
      }
      goto LABEL_36;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x2ABu, 0LL);
  }
LABEL_7:
  v10 = v79;
  if ( v79 )
  {
    v79 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v8;
}
