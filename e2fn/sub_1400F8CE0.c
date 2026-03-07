__int64 __fastcall sub_1400F8CE0(__int64 a1)
{
  char v1; // r14
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned __int64 v8; // r15
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  __int64 v11; // rax
  const wchar_t *v12; // rdx
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // edx
  unsigned int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // r8
  _DWORD *v22; // rcx
  const wchar_t *v23; // rdi
  const wchar_t *v24; // rax
  __int64 v25; // rax
  const wchar_t *v26; // rdx
  const wchar_t *v27; // rax
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  int v30; // eax
  const wchar_t *v31; // rdi
  const wchar_t *v32; // rax
  __int64 v33; // rax
  const wchar_t *v34; // rdx
  const wchar_t *v35; // rax
  volatile signed __int32 *v36; // rbx
  volatile signed __int32 *v37; // rbx
  const wchar_t *v38; // r14
  const wchar_t *v39; // rdi
  const wchar_t *v40; // rax
  __int64 v41; // rax
  const wchar_t *v42; // rax
  volatile signed __int32 *v43; // rbx
  volatile signed __int32 *v44; // rbx
  signed __int32 v46[8]; // [rsp+8h] [rbp-99h] BYREF
  unsigned int v47; // [rsp+48h] [rbp-59h]
  unsigned int v48; // [rsp+50h] [rbp-51h]
  _BYTE v49[8]; // [rsp+58h] [rbp-49h] BYREF
  volatile signed __int32 *v50; // [rsp+60h] [rbp-41h]
  _BYTE v51[8]; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v52; // [rsp+70h] [rbp-31h]
  _BYTE v53[8]; // [rsp+78h] [rbp-29h] BYREF
  volatile signed __int32 *v54; // [rsp+80h] [rbp-21h]
  _BYTE v55[8]; // [rsp+88h] [rbp-19h] BYREF
  volatile signed __int32 *v56; // [rsp+90h] [rbp-11h]
  _BYTE v57[8]; // [rsp+98h] [rbp-9h] BYREF
  volatile signed __int32 *v58; // [rsp+A0h] [rbp-1h]
  _BYTE v59[8]; // [rsp+A8h] [rbp+7h] BYREF
  volatile signed __int32 *v60; // [rsp+B0h] [rbp+Fh]
  _BYTE v61[8]; // [rsp+B8h] [rbp+17h] BYREF
  volatile signed __int32 *v62; // [rsp+C0h] [rbp+1Fh]
  _BYTE v63[8]; // [rsp+C8h] [rbp+27h] BYREF
  volatile signed __int32 *v64; // [rsp+D0h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareRxQueue::SetQueueReceiveBufferSize", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 624) + 8LL))(*(_QWORD *)(a1 + 624));
  v7 = v6;
  if ( v6 - 1 > 0x3FFF )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v38 = (const wchar_t *)&unk_1400D44E0;
      v39 = (const wchar_t *)&unk_1400D44E0;
      v40 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v63)
                              + 16LL);
      if ( v40 )
        v39 = v40;
      v41 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v61);
      v47 = v7;
      v42 = *(const wchar_t **)(*(_QWORD *)v41 + 16LL);
      if ( v42 )
        v38 = v42;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0x20u,
        (__int64)&unk_1400D56F8,
        v38,
        v39,
        (const wchar_t *)qword_14014EC70);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v43 = v62;
      v1 &= ~2u;
      if ( v62 )
      {
        if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v44 = v64;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
          if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
        }
      }
    }
    v19 = -1073741637;
  }
  else
  {
    v8 = ((unsigned __int64)v6 + 1023) >> 10;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v51)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v49);
      v48 = v7;
      v47 = v8;
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v12 = v13;
      sub_1400A6AA8(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xAu,
        0x21u,
        (__int64)&unk_1400D56F8,
        v12,
        v9,
        (const wchar_t *)qword_14014EC70);
      v1 = 12;
    }
    if ( (v1 & 8) != 0 )
    {
      v14 = v50;
      v1 &= ~8u;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v15 = v52;
      v1 &= ~4u;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    v16 = *(_QWORD *)(a1 + 392);
    v17 = *(_QWORD *)(v16 + 8);
    if ( !v17 || *(_DWORD *)(v16 + 20) )
    {
      v30 = -1073741661;
      if ( *(_DWORD *)(v16 + 20) == 3 )
        v30 = -1073741130;
      v19 = v30;
      goto LABEL_53;
    }
    v18 = *(_DWORD *)((unsigned int)((*(_DWORD *)(a1 + 360) << 8) + 10252) + v17);
    if ( v18 == -1 && *(_DWORD *)(*(_QWORD *)(v16 + 8) + 8LL) == -1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 8LL))(v16, 3LL);
      v19 = -1073741130;
