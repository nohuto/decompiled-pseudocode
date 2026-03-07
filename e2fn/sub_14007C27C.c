__int64 __fastcall sub_14007C27C(_QWORD *a1, char a2, int a3)
{
  unsigned int v5; // edi
  _QWORD *v6; // rdx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+38h] [rbp-10h]
  int v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  if ( a1[46] )
  {
    sub_1400B1CFC((unsigned int)&v8, 808465762, a2, (unsigned int)&v10, (__int64)(a1 + 46));
    if ( v8 )
    {
      if ( a1[53] )
        v6 = a1 + 48;
      else
        v6 = (_QWORD *)a1[49];
      sub_1400A440C(a1 + 48, v6, &v8);
      v5 = 0;
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        sub_1400A3054(*(_QWORD *)(*((_QWORD *)P + 1) + 16LL), 2, 10, 12, (__int64)&unk_1400D9888, (__int64)L"counter");
      v5 = -1073741801;
    }
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
      {
        v7 = v9;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    return v5;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      sub_1400A3054(
        *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
        2,
        10,
        11,
        (__int64)&unk_1400D9888,
        (__int64)L"m_mmioAccessor");
    return 3221225635LL;
  }
}
