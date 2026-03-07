char *__fastcall detail::vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  char *v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  _QWORD *v9; // r10
  __int64 v10; // rax
  _QWORD *v11; // r9
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdi
  LPVOID v16; // rax
  __int64 v17; // r8
  char *v18; // rdx
  LPVOID v19; // rbx
  char *v20; // rcx
  bool v21; // zf
  __int64 v22; // rax
  _QWORD *v23; // rsi
  LPVOID v24; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+30h] [rbp-48h]
  _BYTE v27[32]; // [rsp+40h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( !((v5 - v2) >> 3) )
  {
    v13 = (v2 - *(_QWORD *)a1) >> 3;
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v15 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 3, v14);
    v16 = operator new(saturated_mul(v15, 8uLL));
    v17 = *((_QWORD *)a1 + 1);
    v18 = *(char **)a1;
    v19 = v16;
    v24 = v16;
    v25 = v13;
    v26 = 0LL;
    ((void (__fastcall *)(_BYTE *, char *, __int64, LPVOID *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
      v27,
      v18,
      v17,
      &v24);
    v20 = *(char **)a1;
    v21 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v19;
    if ( v21 )
      v20 = 0LL;
    operator delete(v20);
    v2 = *(_QWORD *)a1 + 8 * v13;
    v22 = *(_QWORD *)a1 + 8 * v15;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = v22;
  }
  v6 = *(char **)a1;
  v7 = (v2 - *(_QWORD *)a1) >> 3;
  v8 = v7 - a2;
  v9 = (_QWORD *)(*(_QWORD *)a1 + 8 * v7);
  if ( !v9 )
    goto LABEL_14;
  v10 = ((v2 - *(_QWORD *)a1) >> 3) - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  v11 = (_QWORD *)(v2 - 8 * v10);
  if ( (_QWORD *)v2 != v11 )
  {
    v23 = (_QWORD *)(v2 - 8);
    *v9 = *v23;
    if ( v23 != v11 )
LABEL_14:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 1 )
  {
    if ( v7 && (!v6 || v7 < 0) )
      goto LABEL_14;
    v25 = v7;
    v26 = v7;
    v24 = v6;
    ((void (__fastcall *)(_BYTE *, char *, char *, LPVOID *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      v27,
      &v6[8 * a2],
      &v6[8 * v7 - 8],
      &v24);
  }
  *((_QWORD *)a1 + 1) += 8LL;
  return &v6[8 * a2];
}
