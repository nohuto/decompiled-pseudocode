_QWORD *__fastcall sub_14006EE2C(_QWORD *a1, __int64 (__fastcall ***a2)(PVOID P), int a3, __int64 *a4)
{
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *Pool2; // rax
  __int64 *v12; // rax
  __int64 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int64 (__fastcall **v16)(PVOID); // [rsp+38h] [rbp-29h] BYREF
  __int16 v17; // [rsp+40h] [rbp-21h]
  PVOID v18; // [rsp+48h] [rbp-19h]
  __int64 v19; // [rsp+50h] [rbp-11h]
  __int64 v20; // [rsp+58h] [rbp-9h]
  __int64 (__fastcall **v21)(PVOID); // [rsp+60h] [rbp-1h] BYREF
  PVOID P; // [rsp+70h] [rbp+Fh]
  __int64 v23; // [rsp+78h] [rbp+17h]
  __int64 v24; // [rsp+80h] [rbp+1Fh]
  __int64 (__fastcall **v25)(PVOID); // [rsp+88h] [rbp+27h] BYREF
  PVOID v26; // [rsp+98h] [rbp+37h]
  __int64 v27; // [rsp+A0h] [rbp+3Fh]
  __int64 v28; // [rsp+A8h] [rbp+47h]

  v7 = sub_14004BA74((__int64)&v25, (__int64)L"Power Resource (", a2);
  v8 = sub_14002D2AC((__int64)&v21, v7, (__int64)qword_1400CABE0);
  sub_140070F24((_DWORD)a1, v8, a3, 0, 1000);
  v21 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = &off_1400D41D0;
  if ( v26 )
    ExFreePool(v26);
  v26 = 0LL;
  *a1 = &off_1400D8F50;
  v27 = 0LL;
  a1[7] = off_1400D8F78;
  v28 = 0LL;
  a1[25] = off_1400D8FA8;
  a1[46] = 0LL;
  a1[44] = &off_1400D8FF0;
  a1[45] = 0xA5A5A5A5A50000AFuLL;
  v16 = &off_1400D41D0;
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  sub_1400011A8(&v16, (__int64)qword_1400B7580, 1uLL);
  sub_1400015A8(a1 + 47, (__int64)&v16);
  v16 = &off_1400D41D0;
  if ( v18 )
    ExFreePool(v18);
  a1[52] = 0LL;
  a1[53] = 0LL;
  a1[53] = a4[1];
  v9 = *a4;
  a4[1] = 0LL;
  v10 = a1[52];
  a1[52] = v9;
  *a4 = v10;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v12 = sub_14005B310(Pool2, (__int64)L"os_resources::PowerResource::PowerResource", (__int64)a1);
      v13 = v12;
      if ( v12 )
      {
        sub_14005B5AC(v12);
        ExFreePool(v13);
      }
    }
  }
  v14 = (volatile signed __int32 *)a4[1];
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  return a1;
}
