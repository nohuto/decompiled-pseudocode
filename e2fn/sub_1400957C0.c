void __fastcall sub_1400957C0(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 (__fastcall **v17)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v18; // [rsp+38h] [rbp-28h]
  PVOID P; // [rsp+40h] [rbp-20h]
  __int64 v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp-10h]

  v17 = &off_1400D41D0;
  v18 = 0;
  P = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  sub_1400011A8(&v17, (__int64)L"Transmitted Packets Count", 0x19uLL);
  v4 = *a2;
  v5 = a1 + 7;
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(a1[7] + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v4 + 8))(a2, v6, &v17, a1[97]);
  v17 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v17 = &off_1400D41D0;
  v18 = 0;
  P = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  sub_1400011A8(&v17, (__int64)L"IP Checksum Count", 0x11uLL);
  v7 = *a2;
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v7 + 8))(a2, v8, &v17, a1[102]);
  v17 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v17 = &off_1400D41D0;
  v18 = 0;
  P = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  sub_1400011A8(&v17, (__int64)L"TCP Checksum Count", 0x12uLL);
  v9 = *a2;
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v9 + 8))(a2, v10, &v17, a1[103]);
  v17 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v17 = &off_1400D41D0;
  v18 = 0;
  P = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  sub_1400011A8(&v17, (__int64)L"UDP Checksum Count", 0x12uLL);
  v11 = *a2;
  v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v11 + 8))(
    a2,
    v12,
    &v17,
    a1[104]);
  v17 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v17 = &off_1400D41D0;
  v18 = 0;
  P = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  sub_1400011A8(&v17, (__int64)L"Transmitted Vlan And Priority Fragments Count", 0x2DuLL);
  v13 = *a2;
  v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v13 + 8))(
    a2,
    v14,
    &v17,
    a1[105]);
  v17 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v17 = &off_1400D41D0;
  v18 = 0;
  P = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  sub_1400011A8(&v17, (__int64)L"Discarded packets count", 0x17uLL);
  v15 = *a2;
  v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v15 + 8))(
    a2,
    v16,
    &v17,
    a1[106]);
  v17 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
}
