__int64 __fastcall sub_140017530(_QWORD *a1, unsigned int a2, int a3, int a4)
{
  char v4; // di
  __int64 *v6; // r15
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  void *v12; // r12
  void *v13; // rdi
  void *v14; // rax
  __int64 v15; // rax
  int v16; // edx
  void *v17; // rax
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rdi
  unsigned int v20; // r14d
  unsigned int v21; // edx
  unsigned int v22; // ebx
  void *v23; // r12
  void *v24; // rdi
  void *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  int v28; // edx
  void *v29; // rax
  volatile signed __int32 *v30; // rsi
  volatile signed __int32 *v31; // rdi
  int v32; // r8d
  const wchar_t *v33; // rdx
  void *v34; // r12
  void *v35; // rdi
  void *v36; // rax
  __int64 v37; // rax
  int v38; // edx
  void *v39; // rax
  volatile signed __int32 *v40; // rsi
  volatile signed __int32 *v41; // rdi
  _BYTE v43[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v44; // [rsp+60h] [rbp-21h]
  _BYTE v45[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v46; // [rsp+70h] [rbp-11h]
  _BYTE v47[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v48; // [rsp+80h] [rbp-1h]
  _BYTE v49[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v50; // [rsp+90h] [rbp+Fh]
  _BYTE v51[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v52; // [rsp+A0h] [rbp+1Fh]
  _BYTE v53[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v54; // [rsp+B0h] [rbp+2Fh]

  v4 = 0;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14000BBDC(
              Pool2,
              (__int64)L"product_e2fn::ProductE2fnHardwareLatencyToleranceReporting::WriteThresholds",
              (__int64)a1);
      if ( v11 )
        v6 = v11;
    }
  }
  if ( a2 )
  {
    v21 = 1000 * a3 / a2;
    v22 = v21 + a4;
    v20 = sub_140016F74(a1, v21);
    if ( v20 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v23 = &unk_1400D44E0;
        v24 = &unk_1400D44E0;
        v25 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v47) + 16LL);
        if ( v25 )
          v24 = v25;
        v26 = *(_QWORD *)(a1[22] + 16LL);
        v27 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v49);
        LOBYTE(v28) = 2;
        v29 = *(void **)(*(_QWORD *)v27 + 16LL);
        if ( v29 )
          v23 = v29;
        sub_1400A5E80(
          v26,
          v28,
          10,
          33,
          (__int64)&unk_1400D5648,
          (__int64)v24,
          (__int64)v23,
          (__int64)L"WriteMinimumThreshold(ltrMinimum)",
          v20);
        v4 = 12;
      }
      if ( (v4 & 8) != 0 )
      {
        v30 = v48;
        v4 &= ~8u;
        if ( v48 )
        {
          if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
            if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
          }
        }
      }
      if ( (v4 & 4) != 0 )
      {
        v31 = v50;
        if ( v50 )
        {
          if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
            if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
      }
      v32 = 357;
      v33 = L"WriteMinimumThreshold(ltrMinimum)";
    }
    else
    {
      v20 = sub_1400169B8(a1, v22);
      if ( !v20 )
      {
        v20 = 0;
        goto LABEL_62;
      }
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v34 = &unk_1400D44E0;
        v35 = &unk_1400D44E0;
        v36 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v53) + 16LL);
        if ( v36 )
          v35 = v36;
        v37 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v51);
        LOBYTE(v38) = 2;
        v39 = *(void **)(*(_QWORD *)v37 + 16LL);
        if ( v39 )
          v34 = v39;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          v38,
          10,
          34,
          (__int64)&unk_1400D5648,
          (__int64)v34,
          (__int64)v35,
          (__int64)L"WriteMaximumThreshold(ltrMaximum)",
          v20);
        v4 = 48;
      }
      if ( (v4 & 0x20) != 0 )
      {
        v40 = v52;
        v4 &= ~0x20u;
        if ( v52 )
        {
          if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
            if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
          }
        }
      }
      if ( (v4 & 0x10) != 0 )
      {
        v41 = v54;
        if ( v54 )
        {
          if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
            if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
          }
        }
      }
      v32 = 359;
      v33 = L"WriteMaximumThreshold(ltrMaximum)";
    }
    sub_140008DF0((int)a1, (__int64)v33, v32, 152, v20);
    goto LABEL_62;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v12 = &unk_1400D44E0;
    v13 = &unk_1400D44E0;
    v14 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v45) + 16LL);
    if ( v14 )
      v13 = v14;
    v15 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v43);
    LOBYTE(v16) = 2;
    v17 = *(void **)(*(_QWORD *)v15 + 16LL);
    if ( v17 )
      v12 = v17;
    sub_1400A3320(
      *(_QWORD *)(a1[22] + 16LL),
      v16,
      14,
      32,
      (__int64)&unk_1400D5648,
      (__int64)v12,
      (__int64)v13,
      (__int64)qword_1400B7720);
    v4 = 3;
  }
  if ( (v4 & 2) != 0 )
  {
    v18 = v44;
    v4 &= ~2u;
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
  if ( (v4 & 1) != 0 )
  {
    v19 = v46;
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
  v20 = -1073741823;
LABEL_62:
  if ( v6 )
  {
    sub_14000BFA4(v6);
    ExFreePool(v6);
  }
  return v20;
}
