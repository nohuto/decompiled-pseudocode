void __fastcall sub_1400826B0(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 (__fastcall **v13)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v14; // [rsp+38h] [rbp-28h]
  PVOID P; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp-10h]

  v13 = &off_1400D41D0;
  v14 = 0;
  P = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  sub_1400011A8(&v13, (__int64)L"Send Packets Count", 0x12uLL);
  v4 = *a2;
  v5 = a1 + 7;
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(a1[7] + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v4 + 8))(a2, v6, &v13, a1[75]);
  v13 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v13 = &off_1400D41D0;
  v14 = 0;
  P = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  sub_1400011A8(&v13, (__int64)L"Fragment Count", 0xEuLL);
  v7 = *a2;
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v7 + 8))(a2, v8, &v13, a1[74]);
  v13 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v13 = &off_1400D41D0;
  v14 = 0;
  P = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  sub_1400011A8(&v13, (__int64)L"Context Descriptor Changed Count", 0x20uLL);
  v9 = *a2;
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v9 + 8))(a2, v10, &v13, a1[77]);
  v13 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v13 = &off_1400D41D0;
  v14 = 0;
  P = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  sub_1400011A8(&v13, (__int64)L"Get Last Transmitted Called While Queue Empty Counter", 0x35uLL);
  v11 = *a2;
  v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v11 + 8))(a2, v12, &v13, a1[78]);
  v13 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
}
