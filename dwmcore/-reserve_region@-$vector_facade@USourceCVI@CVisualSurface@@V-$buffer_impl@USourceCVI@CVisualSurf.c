char *__fastcall detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rdx
  char *v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  char *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // r10
  __int64 v15; // rbx
  char *v16; // rdx
  char *v17; // rbx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdi
  LPVOID v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  LPVOID v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  void *v28; // rcx
  bool v29; // zf
  __int64 *v30; // rsi
  __int64 v31; // rax
  LPVOID v32; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-60h]
  __int64 v34; // [rsp+30h] [rbp-58h]
  _BYTE v35[32]; // [rsp+40h] [rbp-48h] BYREF

  v4 = *((_QWORD *)a1 + 1);
  v7 = *((_QWORD *)a1 + 2);
  if ( !((v7 - v4) >> 4) )
  {
    v19 = (v4 - *(_QWORD *)a1) >> 4;
    v20 = v19 + 1;
    if ( v19 + 1 < v19 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v21 = detail::liberal_expansion_policy::expand(a1, (v7 - *(_QWORD *)a1) >> 4, v20);
    v22 = operator new(saturated_mul(v21, 0x10uLL));
    v23 = *((_QWORD *)a1 + 1);
    v24 = *(_QWORD *)a1;
    v25 = v22;
    v32 = v22;
    v33 = v19;
    v34 = 0LL;
    ((void (__fastcall *)(_BYTE *, __int64, __int64, LPVOID *))std::uninitialized_move<std::move_iterator<CVisualSurface::SourceCVI *>,stdext::checked_array_iterator<CVisualSurface::SourceCVI *>>)(
      v35,
      v24,
      v23,
      &v32);
    detail::destruct_range<CVisualSurface::SourceCVI>(*(_QWORD *)a1, *((_QWORD *)a1 + 1), v26, v27);
    v28 = *(void **)a1;
    v29 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v25;
    if ( v29 )
      v28 = 0LL;
    operator delete(v28);
    v4 = *(_QWORD *)a1 + 16 * v19;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v21;
    *((_QWORD *)a1 + 1) = v4;
  }
  v8 = *(char **)a1;
  v9 = (v4 - *(_QWORD *)a1) >> 4;
  v10 = v9 - a2;
  v11 = (char *)(*(_QWORD *)a1 + 16 * v9);
  if ( !v11 )
    goto LABEL_17;
  v12 = v9 - a2;
  if ( v10 > 1 )
    v12 = 1LL;
  v13 = 16 * v12;
  v14 = (__int64 *)(v4 - v13);
  if ( v4 != v4 - v13 )
  {
    v30 = (__int64 *)(v4 - 16);
    a3 = 0LL;
    a4 = *(_QWORD *)a1 + 16 * v9;
    v31 = *v30;
    *v30 = 0LL;
    *(_QWORD *)v11 = v31;
    *((_QWORD *)v11 + 1) = v30[1];
    if ( v30 != v14 )
LABEL_17:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v10 > 1 )
  {
    if ( v9 && (!v8 || v9 < 0) )
      goto LABEL_17;
    v33 = v9;
    v34 = v9;
    v15 = 16 * a2;
    v32 = v8;
    ((void (__fastcall *)(_BYTE *, char *, char *, LPVOID *))std::move_backward<std::move_iterator<CVisualSurface::SourceCVI *>,stdext::checked_array_iterator<CVisualSurface::SourceCVI *>>)(
      v35,
      &v8[16 * a2],
      &v8[16 * v9 - 16],
      &v32);
  }
  else
  {
    v15 = 16 * a2;
  }
  v16 = &v8[16 * a2 + 16];
  if ( v11 < v16 )
    v16 = v11;
  v17 = &v8[v15];
  detail::destruct_range<CVisualSurface::SourceCVI>(v17, v16, a3, a4);
  *((_QWORD *)a1 + 1) += 16LL;
  return v17;
}
