__int64 __fastcall sub_140042D68(__int64 a1)
{
  char v2; // di
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // esi
  char v7; // r15
  volatile signed __int32 *v8; // rbx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rbx
  unsigned int v11; // r15d
  void *v12; // r12
  void *v13; // rdi
  void *v14; // rax
  __int64 v15; // rax
  int v16; // edx
  void *v17; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  void *v23; // r12
  void *v24; // rdi
  __int64 v25; // rax
  int v26; // edx
  void *v27; // rax
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  void *v30; // r12
  void *v31; // rdi
  void *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  int v35; // edx
  void *v36; // rax
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rbx
  __int64 v39; // [rsp+50h] [rbp-79h] BYREF
  volatile signed __int32 *v40; // [rsp+58h] [rbp-71h]
  __int64 (__fastcall **v41)(PVOID); // [rsp+60h] [rbp-69h] BYREF
  __int16 v42; // [rsp+68h] [rbp-61h]
  PVOID P; // [rsp+70h] [rbp-59h]
  __int64 v44; // [rsp+78h] [rbp-51h]
  __int64 v45; // [rsp+80h] [rbp-49h]
  _BYTE v46[8]; // [rsp+88h] [rbp-41h] BYREF
  volatile signed __int32 *v47; // [rsp+90h] [rbp-39h]
  _BYTE v48[8]; // [rsp+98h] [rbp-31h] BYREF
  volatile signed __int32 *v49; // [rsp+A0h] [rbp-29h]
  _BYTE v50[8]; // [rsp+A8h] [rbp-21h] BYREF
  volatile signed __int32 *v51; // [rsp+B0h] [rbp-19h]
  _BYTE v52[8]; // [rsp+B8h] [rbp-11h] BYREF
  volatile signed __int32 *v53; // [rsp+C0h] [rbp-9h]
  _BYTE v54[8]; // [rsp+C8h] [rbp-1h] BYREF
  volatile signed __int32 *v55; // [rsp+D0h] [rbp+7h]
  _BYTE v56[8]; // [rsp+D8h] [rbp+Fh] BYREF
  volatile signed __int32 *v57; // [rsp+E0h] [rbp+17h]
  unsigned int v58; // [rsp+130h] [rbp+67h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+138h] [rbp+6Fh] BYREF

  v58 = 0;
  v2 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwarePhy::VerifyPhyId", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v58 = 0;
  v41 = &off_1400D41D0;
  v42 = 0;
  P = 0LL;
  LOBYTE(v6) = 0;
  v44 = 0LL;
  v45 = 0LL;
  sub_1400011A8(&v41, (__int64)L"PollPhyId", 9uLL);
  sub_1400A27D4(&v39, a1 + 112);
  v7 = sub_14003E2F0(v39, (__int64)&v41, v39 + 16);
  if ( v40 )
  {
    if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
    {
      v8 = v40;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
    }
    LOBYTE(v6) = v58;
  }
  if ( P )
    ExFreePool(P);
  v9 = sub_1400187FC();
  v10 = v7 != 0 ? 1000LL : 100LL;
  while ( 1 )
  {
    if ( sub_1400187FC() - v9 >= v10 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v12 = &unk_1400D44E0;
        v13 = &unk_1400D44E0;
        v14 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v56)
                       + 16LL);
        if ( v14 )
          v13 = v14;
        v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v54);
        LOBYTE(v16) = 2;
        v17 = *(void **)(*(_QWORD *)v15 + 16LL);
        if ( v17 )
          v12 = v17;
        sub_1400A6AA8(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v16,
          14,
          24,
          (__int64)&unk_1400D71E0,
          (__int64)v12,
          (__int64)v13,
          (__int64)qword_1400B7720,
          0,
          v6);
        v2 = 48;
      }
      if ( (v2 & 0x20) != 0 )
      {
        v18 = v55;
        v2 &= ~0x20u;
        if ( v55 )
        {
          if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
          }
        }
      }
      if ( (v2 & 0x10) != 0 )
      {
        v19 = v57;
        if ( v57 )
        {
          if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      v11 = -1073741216;
      goto LABEL_35;
    }
    v11 = sub_140040D54(a1, &v58);
    if ( v11 )
      break;
    v6 = v58 & 0xFFFFFC00;
    v58 = v6;
    if ( v6 == 1741282304 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        _mm_lfence();
        v21 = sub_1400187FC() - v9;
        v22 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v48);
        v23 = &unk_1400D44E0;
        v24 = &unk_1400D44E0;
        if ( *(_QWORD *)(*(_QWORD *)v22 + 16LL) )
          v24 = *(void **)(*(_QWORD *)v22 + 16LL);
        v25 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v46);
        LOBYTE(v26) = 4;
        v27 = *(void **)(*(_QWORD *)v25 + 16LL);
        if ( v27 )
          v23 = v27;
        sub_1400AA268(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v26,
          14,
          23,
          (__int64)&unk_1400D71E0,
          (__int64)v23,
          (__int64)v24,
          (__int64)qword_1400B7720,
          v21);
        v2 = 12;
      }
      if ( (v2 & 8) != 0 )
      {
        v28 = v47;
        v2 &= ~8u;
        if ( v47 )
        {
          if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
            if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v29 = v49;
        if ( v49 )
        {
          if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
            if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
          }
        }
      }
      v11 = 0;
      goto LABEL_35;
    }
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v30 = &unk_1400D44E0;
    v31 = &unk_1400D44E0;
    v32 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                  a1 + 56,
                                  v50)
                   + 16LL);
    if ( v32 )
      v31 = v32;
    v33 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
    v34 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v52);
    LOBYTE(v35) = 2;
    v36 = *(void **)(*(_QWORD *)v34 + 16LL);
    if ( v36 )
      v30 = v36;
    sub_1400A5E80(
      v33,
      v35,
      14,
      22,
      (__int64)&unk_1400D71E0,
      (__int64)v31,
      (__int64)v30,
      (__int64)L"GetPhyId(phyId)",
      v11);
    v2 = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v37 = v51;
    v2 &= ~2u;
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v38 = v53;
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
        if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
      }
    }
  }
  sub_140011154(a1, (__int64)L"GetPhyId(phyId)", 195, 156, v11);
LABEL_35:
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v11;
}
