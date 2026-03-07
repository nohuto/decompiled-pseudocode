_QWORD *__fastcall sub_1400709D4(
        _QWORD *a1,
        int a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        char a8,
        int a9)
{
  __int64 v12; // rax
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  _QWORD v19[2]; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v20[2]; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v21[2]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v22[16]; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v23[16]; // [rsp+88h] [rbp-31h] BYREF
  __int64 (__fastcall **v24)(PVOID); // [rsp+98h] [rbp-21h] BYREF
  char v25; // [rsp+A0h] [rbp-19h]
  PVOID P; // [rsp+A8h] [rbp-11h]
  __int64 v27; // [rsp+B0h] [rbp-9h]
  __int64 v28; // [rsp+B8h] [rbp-1h]

  v19[1] = a5[1];
  v19[0] = *a5;
  a5[1] = 0LL;
  *a5 = 0LL;
  v20[1] = a4[1];
  v20[0] = *a4;
  a4[1] = 0LL;
  *a4 = 0LL;
  v21[1] = a3[1];
  v21[0] = *a3;
  a3[1] = 0LL;
  *a3 = 0LL;
  sub_140070C84((_DWORD)a1, a2, (unsigned int)v21, (unsigned int)v20, (__int64)v19, a7, a8, a9);
  *a1 = &off_1400D7200;
  a1[7] = off_1400D7228;
  a1[25] = off_1400D7258;
  a1[44] = 0xA5A5A5A5A500005DuLL;
  a1[45] = 0LL;
  a1[46] = 0LL;
  a1[24] = a1 + 45;
  v12 = sub_1400A27D4(v22, a6);
  sub_1400714D4(a1, v12, 0LL);
  v13 = sub_1400AF6DC(v23, a6);
  sub_14007144C(a1, v13);
  v25 = 0;
  v24 = &off_1400D41D0;
  P = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  sub_1400010F4(&v24, (__int64)"ObjectTreeRoot", 0xEuLL);
  sub_1400715AC(a1, &v24, 1024LL, 200LL);
  v24 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
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
  v16 = (volatile signed __int32 *)a5[1];
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  v17 = *(volatile signed __int32 **)(a6 + 8);
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
