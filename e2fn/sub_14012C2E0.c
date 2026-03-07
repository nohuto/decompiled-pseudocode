__int64 __fastcall sub_14012C2E0(__int64 a1)
{
  char v1; // r14
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  const wchar_t *v6; // rsi
  const wchar_t *v7; // rdi
  const wchar_t *v8; // rax
  __int64 v9; // rax
  const wchar_t *v10; // rdx
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  unsigned int v14; // r15d
  __int64 v15; // rsi
  __int64 v16; // rdi
  const wchar_t *v17; // rax
  const wchar_t *v18; // rcx
  const wchar_t *v19; // r8
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  const wchar_t *v22; // rdi
  const wchar_t *v23; // rax
  const wchar_t *v24; // rax
  volatile signed __int32 *v25; // rbx
  volatile signed __int32 *v26; // rbx
  _BYTE v28[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v29; // [rsp+60h] [rbp-21h]
  _BYTE v30[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v31; // [rsp+70h] [rbp-11h]
  _BYTE v32[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v33; // [rsp+80h] [rbp-1h]
  _BYTE v34[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v35; // [rsp+90h] [rbp+Fh]
  _BYTE v36[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v37; // [rsp+A0h] [rbp+1Fh]
  _BYTE v38[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v39; // [rsp+B0h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400736C0(Pool2, (__int64)L"framework::DeviceD0EntryFlows::D0EntryInitial", a1);
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
                                          v30)
                           + 16LL);
    if ( v8 )
      v7 = v8;
    v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v28);
    v10 = (const wchar_t *)&unk_1400D44E0;
    v11 = *(const wchar_t **)(*(_QWORD *)v9 + 16LL);
    if ( v11 )
      v10 = v11;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      8u,
      0x11u,
      (__int64)&unk_1400D9718,
      v10,
      v7,
      (const wchar_t *)qword_14014EC70);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v12 = v29;
    v1 &= ~2u;
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v13 = v31;
    v1 &= ~1u;
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 384) + 104LL))(*(_QWORD *)(a1 + 384));
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 400) + 152LL))(*(_QWORD *)(a1 + 400));
  if ( v14 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v1 |= 0xCu;
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v16 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v32);
      v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v34)
                              + 16LL);
      v18 = (const wchar_t *)&unk_1400D44E0;
      v19 = (const wchar_t *)&unk_1400D44E0;
      if ( v17 )
        v19 = v17;
      if ( *(_QWORD *)(v16 + 16) )
        v18 = *(const wchar_t **)(v16 + 16);
      sub_1400A5E80(
        v15,
        2u,
        8u,
        0x12u,
        (__int64)&unk_1400D9718,
        v18,
        v19,
        L"m_hardwareAbstraction->EvtD0EntryInitial()");
    }
    if ( (v1 & 8) != 0 )
    {
      v20 = v33;
      v1 &= ~8u;
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
    if ( (v1 & 4) != 0 )
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
    sub_14000946C(a1, (__int64)L"m_hardwareAbstraction->EvtD0EntryInitial()", 179, 76, v14);
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 48LL))(*(_QWORD *)(a1 + 416));
    if ( v14 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v1 |= 0x30u;
        v22 = (const wchar_t *)&unk_1400D44E0;
        v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v38)
                                + 16LL);
        if ( v23 )
          v22 = v23;
        v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v36)
                                + 16LL);
        if ( v24 )
          v6 = v24;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          8u,
          0x13u,
          (__int64)&unk_1400D9718,
          v6,
          v22,
          L"m_netAdapter->EvtD0EntryInitial()");
      }
      if ( (v1 & 0x20) != 0 )
      {
        v25 = v37;
        v1 &= ~0x20u;
        if ( v37 )
        {
          if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
            if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
          }
        }
      }
      if ( (v1 & 0x10) != 0 )
      {
        v26 = v39;
        if ( v39 )
        {
          if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
            if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
      }
      sub_140008DF0(a1, (__int64)L"m_netAdapter->EvtD0EntryInitial()", 181, 76, v14);
    }
    else
    {
      v14 = 0;
    }
  }
  if ( v3 )
  {
    sub_140073F78(v3);
    ExFreePool(v3);
  }
  return v14;
}
