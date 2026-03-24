/*
 * XREFs of ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180074560
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180073B10 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1801DA470 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::SynthesizeDescription @ 0x18001BF5C (_anonymous_namespace_--SynthesizeDescription.c)
 *     ??$_Try_emplace@AEBQEAVCResource@@$$V@?$unordered_map@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@5@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@std@@_N@1@AEBQEAVCResource@@@Z @ 0x180034018 (--$_Try_emplace@AEBQEAVCResource@@$$V@-$unordered_map@PEAVCResource@@UResourceDebugInfo@CAnimati.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18003454C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180035058 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Insert_nohint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x180035F68 (--$_Insert_nohint@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U_Not_a_node_tag.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180074D00 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x1800A91E0 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800CFE58 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0xd20_ea_1800CFE58.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____std::_Not_a_node_tag_ @ 0x1800D8FF8 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_unsigned_short.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x1801B04E8 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x1801D9ADC (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValueOnTarget(unsigned __int64 this, struct CResource *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 (__fastcall *v6)(struct CResource *, __int64, _OWORD *); // rax
  char v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // rsi
  __int64 v12; // rcx
  char *v14; // r9
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // r8
  _QWORD *v20; // r10
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  _QWORD *v23; // r11
  __int64 v24; // rdx
  _QWORD *i; // rax
  _QWORD *v26; // rcx
  wchar_t *v27; // rdi
  unsigned int v28; // ebx
  __int64 v29; // rax
  int v30; // r8d
  unsigned __int64 v31; // rcx
  __int64 v32; // r10
  _QWORD *v33; // rdx
  _QWORD *v34; // r9
  __int64 *v35; // rax
  _QWORD *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // r8d
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 j; // rax
  __int64 m; // rax
  int v50; // eax
  __int64 v51; // rcx
  _BYTE *v52; // r9
  int v53; // eax
  __int64 v54; // rcx
  _BYTE *v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // r8
  __int64 v58; // rax
  struct CAnimationLoggingManager *AnimationLoggingManagerNoRef; // rax
  _BYTE *v60; // rcx
  struct CAnimationLoggingManager *v61; // rax
  __int64 k; // rax
  __int64 n; // rax
  int v64; // [rsp+20h] [rbp-E0h]
  char v65; // [rsp+50h] [rbp-B0h]
  __int64 v66; // [rsp+58h] [rbp-A8h]
  __int64 v67; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v68[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v69; // [rsp+78h] [rbp-88h] BYREF
  __int128 v70; // [rsp+88h] [rbp-78h] BYREF
  __int64 v71; // [rsp+98h] [rbp-68h]
  _BYTE v72[64]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v73; // [rsp+F0h] [rbp-10h]
  unsigned int v74; // [rsp+F8h] [rbp-8h]
  char v75; // [rsp+FCh] [rbp-4h]
  _OWORD Buf1[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v77; // [rsp+140h] [rbp+40h]
  int v78; // [rsp+148h] [rbp+48h]
  char v79; // [rsp+14Ch] [rbp+4Ch]

  v77 = 0LL;
  v79 = 0;
  v2 = *(_QWORD *)a2;
  v4 = *(unsigned int *)(this + 184);
  memset(Buf1, 0, sizeof(Buf1));
  v6 = *(__int64 (__fastcall **)(struct CResource *, __int64, _OWORD *))(v2 + 144);
  v7 = 0;
  v78 = 18;
  v8 = v6(a2, v4, Buf1);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x22Fu, 0LL);
  }
  else
  {
    v11 = *(_QWORD *)(this + 192);
    if ( v11 && *(_BYTE *)(v11 + 4) )
    {
      memset_0(v72, 0, sizeof(v72));
      v73 = 0LL;
      v74 = 18;
      v75 = 0;
      v50 = CBaseExpression::MergeValueWithMask(
              (const struct CExpressionValue *)Buf1,
              (const struct CExpressionValue *)(this + 64),
              (const struct SubchannelMaskInfo *)v11,
              (struct CExpressionValue *)v72);
      v10 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x252u, 0LL);
      }
      else
      {
        if ( (unsigned __int8)CExpressionValue::operator==(v72)
          && !(*(unsigned __int8 (__fastcall **)(struct CResource *))(*(_QWORD *)a2 + 136LL))(a2) )
        {
          goto LABEL_93;
        }
        if ( v74 == 11 )
          v52 = v73;
        else
          v52 = v72;
        v53 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)a2 + 96LL))(
                a2,
                *(unsigned int *)(this + 184),
                v74,
                v52);
        v10 = v53;
        if ( v53 >= 0 )
        {
          v7 = 1;
          if ( (*(_BYTE *)(this + 208) & 0x40) != 0 )
          {
            AnimationLoggingManagerNoRef = CBaseExpression::GetAnimationLoggingManagerNoRef((CBaseExpression *)this);
            v64 = *(_DWORD *)(this + 204);
            CAnimationLoggingManager::LogDebugPropertyUpdate(
              AnimationLoggingManagerNoRef,
              a2,
              2LL,
              *(_QWORD *)(this + 160));
          }
LABEL_93:
          v55 = v73;
          if ( v73 )
          {
            v73 = 0LL;
            (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v55 + 16LL))(v55);
          }
          if ( !v7 )
            goto LABEL_6;
LABEL_15:
          *(_QWORD *)&v69 = this >> 8;
          if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)this + 56LL))(this, 90LL) )
            goto LABEL_6;
          v17 = *(_QWORD *)(this + 48);
          if ( !v17 )
            goto LABEL_6;
          v18 = *(_QWORD *)(v17 + 56);
          v67 = v18;
          if ( !v18 )
            goto LABEL_6;
          v19 = 0LL;
          v68[0] = this;
          v66 = 0LL;
          if ( this )
          {
            v20 = *(_QWORD **)(v18 + 96);
            v21 = *(_QWORD *)(v18 + 112);
            v22 = 16
                * ((0x100000001B3LL
                  * (HIBYTE(this) ^ (0x100000001B3LL
                                   * (BYTE6(this) ^ (0x100000001B3LL
                                                   * (BYTE5(this) ^ (0x100000001B3LL
                                                                   * (BYTE4(this) ^ (0x100000001B3LL
                                                                                   * (BYTE3(this) ^ (0x100000001B3LL * (BYTE2(this) ^ (0x100000001B3LL * ((unsigned __int8)v69 ^ (0x100000001B3LL * ((unsigned __int8)this ^ 0xCBF29CE484222325uLL)))))))))))))))) & *(_QWORD *)(v18 + 136));
            v23 = *(_QWORD **)(v21 + v22);
            v24 = v21 + v22;
            for ( i = v23; ; i = (_QWORD *)*i )
            {
              v26 = v23 == v20 ? *(_QWORD **)(v18 + 96) : **(_QWORD ***)(v24 + 8);
              if ( i == v26 )
                break;
              if ( i[2] == this )
                goto LABEL_25;
            }
            i = *(_QWORD **)(v18 + 96);
LABEL_25:
            if ( i != v20 )
            {
              v19 = (__int64)(i + 3);
              v66 = (__int64)(i + 3);
            }
          }
          if ( !v19 )
          {
            std::unordered_map<CResource *,CAnimationLoggingManager::ResourceDebugInfo>::_Try_emplace<CResource * const &,>(
              (_QWORD *)(v18 + 88),
              (__int64)&v69,
              v68);
            v18 = v67;
            v19 = v69 + 24;
            v66 = v69 + 24;
            ++*(_DWORD *)(v67 + 184);
            *(_DWORD *)v19 = *(_DWORD *)(v18 + 184);
            *(_DWORD *)(v68[0] + 32LL) |= 0x10u;
          }
          v27 = word_1802CE8C0;
          if ( *(_QWORD *)(v19 + 24) )
          {
            v27 = (wchar_t *)(v19 + 8);
            if ( *(_QWORD *)(v19 + 32) >= 8uLL )
              v27 = *(wchar_t **)v27;
          }
          if ( !*v27 )
          {
            if ( !*(_QWORD *)(v18 + 168) )
              goto LABEL_65;
            v27 = (wchar_t *)(v18 + 152);
            if ( *(_QWORD *)(v18 + 176) >= 8uLL )
              v27 = *(wchar_t **)v27;
            if ( !*v27 )
            {
LABEL_65:
              v47 = anonymous_namespace_::SynthesizeDescription((__int64)&v70, this, v19);
              v27 = (wchar_t *)(v66 + 8);
              if ( v66 + 8 != v47 )
              {
                std::wstring::_Tidy_deallocate((_QWORD *)(v66 + 8));
                *(_OWORD *)v27 = *(_OWORD *)v47;
                *(_OWORD *)(v66 + 24) = *(_OWORD *)(v47 + 16);
                *(_QWORD *)(v47 + 16) = 0LL;
                *(_QWORD *)(v47 + 24) = 7LL;
                *(_WORD *)v47 = 0;
              }
              std::wstring::_Tidy_deallocate(&v70);
              if ( *(_QWORD *)(v66 + 32) >= 8uLL )
                v27 = *(wchar_t **)v27;
              v19 = v66;
              v18 = v67;
            }
          }
          v28 = *(_DWORD *)v19;
          v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 168LL))(v18);
          DWORD2(v69) = v28;
          LOBYTE(v30) = 1;
          v71 = 0LL;
          v31 = *(_QWORD *)(v29 + 16);
          *(_QWORD *)&v69 = v31;
          v32 = *((_QWORD *)qword_180347460 + 5);
          v70 = v69;
          v33 = *(_QWORD **)(v32 + 144);
          v34 = v33;
          v35 = (__int64 *)v33[1];
          while ( !*((_BYTE *)v35 + 25) )
          {
            v34 = v35;
            if ( v31 >= v35[4] || v28 >= *((_DWORD *)v35 + 10) )
            {
              v35 = (__int64 *)v35[2];
              LOBYTE(v30) = 0;
            }
            else
            {
              v35 = (__int64 *)*v35;
              LOBYTE(v30) = 1;
            }
          }
          v36 = v34;
          if ( (_BYTE)v30 )
          {
            if ( v34 == (_QWORD *)*v33 )
            {
              LOBYTE(v30) = 1;
              v45 = (__int64 *)&v69;
              goto LABEL_98;
            }
            if ( *((_BYTE *)v34 + 25) )
            {
              v36 = (_QWORD *)v34[2];
            }
            else if ( *(_BYTE *)(*v34 + 25LL) )
            {
              for ( j = v34[1]; !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 8) )
              {
                if ( v36 != *(_QWORD **)j )
                  break;
                v36 = (_QWORD *)j;
              }
              if ( !*((_BYTE *)v36 + 25) )
                v36 = (_QWORD *)j;
            }
            else
            {
              v36 = (_QWORD *)*v34;
              for ( k = *(_QWORD *)(*v34 + 16LL); !*(_BYTE *)(k + 25); k = *(_QWORD *)(k + 16) )
                v36 = (_QWORD *)k;
            }
          }
          if ( v36[4] >= v31 || *((_DWORD *)v36 + 10) >= v28 )
            goto LABEL_39;
          v45 = &v67;
LABEL_98:
          v36 = *(_QWORD **)std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____std::_Not_a_node_tag_(
                              (int)v32 + 136,
                              (_DWORD)v45,
                              v30,
                              (_DWORD)v34,
                              (__int64)&v70);
LABEL_39:
          if ( v27 )
          {
            v37 = -1LL;
            do
              ++v37;
            while ( v27[v37] );
            if ( v37 && !v36[6] )
            {
              v56 = *((_QWORD *)qword_180347460 + 5);
              std::wstring::wstring(&v70, (__int64)v27);
              LOBYTE(v64) = v65;
              std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_nohint<std::wstring,std::_Not_a_node_tag>(
                v56 + 160,
                (__int64)v68,
                v57,
                (char *)&v70);
              std::wstring::_Tidy_deallocate(&v70);
              v36[6] = v68[0] + 32LL;
            }
          }
          v38 = qword_1803473E0;
          v69 = *((_OWORD *)v36 + 2);
          v39 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
          v40 = v39;
          LOBYTE(v41) = 1;
          *(_OWORD *)(v39 + 32) = v69;
          *(_DWORD *)(v39 + 48) = 0;
          *(_QWORD *)v39 = v38;
          *(_QWORD *)(v39 + 8) = v38;
          *(_QWORD *)(v39 + 16) = v38;
          *(_WORD *)(v39 + 24) = 0;
          v42 = qword_1803473E0;
          v43 = *(_QWORD *)(qword_1803473E0 + 8);
          while ( !*(_BYTE *)(v43 + 25) )
          {
            v42 = v43;
            if ( *(_QWORD *)(v39 + 32) >= *(_QWORD *)(v43 + 32) || *(_DWORD *)(v39 + 40) >= *(_DWORD *)(v43 + 40) )
            {
              v43 = *(_QWORD *)(v43 + 16);
              LOBYTE(v41) = 0;
            }
            else
            {
              v43 = *(_QWORD *)v43;
              LOBYTE(v41) = 1;
            }
          }
          v44 = v42;
          if ( !(_BYTE)v41 )
            goto LABEL_50;
          if ( v42 != *(_QWORD *)qword_1803473E0 )
          {
            if ( *(_BYTE *)(v42 + 25) )
            {
              v44 = *(_QWORD *)(v42 + 16);
            }
            else if ( *(_BYTE *)(*(_QWORD *)v42 + 25LL) )
            {
              for ( m = *(_QWORD *)(v42 + 8); !*(_BYTE *)(m + 25); m = *(_QWORD *)(m + 8) )
              {
                if ( v44 != *(_QWORD *)m )
                  break;
                v44 = m;
              }
              if ( !*(_BYTE *)(v44 + 25) )
                v44 = m;
            }
            else
            {
              v44 = *(_QWORD *)v42;
              for ( n = *(_QWORD *)(*(_QWORD *)v42 + 16LL); !*(_BYTE *)(n + 25); n = *(_QWORD *)(n + 16) )
                v44 = n;
            }
LABEL_50:
            if ( *(_QWORD *)(v44 + 32) >= *(_QWORD *)(v40 + 32) || *(_DWORD *)(v44 + 40) >= *(_DWORD *)(v40 + 40) )
            {
              operator delete((void *)v40);
              ++*(_DWORD *)(v44 + 48);
            }
            else
            {
              v58 = std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______(
                      (unsigned int)&unk_1803473D8,
                      (unsigned int)&v67,
                      v41,
                      v42,
                      v64,
                      v40);
              ++*(_DWORD *)(*(_QWORD *)v58 + 48LL);
            }
            goto LABEL_6;
          }
          LOBYTE(v41) = 1;
          v46 = std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______(
                  (unsigned int)&unk_1803473D8,
                  (unsigned int)&v69,
                  v41,
                  v42,
                  v64,
                  v39);
          ++*(_DWORD *)(*(_QWORD *)v46 + 48LL);
LABEL_6:
          v10 = 0;
          goto LABEL_7;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x256u, 0LL);
      }
      v60 = v73;
      if ( v73 )
      {
        v73 = 0LL;
        (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v60 + 16LL))(v60);
      }
    }
    else
    {
      if ( (unsigned __int8)CExpressionValue::operator==(Buf1)
        && !(*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)this + 272LL))(this)
        && !(*(unsigned __int8 (__fastcall **)(struct CResource *))(*(_QWORD *)a2 + 136LL))(a2) )
      {
        goto LABEL_6;
      }
      if ( *(_DWORD *)(this + 136) == 11 )
        v14 = *(char **)(this + 128);
      else
        v14 = (char *)(this + 64);
      v15 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _QWORD, char *))(*(_QWORD *)a2 + 96LL))(
              a2,
              *(unsigned int *)(this + 184),
              *(unsigned int *)(this + 144),
              v14);
      v10 = v15;
      if ( v15 >= 0 )
      {
        if ( (*(_BYTE *)(this + 208) & 0x40) != 0 )
        {
          v61 = CBaseExpression::GetAnimationLoggingManagerNoRef((CBaseExpression *)this);
          v64 = *(_DWORD *)(this + 204);
          CAnimationLoggingManager::LogDebugPropertyUpdate(v61, a2, 2LL, *(_QWORD *)(this + 160));
        }
        goto LABEL_15;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x236u, 0LL);
    }
  }
LABEL_7:
  v12 = v77;
  if ( v77 )
  {
    v77 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v10;
}
