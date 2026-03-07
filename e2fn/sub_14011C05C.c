__int64 __fastcall sub_14011C05C(_QWORD *a1)
{
  char v2; // di
  const wchar_t **v3; // r12
  const wchar_t **Pool2; // rax
  const wchar_t **v5; // rbx
  unsigned int v6; // r14d
  const wchar_t *v7; // r13
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rsi
  volatile signed __int32 *v12; // rdi
  char v14[8]; // [rsp+168h] [rbp+68h] BYREF
  volatile signed __int32 *v15; // [rsp+170h] [rbp+70h]
  char v16[8]; // [rsp+178h] [rbp+78h] BYREF
  volatile signed __int32 *v17; // [rsp+180h] [rbp+80h]

  v2 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (const wchar_t **)ExAllocatePool2(64LL, 8LL, 1970304114LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = L"framework::DeviceContext::UpdateInstanceId";
      sub_1400B1BA8(L"framework::DeviceContext::UpdateInstanceId");
      v3 = v5;
    }
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(qword_1400DF678 + 656))(qword_1400DF6A8, a1[48], 10LL);
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = (const wchar_t *)&unk_1400D44E0;
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v16)
                             + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v14)
                              + 16LL);
      if ( v10 )
        v7 = v10;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        8u,
        0x57u,
        (__int64)&unk_1400D91A8,
        v7,
        v8,
        L"WdfDeviceAllocAndQueryProperty(m_device, DevicePropertyLocationInformation, PagedPool, (0), &locationMemory)");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v11 = v15;
      v2 &= ~2u;
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v12 = v17;
      if ( v17 )
      {
        if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    sub_140011D00(
      (int)a1,
      (__int64)L"WdfDeviceAllocAndQueryProperty(m_device, DevicePropertyLocationInformation, PagedPool, (0), &locationMemory)",
      1012,
      74,
      v6);
  }
  else
  {
    v6 = -1073741801;
  }
  if ( v3 )
  {
    sub_1400B1C04(*v3);
    ExFreePool(v3);
  }
  return v6;
}
