__int64 __fastcall sub_140087AF0(_QWORD *a1, __int64 a2)
{
  char v2; // r12
  _QWORD *v3; // rsi
  __int64 *v4; // r13
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  void *v12; // rsi
  void *v13; // rax
  __int64 v14; // rax
  void *v15; // r8
  void *v16; // rdx
  void *v17; // rax
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v19; // rdi
  unsigned int v20; // r14d
  _QWORD *v21; // rdi
  __int64 v22; // r14
  __int64 v23; // rax
  void *v24; // rsi
  void *v25; // rax
  __int64 v26; // rax
  int v27; // edx
  void *v28; // rax
  void *v29; // rcx
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v31; // rdi
  void *v32; // rax
  _QWORD *v33; // rdi
  void *v34; // r15
  void *v35; // r14
  __int64 v36; // rax
  void *v37; // rsi
  void *v38; // rax
  __int64 v39; // rax
  int v40; // edx
  void *v41; // rax
  volatile signed __int32 *v42; // rdi
  volatile signed __int32 *v43; // rdi
  __int64 v45; // [rsp+40h] [rbp-49h]
  _BYTE v46[8]; // [rsp+50h] [rbp-39h] BYREF
  volatile signed __int32 *v47; // [rsp+58h] [rbp-31h]
  _BYTE v48[8]; // [rsp+60h] [rbp-29h] BYREF
  volatile signed __int32 *v49; // [rsp+68h] [rbp-21h]
  _BYTE v50[8]; // [rsp+70h] [rbp-19h] BYREF
  volatile signed __int32 *v51; // [rsp+78h] [rbp-11h]
  _BYTE v52[8]; // [rsp+80h] [rbp-9h] BYREF
  volatile signed __int32 *v53; // [rsp+88h] [rbp-1h]
  _BYTE v54[8]; // [rsp+90h] [rbp+7h] BYREF
  volatile signed __int32 *v55; // [rsp+98h] [rbp+Fh]
  _BYTE v56[8]; // [rsp+A0h] [rbp+17h] BYREF
  volatile signed __int32 *v57; // [rsp+A8h] [rbp+1Fh]
  unsigned int v59; // [rsp+F0h] [rbp+67h]
  int v60; // [rsp+100h] [rbp+77h]

  v2 = 0;
  v3 = a1;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareTrafficGate::Enable", (__int64)(v3 - 44));
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = v3[2];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v3[12] )
    v9 = v3 + 4;
  else
    v9 = (_QWORD *)v3[5];
  sub_1400B27A8(v3 + 4, v9, a2);
  if ( v3[12] != 1LL )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v32 = *(void **)(a2 + 16);
      v33 = v3 - 37;
      v34 = &unk_1400D44E0;
      v35 = &unk_1400D44E0;
      if ( v32 )
        v35 = v32;
      v36 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v33 + 16LL))(v3 - 37, v56);
      v37 = &unk_1400D44E0;
      v38 = *(void **)(*(_QWORD *)v36 + 16LL);
      if ( v38 )
        v37 = v38;
      v39 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v33 + 24LL))(v33, v54);
      LOBYTE(v40) = 4;
      v41 = *(void **)(*(_QWORD *)v39 + 16LL);
      if ( v41 )
        v34 = v41;
      sub_1400A9338(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        v40,
        10,
        15,
        (__int64)&unk_1400D9918,
        (__int64)v34,
        (__int64)v37,
        (__int64)qword_1400B7720,
        (__int64)v35);
      v2 = 48;
    }
    if ( (v2 & 0x20) != 0 )
    {
      v42 = v55;
      v2 &= ~0x20u;
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      v43 = v57;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
      }
    }
    goto LABEL_64;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v10 = v3 - 37;
    v11 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(v3 - 37) + 16LL))(v3 - 37, v48);
    v12 = &unk_1400D44E0;
    v13 = *(void **)(*(_QWORD *)v11 + 16LL);
    if ( v13 )
      v12 = v13;
    v14 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v10 + 24LL))(v10, v46);
    v15 = &unk_1400D44E0;
    v16 = &unk_1400D44E0;
    v17 = *(void **)(*(_QWORD *)v14 + 16LL);
    if ( v17 )
      v15 = v17;
    if ( *(_QWORD *)(a2 + 16) )
      v16 = *(void **)(a2 + 16);
    v45 = (__int64)v16;
    LOBYTE(v16) = 4;
    sub_1400A9338(
      *(_QWORD *)(*(a1 - 22) + 16LL),
      (_DWORD)v16,
      10,
      13,
      (__int64)&unk_1400D9918,
      (__int64)v15,
      (__int64)v12,
      (__int64)qword_1400B7720,
      v45);
    v3 = a1;
    v2 = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v18 = v47;
    v2 &= ~2u;
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v19 = v49;
    v2 &= ~1u;
    if ( v49 )
    {
      if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
  }
  v60 = (_DWORD)v3 - 352;
  v59 = (*(__int64 (__fastcall **)(_QWORD *))(*(v3 - 44) + 40LL))(v3 - 44);
  v20 = v59;
  if ( !v59 )
  {
LABEL_64:
    v20 = 0;
    goto LABEL_65;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v21 = v3 - 37;
    v2 |= 0xCu;
    v22 = *(_QWORD *)(*(v3 - 22) + 16LL);
    v23 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(v3 - 37) + 16LL))(v3 - 37, v52);
    v24 = &unk_1400D44E0;
    v25 = *(void **)(*(_QWORD *)v23 + 16LL);
    if ( v25 )
      v24 = v25;
    v26 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v21 + 24LL))(v21, v50);
    LOBYTE(v27) = 2;
    v28 = *(void **)(*(_QWORD *)v26 + 16LL);
    v29 = &unk_1400D44E0;
    if ( v28 )
      v29 = v28;
    sub_1400A5E80(
      v22,
      v27,
      10,
      14,
      (__int64)&unk_1400D9918,
      (__int64)v29,
      (__int64)v24,
      (__int64)L"EnableTraffic()",
      v59);
    v20 = v59;
  }
  if ( (v2 & 8) != 0 )
  {
    v30 = v51;
    v2 &= ~8u;
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
      }
    }
  }
  if ( (v2 & 4) != 0 )
  {
    v31 = v53;
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
      }
    }
  }
  sub_140011154(v60, (__int64)L"EnableTraffic()", 78, 91, v20);
LABEL_65:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
  if ( v4 )
  {
    sub_14000BFA4(v4);
    ExFreePool(v4);
  }
  return v20;
}
