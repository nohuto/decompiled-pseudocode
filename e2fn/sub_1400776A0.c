_QWORD *__fastcall sub_1400776A0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  volatile signed __int32 *v6; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 (__fastcall **v9)(PVOID); // [rsp+30h] [rbp-38h] BYREF
  __int16 v10; // [rsp+38h] [rbp-30h]
  PVOID P; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  v9 = &off_1400D41D0;
  v10 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)L"Hardware Capabilities", 0x15uLL);
  v8[1] = a2[1];
  v8[0] = *a2;
  a2[1] = 0LL;
  *a2 = 0LL;
  sub_140002700((__int64)a1, (__int64)&v9, v8, 1000);
  if ( P )
    ExFreePool(P);
  a1[17] = a3;
  *a1 = &off_1400D97A0;
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return a1;
}
