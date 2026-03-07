void *(__fastcall **__fastcall sub_1400629D0(__int64 a1, __int64 a2))(CUnknown *__hidden this, unsigned int)
{
  __int64 v4; // rbx
  __int64 (__fastcall **v5)(PVOID); // rax
  __int64 (__fastcall *v6)(PVOID); // rax
  PVOID v7; // rbx
  PVOID v8; // r14
  PVOID v9; // rdx
  __int64 v10; // rbx
  __int64 (__fastcall **v11)(PVOID); // rax
  PVOID v12; // rbx
  __int64 (__fastcall **v14)(PVOID); // [rsp+28h] [rbp-A9h] BYREF
  __int64 v15; // [rsp+30h] [rbp-A1h]
  PVOID v16; // [rsp+38h] [rbp-99h]
  __int64 v17; // [rsp+40h] [rbp-91h]
  __int64 v18; // [rsp+48h] [rbp-89h]
  __int64 (__fastcall **v19)(PVOID); // [rsp+50h] [rbp-81h] BYREF
  __int16 v20; // [rsp+58h] [rbp-79h]
  PVOID P; // [rsp+60h] [rbp-71h]
  __int64 v22; // [rsp+68h] [rbp-69h]
  __int64 v23; // [rsp+70h] [rbp-61h]
  __int64 (__fastcall **v24)(PVOID); // [rsp+78h] [rbp-59h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+80h] [rbp-51h]
  unsigned __int64 v26; // [rsp+C0h] [rbp-11h]
  __int64 v27; // [rsp+C8h] [rbp-9h]
  __int64 v28; // [rsp+D0h] [rbp-1h]
  __int64 (__fastcall **v29)(PVOID); // [rsp+D8h] [rbp+7h] BYREF
  __int16 v30; // [rsp+E0h] [rbp+Fh]
  PVOID v31; // [rsp+E8h] [rbp+17h]
  __int64 v32; // [rsp+F0h] [rbp+1Fh]
  __int64 v33; // [rsp+F8h] [rbp+27h]

  v19 = &off_1400D41D0;
  v20 = 0;
  P = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  sub_1400011A8(&v19, (__int64)L"st_enqueueCount", 0xFuLL);
  v4 = *(_QWORD *)(a1 + 392);
  sub_1400120E0((__int64)&v24, (__int64)&v19);
  v28 = 10LL;
  v19 = &off_1400D41D0;
  v5 = &off_1400D46F8;
  v24 = &off_1400D46F8;
  v25 = off_1400D4720;
  v26 = 0xA5A5A5A5A5000012uLL;
  v27 = v4;
  if ( P )
  {
    ExFreePool(P);
    v5 = v24;
  }
  v6 = v5[4];
  P = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v6)(&v24, a2);
  v14 = &off_1400D41D0;
  LOWORD(v15) = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  sub_1400011A8(&v14, (__int64)qword_1400B6F30, 1uLL);
  v7 = v16;
  v8 = &unk_1400D44E0;
  v9 = &unk_1400D44E0;
  if ( v16 )
    v9 = v16;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2 * v17);
  v14 = &off_1400D41D0;
  if ( v7 )
    ExFreePool(v7);
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v24 = &off_1400D46F8;
  v25 = off_1400D4720;
  sub_140005CFC(&v24);
  LOWORD(v15) = 0;
  v14 = &off_1400D41D0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  sub_1400011A8(&v14, (__int64)L"st_ignoreCount", 0xEuLL);
  v10 = *(_QWORD *)(a1 + 400);
  sub_1400120E0((__int64)&v24, (__int64)&v14);
  v25 = off_1400D4720;
  v11 = &off_1400D46F8;
  v28 = 10LL;
  v24 = &off_1400D46F8;
  v26 = 0xA5A5A5A5A5000012uLL;
  v27 = v10;
  if ( v16 )
  {
    ExFreePool(v16);
    v11 = v24;
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v11[4])(&v24, a2);
  v30 = 0;
  v29 = &off_1400D41D0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)qword_1400B6F30, 1uLL);
  v12 = v31;
  if ( v31 )
    v8 = v31;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v32);
  if ( v12 )
    ExFreePool(v12);
  v24 = &off_1400D46F8;
  v25 = off_1400D4720;
  return sub_140005CFC(&v24);
}