LABEL_53:
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v1 |= 0x30u;
        v31 = (const wchar_t *)&unk_1400D44E0;
        v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v59)
                                + 16LL);
        if ( v32 )
          v31 = v32;
        v33 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v57);
        v47 = v19;
        v34 = (const wchar_t *)&unk_1400D44E0;
        v35 = *(const wchar_t **)(*(_QWORD *)v33 + 16LL);
        if ( v35 )
          v34 = v35;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          0xAu,
          0x22u,
          (__int64)&unk_1400D56F8,
          v34,
          v31,
          L"m_mmioAccessor->ReadRegisterSafe((0x0280C + (m_queueId) * 0x100), rxSplitRelicationRecieveControl)");
      }
      if ( (v1 & 0x20) != 0 )
      {
        v36 = v58;
        v1 &= ~0x20u;
        if ( v58 )
        {
          if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
            if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
          }
        }
      }
      if ( (v1 & 0x10) != 0 )
      {
        v37 = v60;
        if ( v60 )
        {
          if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
            if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
          }
        }
      }
      sub_140017A30(
        a1,
        (__int64)L"m_mmioAccessor->ReadRegisterSafe((0x0280C + (m_queueId) * 0x100), rxSplitRelicationRecieveControl)",
        407,
        57,
        v19);
      goto LABEL_87;
    }
    v20 = *(_QWORD *)(a1 + 392);
    v21 = *(_QWORD *)(v20 + 8);
    v22 = (_DWORD *)(v20 + 20);
    if ( !v21 || *v22 )
    {
      v19 = -1073741130;
      if ( *v22 != 3 )
        v19 = -1073741661;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v1 |= 0xC0u;
        v23 = (const wchar_t *)&unk_1400D44E0;
        v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v55)
                                + 16LL);
        if ( v24 )
          v23 = v24;
        v25 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v53);
        v47 = v19;
        v26 = (const wchar_t *)&unk_1400D44E0;
        v27 = *(const wchar_t **)(*(_QWORD *)v25 + 16LL);
        if ( v27 )
          v26 = v27;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          0xAu,
          0x23u,
          (__int64)&unk_1400D56F8,
          v26,
          v23,
          L"m_mmioAccessor->WriteRegisterSafe((0x0280C + (m_queueId) * 0x100), rxSplitRelicationRecieveControl)");
      }
      if ( v1 < 0 )
      {
        v28 = v54;
        v1 &= ~0x80u;
        if ( v54 )
        {
          if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
            if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
          }
        }
      }
      if ( (v1 & 0x40) != 0 )
      {
        v29 = v56;
        if ( v56 )
        {
          if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
            if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
          }
        }
      }
      sub_140017B7C(
        a1,
        (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x0280C + (m_queueId) * 0x100), rxSplitRelicationRecieveControl)",
        412,
        57,
        v19);
    }
    else
    {
      *(_DWORD *)((unsigned int)((*(_DWORD *)(a1 + 360) << 8) + 10252) + v21) = v8 | v18 & 0xFFFFFF80;
      _InterlockedOr(v46, 0);
      v19 = 0;
    }
  }
LABEL_87:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v19;
}
