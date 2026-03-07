__int64 __fastcall sub_14012E524(__int64 a1, int a2)
{
  char v2; // di
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r14d
  const wchar_t *v11; // rsi
  const wchar_t *v12; // rdi
  const wchar_t *v13; // rax
  __int64 v14; // rax
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  signed __int32 v19[8]; // [rsp+0h] [rbp-98h] BYREF
  const wchar_t *v20; // [rsp+30h] [rbp-68h]
  const wchar_t *v21; // [rsp+38h] [rbp-60h]
  unsigned int v22; // [rsp+40h] [rbp-58h]
  _BYTE v23[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v24; // [rsp+58h] [rbp-40h]
  _BYTE v25[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v26; // [rsp+68h] [rbp-30h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareQueue::WriteToHwDescriptorHead", a1);
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = *(_QWORD *)(a1 + 392);
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 || *(_DWORD *)(v8 + 20) )
  {
    v10 = -1073741130;
    if ( *(_DWORD *)(v8 + 20) != 3 )
      v10 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v25)
                              + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v23);
      v22 = v10;
      v21 = L"m_mmioAccessor->WriteRegisterSafe(m_HwHeadRegister, descriptorHead)";
      v20 = v12;
      v15 = *(const wchar_t **)(*(_QWORD *)v14 + 16LL);
      if ( v15 )
        v11 = v15;
      sub_1400A5E80(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL), 2u, 0xAu, 0xFu, (__int64)&unk_1400D9878, v11, v20, v21);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v16 = v24;
      v2 &= ~2u;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v17 = v26;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_14000A3FC(a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(m_HwHeadRegister, descriptorHead)", 99, 87, v10);
  }
  else
  {
    *(_DWORD *)(*(unsigned int *)(a1 + 364) + v9) = a2;
    _InterlockedOr(v19, 0);
    v10 = 0;
  }
  if ( v4 )
  {
    sub_14000BFA4(v4);
    ExFreePool(v4);
  }
  return v10;
}
