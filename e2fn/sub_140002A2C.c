void __fastcall sub_140002A2C(__int64 a1, __int64 a2)
{
  __int64 (__fastcall **v4)(PVOID); // [rsp+30h] [rbp-50h] BYREF
  __int16 v5; // [rsp+38h] [rbp-48h]
  PVOID v6; // [rsp+40h] [rbp-40h]
  __int64 v7; // [rsp+48h] [rbp-38h]
  __int64 v8; // [rsp+50h] [rbp-30h]
  __int64 (__fastcall **v9)(PVOID); // [rsp+58h] [rbp-28h] BYREF
  __int16 v10; // [rsp+60h] [rbp-20h]
  PVOID P; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp-10h]
  __int64 v13; // [rsp+78h] [rbp-8h]

  v4 = &off_1400D41D0;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  sub_1400011A8(&v4, (__int64)L"Build Info", 0xAuLL);
  v9 = &off_1400D41D0;
  v10 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)L"Name", 4uLL);
  (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(PVOID), __int64 (__fastcall ***)(PVOID), __int64))(*(_QWORD *)a2 + 24LL))(
    a2,
    &v4,
    &v9,
    a1 + 16);
  v9 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v9 = &off_1400D41D0;
  v10 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)L"Time", 4uLL);
  (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(PVOID), __int64 (__fastcall ***)(PVOID), __int64))(*(_QWORD *)a2 + 24LL))(
    a2,
    &v4,
    &v9,
    a1 + 56);
  v9 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v9 = &off_1400D41D0;
  v10 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)L"Date", 4uLL);
  (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(PVOID), __int64 (__fastcall ***)(PVOID), __int64))(*(_QWORD *)a2 + 24LL))(
    a2,
    &v4,
    &v9,
    a1 + 96);
  v9 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v9 = &off_1400D41D0;
  v10 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)L"Git Hash", 8uLL);
  (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(PVOID), __int64 (__fastcall ***)(PVOID), __int64))(*(_QWORD *)a2 + 24LL))(
    a2,
    &v4,
    &v9,
    a1 + 136);
  v9 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v9 = &off_1400D41D0;
  v10 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)L"Configuration", 0xDuLL);
  (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(PVOID), __int64 (__fastcall ***)(PVOID), __int64))(*(_QWORD *)a2 + 24LL))(
    a2,
    &v4,
    &v9,
    a1 + 176);
  v9 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v9 = &off_1400D41D0;
  v10 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)L"Platform", 8uLL);
  (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(PVOID), __int64 (__fastcall ***)(PVOID), __int64))(*(_QWORD *)a2 + 24LL))(
    a2,
    &v4,
    &v9,
    a1 + 216);
  v9 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v9 = &off_1400D41D0;
  v10 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)L"WDK Version", 0xBuLL);
  (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(PVOID), __int64 (__fastcall ***)(PVOID), __int64))(*(_QWORD *)a2 + 24LL))(
    a2,
    &v4,
    &v9,
    a1 + 256);
  v9 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v4 = &off_1400D41D0;
  if ( v6 )
    ExFreePool(v6);
}
