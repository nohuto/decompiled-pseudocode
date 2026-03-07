char *__fastcall detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  char *v6; // rbx
  signed __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // rdi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  LPVOID v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  LPVOID v20; // rbx
  char *v21; // rcx
  bool v22; // zf
  char *v23; // rcx
  __int64 v24; // rsi
  LPVOID v25; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-60h]
  signed __int64 v27; // [rsp+30h] [rbp-58h]
  _BYTE v28[32]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  if ( !(0xAAAAAAAAAAAAAAABuLL * ((v4 - v2) >> 2)) )
  {
    v14 = 0xAAAAAAAAAAAAAAABuLL * ((v2 - *(_QWORD *)a1) >> 2);
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v16 = detail::liberal_expansion_policy::expand(a1, 0xAAAAAAAAAAAAAAABuLL * ((v4 - *(_QWORD *)a1) >> 2), v15);
    v17 = operator new(saturated_mul(v16, 0xCuLL));
    v18 = *((_QWORD *)a1 + 1);
    v19 = *(char **)a1;
    v20 = v17;
    v25 = v17;
    v26 = v14;
    v27 = 0LL;
    ((void (__fastcall *)(_BYTE *, char *, __int64, LPVOID *))std::move<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
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
    v23 = *(char **)a1;
    v2 = *(_QWORD *)a1 + 12 * v14;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = &v23[12 * v16];
  }
  v6 = *(char **)a1;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((v2 - *(_QWORD *)a1) >> 2);
  v8 = v7 - a2;
  v9 = *(_QWORD *)a1 + 4 * ((v2 - *(_QWORD *)a1) >> 2);
  if ( !v9 )
    goto LABEL_15;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((v2 - *(_QWORD *)a1) >> 2) - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  v11 = v2 - 12 * v10;
  if ( v2 != v11 )
  {
    v24 = v2 - 12;
    *(_QWORD *)v9 = *(_QWORD *)v24;
    *(_DWORD *)(v9 + 8) = *(_DWORD *)(v24 + 8);
    if ( v24 != v11 )
LABEL_15:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 1 )
  {
    if ( v7 && (!v6 || v7 < 0) )
      goto LABEL_15;
    v26 = v7;
    v27 = v7;
    v12 = 12 * a2;
    v25 = v6;
    ((void (__fastcall *)(_BYTE *, char *, char *, LPVOID *))std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
      v28,
      &v6[12 * a2],
      &v6[12 * v7 - 12],
      &v25);
  }
  else
  {
    v12 = 12 * a2;
  }
  *((_QWORD *)a1 + 1) += 12LL;
  return &v6[v12];
}
