char *__fastcall detail::vector_facade<tagCOMPOSITION_TARGET_ID_AND_STATS,detail::buffer_impl<tagCOMPOSITION_TARGET_ID_AND_STATS,4,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  char *v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r9
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
  __int64 v23; // rsi
  LPVOID v24; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  _BYTE v27[32]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  if ( !(0x4EC4EC4EC4EC4EC5LL * ((v4 - v2) >> 3)) )
  {
    v14 = 0x4EC4EC4EC4EC4EC5LL * ((v2 - *(_QWORD *)a1) >> 3);
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v16 = detail::liberal_expansion_policy::expand(a1, 0x4EC4EC4EC4EC4EC5LL * ((v4 - *(_QWORD *)a1) >> 3), v15);
    v17 = operator new(saturated_mul(v16, 0x68uLL));
    v18 = *((_QWORD *)a1 + 1);
    v19 = *(char **)a1;
    v20 = v17;
    v24 = v17;
    v25 = v14;
    v26 = 0LL;
    ((void (__fastcall *)(_BYTE *, char *, __int64, LPVOID *))std::move<std::move_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>,stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>>)(
      v27,
      v19,
      v18,
      &v24);
    v21 = *(char **)a1;
    v22 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v20;
    if ( v22 )
      v21 = 0LL;
    operator delete(v21);
    v2 = *(_QWORD *)a1 + 104 * v14;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 104 * v16;
  }
  v6 = *(char **)a1;
  v7 = 0x4EC4EC4EC4EC4EC5LL * ((v2 - *(_QWORD *)a1) >> 3);
  v8 = v7 - a2;
  v9 = *(_QWORD *)a1 + 8 * ((v2 - *(_QWORD *)a1) >> 3);
  if ( !v9 )
    goto LABEL_15;
  v10 = 0x4EC4EC4EC4EC4EC5LL * ((v2 - *(_QWORD *)a1) >> 3) - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  v11 = v2 - 104 * v10;
  if ( v2 != v11 )
  {
    v23 = v2 - 104;
    *(_OWORD *)v9 = *(_OWORD *)v23;
    *(_OWORD *)(v9 + 16) = *(_OWORD *)(v23 + 16);
    *(_OWORD *)(v9 + 32) = *(_OWORD *)(v23 + 32);
    *(_OWORD *)(v9 + 48) = *(_OWORD *)(v23 + 48);
    *(_OWORD *)(v9 + 64) = *(_OWORD *)(v23 + 64);
    *(_OWORD *)(v9 + 80) = *(_OWORD *)(v23 + 80);
    *(_QWORD *)(v9 + 96) = *(_QWORD *)(v23 + 96);
    if ( v23 != v11 )
LABEL_15:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 1 )
  {
    if ( v7 && (!v6 || v7 < 0) )
      goto LABEL_15;
    v12 = 104 * a2;
    v25 = v7;
    v26 = v7;
    v24 = v6;
    ((void (__fastcall *)(_BYTE *, char *, char *, LPVOID *))std::move_backward<std::move_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>,stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>>)(
      v27,
      &v6[104 * a2],
      &v6[104 * v7 - 104],
      &v24);
  }
  else
  {
    v12 = 104 * a2;
  }
  *((_QWORD *)a1 + 1) += 104LL;
  return &v6[v12];
}
