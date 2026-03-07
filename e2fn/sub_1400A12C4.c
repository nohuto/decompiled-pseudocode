void __fastcall sub_1400A12C4(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  __int64 (__fastcall **v6)(PVOID); // [rsp+28h] [rbp-89h] BYREF
  __int16 v7; // [rsp+30h] [rbp-81h]
  PVOID P; // [rsp+38h] [rbp-79h]
  __int64 v9; // [rsp+40h] [rbp-71h]
  __int64 v10; // [rsp+48h] [rbp-69h]
  __int64 (__fastcall **v11)(PVOID); // [rsp+50h] [rbp-61h] BYREF
  __int16 v12; // [rsp+58h] [rbp-59h]
  PVOID v13; // [rsp+60h] [rbp-51h]
  __int64 v14; // [rsp+68h] [rbp-49h]
  __int64 v15; // [rsp+70h] [rbp-41h]
  __int64 (__fastcall **v16)(PVOID); // [rsp+78h] [rbp-39h] BYREF
  __int16 v17; // [rsp+80h] [rbp-31h]
  PVOID v18; // [rsp+88h] [rbp-29h]
  __int64 v19; // [rsp+90h] [rbp-21h]
  __int64 v20; // [rsp+98h] [rbp-19h]
  __int64 (__fastcall **v21)(PVOID); // [rsp+A0h] [rbp-11h] BYREF
  __int16 v22; // [rsp+A8h] [rbp-9h]
  PVOID v23; // [rsp+B0h] [rbp-1h]
  __int64 v24; // [rsp+B8h] [rbp+7h]
  __int64 v25; // [rsp+C0h] [rbp+Fh]
  _QWORD v26[6]; // [rsp+C8h] [rbp+17h] BYREF

  v21 = &off_1400D41D0;
  v22 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  sub_1400011A8(&v21, (__int64)qword_1400B6F30, 1uLL);
  v16 = &off_1400D41D0;
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  sub_1400011A8(
    &v16,
    (__int64)L"==========================================================================================\n",
    0x5BuLL);
  v11 = &off_1400D41D0;
  v12 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  sub_1400011A8(
    &v11,
    (__int64)L"..........................................................................................\n",
    0x5BuLL);
  v6 = &off_1400D41D0;
  v7 = 0;
  P = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  sub_1400011A8(
    &v6,
    (__int64)L"-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=\n",
    0x5BuLL);
  v4 = *(_QWORD **)(a1 + 16);
  v26[1] = &v6;
  v26[2] = &v21;
  v26[3] = &v11;
  v26[4] = &v16;
  v26[0] = a2;
  v5 = v4[41];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  sub_14009F220(v4, v26);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
  v6 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = &off_1400D41D0;
  if ( v13 )
    ExFreePool(v13);
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = &off_1400D41D0;
  if ( v18 )
    ExFreePool(v18);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = &off_1400D41D0;
  if ( v23 )
    ExFreePool(v23);
}
