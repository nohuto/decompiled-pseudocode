__int64 __fastcall sub_14011B764(__int64 a1, __int64 *a2)
{
  char v2; // bl
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rax
  unsigned int v9; // r13d
  const wchar_t *v10; // rsi
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rsi
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  const wchar_t *v20; // rdi
  const wchar_t *v21; // rax
  __int64 v22; // rsi
  const wchar_t *v23; // rax
  const wchar_t *v24; // rcx
  volatile signed __int32 *v25; // rsi
  volatile signed __int32 *v26; // rbx
  __int64 v27; // rsi
  __int64 *v28; // rax
  const wchar_t *v29; // r13
  const wchar_t *v30; // rbx
  const wchar_t *v31; // rax
  const wchar_t *v32; // rax
  volatile signed __int32 *v33; // rsi
  volatile signed __int32 *v34; // rbx
  volatile signed __int32 *v35; // rbx
  volatile signed __int32 *v36; // rbx
  __int64 v37; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v38; // [rsp+60h] [rbp-A8h]
  _QWORD v39[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v41; // [rsp+80h] [rbp-88h]
  _BYTE v42[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v43; // [rsp+90h] [rbp-78h]
  _BYTE v44[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v45; // [rsp+A0h] [rbp-68h]
  _BYTE v46[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v47; // [rsp+B0h] [rbp-58h]
  _BYTE v48[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v49; // [rsp+C0h] [rbp-48h]
  _BYTE v50[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v51; // [rsp+D0h] [rbp-38h]
  _BYTE v52[16]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v53[16]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v54[12]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v55[28]; // [rsp+158h] [rbp+50h] BYREF

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400736C0(Pool2, (__int64)L"framework::DeviceContext::ReadRegistryConfiguration", a1);
      if ( v7 )
        v4 = v7;
    }
  }
  sub_14008B324(v55, a1);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 440) + 112LL))(*(_QWORD *)(a1 + 440), v52);
  v9 = sub_140130890(v55, v8);
  if ( v9 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v42)
                              + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             &v40)
                              + 16LL);
      if ( v13 )
        v10 = v13;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        8u,
        0x37u,
        (__int64)&unk_1400D91A8,
        v10,
        v11,
        L"configurationInitializer.Bind(m_netAdapter->CreateRegistryAccessor())");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v41;
      v2 &= ~2u;
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v15 = v43;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_14001921C(a1, (__int64)L"configurationInitializer.Bind(m_netAdapter->CreateRegistryAccessor())", 386, 74, v9);
LABEL_24:
    sub_1400745A4(v55);
    if ( v4 )
    {
      sub_140073F78(v4);
      ExFreePool(v4);
    }
    v16 = (volatile signed __int32 *)a2[1];
    if ( v16 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return v9;
  }
  v18 = a2[1];
  a2[1] = 0LL;
  v39[1] = v18;
  v19 = *a2;
  *a2 = 0LL;
  v39[0] = v19;
  v9 = sub_1401325D0(v55, v39);
  if ( v9 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v20 = (const wchar_t *)&unk_1400D44E0;
      v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v44)
                              + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v46)
                              + 16LL);
      v24 = (const wchar_t *)&unk_1400D44E0;
      if ( v23 )
        v24 = v23;
      sub_1400A5E80(
        v22,
        2u,
        8u,
        0x38u,
        (__int64)&unk_1400D91A8,
        v20,
        v24,
        L"configurationInitializer.ReadRegistry(kstd::move(registryTables))");
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v25 = v45;
      v2 &= ~8u;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v26 = v47;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    sub_14002D834(a1, (__int64)L"configurationInitializer.ReadRegistry(kstd::move(registryTables))", 388, 74, v9);
    goto LABEL_24;
  }
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    v27 = a1 + 56;
    v28 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v53);
    sub_140073EBC((__int64)v54, v28, (__int64)sub_1401133E0);
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v29 = (const wchar_t *)&unk_1400D44E0;
      v30 = (const wchar_t *)&unk_1400D44E0;
      v31 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v27 + 16LL))(
                                             a1 + 56,
                                             v50)
                              + 16LL);
      if ( v31 )
        v30 = v31;
      v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v27 + 24LL))(
                                             a1 + 56,
                                             v48)
                              + 16LL);
      if ( v32 )
        v29 = v32;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        8u,
        0x3Au,
        (__int64)&unk_1400D91A8,
        v29,
        v30,
        (const wchar_t *)qword_14014EC70);
      v2 = 48;
    }
    if ( (v2 & 0x20) != 0 )
    {
      v33 = v49;
      v2 &= ~0x20u;
      if ( v49 )
      {
        if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
          if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
        }
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      v34 = v51;
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
    sub_1400A27D4(&v37, (__int64 *)(a1 + 112));
    (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v37 + 8LL))(v37, v54, 0LL);
    if ( v38 )
    {
      if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
      {
        v35 = v38;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
        if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
      }
    }
    sub_14007450C(v54);
  }
  sub_1400745A4(v55);
  if ( v4 )
  {
    sub_140073F78(v4);
    ExFreePool(v4);
  }
  v36 = (volatile signed __int32 *)a2[1];
  if ( v36 )
  {
    if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
      if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
    }
  }
  return 0LL;
}
