void __fastcall sub_140145554(__int64 a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rdx
  const wchar_t *v7; // rsi
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  __int64 v10; // rax
  const char *v11; // rdx
  const wchar_t *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  _BYTE v15[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v16; // [rsp+58h] [rbp-50h]
  _BYTE v17[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v18; // [rsp+68h] [rbp-40h]
  _DWORD v19[2]; // [rsp+70h] [rbp-38h] BYREF
  const wchar_t *v20; // [rsp+78h] [rbp-30h]
  int v21; // [rsp+80h] [rbp-28h]
  int v22; // [rsp+84h] [rbp-24h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x800) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140094FB8(Pool2, (__int64)L"net_adapter::NetAdapterTxQueue::InitIeee8021qExtension", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v19[1] = 0;
  v6 = *(_QWORD *)(a1 + 360);
  v20 = L"ms_packet_ieee8021q";
  v19[0] = 24;
  v21 = 1;
  v22 = 1;
  ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64))qword_1400DF938)(qword_1400DF700, v6, v19, a1 + 728);
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v7 = (const wchar_t *)&unk_1400D44E0;
    v8 = (const wchar_t *)&unk_1400D44E0;
    v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                          a1 + 56,
                                          v17)
                           + 16LL);
    if ( v9 )
      v8 = v9;
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v15);
    v11 = "disabled";
    v12 = *(const wchar_t **)(*(_QWORD *)v10 + 16LL);
    if ( v12 )
      v7 = v12;
    if ( *(_BYTE *)(a1 + 760) )
      v11 = "enabled";
    sub_1400AA8D8(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xCu,
      0x1Au,
      (__int64)&unk_1400DA108,
      v7,
      v8,
      (const wchar_t *)qword_14014EC70,
      v11);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v13 = v16;
    v1 &= ~2u;
    if ( v16 )
    {
      if ( !_InterlockedDecrement(v16 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        if ( !_InterlockedDecrement(v13 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v14 = v18;
    if ( v18 )
    {
      if ( !_InterlockedDecrement(v18 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( !_InterlockedDecrement(v14 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  if ( v3 )
  {
    sub_1400953B8(v3);
    ExFreePool(v3);
  }
}
