__int64 __fastcall std::uninitialized_move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *v4; // r11
  signed __int64 v6; // r10
  _QWORD *v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a4 + 2;
  v6 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)a3 - a2) >> 3);
  if ( v6 < 0 )
  {
    if ( *v4 >= (unsigned __int64)(0x5555555555555555LL * (((__int64)a3 - a2) >> 3)) )
      goto LABEL_4;
LABEL_9:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v6 > 0 && a4[1] - *v4 < (unsigned __int64)v6 )
    goto LABEL_9;
LABEL_4:
  v7 = (_QWORD *)(a2 + 16);
  v8 = *a4;
  v9 = *a4 + 24LL * *v4;
  while ( v7 - 2 != a3 )
  {
    *(_DWORD *)v9 = *((_DWORD *)v7 - 4);
    *(_DWORD *)(v9 + 4) = *((_DWORD *)v7 - 3);
    *(_DWORD *)(v9 + 8) = *((_DWORD *)v7 - 2);
    v10 = *v7;
    *v7 = 0LL;
    *(_QWORD *)(v9 + 16) = v10;
    v9 += 24LL;
    v7 += 3;
  }
  result = a1;
  *v4 = 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 3);
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
