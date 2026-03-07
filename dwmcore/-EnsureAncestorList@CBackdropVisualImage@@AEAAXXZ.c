void __fastcall CBackdropVisualImage::EnsureAncestorList(CBackdropVisualImage *this)
{
  _QWORD *v1; // r12
  CBackdropVisualImage *v2; // rdi
  detail::liberal_expansion_policy *v3; // rcx
  __int64 v4; // r13
  __int128 **v5; // rsi
  __int128 *v6; // rdi
  __int128 *v7; // rbx
  __int128 *v8; // r15
  __int128 *v9; // rdx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  __int128 *v12; // r10
  __int64 v13; // r8
  _OWORD *v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // r8
  __int128 *v17; // rax
  _QWORD *v18; // rdx
  _BYTE *v19; // rdi
  _OWORD *v20; // rbx
  _OWORD *i; // rax
  _OWORD *v22; // rcx
  _BYTE *v23; // rbx
  __int64 v24; // rax
  __int128 *v25; // rdi
  __int128 *v26; // rbx
  _OWORD *v27; // rax
  _QWORD *v28; // rdx
  __int128 *v29; // rdi
  __int128 *v30; // rbx
  _OWORD *v31; // rax
  _BYTE *v32; // rcx
  __int64 v33; // r8
  __int128 v34; // xmm0
  __int128 v35; // xmm0
  unsigned __int64 v36; // rsi
  SIZE_T v37; // r9
  SIZE_T v38; // rax
  void *v39; // rbx
  void *v40; // rcx
  bool v41; // zf
  __int128 *v42; // r11
  signed __int64 v43; // r9
  HANDLE ProcessHeap; // rax
  detail::liberal_expansion_policy *v46; // [rsp+28h] [rbp-61h]
  __int128 **v47; // [rsp+30h] [rbp-59h]
  _QWORD v48[4]; // [rsp+40h] [rbp-49h] BYREF
  char v49[24]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v50; // [rsp+78h] [rbp-11h] BYREF
  LPVOID lpMem; // [rsp+80h] [rbp-9h] BYREF
  _BYTE *v52; // [rsp+88h] [rbp-1h]
  char *v53; // [rsp+90h] [rbp+7h]
  _BYTE Src[32]; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v55; // [rsp+B8h] [rbp+2Fh] BYREF

  v1 = (_QWORD *)((char *)this + 1960);
  v2 = this;
  std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
    *((_QWORD *)this + 245),
    *((_QWORD *)this + 246));
  v1[1] = *v1;
  v3 = *(detail::liberal_expansion_policy **)(*((_QWORD *)v2 + 225) - 8LL);
  v46 = v3;
  v4 = *(_QWORD *)(*((_QWORD *)v2 + 223) + 88LL);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = (__int128 **)((char *)v2 + 1792);
      v47 = (__int128 **)((char *)v2 + 1792);
      v50 = v4;
      if ( v4 == *((_QWORD *)v3 + 8) )
        break;
      v6 = (__int128 *)*((_QWORD *)v2 + 225);
      v7 = (__int128 *)Src;
      v8 = *v5;
      v9 = Src;
      lpMem = Src;
      v52 = Src;
      v10 = v6 - v8;
      v53 = (char *)&v55;
      if ( v10 > 2 )
      {
        v36 = detail::liberal_expansion_policy::expand(v3, 2uLL, v6 - v8);
        v38 = 16 * v36;
        if ( !is_mul_ok(v36, 0x10uLL) )
          v38 = v37;
        v39 = operator new(v38);
        v48[0] = v39;
        v48[1] = 0LL;
        v48[2] = 0LL;
        std::move<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
          v49,
          lpMem,
          v52,
          v48);
        v40 = lpMem;
        v41 = lpMem == Src;
        lpMem = v39;
        if ( v41 )
          v40 = 0LL;
        operator delete(v40);
        v7 = (__int128 *)lpMem;
        v9 = lpMem;
        v52 = lpMem;
        v53 = (char *)lpMem + 16 * v36;
      }
      v11 = v9 - v7;
      v12 = &v7[v11];
      if ( v10 && (!v12 || (v10 & 0x8000000000000000uLL) != 0LL) )
