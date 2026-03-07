__int64 __fastcall sub_14010EA38(_QWORD *a1, __int64 a2, unsigned int a3)
{
  char v3; // di
  __int64 v4; // rbx
  __int64 *v6; // r14
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  unsigned int v10; // r15d
  const wchar_t *v11; // rsi
  const wchar_t *v12; // rdi
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  _BYTE v18[8]; // [rsp+58h] [rbp-39h] BYREF
  volatile signed __int32 *v19; // [rsp+60h] [rbp-31h]
  _BYTE v20[8]; // [rsp+68h] [rbp-29h] BYREF
  volatile signed __int32 *v21; // [rsp+70h] [rbp-21h]
  _DWORD v22[2]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v23; // [rsp+80h] [rbp-11h]
  int v24; // [rsp+BCh] [rbp+2Bh]
  int v25; // [rsp+C0h] [rbp+2Fh]

  v3 = 0;
  v4 = a3;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14005B310(Pool2, (__int64)L"os_resources::CommonBufferFactory::CreateDmaEnabler", (__int64)a1);
      if ( v9 )
        v6 = v9;
    }
  }
  sub_1400B6C40((char *)v22, 0, 0x50uLL);
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x15 )
      v22[0] = -1;
    else
      v22[0] = stru_1400DF410.Queue.ListEntry.Flink[10].Blink;
  }
  else
  {
    v22[0] = 80;
  }
  v25 |= 2u;
  v23 = v4;
  v22[1] = 6;
  v24 = 3;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, _QWORD, _QWORD *))(qword_1400DF678 + 752))(
          qword_1400DF6A8,
          a2,
          v22,
          0LL,
          a1 + 47);
  if ( v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v20)
                              + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v18)
                              + 16LL);
      if ( v14 )
        v11 = v14;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        4u,
        0xBu,
        (__int64)&unk_1400D88F8,
        v11,
        v12,
        L"WdfDmaEnablerCreate(device, &dmaConfig, (0), &m_dmaEnabler)");
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v15 = v19;
      v3 &= ~2u;
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v16 = v21;
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    sub_140028FA0((int)a1, (__int64)L"WdfDmaEnablerCreate(device, &dmaConfig, (0), &m_dmaEnabler)", 102, 128, v10);
  }
  else if ( a1[47] )
  {
    v10 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      sub_1400A3054(*(_QWORD *)(*((_QWORD *)P + 1) + 16LL), 2u, 4LL, 0xCu, (__int64)&unk_1400D88F8, L"m_dmaEnabler");
    v10 = -1073741823;
  }
  if ( v6 )
  {
    sub_14005B5AC(v6);
    ExFreePool(v6);
  }
  return v10;
}
