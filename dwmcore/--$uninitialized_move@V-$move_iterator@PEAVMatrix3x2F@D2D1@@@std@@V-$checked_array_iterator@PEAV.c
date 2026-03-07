__int64 __fastcall std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  signed __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // xmm1_8

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a3 - a2) >> 3);
  if ( v4 < 0 )
  {
    if ( a4[2] >= (unsigned __int64)(0x5555555555555555LL * ((a3 - a2) >> 3)) )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v4 > 0 && a4[1] - a4[2] < (unsigned __int64)v4 )
    goto LABEL_8;
LABEL_3:
  v5 = *a4;
  v6 = *a4 + 24 * a4[2];
  while ( a2 != a3 )
  {
    *(_OWORD *)v6 = *(_OWORD *)a2;
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(a2 + 16);
    v6 += 24LL;
    a2 += 24LL;
  }
  a4[2] = 0xAAAAAAAAAAAAAAABuLL * ((v6 - v5) >> 3);
  result = a1;
  v8 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}
