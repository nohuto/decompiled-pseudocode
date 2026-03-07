void __fastcall sub_140007740(__int64 a1, __int64 a2)
{
  PVOID v2; // rdi
  void *v5; // rdx
  PVOID v6; // rsi
  PVOID v7; // rdx
  __int64 v8; // rax
  PVOID v9; // rcx
  PVOID v10; // rsi
  __int64 (__fastcall **v11)(PVOID); // [rsp+20h] [rbp-30h] BYREF
  __int16 v12; // [rsp+28h] [rbp-28h]
  PVOID P; // [rsp+30h] [rbp-20h]
  __int64 v14; // [rsp+38h] [rbp-18h]
  __int64 v15; // [rsp+40h] [rbp-10h]

  v2 = &unk_1400D44E0;
  v5 = &unk_1400D44E0;
  if ( *(_QWORD *)(a1 + 40) )
    v5 = *(void **)(a1 + 40);
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v5, 2LL * *(_QWORD *)(a1 + 48));
  v12 = 0;
  v11 = &off_1400D41D0;
  P = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( *(_BYTE *)(a1 + 64) )
  {
    sub_1400011A8(&v11, (__int64)L" = ", 3uLL);
    v6 = P;
    v7 = &unk_1400D44E0;
    if ( P )
      v7 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, 2 * v14);
    if ( v6 )
      ExFreePool(v6);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(PVOID)))(*(_QWORD *)a1 + 24LL))(a1, &v11);
    if ( *(_QWORD *)(v8 + 16) )
      v2 = *(PVOID *)(v8 + 16);
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v2, 2LL * *(_QWORD *)(v8 + 24));
    v9 = P;
    v11 = &off_1400D41D0;
    if ( P )
      goto LABEL_16;
  }
  else
  {
    sub_1400011A8(&v11, (__int64)L" Is invalid", 0xBuLL);
    v10 = P;
    if ( P )
      v2 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v2, 2 * v14);
    if ( v10 )
    {
      v9 = v10;
LABEL_16:
      ExFreePool(v9);
    }
  }
}
