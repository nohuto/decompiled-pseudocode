__int64 __fastcall sub_140012E20(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // kr00_8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  unsigned int v18; // r14d
  int v19; // eax
  void *v20; // r13
  void *v21; // rdi
  void *v22; // rax
  __int64 v23; // rax
  int v24; // edx
  void *v25; // rax
  volatile signed __int32 *v26; // rsi
  volatile signed __int32 *v27; // rdi
  __int64 v28; // rsi
  void *v29; // r13
  void *v30; // rdi
  void *v31; // rax
  __int64 v32; // rax
  int v33; // edx
  void *v34; // rax
  volatile signed __int32 *v35; // rsi
  volatile signed __int32 *v36; // rdi
  void *v37; // r13
  void *v38; // rdi
  void *v39; // rax
  __int64 v40; // rax
  int v41; // edx
  void *v42; // rax
  volatile signed __int32 *v43; // rsi
  volatile signed __int32 *v44; // rdi
  signed __int32 v46[8]; // [rsp+8h] [rbp-79h] BYREF
  __int64 v47; // [rsp+38h] [rbp-49h]
  const wchar_t *v48; // [rsp+40h] [rbp-41h]
  unsigned int v49; // [rsp+48h] [rbp-39h]
  char v50[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v51; // [rsp+60h] [rbp-21h]
  char v52[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v53; // [rsp+70h] [rbp-11h]
  char v54[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v55; // [rsp+80h] [rbp-1h]
  char v56[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v57; // [rsp+90h] [rbp+Fh]
  char v58[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v59; // [rsp+A0h] [rbp+1Fh]
  char v60[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v61; // [rsp+B0h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareTxQueue::ConfigureHeadWriteBack", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 640) + 16LL))(*(_QWORD *)(a1 + 640));
  v7 = *(_QWORD *)(a1 + 392);
  v8 = (unsigned int)v6 | 3;
  v9 = *(_QWORD *)(v7 + 8);
  v10 = (_DWORD *)(v7 + 20);
  if ( !v9 || *v10 )
  {
    v18 = -1073741130;
    if ( *v10 != 3 )
      v18 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v37 = &unk_1400D44E0;
      v38 = &unk_1400D44E0;
      v39 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v60)
                     + 16LL);
      if ( v39 )
        v38 = v39;
      v40 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v58);
      v49 = v18;
      LOBYTE(v41) = 2;
      v42 = *(void **)(*(_QWORD *)v40 + 16LL);
      if ( v42 )
        v37 = v42;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v41,
        10,
        20,
        (__int64)&unk_1400D52E0,
        (__int64)v37,
        (__int64)v38,
        (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x0383C + ((m_queueId) * 0x100)), headWriteBack.HighPart)",
        v49);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v43 = v59;
      v1 &= ~2u;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v43 + 8LL))(v43, v8);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v44 = v61;
      if ( v61 )
      {
        if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v44 + 8LL))(v44, v8);
          if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
        }
      }
    }
    sub_140011A68(
      a1,
      (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x0383C + ((m_queueId) * 0x100)), headWriteBack.HighPart)",
      162,
      58,
      v18);
  }
  else
  {
    *(_DWORD *)((unsigned int)((*(_DWORD *)(a1 + 360) << 8) + 14396) + v9) = HIDWORD(v6);
    _InterlockedOr(v46, 0);
    v11 = *(_QWORD *)(a1 + 392);
    v12 = *(_QWORD *)(v11 + 8);
    v13 = (_DWORD *)(v11 + 20);
    if ( !v12 || *v13 )
    {
      v18 = -1073741130;
      if ( *v13 != 3 )
        v18 = -1073741661;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v28 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
        v29 = &unk_1400D44E0;
        v30 = &unk_1400D44E0;
        v31 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v56)
                       + 16LL);
        if ( v31 )
          v30 = v31;
        v32 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v54);
        v49 = v18;
        LOBYTE(v33) = 2;
        v34 = *(void **)(*(_QWORD *)v32 + 16LL);
        if ( v34 )
          v29 = v34;
        sub_1400A5E80(
          v28,
          v33,
          10,
          21,
          (__int64)&unk_1400D52E0,
          (__int64)v29,
          (__int64)v30,
          (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x03838 + ((m_queueId) * 0x100)), headWriteBack.LowPart)",
          v49);
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v35 = v55;
        v1 &= ~8u;
        if ( v55 )
        {
          if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v35 + 8LL))(v35, v8);
            if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v36 = v57;
        if ( v57 )
        {
          if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v36 + 8LL))(v36, v8);
            if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
          }
        }
      }
      sub_14001191C(
        a1,
        (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x03838 + ((m_queueId) * 0x100)), headWriteBack.LowPart)",
        163,
        58,
        v18);
    }
    else
    {
      *(_DWORD *)((unsigned int)((*(_DWORD *)(a1 + 360) << 8) + 14392) + v12) = v8;
      _InterlockedOr(v46, 0);
      v14 = *(_QWORD *)(a1 + 392);
      v15 = *(_QWORD *)(v14 + 8);
      if ( !v15 || *(_DWORD *)(v14 + 20) )
      {
        v19 = -1073741661;
        if ( *(_DWORD *)(v14 + 20) == 3 )
          v19 = -1073741130;
        v18 = v19;
      }
      else
      {
        v16 = (unsigned int)((*(_DWORD *)(a1 + 360) << 8) + 14356);
        v17 = *(unsigned int *)(v16 + v15);
        if ( (_DWORD)v17 != -1 || *(_DWORD *)(*(_QWORD *)(v14 + 8) + 8LL) != -1 )
        {
          *(_DWORD *)(v16 + *(_QWORD *)(v14 + 8)) = v17 & 0xFFFFF7FF;
          _InterlockedOr(v46, 0);
          v18 = 0;
          goto LABEL_74;
        }
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v14 + 8LL))(v14, 3LL, v17, v16);
        v18 = -1073741130;
      }
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v20 = &unk_1400D44E0;
        v21 = &unk_1400D44E0;
        v22 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v52)
                       + 16LL);
        if ( v22 )
          v21 = v22;
        v23 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v50);
        v49 = v18;
        v48 = L"m_mmioAccessor->UnsetMaskSafe((0x03814 + ((m_queueId) * 0x100)), (1 << 11))";
        LOBYTE(v24) = 2;
        v47 = (__int64)v21;
        v25 = *(void **)(*(_QWORD *)v23 + 16LL);
        if ( v25 )
          v20 = v25;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v24,
          10,
          22,
          (__int64)&unk_1400D52E0,
          (__int64)v20,
          v47,
          (__int64)v48,
          v49);
        v1 = 48;
      }
      if ( (v1 & 0x20) != 0 )
      {
        v26 = v51;
        v1 &= ~0x20u;
        if ( v51 )
        {
          if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
            if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
      }
      if ( (v1 & 0x10) != 0 )
      {
        v27 = v53;
        if ( v53 )
        {
          if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
      }
      sub_14000A7E0(
        a1,
        (__int64)L"m_mmioAccessor->UnsetMaskSafe((0x03814 + ((m_queueId) * 0x100)), (1 << 11))",
        171,
        58,
        v18);
    }
  }
LABEL_74:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v18;
}
