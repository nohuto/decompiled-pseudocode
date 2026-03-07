void __fastcall sub_1400075A0(__int64 a1, __int64 a2)
{
  PVOID v2; // rdi
  void *v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  const wchar_t *v8; // rdx
  PVOID v9; // r15
  PVOID v10; // rdx
  __int64 v11; // rax
  PVOID v12; // rcx
  PVOID v13; // rsi
  __int64 (__fastcall **v14)(PVOID); // [rsp+20h] [rbp-30h] BYREF
  __int16 v15; // [rsp+28h] [rbp-28h]
  PVOID P; // [rsp+30h] [rbp-20h]
  __int64 v17; // [rsp+38h] [rbp-18h]
  __int64 v18; // [rsp+40h] [rbp-10h]

  v2 = &unk_1400D44E0;
  v5 = &unk_1400D44E0;
  if ( *(_QWORD *)(a1 + 40) )
    v5 = *(void **)(a1 + 40);
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v5, 2LL * *(_QWORD *)(a1 + 48));
  v15 = 0;
  v14 = &off_1400D41D0;
  P = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( *(_BYTE *)(a1 + 64) )
  {
    v6 = *(_QWORD *)(a1 + 88);
    if ( v6 == 2 )
    {
      v7 = 4LL;
      v8 = L" = b";
    }
    else if ( v6 == 16 )
    {
      v7 = 5LL;
      v8 = L" = 0x";
    }
    else
    {
      v7 = 3LL;
      v8 = L" = ";
    }
    sub_1400011A8(&v14, (__int64)v8, v7);
    v9 = P;
    v10 = &unk_1400D44E0;
    if ( P )
      v10 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v10, 2 * v17);
    if ( v9 )
      ExFreePool(v9);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(PVOID)))(*(_QWORD *)a1 + 24LL))(a1, &v14);
    if ( *(_QWORD *)(v11 + 16) )
      v2 = *(PVOID *)(v11 + 16);
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v2, 2LL * *(_QWORD *)(v11 + 24));
    v12 = P;
    v14 = &off_1400D41D0;
    if ( P )
      goto LABEL_21;
  }
  else
  {
    sub_1400011A8(&v14, (__int64)L" Is invalid", 0xBuLL);
    v13 = P;
    if ( P )
      v2 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v2, 2 * v17);
    if ( v13 )
    {
      v12 = v13;
LABEL_21:
      ExFreePool(v12);
    }
  }
}
