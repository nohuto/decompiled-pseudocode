char *__fastcall detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // r13
  __int64 v5; // rdx
  char *v6; // rbp
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdi
  LPVOID v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  LPVOID v21; // rbx
  void *v22; // rcx
  bool v23; // zf
  LPVOID v24; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-70h]
  __int64 v26; // [rsp+30h] [rbp-68h]
  _BYTE v27[88]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+B0h] [rbp+18h]

  v2 = *((_QWORD *)a1 + 1);
  v3 = a2;
  v5 = *((_QWORD *)a1 + 2);
  if ( !((__int64)(v5 - v2) >> 6) )
  {
    v15 = (__int64)(v2 - *(_QWORD *)a1) >> 6;
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v17 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 6, v16);
    v18 = operator new(saturated_mul(v17, 0x40uLL));
    v19 = *((_QWORD *)a1 + 1);
    v20 = *(_QWORD *)a1;
    v21 = v18;
    v24 = v18;
    v25 = v15;
    v26 = 0LL;
    ((void (__fastcall *)(_BYTE *, __int64, __int64, LPVOID *))std::uninitialized_move<std::move_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>,stdext::checked_array_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>>)(
      v27,
      v20,
      v19,
      &v24);
    detail::destruct_range<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>(
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 1));
    v22 = *(void **)a1;
    v23 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v21;
    if ( v23 )
      v22 = 0LL;
    operator delete(v22);
    v2 = *(_QWORD *)a1 + (v15 << 6);
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + (v17 << 6);
    *((_QWORD *)a1 + 1) = v2;
  }
  v6 = *(char **)a1;
  v7 = (__int64)(v2 - *(_QWORD *)a1) >> 6;
  v8 = v7 - v3;
  v9 = *(_QWORD *)a1 + (v7 << 6);
  if ( !v9 )
    goto LABEL_22;
  v10 = v7 - v3;
  if ( v8 > 1 )
    v10 = 1LL;
  v11 = v10 << 6;
  v29 = v2 - v11;
  if ( v2 != v2 - v11 )
  {
    *(_QWORD *)(v9 + 56) = 0LL;
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v9, v2 - 64);
    if ( v2 - 64 != v29 )
      goto LABEL_22;
    v3 = a2;
  }
  if ( v8 <= 1 )
  {
    v12 = v3 << 6;
    goto LABEL_8;
  }
  if ( v7 && (!v6 || v7 < 0) )
LABEL_22:
    _invalid_parameter_noinfo_noreturn();
  v25 = v7;
  v26 = v7;
  v24 = v6;
  v12 = v3 << 6;
  ((void (__fastcall *)(_BYTE *, char *, char *, LPVOID *))std::move_backward<std::move_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>,stdext::checked_array_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>>)(
    v27,
    &v6[64 * v3],
    &v6[64 * v7 - 64],
    &v24);
LABEL_8:
  v13 = (unsigned __int64)&v6[64 * v3 + 64];
  if ( v9 < v13 )
    v13 = v9;
  detail::destruct_range<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>(&v6[v12], v13);
  *((_QWORD *)a1 + 1) += 64LL;
  return &v6[v12];
}
