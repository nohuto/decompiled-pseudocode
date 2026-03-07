void *(__fastcall **__fastcall sub_140087050(__int64 a1, __int64 a2))(CUnknown *__hidden this, unsigned int)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 (__fastcall **v7)(PVOID); // rax
  __int64 (__fastcall *v8)(PVOID); // rax
  PVOID v9; // rbx
  PVOID v10; // rdx
  PVOID v11; // rbx
  PVOID v12; // rdx
  __int64 (__fastcall **v14)(PVOID); // [rsp+28h] [rbp-59h] BYREF
  __int16 v15; // [rsp+30h] [rbp-51h]
  PVOID P; // [rsp+38h] [rbp-49h]
  __int64 v17; // [rsp+40h] [rbp-41h]
  __int64 v18; // [rsp+48h] [rbp-39h]
  __int64 (__fastcall **v19)(PVOID); // [rsp+58h] [rbp-29h] BYREF
  __int64 (__fastcall **v20)(); // [rsp+60h] [rbp-21h]
  unsigned __int64 v21; // [rsp+A0h] [rbp+1Fh]
  __int64 v22; // [rsp+A8h] [rbp+27h]
  __int64 v23; // [rsp+B0h] [rbp+2Fh]

  v3 = *(_QWORD *)(a1 + 536);
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v15 = 0;
    v14 = &off_1400D41D0;
    P = 0LL;
    v17 = 0LL;
    v6 = v5;
    v18 = 0LL;
    sub_1400011A8(&v14, (__int64)L"baseAddress", 0xBuLL);
    sub_1400120E0((__int64)&v19, (__int64)&v14);
    v23 = 10LL;
    v7 = &off_1400D46F8;
    v19 = &off_1400D46F8;
    v20 = off_1400D4720;
    v21 = 0xA5A5A5A5A5000012uLL;
    v22 = v6;
    if ( P )
    {
      ExFreePool(P);
      v7 = v19;
    }
    v8 = v7[4];
    v23 = 16LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v8)(&v19, a2);
    v14 = &off_1400D41D0;
    v15 = 0;
    P = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    sub_1400011A8(&v14, (__int64)qword_1400B6F30, 1uLL);
    v9 = P;
    v10 = &unk_1400D44E0;
    if ( P )
      v10 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v10, 2 * v17);
    if ( v9 )
      ExFreePool(v9);
    v19 = &off_1400D46F8;
    v20 = off_1400D4720;
    sub_140005CFC(&v19);
  }
  else
  {
    v15 = 0;
    v14 = &off_1400D41D0;
    P = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    sub_1400011A8(&v14, (__int64)L"Descriptors buffer is null\n", 0x1BuLL);
    v11 = P;
    v12 = &unk_1400D44E0;
    if ( P )
      v12 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v12, 2 * v17);
    if ( v11 )
      ExFreePool(v11);
  }
  return sub_14007B620(a1, a2);
}
