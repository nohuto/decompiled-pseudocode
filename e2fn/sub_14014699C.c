__int64 __fastcall sub_14014699C(__int64 a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rbx
  const wchar_t *v8; // rsi
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  unsigned int v14; // ebx
  __int64 *v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rax
  void (__fastcall *v20)(__int64, __int64); // [rsp+40h] [rbp-68h] BYREF
  int v21; // [rsp+48h] [rbp-60h]
  __int64 v22; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v23; // [rsp+58h] [rbp-50h]
  _BYTE v24[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v25; // [rsp+68h] [rbp-40h]
  _BYTE v26[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v27; // [rsp+78h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x800) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140094FB8(Pool2, (__int64)L"net_adapter::NetAdapterTxQueue::InitializeChecksumOffload", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v21 = 0;
  v20 = sub_140095DB0;
  v6 = sub_14006D650(&v22, (_QWORD *)a1, (__int64)&v20);
  sub_1400A3C70((__int64 *)(a1 + 488), v6);
  v7 = v23;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( *(_QWORD *)(a1 + 488) )
  {
    v15 = *(__int64 **)(a1 + 472);
    v16 = *v15;
    v17 = sub_1400A27D4(&v20, (__int64 *)(a1 + 488));
    (*(void (__fastcall **)(__int64 *, _QWORD *))(v16 + 16))(v15, v17);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 472) + 8LL))(*(_QWORD *)(a1 + 472));
    *(_WORD *)(a1 + 504) = *(_WORD *)v18;
    *(_BYTE *)(a1 + 506) = *(_BYTE *)(v18 + 2);
    sub_140145244(a1);
    v14 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v26)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v24)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xCu,
        0x1Cu,
        (__int64)&unk_1400DA108,
        v8,
        v9,
        L"m_checksumOffloadNotificationChangedCallback");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v12 = v25;
      v1 &= ~2u;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v13 = v27;
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_14008F628(a1, (__int64)L"m_checksumOffloadNotificationChangedCallback", 794, 112);
    v14 = -1073741801;
  }
  if ( v3 )
  {
    sub_1400953B8(v3);
    ExFreePool(v3);
  }
  return v14;
}
