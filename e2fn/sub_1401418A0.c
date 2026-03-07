void __fastcall sub_1401418A0(__int64 *a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 *v5; // r15
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  const wchar_t *v13; // r14
  void *v14; // rsi
  const wchar_t *v15; // rdi
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  _BYTE v20[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v21; // [rsp+60h] [rbp-21h]
  _BYTE v22[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v23; // [rsp+70h] [rbp-11h]
  int v24; // [rsp+78h] [rbp-9h] BYREF
  int v25; // [rsp+7Ch] [rbp-5h]
  __int64 v26; // [rsp+80h] [rbp-1h]
  __int64 v27; // [rsp+88h] [rbp+7h]
  __int64 (__fastcall **v28)(PVOID); // [rsp+90h] [rbp+Fh] BYREF
  PVOID P; // [rsp+A0h] [rbp+1Fh]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterRxPacketFilter::SetCapabilities", (__int64)a1);
      if ( v9 )
        v5 = v9;
    }
  }
  v10 = *a1;
  v25 = 0;
  v24 = 24;
  v27 = a3;
  v26 = (*(__int64 (__fastcall **)(__int64 *))(v10 + 40))(a1);
  v11 = sub_140141770((__int64)a1);
  v25 = v11;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v12 = sub_14014148C((__int64)a1, (__int64)&v28, v11);
    v13 = (const wchar_t *)&unk_1400D44E0;
    v14 = &unk_1400D44E0;
    if ( *(_QWORD *)(v12 + 16) )
      v14 = *(void **)(v12 + 16);
    v15 = (const wchar_t *)&unk_1400D44E0;
    v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(a1[7] + 16))(a1 + 7, v22) + 16LL);
    if ( v16 )
      v15 = v16;
    v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(a1[7] + 24))(a1 + 7, v20) + 16LL);
    if ( v17 )
      v13 = v17;
    sub_1400B50E8(
      *(_QWORD *)(a1[22] + 16),
      4u,
      0xDu,
      0xBu,
      (__int64)&unk_1400D9EC0,
      v13,
      v15,
      (const wchar_t *)qword_14014EC70,
      v26,
      (__int64)v14);
    v3 = 7;
  }
  if ( (v3 & 4) != 0 )
  {
    v18 = v21;
    v3 &= ~4u;
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  if ( (v3 & 2) != 0 )
  {
    v19 = v23;
    v3 &= ~2u;
    if ( v23 )
    {
      if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
  }
  if ( (v3 & 1) != 0 )
  {
    v28 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
  }
  ((void (__fastcall *)(__int64, __int64, int *))qword_1400DF980)(qword_1400DF700, a2, &v24);
  if ( v5 )
  {
    sub_140091BA8(v5);
    ExFreePool(v5);
  }
}
