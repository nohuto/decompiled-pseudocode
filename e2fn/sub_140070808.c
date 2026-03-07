_QWORD *__fastcall sub_140070808(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  volatile signed __int32 *v10; // rbx
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  _BYTE v14[8]; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v15; // [rsp+38h] [rbp-20h]

  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[6] = 0LL;
  *a1 = &off_1400D90B8;
  a1[7] = off_1400D90C8;
  a1[8] = 0xA5A5A5A5A5000007uLL;
  sub_1400A27D4(&v12, a3 + 96);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v7 = v13;
  a1[9] = v6;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
    {
      v8 = v13;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  v9 = sub_140003C50((__int64)v14, a2);
  sub_1400A27D4(a1 + 10, v9);
  v10 = v15;
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  sub_1400A27D4(a1 + 12, a3 + 96);
  sub_1400A27D4(a1 + 14, a3 + 112);
  a1[16] = 0LL;
  a1[17] = 0LL;
  sub_1400A27D4(a1 + 18, a3 + 144);
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(a3 + 56) + 24LL))(a3 + 56, a1 + 20);
  sub_1400A27D4(a1 + 22, a3 + 176);
  a1[24] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a3 + 56) + 40LL))(a3 + 56);
  return a1;
}
