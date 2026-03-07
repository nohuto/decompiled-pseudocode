void __fastcall sub_140077940(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 (__fastcall **v10)(PVOID); // [rsp+30h] [rbp-50h] BYREF
  __int16 v11; // [rsp+38h] [rbp-48h]
  PVOID v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-30h]
  _QWORD v15[2]; // [rsp+58h] [rbp-28h] BYREF
  PVOID P; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp-10h]
  __int64 v18; // [rsp+78h] [rbp-8h]

  v10 = &off_1400D41D0;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  sub_1400011A8(&v10, (__int64)L"Speed&DuplexConfig", 0x12uLL);
  v4 = *a2;
  v5 = sub_14009E314(v15, **(unsigned int **)(a1 + 400));
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
  sub_1400011A8(&v10, (__int64)L"FlowControlConfig", 0x11uLL);
  v7 = *a2;
  v8 = sub_14009E208(v15, *(unsigned int *)(*(_QWORD *)(a1 + 400) + 8LL));
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
