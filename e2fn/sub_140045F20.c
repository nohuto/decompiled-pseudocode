void __fastcall sub_140045F20(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 (__fastcall **v10)(PVOID); // [rsp+30h] [rbp-49h] BYREF
  __int16 v11; // [rsp+38h] [rbp-41h]
  PVOID v12; // [rsp+40h] [rbp-39h]
  __int64 v13; // [rsp+48h] [rbp-31h]
  __int64 v14; // [rsp+50h] [rbp-29h]
  _QWORD v15[2]; // [rsp+58h] [rbp-21h] BYREF
  PVOID P; // [rsp+68h] [rbp-11h]
  __int64 v17; // [rsp+70h] [rbp-9h]
  __int64 v18; // [rsp+78h] [rbp-1h]
  __int64 (__fastcall **v19)(); // [rsp+80h] [rbp+7h] BYREF
  int v20; // [rsp+88h] [rbp+Fh]
  __int16 v21; // [rsp+8Ch] [rbp+13h]

  v19 = off_1400D69E8;
  v20 = 0;
  v21 = 0;
  sub_140046BD0(a1);
  v10 = &off_1400D41D0;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  sub_1400011A8(&v10, (__int64)L"CurrentMacAddress", 0x11uLL);
  v4 = *a2;
  v5 = sub_140089420(&v19, v15);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 56) + 8LL))(a1 + 56);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), __int64))(v4 + 24))(a2, v6, &v10, v5);
  v15[0] = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v10 = &off_1400D41D0;
  if ( v12 )
    ExFreePool(v12);
  v10 = &off_1400D41D0;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  sub_1400011A8(&v10, (__int64)L"PermanentMacAddress", 0x13uLL);
  v7 = *a2;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(a1 + 376) + 24LL))(a1 + 376, v15);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 56) + 8LL))(a1 + 56);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), __int64))(v7 + 24))(a2, v9, &v10, v8);
  v15[0] = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v10 = &off_1400D41D0;
  if ( v12 )
    ExFreePool(v12);
}
