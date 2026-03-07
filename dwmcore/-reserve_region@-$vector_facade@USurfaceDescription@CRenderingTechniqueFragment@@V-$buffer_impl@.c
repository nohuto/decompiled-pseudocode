char *__fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  _BYTE *v5; // rdx
  detail::liberal_expansion_policy *v7; // rcx
  char *v9; // rsi
  signed __int64 v10; // rdi
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rsi
  LPVOID v18; // rax
  void *v19; // r8
  void *v20; // rdx
  LPVOID v21; // rdi
  void *v22; // rcx
  bool v23; // zf
  char *v24; // rcx
  __int128 v25; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+30h] [rbp-30h]
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-10h]
  __int64 v29; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+50h] BYREF

  v3 = (__int64)a1[1];
  v5 = a1[2];
  v7 = (detail::liberal_expansion_policy *)0xAAAAAAAAAAAAAAABLL;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v5[-v3] >> 2) < a3 )
  {
    v15 = 0xAAAAAAAAAAAAAAABuLL * ((v3 - (__int64)*a1) >> 2);
    v16 = v15 + a3;
    if ( v15 + a3 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v17 = detail::liberal_expansion_policy::expand(v7, (_QWORD)v7 * ((v5 - (_BYTE *)*a1) >> 2), v16);
    v18 = operator new(saturated_mul(v17, 0xCuLL));
    v19 = a1[1];
    v20 = *a1;
    *(_QWORD *)&v25 = v18;
    v26 = 0LL;
    v21 = v18;
    *((_QWORD *)&v25 + 1) = v15;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::move<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
      &v27,
      v20,
      v19,
      &v25);
    v22 = *a1;
    v23 = *a1 == a1 + 3;
    *a1 = v21;
    if ( v23 )
      v22 = 0LL;
    operator delete(v22);
    v24 = (char *)*a1;
    v3 = (__int64)*a1 + 12 * v15;
    a1[1] = (void *)v3;
    a1[2] = &v24[12 * v17];
  }
  v9 = (char *)*a1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((v3 - (__int64)*a1) >> 2);
  v11 = v10 - a2;
  if ( a3 && (!((char *)*a1 + 4 * ((v3 - (__int64)*a1) >> 2)) || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_19;
  *(_QWORD *)&v25 = (char *)*a1 + 4 * ((v3 - (__int64)*a1) >> 2);
  v29 = v3;
  *((_QWORD *)&v25 + 1) = a3;
  v12 = v10 - a2;
  v26 = a3;
  if ( a3 < v11 )
    v12 = a3;
  v27 = v25;
  v28 = a3;
  v30 = v3 - 12 * v12;
  detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
    &v30,
    &v29,
    (__int64 *)&v27);
  if ( v11 > a3 )
  {
    if ( !v10 || v9 && v10 >= 0 )
    {
      *(_QWORD *)&v25 = v9;
      *((_QWORD *)&v25 + 1) = v10;
      v26 = v10;
      v13 = 12 * a2;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
        &v27,
        &v9[12 * a2],
        &v9[12 * (v10 - a3)],
        &v25);
      goto LABEL_9;
    }
LABEL_19:
    _invalid_parameter_noinfo_noreturn();
  }
  v13 = 12 * a2;
LABEL_9:
  a1[1] = (char *)a1[1] + 12 * a3;
  return &v9[v13];
}
