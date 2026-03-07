void __fastcall sub_140006E30(__int64 a1, __int64 a2, int a3)
{
  PVOID v5; // rbx
  PVOID v6; // r15
  PVOID v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r12
  PVOID v13; // r14
  PVOID v14; // rdx
  PVOID v15; // rbx
  __int64 (__fastcall **v16)(PVOID); // [rsp+20h] [rbp-30h] BYREF
  __int16 v17; // [rsp+28h] [rbp-28h]
  PVOID P; // [rsp+30h] [rbp-20h]
  __int64 v19; // [rsp+38h] [rbp-18h]
  __int64 v20; // [rsp+40h] [rbp-10h]

  if ( !a3 )
  {
    v16 = &off_1400D41D0;
    v17 = 0;
    P = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    sub_1400011A8(&v16, (__int64)L"Attributes Store\n", 0x11uLL);
    v5 = P;
    v6 = &unk_1400D44E0;
    v7 = &unk_1400D44E0;
    if ( P )
      v7 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, 2 * v19);
    if ( v5 )
      ExFreePool(v5);
    v8 = *(_QWORD *)(a1 + 1008);
    v9 = a1 + 976;
    v10 = *(_QWORD *)(a1 + 984);
    v11 = v10;
    if ( v8 )
      v11 = v9;
    for ( ; v10 != v11; v10 = *(_QWORD *)(v10 + 8) )
    {
      v12 = *(_QWORD *)(v10 + 16);
      v16 = &off_1400D41D0;
      v17 = 0;
      P = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      sub_1400011A8(
        &v16,
        (__int64)L"-----------------------------------------------------------------------\n",
        0x48uLL);
      v13 = P;
      v14 = &unk_1400D44E0;
      if ( P )
        v14 = P;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v14, 2 * v19);
      if ( v13 )
        ExFreePool(v13);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v12 + 16LL))(v12, a2, 0LL);
    }
    v16 = &off_1400D41D0;
    v17 = 0;
    P = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    sub_1400011A8(&v16, (__int64)L"-----------------------------------------------------------------------\n", 0x48uLL);
    v15 = P;
    if ( P )
      v6 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2 * v19);
    if ( v15 )
      ExFreePool(v15);
  }
}
