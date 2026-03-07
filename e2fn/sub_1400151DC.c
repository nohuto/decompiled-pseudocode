__int64 __fastcall sub_1400151DC(__int64 a1)
{
  char v1; // r14
  __int64 *v3; // r15
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  void *v6; // rsi
  void *v7; // rdi
  void *v8; // rax
  __int64 v9; // rax
  void *v10; // rdx
  void *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  void *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  void *v17; // rdx
  void *v18; // rax
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  unsigned int v21; // r12d
  void *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  void *v27; // rcx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  __int64 v31; // [rsp+30h] [rbp-51h]
  __int64 v32; // [rsp+38h] [rbp-49h]
  _BYTE v33[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v34; // [rsp+60h] [rbp-21h]
  _BYTE v35[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v36; // [rsp+70h] [rbp-11h]
  _BYTE v37[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v38; // [rsp+80h] [rbp-1h]
  _BYTE v39[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v40; // [rsp+90h] [rbp+Fh]
  _BYTE v41[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v42; // [rsp+A0h] [rbp+1Fh]
  _BYTE v43[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v44; // [rsp+B0h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareLatencyToleranceReporting::ConfigureLtr",
             a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = &unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v7 = &unk_1400D44E0;
    v8 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v35)
                  + 16LL);
    if ( v8 )
      v7 = v8;
    v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v33);
    v10 = &unk_1400D44E0;
    v11 = *(void **)(*(_QWORD *)v9 + 16LL);
    if ( v11 )
      v10 = v11;
    v31 = (__int64)v10;
    LOBYTE(v10) = 4;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      (_DWORD)v10,
      10,
      14,
      (__int64)&unk_1400D5648,
      v31,
      (__int64)v7,
      (__int64)qword_1400B7720);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v12 = v34;
    v1 &= ~2u;
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v13 = v36;
    v1 &= ~1u;
    if ( v36 )
    {
      if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 376) + 8LL))(*(_QWORD *)(a1 + 376)) != 1 )
    goto LABEL_57;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v1 |= 0xCu;
    v14 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                  a1 + 56,
                                  v37)
                   + 16LL);
    if ( v14 )
      v6 = v14;
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
    v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v39);
    v17 = &unk_1400D44E0;
    v18 = *(void **)(*(_QWORD *)v16 + 16LL);
    if ( v18 )
      v17 = v18;
    v32 = (__int64)v17;
    LOBYTE(v17) = 4;
    sub_1400A3320(v15, (_DWORD)v17, 14, 15, (__int64)&unk_1400D5648, (__int64)v6, v32, (__int64)qword_1400B7720);
    v6 = &unk_1400D44E0;
  }
  if ( (v1 & 8) != 0 )
  {
    v19 = v38;
    v1 &= ~8u;
    if ( v38 )
    {
      if ( !_InterlockedDecrement(v38 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( !_InterlockedDecrement(v19 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
  }
  if ( (v1 & 4) != 0 )
  {
    v20 = v40;
    v1 &= ~4u;
    if ( v40 )
    {
      if ( !_InterlockedDecrement(v40 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        if ( !_InterlockedDecrement(v20 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
  }
  v21 = sub_140015B8C(a1);
  if ( v21 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v1 |= 0x30u;
      v22 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                    a1 + 56,
                                    v41)
                     + 16LL);
      if ( v22 )
        v6 = v22;
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v24 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v43);
      LOBYTE(v25) = 2;
      v26 = *(void **)(*(_QWORD *)v24 + 16LL);
      v27 = &unk_1400D44E0;
      if ( v26 )
        v27 = v26;
      sub_1400A5E80(
        v23,
        v25,
        10,
        16,
        (__int64)&unk_1400D5648,
        (__int64)v6,
        (__int64)v27,
        (__int64)L"SetLatencyToleranceReportingValue()",
        v21);
    }
    if ( (v1 & 0x20) != 0 )
    {
      v28 = v42;
      v1 &= ~0x20u;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v1 & 0x10) != 0 )
    {
      v29 = v44;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    sub_1400113EC(a1, (__int64)L"SetLatencyToleranceReportingValue()", 134, 152, v21);
  }
  else
  {
LABEL_57:
    v21 = 0;
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v21;
}
