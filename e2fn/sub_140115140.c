__int64 __fastcall sub_140115140(__int64 a1)
{
  char v2; // di
  __int64 *v3; // rsi
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int64 *v12; // r14
  __int64 v13; // r8
  unsigned int v14; // r15d
  volatile signed __int32 *v15; // rbx
  char v16; // r14
  volatile signed __int32 *v17; // rbx
  unsigned int v18; // edi
  unsigned __int16 v19; // r9
  __int64 v20; // rcx
  const wchar_t *v21; // rax
  volatile signed __int32 *v22; // rbx
  __int64 v24; // [rsp+48h] [rbp-79h] BYREF
  volatile signed __int32 *v25; // [rsp+50h] [rbp-71h]
  __int64 v26; // [rsp+58h] [rbp-69h] BYREF
  volatile signed __int32 *v27; // [rsp+60h] [rbp-61h]
  __int64 v28; // [rsp+68h] [rbp-59h] BYREF
  volatile signed __int32 *v29; // [rsp+70h] [rbp-51h]
  __int64 (__fastcall **v30)(PVOID); // [rsp+78h] [rbp-49h] BYREF
  __int16 v31; // [rsp+80h] [rbp-41h]
  PVOID P; // [rsp+88h] [rbp-39h]
  __int64 v33; // [rsp+90h] [rbp-31h]
  __int64 v34; // [rsp+98h] [rbp-29h]
  __int128 v35; // [rsp+A8h] [rbp-19h] BYREF
  PVOID v36[2]; // [rsp+B8h] [rbp-9h]
  __int128 v37; // [rsp+C8h] [rbp+7h]
  __int128 v38; // [rsp+D8h] [rbp+17h]
  __int64 v39; // [rsp+E8h] [rbp+27h]

  v2 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400736C0(Pool2, (__int64)L"framework::DeviceContext::AssignPowerSettings", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 424) + 8LL))(*(_QWORD *)(a1 + 424));
  v7 = *(__int64 **)(a1 + 392);
  v8 = *(_OWORD *)(v6 + 16);
  v35 = *(_OWORD *)v6;
  v9 = *(_OWORD *)(v6 + 32);
  *(_OWORD *)v36 = v8;
  v10 = *(_OWORD *)(v6 + 48);
  v37 = v9;
  *(_QWORD *)&v9 = *(_QWORD *)(v6 + 64);
  v11 = *v7;
  v38 = v10;
  v39 = v9;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v11 + 48))(v7, &v28);
  v31 = 0;
  v30 = &off_1400D41D0;
  P = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  sub_1400011A8(&v30, (__int64)L"IdleTimeoutMs", 0xDuLL);
  v12 = (__int64 *)(a1 + 112);
  sub_1400A27D4(&v24, (__int64 *)(a1 + 112));
  v14 = sub_14004BEA4(v24, (__int64)&v30, v24 + 376);
  if ( v25 )
  {
    if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
    {
      v15 = v25;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
    }
  }
  if ( P )
    ExFreePool(P);
  if ( !BYTE1(v35) )
    goto LABEL_14;
  WORD4(v35) = 0;
  *(_QWORD *)&v35 = &off_1400D41D0;
  v36[0] = 0LL;
  v36[1] = 0LL;
  *(_QWORD *)&v37 = 0LL;
  sub_1400011A8(&v35, (__int64)L"EnableD3ColdInS0", 0x10uLL);
  sub_1400A27D4(&v26, v12);
  v2 = 3;
  v16 = 1;
  if ( !sub_14003E2F0(v26, (__int64)&v35, v26 + 16) )
LABEL_14:
    v16 = 0;
  if ( (v2 & 2) != 0 )
  {
    v2 &= ~2u;
    if ( v27 )
    {
      if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
      {
        v17 = v27;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
  }
  if ( (v2 & 1) != 0 && v36[0] )
    ExFreePool(v36[0]);
  LOBYTE(v13) = v16;
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v28 + 8LL))(v28, v14, v13);
  if ( v18 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v19 = 76;
      v20 = *((_QWORD *)::P + 1);
      v21 = L"systemPower->InitializeS0IdleSettings(idleTimeoutMs, d3ColdSupported)";
LABEL_29:
      sub_1400A1CFC(*(_QWORD *)(v20 + 16), 2u, 8u, v19, (__int64)&unk_1400D91A8, v21, v18);
    }
  }
  else
  {
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
    if ( !v18 )
    {
      v18 = 0;
      goto LABEL_31;
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v19 = 77;
      v20 = *((_QWORD *)::P + 1);
      v21 = L"systemPower->AssignWakeSettings()";
      goto LABEL_29;
    }
  }
LABEL_31:
  v22 = v29;
  if ( v29 )
  {
    if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
    }
  }
  if ( v3 )
  {
    sub_140073F78(v3);
    ExFreePool(v3);
  }
  return v18;
}
