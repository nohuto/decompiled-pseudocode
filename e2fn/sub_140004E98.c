_QWORD *__fastcall sub_140004E98(_QWORD *a1, _QWORD *a2, __int64 *a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  _QWORD v13[2]; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp+7h] BYREF
  __int64 (__fastcall **v15)(PVOID); // [rsp+68h] [rbp+17h] BYREF
  __int16 v16; // [rsp+70h] [rbp+1Fh]
  PVOID P; // [rsp+78h] [rbp+27h]
  __int64 v18; // [rsp+80h] [rbp+2Fh]
  __int64 v19; // [rsp+88h] [rbp+37h]

  v15 = &off_1400D41D0;
  v16 = 0;
  P = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  sub_1400011A8(&v15, (__int64)L"Logger", 6uLL);
  v8 = a3[1];
  a3[1] = 0LL;
  v13[1] = v8;
  v9 = *a3;
  *a3 = 0LL;
  v13[0] = v9;
  v14[1] = a2[1];
  v14[0] = *a2;
  a2[1] = 0LL;
  *a2 = 0LL;
  sub_14006FB0C((_DWORD)a1, (unsigned int)&v15, (unsigned int)v14, (unsigned int)v13, 0, 1, a4, 100);
  v15 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  *a1 = &off_1400D4850;
  a1[52] = &off_1400D48A8;
  v18 = 0LL;
  v19 = 0LL;
  a1[53] = 0xA5A5A5A5A5000006uLL;
  a1[54] = 0LL;
  a1[55] = 0LL;
  a1[56] = 0LL;
  a1[57] = 0LL;
  a1[59] = 0LL;
  v10 = (volatile signed __int32 *)a2[1];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
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
  return a1;
}
