void __fastcall sub_14006E920(_QWORD *a1, __int64 a2, int a3)
{
  void *v3; // rsi
  void *v6; // rdx
  PVOID v7; // r14
  PVOID v8; // rdx
  void *v9; // rdx
  PVOID v10; // r14
  PVOID v11; // rdx
  __int64 (__fastcall **v12)(PVOID); // [rsp+20h] [rbp-30h] BYREF
  __int16 v13; // [rsp+28h] [rbp-28h]
  PVOID P; // [rsp+30h] [rbp-20h]
  __int64 v15; // [rsp+38h] [rbp-18h]
  __int64 v16; // [rsp+40h] [rbp-10h]

  if ( !a3 )
  {
    v3 = &unk_1400D44E0;
    v6 = &unk_1400D44E0;
    if ( a1[14] )
      v6 = (void *)a1[14];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2LL * a1[15]);
    v13 = 0;
    v12 = &off_1400D41D0;
    P = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    sub_1400011A8(&v12, (__int64)L": Acquire time = ", 0x11uLL);
    v7 = P;
    v8 = &unk_1400D44E0;
    if ( P )
      v8 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v15);
    if ( v7 )
      ExFreePool(v7);
    v9 = &unk_1400D44E0;
    if ( a1[4] )
      v9 = (void *)a1[4];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2LL * a1[5]);
    v12 = &off_1400D41D0;
    v13 = 0;
    P = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    sub_1400011A8(&v12, (__int64)L", Release time = ", 0x11uLL);
    v10 = P;
    v11 = &unk_1400D44E0;
    if ( P )
      v11 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v11, 2 * v15);
    if ( v10 )
      ExFreePool(v10);
    if ( a1[9] )
      v3 = (void *)a1[9];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v3, 2LL * a1[10]);
  }
}
