__int64 __fastcall sub_1400F5AD0(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r15
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // r8
  _DWORD *v12; // rcx
  const wchar_t *v13; // r14
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  __int64 v16; // rax
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // r14
  volatile signed __int32 *v19; // rdi
  int v20; // eax
  const wchar_t *v21; // r14
  const wchar_t *v22; // rdi
  const wchar_t *v23; // rax
  __int64 v24; // rax
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // r14
  volatile signed __int32 *v27; // rdi
  signed __int32 v29[8]; // [rsp+0h] [rbp-B8h] BYREF
  const wchar_t *v30; // [rsp+30h] [rbp-88h]
  const wchar_t *v31; // [rsp+38h] [rbp-80h]
  unsigned int v32; // [rsp+40h] [rbp-78h]
  _BYTE v33[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v34; // [rsp+58h] [rbp-60h]
  _BYTE v35[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v36; // [rsp+68h] [rbp-50h]
  _BYTE v37[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v38; // [rsp+78h] [rbp-40h]
  _BYTE v39[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v40; // [rsp+88h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareTxQueue::EnableQueue", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = *(_QWORD *)(a1 + 392);
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 || *(_DWORD *)(v6 + 20) )
  {
    v20 = -1073741661;
    if ( *(_DWORD *)(v6 + 20) == 3 )
      v20 = -1073741130;
    v9 = v20;
    goto LABEL_36;
  }
  v8 = *(_DWORD *)((unsigned int)((*(_DWORD *)(a1 + 360) << 8) + 14376) + v7);
  if ( v8 == -1 && *(_DWORD *)(*(_QWORD *)(v6 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 3LL);
    v9 = -1073741130;
LABEL_36:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v21 = (const wchar_t *)&unk_1400D44E0;
      v22 = (const wchar_t *)&unk_1400D44E0;
      v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v39)
                              + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v37);
      v32 = v9;
      v31 = L"m_mmioAccessor->ReadRegisterSafe((0x03828 + (m_queueId) * 0x100), txDescriptorControl)";
      v30 = v22;
      v25 = *(const wchar_t **)(*(_QWORD *)v24 + 16LL);
      if ( v25 )
        v21 = v25;
      sub_1400A5E80(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL), 2u, 0xAu, 0x17u, (__int64)&unk_1400D52E0, v21, v30, v31);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v26 = v38;
      v1 &= ~2u;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v27 = v40;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    sub_14000ABC4(
      a1,
      (__int64)L"m_mmioAccessor->ReadRegisterSafe((0x03828 + (m_queueId) * 0x100), txDescriptorControl)",
      380,
      58,
      v9);
    goto LABEL_53;
  }
  v10 = *(_QWORD *)(a1 + 392);
  v11 = *(_QWORD *)(v10 + 8);
  v12 = (_DWORD *)(v10 + 20);
  if ( !v11 || *v12 )
  {
    v9 = -1073741130;
    if ( *v12 != 3 )
      v9 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v35)
                              + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v33);
      v32 = v9;
      v31 = L"m_mmioAccessor->WriteRegisterSafe((0x03828 + (m_queueId) * 0x100), txDescriptorControl)";
      v30 = v14;
      v17 = *(const wchar_t **)(*(_QWORD *)v16 + 16LL);
      if ( v17 )
        v13 = v17;
      sub_1400A5E80(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL), 2u, 0xAu, 0x18u, (__int64)&unk_1400D52E0, v13, v30, v31);
      v1 = 12;
    }
    if ( (v1 & 8) != 0 )
    {
      v18 = v34;
      v1 &= ~8u;
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v19 = v36;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    sub_1400117D0(
      a1,
      (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x03828 + (m_queueId) * 0x100), txDescriptorControl)",
      384,
      58,
      v9);
  }
  else
  {
    *(_DWORD *)((unsigned int)((*(_DWORD *)(a1 + 360) << 8) + 14376) + v11) = v8 | 0x2000000;
    _InterlockedOr(v29, 0);
    v9 = 0;
  }
LABEL_53:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v9;
}
