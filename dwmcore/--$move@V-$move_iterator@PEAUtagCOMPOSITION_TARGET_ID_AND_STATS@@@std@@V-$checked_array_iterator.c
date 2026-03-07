__int64 __fastcall std::move<std::move_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>,stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // rdi
  __int64 v5; // rsi
  __int64 v8; // r10
  void *v9; // rbx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v4 = a4 + 2;
  v5 = a3 - (_QWORD)a2;
  v8 = 0x4EC4EC4EC4EC4EC5LL * ((a3 - (__int64)a2) >> 3);
  if ( v8 < 0 )
  {
    if ( *v4 >= 0xB13B13B13B13B13BuLL * ((a3 - (__int64)a2) >> 3) )
      goto LABEL_3;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 0 && a4[1] - *v4 < (unsigned __int64)v8 )
    goto LABEL_6;
LABEL_3:
  v9 = (void *)(*a4 + 104LL * *v4);
  memmove_0(v9, a2, a3 - (_QWORD)a2);
  result = a1;
  *v4 = 0x4EC4EC4EC4EC4EC5LL * (((__int64)v9 + v5 - *a4) >> 3);
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
