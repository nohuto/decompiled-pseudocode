__int64 __fastcall sub_14003B470(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ebp
  void *v8; // rsi
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rsi
  volatile signed __int32 *v15; // rdi
  void *v16; // rsi
  void *v17; // rdi
  void *v18; // rax
  __int64 v19; // rax
  int v20; // edx
  void *v21; // rax
  volatile signed __int32 *v22; // rsi
  volatile signed __int32 *v23; // rdi
  _BYTE v25[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v26; // [rsp+58h] [rbp-60h]
  _BYTE v27[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v28; // [rsp+68h] [rbp-50h]
  _BYTE v29[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v30; // [rsp+78h] [rbp-40h]
  _BYTE v31[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v32; // [rsp+88h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnManageabilitySession::HandleD3ColdInS0Flow", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = **(_QWORD **)(a1 + 360);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) + 36612LL) & 1) != 0 )
  {
    v7 = (*(__int64 (**)(void))(v6 + 24))();
    if ( v7 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v8 = &unk_1400D44E0;
        v9 = &unk_1400D44E0;
        v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v27)
                       + 16LL);
        if ( v10 )
          v9 = v10;
        v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v25);
        LOBYTE(v12) = 2;
        v13 = *(void **)(*(_QWORD *)v11 + 16LL);
        if ( v13 )
          v8 = v13;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v12,
          14,
          16,
          (__int64)&unk_1400D71C0,
          (__int64)v8,
          (__int64)v9,
          (__int64)L"m_systemPower->DisableD3ColdInS0Idle()",
          v7);
        v1 = 3;
      }
      if ( (v1 & 2) != 0 )
      {
        v14 = v26;
        v1 &= ~2u;
        if ( v26 )
        {
          if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
            if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
          }
        }
      }
      if ( (v1 & 1) != 0 )
      {
        v15 = v28;
        if ( v28 )
        {
          if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
            if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
          }
        }
      }
      sub_140009088(a1, (__int64)L"m_systemPower->DisableD3ColdInS0Idle()", 137, 166, v7);
      goto LABEL_44;
    }
LABEL_43:
    v7 = 0;
    goto LABEL_44;
  }
  v7 = (*(__int64 (**)(void))(v6 + 16))();
  if ( !v7 )
    goto LABEL_43;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v16 = &unk_1400D44E0;
    v17 = &unk_1400D44E0;
    v18 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                  a1 + 56,
                                  v31)
                   + 16LL);
    if ( v18 )
      v17 = v18;
    v19 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v29);
    LOBYTE(v20) = 2;
    v21 = *(void **)(*(_QWORD *)v19 + 16LL);
    if ( v21 )
      v16 = v21;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      v20,
      14,
      17,
      (__int64)&unk_1400D71C0,
      (__int64)v16,
      (__int64)v17,
      (__int64)L"m_systemPower->EnableD3ColdInS0Idle()",
      v7);
    v1 = 12;
  }
  if ( (v1 & 8) != 0 )
  {
    v22 = v30;
    v1 &= ~8u;
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
  }
  if ( (v1 & 4) != 0 )
  {
    v23 = v32;
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
  }
  sub_140008F3C(a1, (__int64)L"m_systemPower->EnableD3ColdInS0Idle()", 141, 166, v7);
LABEL_44:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v7;
}
