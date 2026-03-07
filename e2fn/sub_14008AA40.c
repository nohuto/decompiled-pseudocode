void __fastcall sub_14008AA40(__int64 a1, __int64 a2)
{
  PVOID v4; // rdi
  PVOID v5; // rsi
  PVOID v6; // rdx
  PVOID v7; // rdi
  PVOID v8; // rdx
  PVOID v9; // rdi
  PVOID v10; // rdx
  PVOID v11; // rdi
  PVOID v12; // rdx
  PVOID v13; // rdi
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  int v15; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall **v16)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v17; // [rsp+38h] [rbp-28h]
  PVOID P; // [rsp+40h] [rbp-20h]
  __int64 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]

  v16 = &off_1400D41D0;
  v17 = 0;
  P = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  sub_1400011A8(&v16, (__int64)L"Max transmit packet size: ", 0x1AuLL);
  v4 = P;
  v5 = &unk_1400D44E0;
  v6 = &unk_1400D44E0;
  if ( P )
    v6 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2 * v19);
  if ( v4 )
    ExFreePool(v4);
  v14 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 352) + 16LL))(a1 + 352) | 0xA00000000LL;
  v15 = 10;
  sub_1400042F0((__int64)&v16, (int *)&v14);
  v7 = P;
  v8 = &unk_1400D44E0;
  if ( P )
    v8 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v19);
  if ( v7 )
    ExFreePool(v7);
  v16 = &off_1400D41D0;
  v17 = 0;
  P = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  sub_1400011A8(&v16, (__int64)L"\nMax receive packet size: ", 0x1AuLL);
  v9 = P;
  v10 = &unk_1400D44E0;
  if ( P )
    v10 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v10, 2 * v19);
  if ( v9 )
    ExFreePool(v9);
  v14 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 352) + 8LL))(a1 + 352) | 0xA00000000LL;
  v15 = 10;
  sub_1400042F0((__int64)&v16, (int *)&v14);
  v11 = P;
  v12 = &unk_1400D44E0;
  if ( P )
    v12 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v12, 2 * v19);
  if ( v11 )
    ExFreePool(v11);
  v16 = &off_1400D41D0;
  v17 = 0;
  P = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  sub_1400011A8(&v16, (__int64)qword_1400B6F30, 1uLL);
  v13 = P;
  if ( P )
    v5 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v5, 2 * v19);
  if ( v13 )
    ExFreePool(v13);
}
