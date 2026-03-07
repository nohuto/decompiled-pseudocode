__int64 __fastcall sub_1400702C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  PVOID v5; // rbx
  PVOID v6; // rsi
  PVOID v7; // rdx
  PVOID v8; // rbx
  PVOID v9; // rdx
  PVOID v10; // rbx
  PVOID v11; // rdx
  PVOID v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // r12
  volatile signed __int32 *v15; // rsi
  __int64 v17; // [rsp+28h] [rbp-79h] BYREF
  volatile signed __int32 *v18; // [rsp+30h] [rbp-71h]
  __int64 (__fastcall **v19)(PVOID); // [rsp+38h] [rbp-69h] BYREF
  __int16 v20; // [rsp+40h] [rbp-61h]
  PVOID P; // [rsp+48h] [rbp-59h]
  __int64 v22; // [rsp+50h] [rbp-51h]
  __int64 v23; // [rsp+58h] [rbp-49h]
  __int64 (__fastcall **v24)(PVOID); // [rsp+60h] [rbp-41h] BYREF
  __int16 v25; // [rsp+68h] [rbp-39h]
  PVOID v26; // [rsp+70h] [rbp-31h]
  __int64 v27; // [rsp+78h] [rbp-29h]
  __int64 v28; // [rsp+80h] [rbp-21h]
  __int64 (__fastcall **v29)(PVOID); // [rsp+88h] [rbp-19h] BYREF
  __int16 v30; // [rsp+90h] [rbp-11h]
  PVOID v31; // [rsp+98h] [rbp-9h]
  __int64 v32; // [rsp+A0h] [rbp-1h]
  __int64 v33; // [rsp+A8h] [rbp+7h]
  __int64 (__fastcall **v34)(PVOID); // [rsp+B0h] [rbp+Fh] BYREF
  __int16 v35; // [rsp+B8h] [rbp+17h]
  PVOID v36; // [rsp+C0h] [rbp+1Fh]
  __int64 v37; // [rsp+C8h] [rbp+27h]
  __int64 v38; // [rsp+D0h] [rbp+2Fh]

  v2 = *(_QWORD *)(a1 + 344);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 248) + 8LL))(a1 + 248, a2, 0LL);
  v19 = &off_1400D41D0;
  v20 = 0;
  P = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  sub_1400011A8(&v19, (__int64)qword_1400B6F30, 1uLL);
  v5 = P;
  v6 = &unk_1400D44E0;
  v7 = &unk_1400D44E0;
  if ( P )
    v7 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, 2 * v22);
  if ( v5 )
    ExFreePool(v5);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 152) + 8LL))(a1 + 152, a2, 0LL);
  v24 = &off_1400D41D0;
  v25 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  sub_1400011A8(&v24, (__int64)qword_1400B6F30, 1uLL);
  v8 = v26;
  v9 = &unk_1400D44E0;
  if ( v26 )
    v9 = v26;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2 * v27);
  if ( v8 )
    ExFreePool(v8);
  v29 = &off_1400D41D0;
  v30 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)qword_1400B6F30, 1uLL);
  v10 = v31;
  v11 = &unk_1400D44E0;
  if ( v31 )
    v11 = v31;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v11, 2 * v32);
  if ( v10 )
    ExFreePool(v10);
  if ( !*(_QWORD *)(a1 + 400) )
  {
    v34 = &off_1400D41D0;
    v35 = 0;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    sub_1400011A8(&v34, (__int64)L"No history entries\n", 0x13uLL);
    v12 = v36;
    if ( v36 )
      v6 = v36;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2 * v37);
    if ( v12 )
      ExFreePool(v12);
  }
  v13 = *(_QWORD *)(a1 + 368);
  v14 = v13;
  if ( *(_QWORD *)(a1 + 400) )
    v14 = a1 + 360;
  while ( v13 != v14 )
  {
    sub_1400A27D4(&v17, v13 + 16);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v17 + 16LL))(v17, a2, 0LL);
    if ( *(_BYTE *)(a1 + 409) )
      sub_140003840(a2, 0);
    if ( *(_BYTE *)(a1 + 408) )
      sub_140003990(a2, 0);
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        v15 = v18;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
    v13 = *(_QWORD *)(v13 + 8);
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
}
