void __fastcall sub_14009F4C8(__int64 a1, __int64 a2, __int64 (__fastcall ***a3)(PVOID P), char a4)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r9
  volatile signed __int32 *v10; // rdi
  __int64 (__fastcall **v11)(PVOID); // rcx
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall **v14)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v15; // [rsp+38h] [rbp-28h]
  __int64 v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp-10h]
  char v19; // [rsp+A8h] [rbp+48h] BYREF

  v19 = a4;
  sub_1400A05C8(a2, a1, a3, &v19);
  v7 = *(_QWORD *)(a1 + 88);
  v8 = v7;
  if ( *(_QWORD *)(a1 + 120) )
    v8 = a1 + 80;
  while ( v7 != v8 )
  {
    sub_1400A27D4(&v12, v7 + 16);
    v14 = &off_1400D41D0;
    v15 = 0;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    if ( &v14 != a3 )
      sub_1400011A8(&v14, (__int64)a3[2], (unsigned __int64)a3[3]);
    LOBYTE(v9) = v19;
    sub_14009F4C8(v12, a2, &v14, v9);
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        v10 = v13;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    v7 = *(_QWORD *)(v7 + 8);
  }
  v11 = a3[2];
  *a3 = &off_1400D41D0;
  if ( v11 )
    ExFreePool(v11);
  a3[2] = 0LL;
  a3[3] = 0LL;
  a3[4] = 0LL;
}
