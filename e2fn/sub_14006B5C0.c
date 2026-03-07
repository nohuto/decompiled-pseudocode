void __fastcall sub_14006B5C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  PVOID v5; // rbx
  PVOID v6; // rdx
  __int64 v7; // rax
  PVOID v8; // rdx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  unsigned __int64 v12; // r8
  const wchar_t *v13; // rdx
  PVOID v14; // r14
  __int128 v15; // [rsp+28h] [rbp-99h] BYREF
  PVOID P; // [rsp+38h] [rbp-89h]
  __int64 v17; // [rsp+40h] [rbp-81h]
  __int64 v18; // [rsp+48h] [rbp-79h]
  __int128 v19; // [rsp+58h] [rbp-69h] BYREF
  PVOID v20; // [rsp+68h] [rbp-59h]
  __int64 v21; // [rsp+70h] [rbp-51h]
  __int64 (__fastcall **v22[2])(PVOID); // [rsp+88h] [rbp-39h] BYREF
  PVOID v23; // [rsp+98h] [rbp-29h]
  __int64 v24; // [rsp+A0h] [rbp-21h]
  __int64 v25; // [rsp+A8h] [rbp-19h]
  _BYTE v26[16]; // [rsp+B0h] [rbp-11h] BYREF
  PVOID v27; // [rsp+C0h] [rbp-1h]
  __int64 v28; // [rsp+C8h] [rbp+7h]
  __int64 (__fastcall **v29[2])(PVOID); // [rsp+D8h] [rbp+17h] BYREF
  PVOID v30; // [rsp+E8h] [rbp+27h]

  LODWORD(v19) = *(_DWORD *)(a1 + 368);
  *(_QWORD *)((char *)&v19 + 4) = 0xA00000010LL;
  sub_1400042F0((__int64)v22, (int *)&v19);
  v4 = sub_14006B0A0((__int64)&v15, (__int64)L"Length: 0x", v22);
  sub_14002D2AC((__int64)v26, v4, (__int64)qword_1400B6F30);
  *(_QWORD *)&v15 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( v23 )
    ExFreePool(v23);
  v5 = &unk_1400D44E0;
  v6 = &unk_1400D44E0;
  if ( v27 )
    v6 = v27;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2 * v28);
  *(_QWORD *)&v19 = *(_QWORD *)(a1 + 360);
  *((_QWORD *)&v19 + 1) = 16LL;
  v20 = (PVOID)10;
  v15 = v19;
  P = (PVOID)10;
  sub_14000139C((__int64)v29, (__int64 *)&v15);
  v7 = sub_14004BA74((__int64)v22, (__int64)L"Base address: 0x", v29);
  sub_14002D2AC((__int64)&v19, v7, (__int64)qword_1400B6F30);
  v22[0] = &off_1400D41D0;
  if ( v23 )
    ExFreePool(v23);
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( v30 )
    ExFreePool(v30);
  v8 = &unk_1400D44E0;
  if ( v20 )
    v8 = v20;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v21);
  v9 = *(_DWORD *)(a1 + 372);
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          goto LABEL_25;
        v12 = 15LL;
        v13 = L"State: Removed\n";
      }
      else
      {
        v12 = 16LL;
        v13 = L"State: Unmapped\n";
      }
    }
    else
    {
      v12 = 19LL;
      v13 = L"State: Unavailable\n";
    }
  }
  else
  {
    v12 = 17LL;
    v13 = L"State: Available\n";
  }
  *(_QWORD *)&v15 = &off_1400D41D0;
  WORD4(v15) = 0;
  P = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  sub_1400011A8(&v15, (__int64)v13, v12);
  v14 = P;
  if ( P )
    v5 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v5, 2 * v17);
  if ( v14 )
    ExFreePool(v14);
LABEL_25:
  if ( v20 )
    ExFreePool(v20);
  if ( v27 )
    ExFreePool(v27);
}
