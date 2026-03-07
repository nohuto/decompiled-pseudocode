_QWORD *__fastcall sub_1400705B8(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 *a4, __int64 *a5)
{
  __int64 v9; // rax
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  _BYTE v19[8]; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v20; // [rsp+28h] [rbp-20h]

  *a1 = &off_1400D90B8;
  a1[1] = 0LL;
  a1[7] = off_1400D90C8;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[6] = 0LL;
  a1[8] = 0xA5A5A5A5A5000007uLL;
  a1[9] = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  v9 = sub_140003C50((__int64)v19, a2);
  sub_1400A27D4(a1 + 10, v9);
  v10 = v20;
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  sub_1400A27D4(a1 + 12, a3);
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[15] = a4[1];
  v11 = *a4;
  a4[1] = 0LL;
  v12 = a1[14];
  a1[14] = v11;
  *a4 = v12;
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[18] = 0LL;
  a1[19] = 0LL;
  a1[20] = 0LL;
  a1[21] = 0LL;
  a1[21] = a5[1];
  v13 = *a5;
  a5[1] = 0LL;
  v14 = a1[20];
  a1[20] = v13;
  *a5 = v14;
  sub_1400A27D4(a1 + 22, (char *)P + 8);
  a1[24] = 0LL;
  v15 = (volatile signed __int32 *)a3[1];
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  v16 = (volatile signed __int32 *)a4[1];
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  v17 = (volatile signed __int32 *)a5[1];
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  return a1;
}
