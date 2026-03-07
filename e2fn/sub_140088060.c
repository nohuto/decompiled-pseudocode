__int64 __fastcall sub_140088060(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  PVOID v5; // rbx
  PVOID v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rsi
  void *v11; // rdx
  PVOID v12; // rbx
  PVOID v13; // rdx
  __int64 (__fastcall **v15)(PVOID); // [rsp+20h] [rbp-30h] BYREF
  __int16 v16; // [rsp+28h] [rbp-28h]
  PVOID P; // [rsp+30h] [rbp-20h]
  __int64 v18; // [rsp+38h] [rbp-18h]
  __int64 v19; // [rsp+40h] [rbp-10h]

  v2 = a1[46];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v15 = &off_1400D41D0;
  v16 = 0;
  P = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( a1[56] )
  {
    sub_1400011A8(&v15, (__int64)L"Enabled, Active Requests:\n", 0x1AuLL);
    v5 = P;
    v6 = &unk_1400D44E0;
    if ( P )
      v6 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2 * v18);
    if ( v5 )
      ExFreePool(v5);
    v7 = a1[56];
    v8 = a1 + 48;
    v9 = (_QWORD *)a1[49];
    v10 = v9;
    if ( v7 )
      v10 = v8;
    while ( v9 != v10 )
    {
      v11 = &unk_1400D44E0;
      if ( v9[4] )
        v11 = (void *)v9[4];
      (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v11, 2LL * v9[5]);
      sub_140003840(a2, 0);
      v9 = (_QWORD *)v9[1];
    }
  }
  else
  {
    sub_1400011A8(&v15, (__int64)L"Disabled\n", 9uLL);
    v12 = P;
    v13 = &unk_1400D44E0;
    if ( P )
      v13 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v13, 2 * v18);
    if ( v12 )
      ExFreePool(v12);
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
}
