void __fastcall sub_1400949E0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall **v5)(PVOID); // rdx
  PVOID v6; // rbx
  PVOID v7; // r14
  PVOID v8; // rdx
  PVOID v9; // rbx
  PVOID v10; // rdx
  PVOID v11; // rbx
  PVOID v12; // rbx
  __int64 (__fastcall **v13)(PVOID); // [rsp+28h] [rbp-59h] BYREF
  __int16 v14; // [rsp+30h] [rbp-51h]
  PVOID P; // [rsp+38h] [rbp-49h]
  __int64 v16; // [rsp+40h] [rbp-41h]
  __int64 v17; // [rsp+48h] [rbp-39h]
  __int64 (__fastcall **v18)(PVOID); // [rsp+58h] [rbp-29h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+60h] [rbp-21h]
  unsigned __int64 v20; // [rsp+A0h] [rbp+1Fh]
  __int64 v21; // [rsp+A8h] [rbp+27h]
  __int64 v22; // [rsp+B0h] [rbp+2Fh]

  v13 = &off_1400D41D0;
  v14 = 0;
  P = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  sub_1400011A8(&v13, (__int64)L"m_queueId", 9uLL);
  v4 = *(unsigned int *)(a1 + 368);
  sub_1400120E0((__int64)&v18, (__int64)&v13);
  v19 = off_1400D5638;
  v22 = 10LL;
  v5 = &off_1400D5610;
  v18 = &off_1400D5610;
  v20 = 0xA5A5A5A5A5000012uLL;
  v21 = v4;
  if ( P )
  {
    ExFreePool(P);
    v5 = v18;
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v5[4])(&v18, a2);
  v13 = &off_1400D41D0;
  v14 = 0;
  P = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  sub_1400011A8(&v13, (__int64)qword_1400B6F30, 1uLL);
  v6 = P;
  v7 = &unk_1400D44E0;
  v8 = &unk_1400D44E0;
  if ( P )
    v8 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v16);
  if ( v6 )
    ExFreePool(v6);
  v18 = &off_1400D5610;
  v19 = off_1400D5638;
  sub_140005CFC(&v18);
  if ( *(_QWORD *)(a1 + 408) )
  {
    sub_140003990(a2, 0);
    v13 = &off_1400D41D0;
    v14 = 0;
    P = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    sub_1400011A8(&v13, (__int64)L"Packet Ring:\n", 0xDuLL);
    v9 = P;
    v10 = &unk_1400D44E0;
    if ( P )
      v10 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v10, 2 * v16);
    if ( v9 )
      ExFreePool(v9);
    sub_140093F5C(a1, **(unsigned __int16 ***)(a1 + 408), a2, 0);
    sub_140003990(a2, 0);
    v13 = &off_1400D41D0;
    v14 = 0;
    P = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    sub_1400011A8(&v13, (__int64)L"Fragment Ring:\n", 0xFuLL);
    v11 = P;
    if ( P )
      v7 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, 2 * v16);
    if ( v11 )
      ExFreePool(v11);
    sub_140093F5C(a1, *(unsigned __int16 **)(*(_QWORD *)(a1 + 408) + 8LL), a2, 0);
    sub_140003990(a2, 0);
  }
  else
  {
    v13 = &off_1400D41D0;
    v14 = 0;
    P = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    sub_1400011A8(&v13, (__int64)L"m_rings is null\n", 0x10uLL);
    v12 = P;
    if ( P )
      v7 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, 2 * v16);
    if ( v12 )
      ExFreePool(v12);
  }
}
