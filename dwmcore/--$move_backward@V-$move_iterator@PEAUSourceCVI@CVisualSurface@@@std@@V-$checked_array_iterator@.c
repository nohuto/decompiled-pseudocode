__int64 __fastcall std::move_backward<std::move_iterator<CVisualSurface::SourceCVI *>,stdext::checked_array_iterator<CVisualSurface::SourceCVI *>>(
        __int64 a1,
        char *a2,
        char *a3,
        _QWORD *a4)
{
  __int64 *v5; // r14
  char *v7; // rbx
  __int64 v8; // rax
  __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // xmm1_8

  v5 = a4 + 2;
  v7 = a3;
  v8 = (a3 - a2) >> 4;
  if ( v8 <= 0 )
  {
    if ( v8 >= 0 || a4[1] - *v5 >= (unsigned __int64)-v8 )
      goto LABEL_3;
LABEL_10:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( *v5 < (unsigned __int64)v8 )
    goto LABEL_10;
LABEL_3:
  v10 = (__int64 *)(*a4 + 16 * *v5);
  while ( a2 != v7 )
  {
    v7 -= 16;
    v10 -= 2;
    v11 = *(_QWORD *)v7;
    *(_QWORD *)v7 = 0LL;
    v12 = *v10;
    *v10 = v11;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v10[1] = *((_QWORD *)v7 + 1);
  }
  result = a1;
  *v5 = ((__int64)v10 - *a4) >> 4;
  v14 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v14;
  return result;
}
