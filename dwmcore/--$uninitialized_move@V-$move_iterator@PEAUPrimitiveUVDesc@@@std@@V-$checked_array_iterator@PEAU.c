__int64 __fastcall std::uninitialized_move<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 i; // rdx
  __int64 result; // rax
  __int64 v9; // xmm1_8

  v5 = 0x4EC4EC4EC4EC4EC5LL * ((a3 - a2) >> 2);
  if ( v5 < 0 )
  {
    if ( a4[2] >= 0xB13B13B13B13B13BuLL * ((a3 - a2) >> 2) )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v5 > 0 && a4[1] - a4[2] < (unsigned __int64)v5 )
    goto LABEL_8;
LABEL_3:
  v6 = *a4 + 52LL * a4[2];
  for ( i = a2 + 8; i - 8 != a3; i += 52LL )
  {
    *(_DWORD *)v6 = *(_DWORD *)(i - 8);
    *(_DWORD *)(v6 + 4) = *(_DWORD *)(i - 4);
    *(_DWORD *)(v6 + 8) = *(_DWORD *)i;
    *(_DWORD *)(v6 + 12) = *(_DWORD *)(i + 4);
    *(_DWORD *)(v6 + 16) = *(_DWORD *)(i + 8);
    *(_DWORD *)(v6 + 20) = *(_DWORD *)(i + 12);
    *(_DWORD *)(v6 + 24) = *(_DWORD *)(i + 16);
    *(_DWORD *)(v6 + 28) = *(_DWORD *)(i + 20);
    *(_DWORD *)(v6 + 32) = *(_DWORD *)(i + 24);
    *(_OWORD *)(v6 + 36) = *(_OWORD *)(i + 28);
    v6 += 52LL;
  }
  result = a1;
  a4[2] = 0x4EC4EC4EC4EC4EC5LL * ((v6 - *a4) >> 2);
  v9 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
