__int64 __fastcall sub_1400F5EF8(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // esi
  const wchar_t *v7; // r12
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  __int64 v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rsi
  volatile signed __int32 *v13; // rdi
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rcx
  const wchar_t *v17; // r12
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rax
  __int64 v20; // rax
  const wchar_t *v21; // rax
  volatile signed __int32 *v22; // rsi
  volatile signed __int32 *v23; // rdi
  signed __int32 v25[8]; // [rsp+0h] [rbp-B8h] BYREF
  const wchar_t *v26; // [rsp+30h] [rbp-88h]
  const wchar_t *v27; // [rsp+38h] [rbp-80h]
  unsigned int v28; // [rsp+40h] [rbp-78h]
  _BYTE v29[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v30; // [rsp+58h] [rbp-60h]
  _BYTE v31[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v32; // [rsp+68h] [rbp-50h]
  _BYTE v33[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v34; // [rsp+78h] [rbp-40h]
  _BYTE v35[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v36; // [rsp+88h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareTxQueue::SetWriteBackThreshold", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = *(_DWORD *)(a1 + 584);
  if ( v6 <= 0x17 )
  {
    v15 = *(_QWORD *)(a1 + 392);
    v16 = *(_QWORD *)(v15 + 8);
    if ( !v16 || *(_DWORD *)(v15 + 20) )
    {
      v14 = -1073741130;
      if ( *(_DWORD *)(v15 + 20) != 3 )
        v14 = -1073741661;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v17 = (const wchar_t *)&unk_1400D44E0;
        v18 = (const wchar_t *)&unk_1400D44E0;
        v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v35)
                                + 16LL);
        if ( v19 )
          v18 = v19;
        v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v33);
        v28 = v14;
        v27 = L"m_mmioAccessor->WriteRegisterSafe((0x03828 + (m_queueId) * 0x100), threshold << 16)";
        v26 = v18;
        v21 = *(const wchar_t **)(*(_QWORD *)v20 + 16LL);
        if ( v21 )
          v17 = v21;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          0xAu,
          0x1Fu,
          (__int64)&unk_1400D52E0,
          v17,
          v26,
          v27);
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v22 = v34;
        v1 &= ~8u;
        if ( v34 )
        {
          if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v23 = v36;
        if ( v36 )
        {
          if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
            if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
          }
        }
      }
      sub_140011684(
        a1,
        (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x03828 + (m_queueId) * 0x100), threshold << 16)",
        465,
        58,
        v14);
    }
    else
    {
      *(_DWORD *)((unsigned int)((*(_DWORD *)(a1 + 360) << 8) + 14376) + v16) = v6 << 16;
      _InterlockedOr(v25, 0);
      v14 = 0;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v7 = (const wchar_t *)&unk_1400D44E0;
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                            a1 + 56,
                                            v31)
                             + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v29);
      v28 = v6;
      v11 = *(const wchar_t **)(*(_QWORD *)v10 + 16LL);
      if ( v11 )
        v7 = v11;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0x1Eu,
        (__int64)&unk_1400D52E0,
        v7,
        v8,
        (const wchar_t *)qword_14014EC70);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v12 = v30;
      v1 &= ~2u;
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v13 = v32;
      if ( v32 )
      {
        if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    v14 = -1073741811;
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v14;
}
