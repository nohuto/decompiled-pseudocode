_QWORD *__fastcall sub_1400052EC(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 *a4, __int64 *a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *Pool2; // rax
  _QWORD *v14; // rax
  void *v15; // rbx
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  _QWORD v21[2]; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v22[2]; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v23[2]; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v24[2]; // [rsp+78h] [rbp-19h] BYREF
  __int64 (__fastcall **v25)(PVOID); // [rsp+88h] [rbp-9h] BYREF
  __int16 v26; // [rsp+90h] [rbp-1h]
  PVOID P; // [rsp+98h] [rbp+7h]
  __int64 v28; // [rsp+A0h] [rbp+Fh]
  __int64 v29; // [rsp+A8h] [rbp+17h]

  v25 = &off_1400D41D0;
  v26 = 0;
  P = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  sub_1400011A8(&v25, (__int64)L"E2FN LAN Adapter", 0x10uLL);
  v10 = a5[1];
  a5[1] = 0LL;
  v21[1] = v10;
  v11 = *a5;
  *a5 = 0LL;
  v21[0] = v11;
  v22[1] = a4[1];
  v12 = *a4;
  a4[1] = 0LL;
  *a4 = 0LL;
  v22[0] = v12;
  v23[1] = a3[1];
  v23[0] = *a3;
  a3[1] = 0LL;
  *a3 = 0LL;
  v24[1] = a2[1];
  v24[0] = *a2;
  a2[1] = 0LL;
  *a2 = 0LL;
  sub_14007390C((_DWORD)a1, (unsigned int)&v25, (unsigned int)v24, (unsigned int)v23, (__int64)v22, (__int64)v21, a6);
  v25 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  *a1 = &off_1400D48D0;
  a1[7] = off_1400D4900;
  a1[25] = off_1400D4930;
  v28 = 0LL;
  v29 = 0LL;
  a1[69] = 0xA5A5A5A5A500001DuLL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v14 = sub_1400045E8(
              Pool2,
              (__int64)L"product_e2fn::ProductE2fnDeviceContext::ProductE2fnDeviceContext",
              (__int64)a1);
      v15 = v14;
      if ( v14 )
      {
        sub_140005840(v14);
        ExFreePool(v15);
      }
    }
  }
  v16 = (volatile signed __int32 *)a2[1];
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  v17 = (volatile signed __int32 *)a3[1];
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  v18 = (volatile signed __int32 *)a4[1];
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  v19 = (volatile signed __int32 *)a5[1];
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  return a1;
}
