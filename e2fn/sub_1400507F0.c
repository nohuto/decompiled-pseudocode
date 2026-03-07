void *(__fastcall **__fastcall sub_1400507F0(__int64 a1, __int64 a2))(CUnknown *__hidden this, unsigned int)
{
  __int64 v4; // rbx
  __int64 (__fastcall **v5)(PVOID); // rdx
  __int64 (__fastcall *v6)(PVOID); // rax
  PVOID v7; // rbx
  PVOID v8; // r14
  PVOID v9; // rdx
  __int64 v10; // rbx
  __int64 (__fastcall **v11)(PVOID); // rdx
  __int64 (__fastcall *v12)(PVOID); // rax
  PVOID v13; // rbx
  __int64 (__fastcall **v15)(PVOID); // [rsp+28h] [rbp-A9h] BYREF
  __int64 v16; // [rsp+30h] [rbp-A1h]
  PVOID v17; // [rsp+38h] [rbp-99h]
  __int64 v18; // [rsp+40h] [rbp-91h]
  __int64 v19; // [rsp+48h] [rbp-89h]
  __int64 (__fastcall **v20)(PVOID); // [rsp+50h] [rbp-81h] BYREF
  __int16 v21; // [rsp+58h] [rbp-79h]
  PVOID P; // [rsp+60h] [rbp-71h]
  __int64 v23; // [rsp+68h] [rbp-69h]
  __int64 v24; // [rsp+70h] [rbp-61h]
  __int64 (__fastcall **v25)(PVOID); // [rsp+78h] [rbp-59h] BYREF
  __int64 (__fastcall **v26)(); // [rsp+80h] [rbp-51h]
  unsigned __int64 v27; // [rsp+C0h] [rbp-11h]
  __int64 v28; // [rsp+C8h] [rbp-9h]
  __int64 v29; // [rsp+D0h] [rbp-1h]
  __int64 (__fastcall **v30)(PVOID); // [rsp+D8h] [rbp+7h] BYREF
  __int16 v31; // [rsp+E0h] [rbp+Fh]
  PVOID v32; // [rsp+E8h] [rbp+17h]
  __int64 v33; // [rsp+F0h] [rbp+1Fh]
  __int64 v34; // [rsp+F8h] [rbp+27h]

  v20 = &off_1400D41D0;
  v21 = 0;
  P = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  sub_1400011A8(&v20, (__int64)L"m_ImrShadow", 0xBuLL);
  v4 = *(unsigned int *)(a1 + 388);
  sub_1400120E0((__int64)&v25, (__int64)&v20);
  v29 = 10LL;
  v5 = &off_1400D5610;
  v25 = &off_1400D5610;
  v26 = off_1400D5638;
  v27 = 0xA5A5A5A5A5000012uLL;
  v28 = v4;
  v20 = &off_1400D41D0;
  if ( P )
  {
    ExFreePool(P);
    v5 = v25;
  }
  v6 = v5[4];
  P = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v29 = 16LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v6)(&v25, a2);
  v15 = &off_1400D41D0;
  LOWORD(v16) = 0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  sub_1400011A8(&v15, (__int64)qword_1400B6F30, 1uLL);
  v7 = v17;
  v8 = &unk_1400D44E0;
  v9 = &unk_1400D44E0;
  if ( v17 )
    v9 = v17;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2 * v18);
  v15 = &off_1400D41D0;
  if ( v7 )
    ExFreePool(v7);
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v25 = &off_1400D5610;
  v26 = off_1400D5638;
  sub_140005CFC(&v25);
  LOWORD(v16) = 0;
  v15 = &off_1400D41D0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  sub_1400011A8(&v15, (__int64)L"m_IcrShadow", 0xBuLL);
  v10 = *(unsigned int *)(a1 + 384);
  sub_1400120E0((__int64)&v25, (__int64)&v15);
  v11 = &off_1400D5610;
  v25 = &off_1400D5610;
  v26 = off_1400D5638;
  v27 = 0xA5A5A5A5A5000012uLL;
  v28 = v10;
  v29 = 10LL;
  if ( v17 )
  {
    ExFreePool(v17);
    v11 = v25;
  }
  v12 = v11[4];
  v29 = 16LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v12)(&v25, a2);
  v31 = 0;
  v30 = &off_1400D41D0;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  sub_1400011A8(&v30, (__int64)qword_1400B6F30, 1uLL);
  v13 = v32;
  if ( v32 )
    v8 = v32;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v33);
  if ( v13 )
    ExFreePool(v13);
  v25 = &off_1400D5610;
  v26 = off_1400D5638;
  return sub_140005CFC(&v25);
}
