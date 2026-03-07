void __fastcall sub_14008EC00(__int64 a1)
{
  char v2; // di
  __int64 *v3; // r15
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  void *v6; // r14
  void *v7; // rdi
  void *v8; // rax
  __int64 v9; // rax
  int v10; // edx
  void *v11; // rax
  volatile signed __int32 *v12; // rsi
  volatile signed __int32 *v13; // rdi
  void *v14; // r14
  void *v15; // rdi
  void *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  void *v19; // rax
  volatile signed __int32 *v20; // r14
  volatile signed __int32 *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // [rsp+48h] [rbp-61h] BYREF
  __int64 v25; // [rsp+50h] [rbp-59h]
  __int64 v26; // [rsp+58h] [rbp-51h]
  int v27; // [rsp+60h] [rbp-49h]
  _BYTE v28[8]; // [rsp+68h] [rbp-41h] BYREF
  volatile signed __int32 *v29; // [rsp+70h] [rbp-39h]
  _BYTE v30[8]; // [rsp+78h] [rbp-31h] BYREF
  volatile signed __int32 *v31; // [rsp+80h] [rbp-29h]
  _BYTE v32[8]; // [rsp+88h] [rbp-21h] BYREF
  volatile signed __int32 *v33; // [rsp+90h] [rbp-19h]
  _BYTE v34[8]; // [rsp+98h] [rbp-11h] BYREF
  volatile signed __int32 *v35; // [rsp+A0h] [rbp-9h]
  __int128 v36; // [rsp+A8h] [rbp-1h] BYREF
  __int128 v37; // [rsp+B8h] [rbp+Fh]
  __int64 v38; // [rsp+C8h] [rbp+1Fh]

  v2 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterLink::IndicateLinkStateUnknown", a1 - 352);
      if ( v5 )
        v3 = v5;
    }
  }
  v36 = 0LL;
  v38 = 0LL;
  v37 = 0LL;
  if ( *(_DWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) || *(_DWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_DWORD *)(a1 + 72) = 0;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v14 = &unk_1400D44E0;
      v15 = &unk_1400D44E0;
      v16 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v34)
                     + 16LL);
      if ( v16 )
        v15 = v16;
      v17 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v32);
      LOBYTE(v18) = 4;
      v19 = *(void **)(*(_QWORD *)v17 + 16LL);
      if ( v19 )
        v14 = v19;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v18,
        10,
        18,
        (__int64)&unk_1400D9BD0,
        (__int64)v14,
        (__int64)v15,
        (__int64)qword_1400B7720);
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v20 = v33;
      v2 &= ~8u;
      if ( v33 )
      {
        if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v21 = v35;
      if ( v35 )
      {
        if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    v22 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)&v36 = 40LL;
    v38 = 0LL;
    *((_QWORD *)&v36 + 1) = -1LL;
    v37 = 0xFFFFFFFFFFFFFFFFuLL;
    ((void (__fastcall *)(__int64, __int64, __int128 *))qword_1400DF798)(qword_1400DF700, v22, &v36);
    v23 = *(_QWORD *)(a1 + 40);
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0;
    v24 = 0;
    sub_14009E920(v23, &v24);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v6 = &unk_1400D44E0;
      v7 = &unk_1400D44E0;
      v8 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                   a1 - 296,
                                   v30)
                    + 16LL);
      if ( v8 )
        v7 = v8;
      v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v28);
      LOBYTE(v10) = 4;
      v11 = *(void **)(*(_QWORD *)v9 + 16LL);
      if ( v11 )
        v6 = v11;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v10,
        10,
        17,
        (__int64)&unk_1400D9BD0,
        (__int64)v6,
        (__int64)v7,
        (__int64)qword_1400B7720);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v12 = v29;
      v2 &= ~2u;
      if ( v29 )
      {
        if ( !_InterlockedDecrement(v29 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( !_InterlockedDecrement(v12 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v13 = v31;
      if ( v31 )
      {
        if ( !_InterlockedDecrement(v31 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( !_InterlockedDecrement(v13 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
  }
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
}
