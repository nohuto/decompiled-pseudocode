__int64 __fastcall sub_1400FA7C0(__int64 a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // r15d
  const wchar_t *v9; // rsi
  const wchar_t *v10; // rdi
  const wchar_t *v11; // rax
  __int64 v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  signed __int32 v17[8]; // [rsp+0h] [rbp-98h] BYREF
  const wchar_t *v18; // [rsp+30h] [rbp-68h]
  const wchar_t *v19; // [rsp+38h] [rbp-60h]
  unsigned int v20; // [rsp+40h] [rbp-58h]
  _BYTE v21[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v22; // [rsp+58h] [rbp-40h]
  _BYTE v23[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v24; // [rsp+68h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareRxQueue::WriteToHwDescriptorLength", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = *(_QWORD *)(a1 + 392);
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 || *(_DWORD *)(v6 + 20) )
  {
    v8 = -1073741130;
    if ( *(_DWORD *)(v6 + 20) != 3 )
      v8 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v23)
                              + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v21);
      v20 = v8;
      v19 = L"m_mmioAccessor->WriteRegisterSafe((0x02808 + (m_queueId) * 0x100), m_queueLength * sizeof(HW_RX_DESCRIPTOR))";
      v18 = v10;
      v13 = *(const wchar_t **)(*(_QWORD *)v12 + 16LL);
      if ( v13 )
        v9 = v13;
      sub_1400A5E80(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL), 2u, 0xAu, 0x1Du, (__int64)&unk_1400D56F8, v9, v18, v19);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v14 = v22;
      v1 &= ~2u;
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v15 = v24;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_140011D00(
      a1,
      (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x02808 + (m_queueId) * 0x100), m_queueLength * sizeof(HW_RX_DESCRIPTOR))",
      357,
      57,
      v8);
  }
  else
  {
    *(_DWORD *)((unsigned int)((*(_DWORD *)(a1 + 360) << 8) + 10248) + v7) = 16 * *(_DWORD *)(a1 + 476);
    _InterlockedOr(v17, 0);
    v8 = 0;
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v8;
}
