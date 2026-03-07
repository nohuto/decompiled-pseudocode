_QWORD *__fastcall sub_14007779C(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  _QWORD v11[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall **v12)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v13; // [rsp+38h] [rbp-28h]
  PVOID P; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h]
  __int64 v16; // [rsp+50h] [rbp-10h]

  v12 = &off_1400D41D0;
  v13 = 0;
  P = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  sub_1400011A8(&v12, (__int64)L"Hardware Configuration", 0x16uLL);
  v11[1] = a2[1];
  v11[0] = *a2;
  a2[1] = 0LL;
  *a2 = 0LL;
  sub_140002700((__int64)a1, (__int64)&v12, v11, 1000);
  v12 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  *a1 = &off_1400D97F8;
  a1[18] = 0LL;
  a1[19] = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  a1[17] = 0xA5A5A5A5A5000090uLL;
  a1[19] = a3[1];
  v6 = *a3;
  a3[1] = 0LL;
  v7 = a1[18];
  a1[18] = v6;
  *a3 = v7;
  v8 = (volatile signed __int32 *)a2[1];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  v9 = (volatile signed __int32 *)a3[1];
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return a1;
}
