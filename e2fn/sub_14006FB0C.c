__int64 __fastcall sub_14006FB0C(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4, char a5, char a6, __int64 a7, int a8)
{
  __int64 v9; // rax
  PVOID v12; // rcx
  PVOID v13; // rcx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  _QWORD v17[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 (__fastcall **v18)(PVOID); // [rsp+30h] [rbp-50h] BYREF
  __int16 v19; // [rsp+38h] [rbp-48h]
  PVOID P; // [rsp+40h] [rbp-40h]
  __int64 v21; // [rsp+48h] [rbp-38h]
  __int64 v22; // [rsp+50h] [rbp-30h]
  __int64 (__fastcall **v23)(PVOID); // [rsp+58h] [rbp-28h] BYREF
  __int16 v24; // [rsp+60h] [rbp-20h]
  PVOID v25; // [rsp+68h] [rbp-18h]
  __int64 v26; // [rsp+70h] [rbp-10h]
  __int64 v27; // [rsp+78h] [rbp-8h]

  v17[1] = a3[1];
  v9 = *a3;
  *a3 = 0LL;
  a3[1] = 0LL;
  v17[0] = v9;
  sub_140002700(a1, a2, v17, a8);
  *(_QWORD *)a1 = &off_1400D47E0;
  *(_QWORD *)(a1 + 144) = a7;
  *(_QWORD *)(a1 + 136) = 0xA5A5A5A5A500000AuLL;
  v18 = &off_1400D41D0;
  v19 = 0;
  P = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  sub_1400011A8(&v18, (__int64)L"Flushed Entries Count", 0x15uLL);
  sub_1400120E0(a1 + 152, (__int64)&v18);
  v12 = P;
  *(_QWORD *)(a1 + 152) = &off_1400D46F8;
  *(_QWORD *)(a1 + 160) = off_1400D4720;
  *(_QWORD *)(a1 + 224) = 0xA5A5A5A5A5000012uLL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 10LL;
  v18 = &off_1400D41D0;
  if ( v12 )
    ExFreePool(v12);
  P = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = &off_1400D41D0;
  v24 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  sub_1400011A8(&v23, (__int64)L"History Length", 0xEuLL);
  sub_1400120E0(a1 + 248, (__int64)&v23);
  v13 = v25;
  *(_QWORD *)(a1 + 248) = &off_1400D46F8;
  *(_QWORD *)(a1 + 256) = off_1400D4720;
  *(_QWORD *)(a1 + 320) = 0xA5A5A5A5A5000012uLL;
  *(_QWORD *)(a1 + 328) = a7;
  *(_QWORD *)(a1 + 336) = 10LL;
  if ( v13 )
    ExFreePool(v13);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a4 + 8LL))(*a4, a1 + 344);
  *(_BYTE *)(a1 + 408) = a5;
  *(_BYTE *)(a1 + 409) = a6;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  v14 = (volatile signed __int32 *)a3[1];
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  v15 = (volatile signed __int32 *)a4[1];
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  return a1;
}
