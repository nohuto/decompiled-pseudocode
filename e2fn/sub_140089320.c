void __fastcall sub_140089320(__int64 a1, __int64 a2, int a3)
{
  void *v5; // rsi
  PVOID v6; // rdx
  __int64 v7; // rax
  __int64 (__fastcall **v8)(PVOID); // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+28h] [rbp-30h]
  PVOID P; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  if ( !a3 )
  {
    v8 = &off_1400D41D0;
    v9 = 0;
    P = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    sub_1400011A8(&v8, (__int64)L"Address: ", 9uLL);
    v5 = &unk_1400D44E0;
    v6 = &unk_1400D44E0;
    if ( P )
      v6 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2 * v11);
    if ( P )
      ExFreePool(P);
    v7 = sub_140088C90(a1, (__int64)&v8);
    if ( *(_QWORD *)(v7 + 16) )
      v5 = *(void **)(v7 + 16);
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v5, 2LL * *(_QWORD *)(v7 + 24));
    v8 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
  }
}
