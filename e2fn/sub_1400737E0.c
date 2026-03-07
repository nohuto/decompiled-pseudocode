_QWORD *__fastcall sub_1400737E0(_QWORD *a1, __int64 a2, __int64 *a3, _QWORD *a4, int a5)
{
  __int64 v5; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a3[1];
  a3[1] = 0LL;
  v14[1] = v5;
  v9 = *a3;
  *a3 = 0LL;
  v14[0] = v9;
  sub_140002700((__int64)a1, a2, v14, a5);
  *a1 = &off_1400D93B0;
  a1[18] = 0LL;
  a1[19] = 0LL;
  a1[17] = 0xA5A5A5A5A500000BuLL;
  a1[19] = a4[1];
  a4[1] = 0LL;
  v10 = a1[18];
  a1[18] = *a4;
  *a4 = v10;
  v11 = (volatile signed __int32 *)a3[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  v12 = (volatile signed __int32 *)a4[1];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return a1;
}
