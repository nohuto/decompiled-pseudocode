/*
 * XREFs of ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x1803D76C4
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18005D378 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1803D9ED0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1803D6F6C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_1803D6F6C.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1803D7014 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_1803D7014.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        struct Windows::Foundation::Point *a2,
        unsigned int a3)
{
  __int64 *v3; // rsi
  __int64 *v4; // rbx
  __int64 *v5; // rdi
  __int64 v7; // r9
  __m128 v8; // xmm7
  __m128 v9; // xmm4
  float v10; // xmm8_4
  float v11; // xmm7_4
  __int64 *v12; // rax
  float v13; // xmm3_4
  bool v14; // zf
  __int64 **v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rax
  float v19; // xmm6_4
  __int64 v20; // rbx
  float v21; // xmm6_4
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  float v26; // xmm0_4
  unsigned int *v27; // [rsp+38h] [rbp-29h] BYREF
  __int128 v28; // [rsp+40h] [rbp-21h] BYREF
  __int64 v29; // [rsp+50h] [rbp-11h] BYREF
  __int128 v30; // [rsp+58h] [rbp-9h]
  unsigned int v31; // [rsp+D8h] [rbp+77h] BYREF

  v31 = a3;
  v3 = (__int64 *)((char *)this + 480);
  v4 = (__int64 *)*((_QWORD *)this + 60);
  v5 = (__int64 *)((char *)this + 464);
  v7 = *((_BYTE *)this + 500) != 0 ? 0x30 : 0;
  v8 = *(__m128 *)((char *)this + v7 + 232);
  v9 = *(__m128 *)((char *)this + v7 + 248);
  v10 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
  v11 = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
  v12 = (__int64 *)v4[1];
  v13 = (float)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)((char *)this + v7 + 264), 8));
  v14 = *((_BYTE *)v12 + 25) == 0;
  *((float *)&v28 + 1) = (float)(v11 * v13) / 100.0;
  *(float *)&v28 = (float)(v13 * v10) / 100.0;
  *((float *)&v28 + 3) = (float)(_mm_shuffle_ps(v9, v9, 85).m128_f32[0] * v13) / 100.0;
  *((float *)&v28 + 2) = (float)(v9.m128_f32[0] * v13) / 100.0;
  v30 = v28;
  if ( !v14 )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v12 + 7) >= a3 )
    {
      v4 = v12;
      v12 = (__int64 *)*v12;
    }
    else
    {
      v12 = (__int64 *)v12[2];
    }
  }
  while ( !*((_BYTE *)v12 + 25) );
  if ( v4 == (__int64 *)*v3 || a3 < *((_DWORD *)v4 + 7) )
  {
LABEL_8:
    v27 = &v31;
    v15 = (__int64 **)std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                        (__int64 *)this + 60,
                        &v29,
                        v4,
                        v7,
                        &v27);
    a3 = v31;
    v4 = *v15;
  }
  v16 = *v5;
  v17 = *(_QWORD *)(*v5 + 8);
  if ( *(_BYTE *)(v17 + 25) )
    goto LABEL_16;
  do
  {
    if ( *(_DWORD *)(v17 + 28) >= a3 )
    {
      v16 = v17;
      v17 = *(_QWORD *)v17;
    }
    else
    {
      v17 = *(_QWORD *)(v17 + 16);
    }
  }
  while ( !*(_BYTE *)(v17 + 25) );
  if ( v16 == *v5 || a3 < *(_DWORD *)(v16 + 28) )
  {
LABEL_16:
    v27 = &v31;
    v18 = std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
            v5,
            &v28,
            (__int64 *)v16,
            v7,
            &v27);
    a3 = v31;
    v16 = *v18;
  }
  v19 = *((float *)&v30 + 2) - *((float *)v4 + 8);
  v20 = *v3;
  v21 = v19 * *(float *)(v16 + 32);
  v22 = *(_QWORD *)(*v3 + 8);
  if ( *(_BYTE *)(v22 + 25) )
    goto LABEL_24;
  do
  {
    if ( *(_DWORD *)(v22 + 28) >= a3 )
    {
      v20 = v22;
      v22 = *(_QWORD *)v22;
    }
    else
    {
      v22 = *(_QWORD *)(v22 + 16);
    }
  }
  while ( !*(_BYTE *)(v22 + 25) );
  if ( v20 == *v3 || a3 < *(_DWORD *)(v20 + 28) )
  {
LABEL_24:
    v27 = &v31;
    v23 = std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
            v3,
            &v28,
            (__int64 *)v20,
            v7,
            &v27);
    a3 = v31;
    v20 = *v23;
  }
  v24 = *v5;
  v25 = *(_QWORD *)(*v5 + 8);
  if ( *(_BYTE *)(v25 + 25) )
    goto LABEL_32;
  do
  {
    if ( *(_DWORD *)(v25 + 28) >= a3 )
    {
      v24 = v25;
      v25 = *(_QWORD *)v25;
    }
    else
    {
      v25 = *(_QWORD *)(v25 + 16);
    }
  }
  while ( !*(_BYTE *)(v25 + 25) );
  if ( v24 == *v5 || a3 < *(_DWORD *)(v24 + 28) )
  {
LABEL_32:
    v27 = &v31;
    v24 = *std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
             v5,
             &v29,
             (__int64 *)v24,
             v7,
             &v27);
  }
  v26 = (float)(*((float *)&v30 + 3) - *(float *)(v20 + 36)) * *(float *)(v24 + 36);
  *(float *)a2 = v21 + v10;
  *((float *)a2 + 1) = v26 + v11;
}
