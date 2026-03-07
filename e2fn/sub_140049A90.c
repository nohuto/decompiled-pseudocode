void __fastcall sub_140049A90(__int64 a1, __int64 a2)
{
  void *v4; // rsi
  PVOID v5; // rdx
  PVOID v6; // rdi
  PVOID v7; // rdx
  __int64 v8; // rax
  void *v9; // rdx
  PVOID v10; // rdi
  PVOID v11; // rdx
  __int64 v12; // rax
  __int64 (__fastcall **v13)(PVOID); // [rsp+20h] [rbp-39h] BYREF
  __int16 v14; // [rsp+28h] [rbp-31h]
  PVOID P; // [rsp+30h] [rbp-29h]
  __int64 v16; // [rsp+38h] [rbp-21h]
  __int64 v17; // [rsp+40h] [rbp-19h]
  __int64 (__fastcall **v18)(PVOID); // [rsp+48h] [rbp-11h] BYREF
  __int16 v19; // [rsp+50h] [rbp-9h]
  PVOID v20; // [rsp+58h] [rbp-1h]
  __int64 v21; // [rsp+60h] [rbp+7h]
  __int64 v22; // [rsp+68h] [rbp+Fh]
  __int64 (__fastcall **v23)(); // [rsp+70h] [rbp+17h] BYREF
  int v24; // [rsp+78h] [rbp+1Fh]
  __int16 v25; // [rsp+7Ch] [rbp+23h]

  v18 = &off_1400D41D0;
  v19 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  sub_1400011A8(&v18, (__int64)L"ProductE2fnHardwareMacAddress", 0x1DuLL);
  v4 = &unk_1400D44E0;
  v5 = &unk_1400D44E0;
  if ( v20 )
    v5 = v20;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v5, 2 * v21);
  v23 = off_1400D69E8;
  v24 = 0;
  v25 = 0;
  sub_140046BD0(a1, (__int64)&v23);
  v13 = &off_1400D41D0;
  v14 = 0;
  P = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  sub_1400011A8(&v13, (__int64)L"\nCurrent MAC address: ", 0x16uLL);
  v6 = P;
  v7 = &unk_1400D44E0;
  if ( P )
    v7 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, 2 * v16);
  if ( v6 )
    ExFreePool(v6);
  v8 = sub_140089420(&v23, &v13);
  v9 = &unk_1400D44E0;
  if ( *(_QWORD *)(v8 + 16) )
    v9 = *(void **)(v8 + 16);
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2LL * *(_QWORD *)(v8 + 24));
  v13 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v13 = &off_1400D41D0;
  v14 = 0;
  P = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  sub_1400011A8(&v13, (__int64)L"\nPermanent MAC address: ", 0x18uLL);
  v10 = P;
  v11 = &unk_1400D44E0;
  if ( P )
    v11 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v11, 2 * v16);
  if ( v10 )
    ExFreePool(v10);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(PVOID)))(*(_QWORD *)(a1 + 376) + 24LL))(
          a1 + 376,
          &v13);
  if ( *(_QWORD *)(v12 + 16) )
    v4 = *(void **)(v12 + 16);
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v4, 2LL * *(_QWORD *)(v12 + 24));
  v13 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  sub_140003840(a2, 0);
  v23 = (__int64 (__fastcall **)())&off_1400D44E8;
  if ( v20 )
    ExFreePool(v20);
}
