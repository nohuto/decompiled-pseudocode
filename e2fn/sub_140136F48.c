__int64 __fastcall sub_140136F48(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned int v10; // r12d
  const wchar_t *v12; // rsi
  const wchar_t *v13; // rdi
  const wchar_t *v14; // rax
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  _BYTE v18[8]; // [rsp+58h] [rbp-19h] BYREF
  volatile signed __int32 *v19; // [rsp+60h] [rbp-11h]
  _BYTE v20[8]; // [rsp+68h] [rbp-9h] BYREF
  volatile signed __int32 *v21; // [rsp+70h] [rbp-1h]
  _OWORD v22[2]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v23; // [rsp+98h] [rbp+27h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterArpOffload::GetOffloadParametersFromNetAdapter", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = *(_QWORD *)(a1 + 376);
  *(_BYTE *)(a1 + 360) = 0;
  v23 = 0LL;
  memset(v22, 0, sizeof(v22));
  LODWORD(v22[0]) = 40;
  ((void (__fastcall *)(__int64, __int64, _OWORD *))qword_1400DF8D0)(qword_1400DF700, v6, v22);
  v7 = 0;
  if ( !((__int64 (__fastcall *)(__int64, _OWORD *))qword_1400DF8D8)(qword_1400DF700, v22) )
    goto LABEL_10;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = ((__int64 (__fastcall *)(__int64, _OWORD *, __int64))qword_1400DF8E0)(qword_1400DF700, v22, v8);
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64))qword_1400DF8B8)(qword_1400DF700, v9) == 1 )
      break;
    v8 = ++v7;
    if ( v7 >= (unsigned __int64)((__int64 (__fastcall *)(__int64, _OWORD *))qword_1400DF8D8)(qword_1400DF700, v22) )
      goto LABEL_10;
  }
  *(_BYTE *)(a1 + 360) = 1;
  *(_OWORD *)(a1 + 384) = 0LL;
  *(_OWORD *)(a1 + 400) = 0LL;
  *(_OWORD *)(a1 + 416) = 0LL;
  *(_DWORD *)(a1 + 432) = 0;
  *(_DWORD *)(a1 + 384) = 52;
  ((void (__fastcall *)(__int64, __int64))qword_1400DF8C0)(qword_1400DF700, v9);
  v10 = sub_140137268(a1);
  if ( v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v20)
                              + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v18)
                              + 16LL);
      if ( v15 )
        v12 = v15;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x11u,
        (__int64)&unk_1400D9C98,
        v12,
        v13,
        L"UpdateArpParameters()");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v16 = v19;
      v1 &= ~2u;
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v17 = v21;
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_14003B824(a1, (__int64)L"UpdateArpParameters()", 143, 101, v10);
  }
  else
  {
LABEL_10:
    v10 = 0;
  }
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v10;
}
