__int64 __fastcall detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::resize(
        detail::liberal_expansion_policy *a1,
        unsigned __int64 a2,
        unsigned __int16 *a3)
{
  __int64 v3; // rbx
  char *v5; // r12
  unsigned __int64 v6; // r15
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  char *v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  _WORD *v15; // r8
  __int64 v16; // r15
  __int64 result; // rax
  unsigned __int16 *v18; // r8
  __int16 v19; // r10
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rdx
  char *v23; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rdx
  char *v28; // r8
  unsigned __int64 v29; // rsi
  LPVOID v30; // rax
  __int64 v31; // r8
  char *v32; // rdx
  LPVOID v33; // rbx
  char *v34; // rcx
  bool v35; // zf
  _WORD *v36; // rbx
  unsigned __int64 v37; // r10
  LPVOID v38; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v39; // [rsp+28h] [rbp-60h]
  __int64 v40; // [rsp+30h] [rbp-58h]
  _BYTE v41[32]; // [rsp+40h] [rbp-48h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v5 = *(char **)a1;
  v6 = (v3 - *(_QWORD *)a1) >> 1;
  if ( a2 <= v6 )
  {
    result = 2 * a2;
    v26 = (__int64)(2 * a2) >> 1;
    v3 = (__int64)(v3 - (_QWORD)v5 - 2 * a2) >> 1;
    v27 = v3 + v26;
    if ( v3 + v26 <= v6 )
    {
      v28 = &v5[2 * v6];
      if ( v3 + v26 == v6 )
        goto LABEL_26;
      goto LABEL_42;
    }
LABEL_41:
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_42:
    if ( v26 && (!v5 || v26 < 0 || v6 < v26) )
      goto LABEL_48;
    v40 = v26;
    v38 = v5;
    v39 = v6;
    result = ((__int64 (__fastcall *)(_BYTE *, char *, char *, LPVOID *))std::move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>)(
               v41,
               &v5[2 * v27],
               v28,
               &v38);
LABEL_26:
    *((_QWORD *)a1 + 1) += -2 * v3;
    return result;
  }
  v8 = a2 - v6;
  v9 = 0LL;
  if ( (*((_QWORD *)a1 + 2) - v3) >> 1 >= a2 - v6 )
    goto LABEL_3;
  if ( a2 < v6 )
    goto LABEL_41;
  v29 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - (_QWORD)v5) >> 1, a2);
  v30 = operator new(saturated_mul(v29, 2uLL));
  v31 = *((_QWORD *)a1 + 1);
  v32 = *(char **)a1;
  v33 = v30;
  v38 = v30;
  v39 = v6;
  v40 = 0LL;
  ((void (__fastcall *)(_BYTE *, char *, __int64, LPVOID *))std::uninitialized_move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>)(
    v41,
    v32,
    v31,
    &v38);
  v34 = *(char **)a1;
  v35 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
  *(_QWORD *)a1 = v33;
  if ( v35 )
    v34 = 0LL;
  operator delete(v34);
  v5 = *(char **)a1;
  v3 = *(_QWORD *)a1 + 2 * v6;
  *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 2 * v29;
  *((_QWORD *)a1 + 1) = v3;
LABEL_3:
  v10 = (v3 - (__int64)v5) >> 1;
  v11 = v10 - v6;
  v12 = &v5[2 * v10];
  if ( v8 && (!v12 || (v8 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_48;
  v13 = ((v3 - (__int64)v5) >> 1) - v6;
  if ( v8 < v11 )
    v13 = v8;
  v14 = 2 * v13;
  v15 = (_WORD *)(v3 - v14);
  if ( v3 != v3 - v14 )
  {
    v36 = (_WORD *)(v3 - 2);
    v37 = v8;
    if ( v12 )
    {
      while ( v37 )
      {
        if ( --v37 >= v8 )
          break;
        *(_WORD *)&v12[2 * v37] = *v36;
        if ( v36 == v15 )
          goto LABEL_9;
        --v36;
      }
    }
    goto LABEL_48;
  }
LABEL_9:
  if ( v11 > v8 )
  {
    if ( !v10 || v5 && v10 >= 0 )
    {
      v39 = v10;
      v40 = v10;
      v16 = 2 * v6;
      v38 = v5;
      ((void (__fastcall *)(_BYTE *, char *, char *, LPVOID *))std::move_backward<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>)(
        v41,
        &v5[v16],
        &v5[2 * (v10 - v8)],
        &v38);
      goto LABEL_11;
    }
LABEL_48:
    _invalid_parameter_noinfo_noreturn();
  }
  v16 = 2 * v6;
LABEL_11:
  result = 2 * v8;
  *((_QWORD *)a1 + 1) += 2 * v8;
  v18 = (unsigned __int16 *)&v5[v16];
  if ( v8 )
  {
    if ( v8 < 8 || v18 <= a3 && (unsigned __int16 *)((char *)v18 + result - 2) >= a3 )
      goto LABEL_21;
    v20 = v8 & 0x7FFFFFFFFFFFFFF8LL;
    do
    {
      v9 += 8LL;
      v21 = v9;
    }
    while ( v9 < v20 );
    v22 = 2 * v20;
    v23 = &v5[v16];
    v19 = *a3;
    result = *a3;
    for ( i = v22 >> 1; i; --i )
    {
      *(_WORD *)v23 = v19;
      v23 += 2;
    }
    v18 = (unsigned __int16 *)((char *)v18 + v22);
    v9 = v21;
    if ( v21 < v8 )
    {
LABEL_21:
      v25 = v8 - v9;
      do
      {
        result = *a3;
        *v18++ = result;
        --v25;
      }
      while ( v25 );
    }
  }
  return result;
}
