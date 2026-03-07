char *__fastcall detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  char *v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  _DWORD *v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // r9
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  void *v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  void *v20; // rbx
  char *v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  _DWORD *v24; // rsi
  void *v25; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+30h] [rbp-48h]
  _BYTE v28[32]; // [rsp+40h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( !((v5 - v2) >> 2) )
  {
    v14 = (v2 - *(_QWORD *)a1) >> 2;
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v16 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 2, v15);
    v17 = operator new(saturated_mul(v16, 4uLL));
    v18 = *((_QWORD *)a1 + 1);
    v19 = *(char **)a1;
    v20 = v17;
    v25 = v17;
    v26 = v14;
    v27 = 0LL;
    ((void (__fastcall *)(_BYTE *, char *, __int64, void **))std::move<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>)(
      v28,
      v19,
      v18,
      &v25);
    v21 = *(char **)a1;
    v22 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v20;
    if ( v22 )
      v21 = 0LL;
    operator delete(v21);
    v2 = *(_QWORD *)a1 + 4 * v14;
    v23 = *(_QWORD *)a1 + 4 * v16;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = v23;
  }
  v6 = *(char **)a1;
  v7 = (v2 - *(_QWORD *)a1) >> 2;
  v8 = v7 - a2;
  v9 = (_DWORD *)(*(_QWORD *)a1 + 4 * v7);
  if ( !v9 )
    goto LABEL_14;
  v10 = ((v2 - *(_QWORD *)a1) >> 2) - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  v11 = 4 * v10;
  v12 = (_DWORD *)(v2 - v11);
  if ( v2 != v2 - v11 )
  {
    v24 = (_DWORD *)(v2 - 4);
    *v9 = *v24;
    if ( v24 != v12 )
LABEL_14:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 1 )
  {
    if ( v7 && (!v6 || v7 < 0) )
      goto LABEL_14;
    v26 = v7;
    v27 = v7;
    v25 = v6;
    ((void (__fastcall *)(_BYTE *, char *, char *, void **))std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>)(
      v28,
      &v6[4 * a2],
      &v6[4 * v7 - 4],
      &v25);
  }
  *((_QWORD *)a1 + 1) += 4LL;
  return &v6[4 * a2];
}
