__int64 __fastcall sub_14004CDD0(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  _DWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  unsigned int v15; // r14d
  void *v16; // r13
  void *v17; // rdi
  void *v18; // rax
  __int64 v19; // rax
  int v20; // edx
  void *v21; // rax
  volatile signed __int32 *v22; // rsi
  volatile signed __int32 *v23; // rdi
  int v24; // r8d
  const wchar_t *v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rax
  void *v29; // r13
  void *v30; // rdx
  void *v31; // rax
  volatile signed __int32 *v32; // rsi
  volatile signed __int32 *v33; // rdi
  void *v34; // r13
  void *v35; // rdi
  void *v36; // rax
  __int64 v37; // rax
  int v38; // edx
  void *v39; // rax
  volatile signed __int32 *v40; // rsi
  volatile signed __int32 *v41; // rdi
  signed __int32 v43[8]; // [rsp+8h] [rbp-79h] BYREF
  __int64 v44; // [rsp+38h] [rbp-49h]
  const wchar_t *v45; // [rsp+40h] [rbp-41h]
  unsigned int v46; // [rsp+48h] [rbp-39h]
  char v47[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v48; // [rsp+60h] [rbp-21h]
  char v49[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v50; // [rsp+70h] [rbp-11h]
  char v51[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v52; // [rsp+80h] [rbp-1h]
  char v53[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v54; // [rsp+90h] [rbp+Fh]
  char v55[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v56; // [rsp+A0h] [rbp+1Fh]
  char v57[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v58; // [rsp+B0h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnMsixInterruptDispatcher::Config", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = *(_QWORD *)(a1 + 368);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = (_DWORD *)(v6 + 20);
  if ( !v7 || *v8 )
  {
    v15 = -1073741130;
    if ( *v8 != 3 )
      v15 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v34 = &unk_1400D44E0;
      v35 = &unk_1400D44E0;
      v36 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v57)
                     + 16LL);
      if ( v36 )
        v35 = v36;
      v37 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v55);
      v46 = v15;
      v45 = L"m_mmioAccessor->WriteRegisterSafe((0x01680 + (m_messageId) * 4), moderationValue)";
      LOBYTE(v38) = 2;
      v44 = (__int64)v35;
      v39 = *(void **)(*(_QWORD *)v37 + 16LL);
      if ( v39 )
        v34 = v39;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v38,
        10,
        20,
        (__int64)&unk_1400D7418,
        (__int64)v34,
        v44,
        (__int64)v45,
        v46);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v40 = v56;
      v1 &= ~2u;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v41 = v58;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    sub_1400290EC(
      a1,
      (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x01680 + (m_messageId) * 4), moderationValue)",
      234,
      64,
      v15);
  }
  else
  {
    *(_DWORD *)((unsigned int)(4 * *(_DWORD *)(a1 + 416) + 5760) + v7) = 4 * (*(_DWORD *)(a1 + 508) | 0x2000);
    _InterlockedOr(v43, 0);
    v9 = *(_QWORD *)(a1 + 368);
    v10 = *(_QWORD *)(v9 + 8);
    v11 = (_DWORD *)(v9 + 20);
    if ( !v10 || *v11 )
    {
      v15 = -1073741130;
      if ( *v11 != 3 )
        v15 = -1073741661;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
        v27 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v51);
        v28 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v53);
        v46 = v15;
        v29 = &unk_1400D44E0;
        v30 = &unk_1400D44E0;
        v31 = *(void **)(*(_QWORD *)v28 + 16LL);
        if ( v31 )
          v30 = v31;
        if ( *(_QWORD *)(v27 + 16) )
          v29 = *(void **)(v27 + 16);
        v44 = (__int64)v30;
        LOBYTE(v30) = 2;
        sub_1400A5E80(
          v26,
          (_DWORD)v30,
          10,
          21,
          (__int64)&unk_1400D7418,
          (__int64)v29,
          v44,
          (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x01580, m_interruptMask)",
          v46);
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v32 = v52;
        v1 &= ~8u;
        if ( v52 )
        {
          if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
            if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v33 = v54;
        if ( v54 )
        {
          if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
            if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
          }
        }
      }
      v24 = 238;
      v25 = L"m_mmioAccessor->WriteRegisterSafe(0x01580, m_interruptMask)";
    }
    else
    {
      *(_DWORD *)(v10 + 5504) = *(_DWORD *)(a1 + 424);
      _InterlockedOr(v43, 0);
      v12 = *(_QWORD *)(a1 + 368);
      v13 = *(_QWORD *)(v12 + 8);
      v14 = (_DWORD *)(v12 + 20);
      if ( v13 && !*v14 )
      {
        *(_DWORD *)(v13 + 5412) = *(_DWORD *)(a1 + 424);
        _InterlockedOr(v43, 0);
        v15 = 0;
        goto LABEL_71;
      }
      v15 = -1073741130;
      if ( *v14 != 3 )
        v15 = -1073741661;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v16 = &unk_1400D44E0;
        v17 = &unk_1400D44E0;
        v18 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v49)
                       + 16LL);
        if ( v18 )
          v17 = v18;
        v19 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v47);
        v46 = v15;
        v45 = L"m_mmioAccessor->WriteRegisterSafe(0x01524, m_interruptMask)";
        LOBYTE(v20) = 2;
        v44 = (__int64)v17;
        v21 = *(void **)(*(_QWORD *)v19 + 16LL);
        if ( v21 )
          v16 = v21;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v20,
          10,
          22,
          (__int64)&unk_1400D7418,
          (__int64)v16,
          v44,
          (__int64)v45,
          v46);
        v1 = 48;
      }
      if ( (v1 & 0x20) != 0 )
      {
        v22 = v48;
        v1 &= ~0x20u;
        if ( v48 )
        {
          if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
      }
      if ( (v1 & 0x10) != 0 )
      {
        v23 = v50;
        if ( v50 )
        {
          if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
            if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
          }
        }
      }
      v24 = 241;
      v25 = L"m_mmioAccessor->WriteRegisterSafe(0x01524, m_interruptMask)";
    }
    sub_140028FA0(a1, (__int64)v25, v24, 64, v15);
  }
LABEL_71:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v15;
}
