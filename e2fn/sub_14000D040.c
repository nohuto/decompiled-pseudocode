_QWORD *__fastcall sub_14000D040(_QWORD *a1)
{
  __int64 (__fastcall **v3)(PVOID); // [rsp+28h] [rbp-69h] BYREF
  PVOID v4; // [rsp+30h] [rbp-61h]
  __int64 v5; // [rsp+38h] [rbp-59h]
  __int64 v6; // [rsp+40h] [rbp-51h]
  int v7; // [rsp+48h] [rbp-49h] BYREF
  const wchar_t *v8; // [rsp+50h] [rbp-41h]
  char v9; // [rsp+58h] [rbp-39h]
  int v10; // [rsp+60h] [rbp-31h] BYREF
  const wchar_t *v11; // [rsp+68h] [rbp-29h]
  int v12; // [rsp+70h] [rbp-21h]
  int v13; // [rsp+74h] [rbp-1Dh]
  int v14; // [rsp+78h] [rbp-19h]
  __int64 (__fastcall **v15)(PVOID); // [rsp+80h] [rbp-11h] BYREF
  PVOID P; // [rsp+88h] [rbp-9h]
  __int64 v17; // [rsp+90h] [rbp-1h]
  __int64 v18; // [rsp+98h] [rbp+7h]
  __int64 (__fastcall **v19)(PVOID); // [rsp+A0h] [rbp+Fh] BYREF
  PVOID v20; // [rsp+A8h] [rbp+17h]
  __int64 v21; // [rsp+B0h] [rbp+1Fh]
  __int64 v22; // [rsp+B8h] [rbp+27h]
  __int64 v23[2]; // [rsp+C8h] [rbp+37h] BYREF
  _QWORD v24[2]; // [rsp+D8h] [rbp+47h] BYREF

  v7 = 3670070;
  v4 = 0LL;
  v8 = L"SystemMacAddressPassthrough";
  v3 = off_1400D4D60;
  v23[0] = (__int64)&v7;
  v5 = 0LL;
  v23[1] = (__int64)&v10;
  v6 = 0LL;
  v9 = 0;
  sub_14000CE8C(&v19, v23);
  v10 = 1835034;
  v11 = L"*NumRssQueues";
  v14 = 4;
  v12 = 1;
  v13 = 1;
  v24[0] = &v10;
  v24[1] = &v15;
  sub_14000CF40(&v15, v24);
  ((void (__fastcall *)(_QWORD *, __int64 (__fastcall ***)(PVOID), __int64 (__fastcall ***)(PVOID), __int64 (__fastcall ***)(PVOID)))sub_14007E4D4)(
    a1,
    &v15,
    &v19,
    &v3);
  v15 = off_1400D4D58;
  if ( P )
  {
    ExFreePool(P);
    P = 0LL;
  }
  v17 = 0LL;
  v18 = 0LL;
  v19 = off_1400D4D58;
  if ( v20 )
  {
    ExFreePool(v20);
    v20 = 0LL;
  }
  v21 = 0LL;
  v22 = 0LL;
  v3 = off_1400D4D60;
  if ( v4 )
  {
    sub_1400A639C(v4);
    v4 = 0LL;
  }
  *a1 = &off_1400D4DA0;
  a1[14] = 0xA5A5A5A5A500002BuLL;
  return a1;
}
