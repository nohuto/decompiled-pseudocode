__int64 __fastcall sub_1400F6D40(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r15
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rdx
  const wchar_t *v15; // r14
  const wchar_t *v16; // rdi
  const wchar_t *v17; // rax
  __int64 v18; // rax
  const wchar_t *v19; // rax
  volatile signed __int32 *v20; // r14
  volatile signed __int32 *v21; // rdi
  __int64 v22; // rdx
  const wchar_t *v23; // r14
  const wchar_t *v24; // rdi
  const wchar_t *v25; // rax
  __int64 v26; // rax
  const wchar_t *v27; // rax
  volatile signed __int32 *v28; // r14
  volatile signed __int32 *v29; // rdi
  signed __int32 v31[8]; // [rsp+0h] [rbp-B8h] BYREF
  const wchar_t *v32; // [rsp+30h] [rbp-88h]
  const wchar_t *v33; // [rsp+38h] [rbp-80h]
  unsigned int v34; // [rsp+40h] [rbp-78h]
  _BYTE v35[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v36; // [rsp+58h] [rbp-60h]
  _BYTE v37[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v38; // [rsp+68h] [rbp-50h]
  _BYTE v39[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v40; // [rsp+78h] [rbp-40h]
  _BYTE v41[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v42; // [rsp+88h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareTxQueue::WriteToHwDescriptorBaseAddress",
             a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 512) + 16LL))(*(_QWORD *)(a1 + 512));
  v7 = *(_QWORD *)(a1 + 392);
  v8 = HIDWORD(v6);
  v9 = v6;
  v10 = *(_QWORD *)(v7 + 8);
  if ( !v10 || *(_DWORD *)(v7 + 20) )
  {
    v13 = -1073741130;
    v22 = 3221225635LL;
    if ( *(_DWORD *)(v7 + 20) != 3 )
      v13 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v23 = (const wchar_t *)&unk_1400D44E0;
      v24 = (const wchar_t *)&unk_1400D44E0;
      v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, unsigned __int64))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v41,
                                             v6)
                              + 16LL);
      if ( v25 )
        v24 = v25;
      v26 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v39);
      v34 = v13;
      v33 = L"m_mmioAccessor->WriteRegisterSafe((0x03800 + (m_queueId) * 0x100), baseAddressLow)";
      v32 = v24;
      v27 = *(const wchar_t **)(*(_QWORD *)v26 + 16LL);
      if ( v27 )
        v23 = v27;
      sub_1400A5E80(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL), 2u, 0xAu, 0x1Bu, (__int64)&unk_1400D52E0, v23, v32, v33);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v28 = v40;
      v1 &= ~2u;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, unsigned __int64))(*(_QWORD *)v28 + 8LL))(
            v28,
            v22,
            v9);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v29 = v42;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, unsigned __int64))(*(_QWORD *)v29 + 8LL))(
            v29,
            v22,
            v9);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    sub_140011538(
      a1,
      (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x03800 + (m_queueId) * 0x100), baseAddressLow)",
      432,
      58,
      v13);
  }
  else
  {
    *(_DWORD *)((unsigned int)((*(_DWORD *)(a1 + 360) + 56) << 8) + v10) = v6;
    _InterlockedOr(v31, 0);
    v11 = *(_QWORD *)(a1 + 392);
    v12 = *(_QWORD *)(v11 + 8);
    if ( !v12 || *(_DWORD *)(v11 + 20) )
    {
      v13 = -1073741130;
      v14 = 3221225635LL;
      if ( *(_DWORD *)(v11 + 20) != 3 )
        v13 = -1073741661;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v15 = (const wchar_t *)&unk_1400D44E0;
        v16 = (const wchar_t *)&unk_1400D44E0;
        v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, unsigned __int64))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v37,
                                               v9)
                                + 16LL);
        if ( v17 )
          v16 = v17;
        v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v35);
        v34 = v13;
        v33 = L"m_mmioAccessor->WriteRegisterSafe((0x03804 + (m_queueId) * 0x100), baseAddressHigh)";
        v32 = v16;
        v19 = *(const wchar_t **)(*(_QWORD *)v18 + 16LL);
        if ( v19 )
          v15 = v19;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          0xAu,
          0x1Cu,
          (__int64)&unk_1400D52E0,
          v15,
          v32,
          v33);
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v20 = v36;
        v1 &= ~8u;
        if ( v36 )
        {
          if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, unsigned __int64))(*(_QWORD *)v20 + 8LL))(
              v20,
              v14,
              v9);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v21 = v38;
        if ( v38 )
        {
          if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, unsigned __int64))(*(_QWORD *)v21 + 8LL))(
              v21,
              v14,
              v9);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
          }
        }
      }
      sub_140011684(
        a1,
        (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x03804 + (m_queueId) * 0x100), baseAddressHigh)",
        433,
        58,
        v13);
    }
    else
    {
      *(_DWORD *)((unsigned int)((*(_DWORD *)(a1 + 360) << 8) + 14340) + v12) = v8;
      _InterlockedOr(v31, 0);
      v13 = 0;
    }
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v13;
}
