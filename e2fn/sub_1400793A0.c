void __fastcall sub_1400793A0(__int64 a1, __int64 a2)
{
  PVOID v4; // rdi
  void *v5; // rsi
  PVOID v6; // rdx
  __int64 v7; // rax
  void *v8; // rdx
  PVOID v9; // rdi
  PVOID v10; // rdx
  __int64 v11; // rax
  void *v12; // rdx
  PVOID v13; // rdi
  PVOID v14; // rdx
  __int64 v15; // rax
  __int64 (__fastcall **v16)(PVOID); // [rsp+20h] [rbp-30h] BYREF
  __int16 v17; // [rsp+28h] [rbp-28h]
  PVOID P; // [rsp+30h] [rbp-20h]
  __int64 v19; // [rsp+38h] [rbp-18h]
  __int64 v20; // [rsp+40h] [rbp-10h]

  v16 = &off_1400D41D0;
  v17 = 0;
  P = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  sub_1400011A8(&v16, (__int64)L"Speed & Duplex: ", 0x10uLL);
  v4 = P;
  v5 = &unk_1400D44E0;
  v6 = &unk_1400D44E0;
  if ( P )
    v6 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2 * v19);
  if ( v4 )
    ExFreePool(v4);
  v7 = sub_14009E314(&v16, **(unsigned int **)(a1 + 144));
  v8 = &unk_1400D44E0;
  if ( *(_QWORD *)(v7 + 16) )
    v8 = *(void **)(v7 + 16);
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2LL * *(_QWORD *)(v7 + 24));
  v16 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v16 = &off_1400D41D0;
  v17 = 0;
  P = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  sub_1400011A8(&v16, (__int64)L"\nWait auto negotiation: ", 0x18uLL);
  v9 = P;
  v10 = &unk_1400D44E0;
  if ( P )
    v10 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v10, 2 * v19);
  if ( v9 )
    ExFreePool(v9);
  v11 = sub_14009E3EC(&v16, *(unsigned int *)(*(_QWORD *)(a1 + 144) + 4LL));
  v12 = &unk_1400D44E0;
  if ( *(_QWORD *)(v11 + 16) )
    v12 = *(void **)(v11 + 16);
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v12, 2LL * *(_QWORD *)(v11 + 24));
  v16 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v16 = &off_1400D41D0;
  v17 = 0;
  P = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  sub_1400011A8(&v16, (__int64)L"\nFlow Control: ", 0xFuLL);
  v13 = P;
  v14 = &unk_1400D44E0;
  if ( P )
    v14 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v14, 2 * v19);
  if ( v13 )
    ExFreePool(v13);
  v15 = sub_14009E208(&v16, *(unsigned int *)(*(_QWORD *)(a1 + 144) + 8LL));
  if ( *(_QWORD *)(v15 + 16) )
    v5 = *(void **)(v15 + 16);
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v5, 2LL * *(_QWORD *)(v15 + 24));
  v16 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  sub_140003840(a2, 0);
}
