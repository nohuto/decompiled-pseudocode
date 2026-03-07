__int64 __fastcall sub_140128E60(__int64 a1)
{
  char v1; // si
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  const wchar_t *v6; // r12
  const wchar_t *v7; // rdi
  const wchar_t *v8; // rax
  __int64 v9; // rax
  const wchar_t *v10; // rdx
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  unsigned int v14; // r15d
  const wchar_t *v15; // rdi
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  _BYTE v21[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v22; // [rsp+58h] [rbp-60h]
  _BYTE v23[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v24; // [rsp+68h] [rbp-50h]
  _BYTE v25[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v26; // [rsp+78h] [rbp-40h]
  _BYTE v27[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v28; // [rsp+88h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400736C0(Pool2, (__int64)L"framework::DeviceD0ExitFlows::D0ExitFinal", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = (const wchar_t *)&unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v7 = (const wchar_t *)&unk_1400D44E0;
    v8 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                          a1 + 56,
                                          v23)
                           + 16LL);
    if ( v8 )
      v7 = v8;
    v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v21);
    v10 = (const wchar_t *)&unk_1400D44E0;
    v11 = *(const wchar_t **)(*(_QWORD *)v9 + 16LL);
    if ( v11 )
      v10 = v11;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      8u,
      0x12u,
      (__int64)&unk_1400D9628,
      v10,
      v7,
      (const wchar_t *)qword_14014EC70);
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
    v1 &= ~1u;
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
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 64LL))(*(_QWORD *)(a1 + 416));
  if ( v14 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v1 |= 0xCu;
      v15 = (const wchar_t *)&unk_1400D44E0;
      v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v27)
                              + 16LL);
      if ( v16 )
        v15 = v16;
      v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v25)
                              + 16LL);
      if ( v17 )
        v6 = v17;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        8u,
        0x13u,
        (__int64)&unk_1400D9628,
        v6,
        v15,
        L"m_netAdapter->EvtD0ExitFinal()");
    }
    if ( (v1 & 8) != 0 )
    {
      v18 = v26;
      v1 &= ~8u;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v19 = v28;
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    sub_140008A0C(a1, (__int64)L"m_netAdapter->EvtD0ExitFinal()", 173, 77, v14);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 400) + 192LL))(*(_QWORD *)(a1 + 400));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 384) + 112LL))(*(_QWORD *)(a1 + 384));
    v14 = 0;
  }
  if ( v3 )
  {
    sub_140073F78(v3);
    ExFreePool(v3);
  }
  return v14;
}
