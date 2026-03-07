__int64 __fastcall sub_140035F10(_QWORD *a1, int a2, int a3)
{
  char v3; // r15
  __int64 *v5; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  int v10; // r14d
  unsigned int v11; // r14d
  int v12; // r14d
  void *v13; // rdi
  void *v14; // rax
  __int64 v15; // rax
  void *v16; // rdx
  void *v17; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  int v20; // eax
  void *v21; // rdi
  void *v22; // rax
  __int64 v23; // rax
  void *v24; // rdx
  void *v25; // rax
  __int64 v26; // rcx
  int v27; // r13d
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  int v30; // eax
  void *v31; // r15
  void *v32; // rdi
  void *v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  int v36; // edx
  void *v37; // rax
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 *v39; // rbx
  __int64 v41; // [rsp+30h] [rbp-61h]
  __int64 v42; // [rsp+30h] [rbp-61h]
  _BYTE v43[8]; // [rsp+58h] [rbp-39h] BYREF
  volatile signed __int32 *v44; // [rsp+60h] [rbp-31h]
  _BYTE v45[8]; // [rsp+68h] [rbp-29h] BYREF
  volatile signed __int32 *v46; // [rsp+70h] [rbp-21h]
  _BYTE v47[8]; // [rsp+78h] [rbp-19h] BYREF
  volatile signed __int32 *v48; // [rsp+80h] [rbp-11h]
  _BYTE v49[8]; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v50; // [rsp+90h] [rbp-1h]
  _BYTE v51[8]; // [rsp+98h] [rbp+7h] BYREF
  volatile signed __int32 *v52; // [rsp+A0h] [rbp+Fh]
  _BYTE v53[8]; // [rsp+A8h] [rbp+17h] BYREF
  volatile signed __int32 *v54; // [rsp+B0h] [rbp+1Fh]
  int v55; // [rsp+F8h] [rbp+67h]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareFlowControl::CalculateFlowControlHighWaterMark",
             (__int64)a1);
      if ( v7 )
        v5 = v7;
    }
  }
  v8 = a1[45];
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 || *(_DWORD *)(v8 + 20) )
  {
    v30 = -1073741661;
    if ( *(_DWORD *)(v8 + 20) == 3 )
      v30 = -1073741130;
    v11 = v30;
    goto LABEL_48;
  }
  v10 = *(_DWORD *)(v9 + 9220);
  if ( v10 == -1 && *(_DWORD *)(*(_QWORD *)(v8 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 3LL);
    v11 = -1073741130;
LABEL_48:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v31 = &unk_1400D44E0;
      v32 = &unk_1400D44E0;
      v33 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v51) + 16LL);
      if ( v33 )
        v32 = v33;
      v34 = *(_QWORD *)(a1[22] + 16LL);
      v35 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v53);
      LOBYTE(v36) = 2;
      v37 = *(void **)(*(_QWORD *)v35 + 16LL);
      if ( v37 )
        v31 = v37;
      sub_1400A5E80(
        v34,
        v36,
        14,
        23,
        (__int64)&unk_1400D6CE0,
        (__int64)v32,
        (__int64)v31,
        (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x02404, rxBufferSize)",
        v11);
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v38 = v52;
      v3 &= ~2u;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v39 = v54;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
          if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
        }
      }
    }
    sub_1400358A0((int)a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x02404, rxBufferSize)", 174, 48, v11);
    goto LABEL_65;
  }
  v12 = v10 & 0x3F;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v13 = &unk_1400D44E0;
    v14 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v45) + 16LL);
    if ( v14 )
      v13 = v14;
    v15 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v43);
    v16 = &unk_1400D44E0;
    v17 = *(void **)(*(_QWORD *)v15 + 16LL);
    if ( v17 )
      v16 = v17;
    v41 = (__int64)v16;
    LOBYTE(v16) = 4;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      (_DWORD)v16,
      14,
      24,
      (__int64)&unk_1400D6CE0,
      v41,
      (__int64)v13,
      (__int64)qword_1400B7720,
      v12);
    v3 = 12;
  }
  if ( (v3 & 8) != 0 )
  {
    v18 = v44;
    v3 &= ~8u;
    if ( v44 )
    {
      if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  if ( (v3 & 4) != 0 )
  {
    v19 = v46;
    v3 &= ~4u;
    if ( v46 )
    {
      if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
  }
  v20 = sub_140035E54((__int64)a1, a3);
  v55 = v20;
  if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
  {
    v27 = v20;
  }
  else
  {
    v3 |= 0x30u;
    v21 = &unk_1400D44E0;
    v22 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v49) + 16LL);
    if ( v22 )
      v21 = v22;
    v23 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v47);
    v24 = &unk_1400D44E0;
    v25 = *(void **)(*(_QWORD *)v23 + 16LL);
    v26 = a1[22];
    v27 = v55;
    if ( v25 )
      v24 = v25;
    v42 = (__int64)v24;
    LOBYTE(v24) = 4;
    sub_1400A5E80(
      *(_QWORD *)(v26 + 16),
      (_DWORD)v24,
      14,
      25,
      (__int64)&unk_1400D6CE0,
      v42,
      (__int64)v21,
      (__int64)qword_1400B7720,
      v55);
  }
  if ( (v3 & 0x20) != 0 )
  {
    v28 = v48;
    v3 &= ~0x20u;
    if ( v48 )
    {
      if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
      }
    }
  }
  if ( (v3 & 0x10) != 0 )
  {
    v29 = v50;
    if ( v50 )
    {
      if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
        if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
  }
  v11 = 2 * ((v12 << 9) - a2) - v27;
LABEL_65:
  if ( v5 )
  {
    sub_140005840(v5);
    ExFreePool(v5);
  }
  return v11;
}
