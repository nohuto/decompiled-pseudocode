__int64 __fastcall sub_1400B20B0(_QWORD *a1, __int64 a2)
{
  char v2; // r12
  __int64 *v3; // rbx
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  _QWORD *v10; // r8
  _QWORD *v11; // rax
  void *v12; // rax
  _QWORD *v13; // rdi
  const wchar_t *v14; // r15
  void *v15; // r14
  const wchar_t *v16; // rsi
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  volatile signed __int32 *v19; // rdi
  volatile signed __int32 *v20; // rdi
  unsigned int v21; // r14d
  void *v22; // rdi
  const wchar_t *v23; // r15
  const wchar_t *v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  const wchar_t *v27; // rdx
  const wchar_t *v28; // rax
  volatile signed __int32 *v29; // rdi
  volatile signed __int32 *v30; // rdi
  const wchar_t *v31; // rsi
  const wchar_t *v32; // rax
  __int64 v33; // r14
  const wchar_t *v34; // rax
  const wchar_t *v35; // rcx
  volatile signed __int32 *v36; // rdi
  volatile signed __int32 *v37; // rdi
  void *v38; // rax
  _QWORD *v39; // rdi
  void *v40; // r15
  void *v41; // r14
  void *v42; // rsi
  void *v43; // rax
  __int64 v44; // rax
  int v45; // edx
  void *v46; // rax
  volatile signed __int32 *v47; // rdi
  volatile signed __int32 *v48; // rdi
  char v50[8]; // [rsp+50h] [rbp-69h] BYREF
  volatile signed __int32 *v51; // [rsp+58h] [rbp-61h]
  char v52[8]; // [rsp+60h] [rbp-59h] BYREF
  volatile signed __int32 *v53; // [rsp+68h] [rbp-51h]
  char v54[8]; // [rsp+70h] [rbp-49h] BYREF
  volatile signed __int32 *v55; // [rsp+78h] [rbp-41h]
  char v56[8]; // [rsp+80h] [rbp-39h] BYREF
  volatile signed __int32 *v57; // [rsp+88h] [rbp-31h]
  char v58[8]; // [rsp+90h] [rbp-29h] BYREF
  volatile signed __int32 *v59; // [rsp+98h] [rbp-21h]
  char v60[8]; // [rsp+A0h] [rbp-19h] BYREF
  volatile signed __int32 *v61; // [rsp+A8h] [rbp-11h]
  char v62[8]; // [rsp+B0h] [rbp-9h] BYREF
  volatile signed __int32 *v63; // [rsp+B8h] [rbp-1h]
  char v64[8]; // [rsp+C0h] [rbp+7h] BYREF
  volatile signed __int32 *v65; // [rsp+C8h] [rbp+Fh]
  unsigned int v66; // [rsp+120h] [rbp+67h]
  __int64 *P; // [rsp+130h] [rbp+77h]
  _QWORD *v69; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = 0;
  v3 = 0LL;
  P = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareTrafficGate::Disable", (__int64)(a1 - 44));
      if ( v7 )
        v3 = v7;
      P = v3;
    }
  }
  v8 = a1[2];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = a1[12];
  if ( v9 )
    v10 = a1 + 4;
  else
    v10 = (_QWORD *)a1[5];
  sub_1400B2028(&v69, (_QWORD *)a1[5], v10, a2);
  if ( v9 )
    v11 = a1 + 4;
  else
    v11 = (_QWORD *)a1[5];
  if ( v69 == v11 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = *(void **)(a2 + 16);
      v13 = a1 - 37;
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = &unk_1400D44E0;
      if ( v12 )
        v15 = v12;
      v16 = (const wchar_t *)&unk_1400D44E0;
      v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*v13 + 16LL))(a1 - 37, v52)
                              + 16LL);
      if ( v17 )
        v16 = v17;
      v2 = 3;
      v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*v13 + 24LL))(a1 - 37, v50)
                              + 16LL);
      if ( v18 )
        v14 = v18;
      sub_1400A9338(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        3u,
        0xAu,
        0x10u,
        (__int64)&unk_1400D9918,
        v14,
        v16,
        (const wchar_t *)qword_1400B7720,
        (__int64)v15);
    }
    if ( (v2 & 2) != 0 )
    {
      v19 = v51;
      v2 &= ~2u;
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v20 = v53;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    v21 = -1073741811;
    goto LABEL_89;
  }
  sub_1400A82A4(a1 + 4, v69);
  if ( a1[12] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v38 = *(void **)(a2 + 16);
      v39 = a1 - 37;
      v40 = &unk_1400D44E0;
      v41 = &unk_1400D44E0;
      if ( v38 )
        v41 = v38;
      v42 = &unk_1400D44E0;
      v43 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*v39 + 16LL))(a1 - 37, v64) + 16LL);
      if ( v43 )
        v42 = v43;
      v44 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v39 + 24LL))(a1 - 37, v62);
      LOBYTE(v45) = 4;
      v46 = *(void **)(*(_QWORD *)v44 + 16LL);
      if ( v46 )
        v40 = v46;
      sub_1400B2914(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        v45,
        10,
        19,
        (__int64)&unk_1400D9918,
        (__int64)v40,
        (__int64)v42,
        (__int64)qword_1400B7720,
        (__int64)v41,
        a1[12]);
      v2 = -64;
    }
    if ( v2 < 0 )
    {
      v47 = v63;
      v2 &= ~0x80u;
      if ( v63 )
      {
        if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
          if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
        }
      }
    }
    if ( (v2 & 0x40) != 0 )
    {
      v48 = v65;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
          if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
        }
      }
    }
    goto LABEL_88;
  }
  v22 = &unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v23 = (const wchar_t *)&unk_1400D44E0;
    v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*(a1 - 37) + 24LL))(a1 - 37, v54)
                            + 16LL);
    if ( v24 )
      v23 = v24;
    v25 = *(_QWORD *)(*(a1 - 22) + 16LL);
    if ( *(_QWORD *)(a2 + 16) )
      v22 = *(void **)(a2 + 16);
    v26 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*(a1 - 37) + 16LL))(a1 - 37, v56);
    v27 = (const wchar_t *)&unk_1400D44E0;
    v28 = *(const wchar_t **)(*(_QWORD *)v26 + 16LL);
    if ( v28 )
      v27 = v28;
    sub_1400A9338(
      v25,
      4u,
      0xAu,
      0x11u,
      (__int64)&unk_1400D9918,
      v23,
      v27,
      (const wchar_t *)qword_1400B7720,
      (__int64)v22);
    v2 = 12;
  }
  if ( (v2 & 8) != 0 )
  {
    v29 = v55;
    v2 &= ~8u;
    if ( v55 )
    {
      if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
        if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
  }
  if ( (v2 & 4) != 0 )
  {
    v30 = v57;
    v2 &= ~4u;
    if ( v57 )
    {
      if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
      }
    }
  }
  v66 = (*(__int64 (__fastcall **)(_QWORD *))(*(a1 - 44) + 48LL))(a1 - 44);
  v21 = v66;
  if ( !v66 )
  {
LABEL_88:
    v21 = 0;
    goto LABEL_89;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v2 |= 0x30u;
    v31 = (const wchar_t *)&unk_1400D44E0;
    v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*(a1 - 37) + 24LL))(a1 - 37, v58)
                            + 16LL);
    if ( v32 )
      v31 = v32;
    v33 = *(_QWORD *)(*(a1 - 22) + 16LL);
    v34 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*(a1 - 37) + 16LL))(a1 - 37, v60)
                            + 16LL);
    v35 = (const wchar_t *)&unk_1400D44E0;
    if ( v34 )
      v35 = v34;
    sub_1400A5E80(v33, 2u, 0xAu, 0x12u, (__int64)&unk_1400D9918, v31, v35, L"DisableTraffic()");
    v21 = v66;
  }
  if ( (v2 & 0x20) != 0 )
  {
    v36 = v59;
    v2 &= ~0x20u;
    if ( v59 )
    {
      if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
        if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
      }
    }
  }
  if ( (v2 & 0x10) != 0 )
  {
    v37 = v61;
    if ( v61 )
    {
      if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
      }
    }
  }
  sub_1400731B8((__int64)(a1 - 44), (__int64)L"DisableTraffic()", 107, 91, v21);
LABEL_89:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
  if ( P )
  {
    sub_14000BFA4(P);
    ExFreePool(P);
  }
  return v21;
}