LABEL_45:
        _invalid_parameter_noinfo_noreturn();
      if ( v10 < v11 )
        v13 = v6 - v8;
      else
        v13 = v9 - v7;
      v14 = &v9[-v13];
      v15 = v10;
      v16 = v6 - v8;
      if ( v9 != v14 )
      {
        v42 = &v12[v15];
        do
        {
          --v9;
          if ( !v12 )
            goto LABEL_45;
          if ( !v16 )
            goto LABEL_45;
          --v16;
          --v42;
          if ( v16 >= v10 )
            goto LABEL_45;
          *v42 = *v9;
        }
        while ( v9 != v14 );
        v9 = v52;
      }
      if ( v11 > v10 )
      {
        if ( v11 && (!v7 || (v11 & 0x8000000000000000uLL) != 0LL) )
          goto LABEL_45;
        v43 = 16 * v11 - v15 * 16;
        if ( v43 >> 4 > 0 && v11 < v43 >> 4 )
          goto LABEL_45;
        if ( v43 >> 4 < 0 )
          goto LABEL_45;
        memmove_0(&v7[v15], v7, v43);
        v9 = v52;
      }
      v52 = &v9[v15];
      while ( 1 )
      {
        v17 = v8;
        if ( v8 == v6 )
          break;
        ++v8;
        *v7++ = *v17;
      }
      v18 = (_QWORD *)v1[1];
      if ( v18 == (_QWORD *)v1[2] )
      {
        std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
          v1,
          v18,
          &v50);
      }
      else
      {
        *v18 = v50;
        v18[1] = v18 + 4;
        v18[2] = v18 + 4;
        v18[3] = v18 + 8;
        v19 = v52;
        v20 = lpMem;
        for ( i = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                              v18 + 1,
                              0LL,
                              (v52 - (_BYTE *)lpMem) >> 4); ; ++i )
        {
          v22 = v20;
          if ( v20 == (_OWORD *)v19 )
            break;
          ++v20;
          *i = *v22;
        }
        v1[1] += 64LL;
      }
      v23 = lpMem;
      v24 = (v52 - (_BYTE *)lpMem) >> 4;
      if ( v24 )
        v52 -= 16 * v24;
      lpMem = 0LL;
      if ( v23 != Src && v23 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v23);
      }
      v4 = *(_QWORD *)(v4 + 88);
      if ( !v4 )
      {
        v5 = v47;
        goto LABEL_35;
      }
      v2 = this;
      v3 = v46;
    }
    v25 = (__int128 *)*((_QWORD *)v2 + 225);
    v26 = *v5;
    lpMem = Src;
    v52 = Src;
    v53 = (char *)&v55;
    v27 = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                      &lpMem,
                      0LL,
                      v25 - v26);
    while ( v26 != v25 )
    {
      v34 = *v26++;
      *v27++ = v34;
    }
    v28 = (_QWORD *)v1[1];
    if ( v28 == (_QWORD *)v1[2] )
    {
      std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
        v1,
        v28,
        &v50);
    }
    else
    {
      *v28 = v50;
      v28[1] = v28 + 4;
      v28[2] = v28 + 4;
      v28[3] = v28 + 8;
      v29 = (__int128 *)v52;
      v30 = (__int128 *)lpMem;
      v31 = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                        v28 + 1,
                        0LL,
                        (v52 - (_BYTE *)lpMem) >> 4);
      while ( v30 != v29 )
      {
        v35 = *v30++;
        *v31++ = v35;
      }
      v1[1] += 64LL;
    }
    v32 = lpMem;
    v33 = (v52 - (_BYTE *)lpMem) >> 4;
    if ( v33 )
    {
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)&lpMem,
        0LL,
        v33);
      v32 = lpMem;
    }
    lpMem = 0LL;
    if ( v32 == Src )
      v32 = 0LL;
    operator delete(v32);
  }
  else
  {
    v5 = (__int128 **)((char *)v2 + 1792);
  }
LABEL_35:
  CVisualTreePath::AppendAncestorListAboveInnermostVisualTree(v5, v1);
}
