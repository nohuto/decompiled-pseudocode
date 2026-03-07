void __fastcall CVisualTreePath::AppendAncestorListAboveInnermostVisualTree(__int128 **a1, __int64 *a2)
{
  __int128 *v2; // rdi
  __int128 *v3; // rbx
  __int128 **v5; // r12
  char *v6; // rax
  __int128 v7; // xmm0
  int v8; // ebx
  _BYTE *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r15
  __int64 *v12; // rax
  __int64 v13; // r14
  __int64 v14; // r13
  _BYTE *v15; // r15
  __int64 v16; // rdi
  char *i; // rax
  _OWORD *v18; // rcx
  _QWORD *v19; // rdx
  _BYTE *v20; // r15
  __int64 v21; // rdi
  char *j; // rax
  _OWORD *v23; // rcx
  _BYTE *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdi
  _BYTE *v27; // r14
  char *k; // rax
  _OWORD *v29; // rcx
  _QWORD *v30; // rdx
  _BYTE *v31; // r14
  __int64 v32; // rdi
  char *m; // rax
  _OWORD *v34; // rcx
  _BYTE *v35; // rcx
  __int64 v36; // r8
  __int64 v38; // [rsp+28h] [rbp-61h]
  __int64 v39; // [rsp+30h] [rbp-59h] BYREF
  _BYTE *v40; // [rsp+38h] [rbp-51h] BYREF
  _BYTE *v41; // [rsp+40h] [rbp-49h]
  _BYTE **v42; // [rsp+48h] [rbp-41h]
  _BYTE v43[32]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE *v44; // [rsp+70h] [rbp-19h] BYREF
  _BYTE *v45; // [rsp+78h] [rbp-11h]
  __int64 *v46; // [rsp+80h] [rbp-9h]
  _BYTE v47[32]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v48; // [rsp+A8h] [rbp+1Fh] BYREF

  v2 = a1[1];
  v3 = *a1;
  v44 = v47;
  v5 = a1;
  v45 = v47;
  v46 = &v48;
  v6 = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
         (detail::liberal_expansion_policy *)&v44,
         0LL,
         v2 - v3);
  while ( v3 != v2 )
  {
    v7 = *v3++;
    *(_OWORD *)v6 = v7;
    v6 += 16;
  }
  v8 = v5[1] - *v5 - 1;
  if ( v8 > 0 )
  {
    v11 = v8;
    do
    {
      v12 = (__int64 *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::at(
                         v5,
                         v11--);
      v38 = v11;
      v13 = *v12;
      v14 = *(_QWORD *)(detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::at(
                          v5,
                          v11)
                      + 8);
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)&v44,
        (v45 - 16 - v44) >> 4,
        1LL);
      if ( v13 != *(_QWORD *)(v14 + 64) )
      {
        do
        {
          v15 = v45;
          v16 = (__int64)v44;
          v40 = v43;
          v39 = v13;
          v41 = v43;
          v42 = &v44;
          for ( i = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                      (detail::liberal_expansion_policy *)&v40,
                      0LL,
                      (v45 - v44) >> 4); ; i += 16 )
          {
            v18 = (_OWORD *)v16;
            if ( (_BYTE *)v16 == v15 )
              break;
            v16 += 16LL;
            *(_OWORD *)i = *v18;
          }
          v19 = (_QWORD *)a2[1];
          if ( v19 == (_QWORD *)a2[2] )
          {
            std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
              a2,
              (__int64)v19,
              &v39);
          }
          else
          {
            *v19 = v39;
            v19[1] = v19 + 4;
            v19[2] = v19 + 4;
            v19[3] = v19 + 8;
            v20 = v41;
            v21 = (__int64)v40;
            for ( j = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                        (detail::liberal_expansion_policy *)(v19 + 1),
                        0LL,
                        (v41 - v40) >> 4); ; j += 16 )
            {
              v23 = (_OWORD *)v21;
              if ( (_BYTE *)v21 == v20 )
                break;
              v21 += 16LL;
              *(_OWORD *)j = *v23;
            }
            a2[1] += 64LL;
          }
          v24 = v40;
          v25 = (v41 - v40) >> 4;
          if ( v25 )
          {
            detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
              (__int64 *)&v40,
              0LL,
              v25);
            v24 = v40;
          }
          v40 = 0LL;
          if ( v24 == v43 )
            v24 = 0LL;
          operator delete(v24);
          v13 = *(_QWORD *)(v13 + 88);
        }
        while ( v13 != *(_QWORD *)(v14 + 64) );
        v5 = a1;
        v11 = v38;
      }
      v26 = (__int64)v44;
      v40 = v43;
      v39 = v13;
      v27 = v45;
      v41 = v43;
      v42 = &v44;
      for ( k = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                  (detail::liberal_expansion_policy *)&v40,
                  0LL,
                  (v45 - v44) >> 4); ; k += 16 )
      {
        v29 = (_OWORD *)v26;
        if ( (_BYTE *)v26 == v27 )
          break;
        v26 += 16LL;
        *(_OWORD *)k = *v29;
      }
      v30 = (_QWORD *)a2[1];
      if ( v30 == (_QWORD *)a2[2] )
      {
        std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
          a2,
          (__int64)v30,
          &v39);
      }
      else
      {
        *v30 = v39;
        v30[1] = v30 + 4;
        v30[2] = v30 + 4;
        v30[3] = v30 + 8;
        v31 = v41;
        v32 = (__int64)v40;
        for ( m = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                    (detail::liberal_expansion_policy *)(v30 + 1),
                    0LL,
                    (v41 - v40) >> 4); ; m += 16 )
        {
          v34 = (_OWORD *)v32;
          if ( (_BYTE *)v32 == v31 )
            break;
          v32 += 16LL;
          *(_OWORD *)m = *v34;
        }
        a2[1] += 64LL;
      }
      v35 = v40;
      v36 = (v41 - v40) >> 4;
      if ( v36 )
      {
        detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
          (__int64 *)&v40,
          0LL,
          v36);
        v35 = v40;
      }
      v40 = 0LL;
      if ( v35 == v43 )
        v35 = 0LL;
      operator delete(v35);
      --v8;
    }
    while ( v8 > 0 );
  }
  v9 = v44;
  v10 = (v45 - v44) >> 4;
  if ( v10 )
  {
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v44,
      0LL,
      v10);
    v9 = v44;
  }
  v44 = 0LL;
  if ( v9 == v47 )
    v9 = 0LL;
  operator delete(v9);
}
