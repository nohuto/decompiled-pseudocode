__int64 __fastcall std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  size_t v6; // r9
  _QWORD *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v6 = a3 - (_QWORD)a2;
  v7 = a4 + 2;
  v8 = 0x5555555555555555LL * ((a3 - (__int64)a2) >> 3);
  if ( v8 < 0 )
  {
    if ( *v7 >= (unsigned __int64)-v8 )
      goto LABEL_3;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 0 && a4[1] - *v7 < (unsigned __int64)v8 )
    goto LABEL_6;
LABEL_3:
  v9 = *a4;
  *v7 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)memmove_0((void *)(*a4 + 24LL * *v7 - v6), a2, v6) - v9) >> 3);
  result = a1;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
