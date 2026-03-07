__int64 __fastcall std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v6 = (a3 - (__int64)a2) >> 3;
  v7 = a4 + 2;
  if ( v6 > 0 )
  {
    if ( *v7 >= (unsigned __int64)v6 )
      goto LABEL_3;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v6 < 0 && a4[1] - *v7 < (unsigned __int64)-v6 )
    goto LABEL_6;
LABEL_3:
  v8 = *a4;
  *v7 = ((__int64)memmove_0((void *)(*a4 + 8 * *v7 - (a3 - (_QWORD)a2)), a2, a3 - (_QWORD)a2) - v8) >> 3;
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
