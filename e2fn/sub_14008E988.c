void __fastcall sub_14008E988(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  void *v6; // rsi
  void *v7; // rdi
  void *v8; // rax
  __int64 v9; // rax
  int v10; // edx
  void *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // [rsp+50h] [rbp-31h] BYREF
  __int64 v17; // [rsp+58h] [rbp-29h]
  int v18; // [rsp+60h] [rbp-21h]
  int v19; // [rsp+64h] [rbp-1Dh]
  int v20; // [rsp+68h] [rbp-19h]
  _BYTE v21[8]; // [rsp+70h] [rbp-11h] BYREF
  volatile signed __int32 *v22; // [rsp+78h] [rbp-9h]
  _BYTE v23[8]; // [rsp+80h] [rbp-1h] BYREF
  volatile signed __int32 *v24; // [rsp+88h] [rbp+7h]
  int v25; // [rsp+90h] [rbp+Fh] BYREF
  int v26; // [rsp+94h] [rbp+13h]
  __int64 v27; // [rsp+98h] [rbp+17h]
  __int64 v28; // [rsp+A0h] [rbp+1Fh]
  int v29; // [rsp+A8h] [rbp+27h]
  int v30; // [rsp+ACh] [rbp+2Bh]
  int v31; // [rsp+B0h] [rbp+2Fh]
  int v32; // [rsp+B4h] [rbp+33h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterLink::IndicateLinkStateDisconnected", (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v26 = 0;
  v32 = 0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 = &unk_1400D44E0;
    v7 = &unk_1400D44E0;
    v8 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v23) + 16LL);
    if ( v8 )
      v7 = v8;
    v9 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v21);
    LOBYTE(v10) = 4;
    v11 = *(void **)(*(_QWORD *)v9 + 16LL);
    if ( v11 )
      v6 = v11;
    sub_1400A3320(
      *(_QWORD *)(a1[22] + 16LL),
      v10,
      10,
      19,
      (__int64)&unk_1400D9BD0,
      (__int64)v6,
      (__int64)v7,
      (__int64)qword_1400B7720);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v12 = v22;
    v1 &= ~2u;
    if ( v22 )
    {
      if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v13 = v24;
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  v14 = a1[46];
  v26 = 0;
  v32 = 0;
  v30 = 0;
  v31 = 0;
  v25 = 40;
  v29 = 2;
  v27 = -1LL;
  v28 = -1LL;
  ((void (__fastcall *)(__int64, __int64, int *))qword_1400DF798)(qword_1400DF700, v14, &v25);
  v15 = a1[49];
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v16 = 2;
  sub_14009E920(v15, &v16);
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
}
