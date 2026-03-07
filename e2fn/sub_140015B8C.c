__int64 __fastcall sub_140015B8C(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // esi
  unsigned __int64 v9; // rbx
  unsigned int v10; // r14d
  void *v11; // r13
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  void *v16; // rax
  volatile signed __int32 *v17; // rsi
  volatile signed __int32 *v18; // rdi
  __int64 v19; // rsi
  void *v20; // r13
  void *v21; // rdi
  void *v22; // rax
  __int64 v23; // rax
  int v24; // edx
  void *v25; // rax
  volatile signed __int32 *v26; // rsi
  volatile signed __int32 *v27; // rdi
  void *v28; // r13
  void *v29; // rdi
  void *v30; // rax
  __int64 v31; // rax
  int v32; // edx
  void *v33; // rax
  volatile signed __int32 *v34; // rsi
  volatile signed __int32 *v35; // rdi
  void *v36; // r13
  void *v37; // rdi
  void *v38; // rax
  __int64 v39; // rax
  int v40; // edx
  void *v41; // rax
  volatile signed __int32 *v42; // rsi
  volatile signed __int32 *v43; // rdi
  _BYTE v45[8]; // [rsp+50h] [rbp-59h] BYREF
  volatile signed __int32 *v46; // [rsp+58h] [rbp-51h]
  _BYTE v47[8]; // [rsp+60h] [rbp-49h] BYREF
  volatile signed __int32 *v48; // [rsp+68h] [rbp-41h]
  _BYTE v49[8]; // [rsp+70h] [rbp-39h] BYREF
  volatile signed __int32 *v50; // [rsp+78h] [rbp-31h]
  _BYTE v51[8]; // [rsp+80h] [rbp-29h] BYREF
  volatile signed __int32 *v52; // [rsp+88h] [rbp-21h]
  _BYTE v53[8]; // [rsp+90h] [rbp-19h] BYREF
  volatile signed __int32 *v54; // [rsp+98h] [rbp-11h]
  _BYTE v55[8]; // [rsp+A0h] [rbp-9h] BYREF
  volatile signed __int32 *v56; // [rsp+A8h] [rbp-1h]
  _BYTE v57[8]; // [rsp+B0h] [rbp+7h] BYREF
  volatile signed __int32 *v58; // [rsp+B8h] [rbp+Fh]
  _BYTE v59[8]; // [rsp+C0h] [rbp+17h] BYREF
  volatile signed __int32 *v60; // [rsp+C8h] [rbp+1Fh]
  unsigned int v61; // [rsp+110h] [rbp+67h] BYREF
  unsigned int v62; // [rsp+118h] [rbp+6Fh] BYREF

  v1 = 0;
  v61 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareLatencyToleranceReporting::SetLatencyToleranceReportingValue",
             a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 376) + 16LL))(*(_QWORD *)(a1 + 376));
  v7 = *(_QWORD *)(a1 + 392);
  v8 = 0;
  v9 = v6;
  v61 = 0;
  if ( (unsigned __int8)sub_14007E2D8(v7) && v9 != 10000000 )
  {
    v10 = sub_140015918((_QWORD *)a1);
    if ( v10 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v11 = &unk_1400D44E0;
        v12 = &unk_1400D44E0;
        v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v47)
                       + 16LL);
        if ( v13 )
          v12 = v13;
        v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v45);
        LOBYTE(v15) = 2;
        v16 = *(void **)(*(_QWORD *)v14 + 16LL);
        if ( v16 )
          v11 = v16;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v15,
          10,
          17,
          (__int64)&unk_1400D5648,
          (__int64)v11,
          (__int64)v12,
          (__int64)L"SendMaximumThreshold()",
          v10);
        v1 = 3;
      }
      if ( (v1 & 2) != 0 )
      {
        v17 = v46;
        v1 &= ~2u;
        if ( v46 )
        {
          if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
            if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
          }
        }
      }
      if ( (v1 & 1) != 0 )
      {
        v18 = v48;
        if ( v48 )
        {
          if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
          }
        }
      }
      sub_1400080F8(a1, (__int64)L"SendMaximumThreshold()", 184, 152, v10);
      goto LABEL_82;
    }
    v10 = sub_1400148E4((_QWORD *)a1, v9, &v61);
    if ( v10 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
        v20 = &unk_1400D44E0;
        v21 = &unk_1400D44E0;
        v22 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                      a1 + 56,
                                      v49)
                       + 16LL);
        if ( v22 )
          v21 = v22;
        v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v51);
        LOBYTE(v24) = 2;
        v25 = *(void **)(*(_QWORD *)v23 + 16LL);
        if ( v25 )
          v20 = v25;
        sub_1400A5E80(
          v19,
          v24,
          10,
          18,
          (__int64)&unk_1400D5648,
          (__int64)v21,
          (__int64)v20,
          (__int64)L"CalculateTransmitWaitValue(linkSpeed, transmitWaitValue)",
          v10);
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v26 = v50;
        v1 &= ~8u;
        if ( v50 )
        {
          if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
            if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v27 = v52;
        if ( v52 )
        {
          if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
      }
      sub_140009AE8(a1, (__int64)L"CalculateTransmitWaitValue(linkSpeed, transmitWaitValue)", 186, 152, v10);
      goto LABEL_82;
    }
    v8 = v61;
  }
  v62 = 0;
  v10 = sub_1400156A0(a1, (int *)&v62);
  if ( v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v28 = &unk_1400D44E0;
      v29 = &unk_1400D44E0;
      v30 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                    a1 + 56,
                                    v53)
                     + 16LL);
      if ( v30 )
        v29 = v30;
      v31 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v55);
      LOBYTE(v32) = 2;
      v33 = *(void **)(*(_QWORD *)v31 + 16LL);
      if ( v33 )
        v28 = v33;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v32,
        10,
        19,
        (__int64)&unk_1400D5648,
        (__int64)v29,
        (__int64)v28,
        (__int64)L"GetEffectiveRxBufferSize(size)",
        v10);
      v1 = 48;
    }
    if ( (v1 & 0x20) != 0 )
    {
      v34 = v54;
      v1 &= ~0x20u;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
    if ( (v1 & 0x10) != 0 )
    {
      v35 = v56;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
          if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
        }
      }
    }
    sub_140008A0C(a1, (__int64)L"GetEffectiveRxBufferSize(size)", 190, 152, v10);
  }
  else
  {
    v10 = sub_140017530(a1, v9 / 0xF4240, v62, v8);
    if ( v10 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v36 = &unk_1400D44E0;
        v37 = &unk_1400D44E0;
        v38 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v59)
                       + 16LL);
        if ( v38 )
          v37 = v38;
        v39 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v57);
        LOBYTE(v40) = 2;
        v41 = *(void **)(*(_QWORD *)v39 + 16LL);
        if ( v41 )
          v36 = v41;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v40,
          10,
          20,
          (__int64)&unk_1400D5648,
          (__int64)v36,
          (__int64)v37,
          (__int64)L"WriteThresholds(linkSpeedMbs, size, transmitWaitValue)",
          v10);
        v1 = -64;
      }
      if ( v1 < 0 )
      {
        v42 = v58;
        v1 &= ~0x80u;
        if ( v58 )
        {
          if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
            if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
          }
        }
      }
      if ( (v1 & 0x40) != 0 )
      {
        v43 = v60;
        if ( v60 )
        {
          if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
            if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
          }
        }
      }
      sub_1400143F0(a1, (__int64)L"WriteThresholds(linkSpeedMbs, size, transmitWaitValue)", 195, 152, v10);
    }
    else
    {
      v10 = 0;
    }
  }
LABEL_82:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v10;
}
