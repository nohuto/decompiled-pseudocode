_QWORD *__fastcall sub_1400ACD64(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v5; // r13d
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // r14
  char v11; // al
  volatile signed __int32 *v12; // r14
  char v13; // r13
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 368);
  v5 = a3;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v7 = a1 + 384;
  if ( *(_QWORD *)(a1 + 424) )
    v8 = a1 + 384;
  else
    v8 = *(_QWORD *)(a1 + 392);
  v9 = *(_QWORD *)(a1 + 392);
  while ( v9 != v8 )
  {
    v10 = sub_1400A27D4(v15, (__int64 *)(v9 + 16));
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v10 + 8LL))(*v10, v5);
    v12 = (volatile signed __int32 *)v10[1];
    v13 = v11;
    if ( v12 )
    {
      if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    if ( v13 )
      goto LABEL_13;
    v9 = *(_QWORD *)(v9 + 8);
    v5 = a3;
  }
  v9 = v8;
LABEL_13:
  if ( !*(_QWORD *)(a1 + 424) )
    v7 = *(_QWORD *)(a1 + 392);
  if ( v9 == v7 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 624));
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 528));
    sub_1400A27D4(a2, (__int64 *)(v9 + 16));
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  return a2;
}
