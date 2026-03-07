_QWORD *__fastcall sub_14005BD60(__int64 a1, _QWORD *a2)
{
  __int64 Pool2; // rax
  int v5; // edx
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  int v11; // edx
  signed __int32 v12; // eax
  __int64 v13; // rax
  volatile signed __int32 *v14; // rcx
  __int64 v15; // rbx
  __int128 v17; // [rsp+40h] [rbp-18h] BYREF

  Pool2 = ExAllocatePool2(64LL, 32LL, 808466483LL);
  if ( !Pool2
    || (v6 = sub_1400ACA00(Pool2), (v7 = (volatile signed __int32 *)v6) == 0LL)
    || (v8 = *(_QWORD *)(v6 + 16)) == 0 )
  {
    v17 = 0LL;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOBYTE(v5) = 2;
      sub_1400A3054(*(_QWORD *)(*((_QWORD *)P + 1) + 16LL), v5, 3, 13, (__int64)&unk_1400D7C88, (__int64)L"lock");
    }
    sub_1400A27D4(a2, &v17);
    if ( !*((_QWORD *)&v17 + 1) )
      return a2;
    v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF);
    goto LABEL_17;
  }
  v9 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v17 + 1) = v6;
  *(_QWORD *)&v17 = v8;
  v10 = sub_14005BF44(v8, v9);
  if ( v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOBYTE(v11) = 2;
      sub_1400ABCF8(
        *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
        v11,
        3,
        14,
        (__int64)&unk_1400D7C88,
        (__int64)L"lock->Init(m_parentObject)",
        v10);
    }
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( !v7 )
      return a2;
    v12 = _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
LABEL_17:
    if ( v12 == 1 )
    {
      v15 = *((_QWORD *)&v17 + 1);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
      {
        v14 = (volatile signed __int32 *)*((_QWORD *)&v17 + 1);
        v13 = **((_QWORD **)&v17 + 1);
        goto LABEL_20;
      }
    }
    return a2;
  }
  sub_1400A27D4(a2, &v17);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
      {
        v13 = *(_QWORD *)v7;
        v14 = v7;
LABEL_20:
        (*(void (__fastcall **)(volatile signed __int32 *))(v13 + 16))(v14);
      }
    }
  }
  return a2;
}
