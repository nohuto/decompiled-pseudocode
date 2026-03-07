__int64 __fastcall sub_140108340(_QWORD *a1)
{
  __int64 v1; // rbx
  char v3; // di
  _QWORD *v4; // rax
  unsigned int v5; // r15d
  const wchar_t *v6; // r12
  const wchar_t *v7; // rdi
  const wchar_t *v8; // rax
  const wchar_t *v9; // rax
  volatile signed __int32 *v10; // rsi
  volatile signed __int32 *v11; // rdi
  const wchar_t *v13; // r12
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  __int64 v16; // rsi
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rdi
  void *v20; // rbx
  const wchar_t *v21; // r12
  const wchar_t *v22; // rdi
  const wchar_t *v23; // rax
  const wchar_t *v24; // rax
  volatile signed __int32 *v25; // rsi
  volatile signed __int32 *v26; // rdi
  _BYTE v27[8]; // [rsp+58h] [rbp-49h] BYREF
  volatile signed __int32 *v28; // [rsp+60h] [rbp-41h]
  _BYTE v29[8]; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v30; // [rsp+70h] [rbp-31h]
  _BYTE v31[8]; // [rsp+78h] [rbp-29h] BYREF
  volatile signed __int32 *v32; // [rsp+80h] [rbp-21h]
  _BYTE v33[8]; // [rsp+88h] [rbp-19h] BYREF
  volatile signed __int32 *v34; // [rsp+90h] [rbp-11h]
  _BYTE v35[8]; // [rsp+98h] [rbp-9h] BYREF
  volatile signed __int32 *v36; // [rsp+A0h] [rbp-1h]
  _BYTE v37[8]; // [rsp+A8h] [rbp+7h] BYREF
  volatile signed __int32 *v38; // [rsp+B0h] [rbp+Fh]
  __int64 v39; // [rsp+B8h] [rbp+17h] BYREF
  __int64 v40; // [rsp+C8h] [rbp+27h] BYREF

  v1 = a1[7];
  v3 = 0;
  v4 = sub_1400A27D4(&v39, a1 + 3);
  v5 = sub_14010ABAC(v1, v4);
  if ( v5 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v6 = (const wchar_t *)&unk_1400D44E0;
      v7 = (const wchar_t *)&unk_1400D44E0;
      v8 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                            a1 - 37,
                                            v29)
                             + 16LL);
      if ( v8 )
        v7 = v8;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                            a1 - 37,
                                            v27)
                             + 16LL);
      if ( v9 )
        v6 = v9;
      sub_1400A5E80(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        2u,
        5u,
        0x19u,
        (__int64)&unk_1400D7980,
        v6,
        v7,
        L"m_ioctlDispatcher->BindAndInitialize(m_spinLockFactory)");
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v10 = v28;
      v3 &= ~2u;
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v11 = v30;
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    sub_1400358A0((_DWORD)a1 - 352, (__int64)L"m_ioctlDispatcher->BindAndInitialize(m_spinLockFactory)", 135, 143, v5);
    return v5;
  }
  v5 = sub_14010B1BC(a1[7], a1[2]);
  if ( v5 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                             a1 - 37,
                                             v31)
                              + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = *(_QWORD *)(*(a1 - 22) + 16LL);
      v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                             a1 - 37,
                                             v33)
                              + 16LL);
      if ( v17 )
        v13 = v17;
      sub_1400A5E80(
        v16,
        2u,
        5u,
        0x1Au,
        (__int64)&unk_1400D7980,
        v14,
        v13,
        L"m_ioctlDispatcher->RegisterAsDefaultQueue(m_device)");
      v3 = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v18 = v32;
      v3 &= ~8u;
      if ( v32 )
      {
        if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v19 = v34;
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    sub_1400142A4((_DWORD)a1 - 352, (__int64)L"m_ioctlDispatcher->RegisterAsDefaultQueue(m_device)", 136, 143, v5);
    return v5;
  }
  v20 = (void *)a1[19];
  sub_1400A27D4(&v40, a1 + 3);
  v5 = sub_14010D550(v20);
  if ( v5 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v21 = (const wchar_t *)&unk_1400D44E0;
      v22 = (const wchar_t *)&unk_1400D44E0;
      v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                             a1 - 37,
                                             v37)
                              + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                             a1 - 37,
                                             v35)
                              + 16LL);
      if ( v24 )
        v21 = v24;
      sub_1400A5E80(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        2u,
        5u,
        0x1Bu,
        (__int64)&unk_1400D7980,
        v21,
        v22,
        L"m_osActivePowerScheme->Initialize(m_spinLockFactory, m_device)");
      v3 = 48;
    }
    if ( (v3 & 0x20) != 0 )
    {
      v25 = v36;
      v3 &= ~0x20u;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v3 & 0x10) != 0 )
    {
      v26 = v38;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    sub_140009ECC(
      (_DWORD)a1 - 352,
      (__int64)L"m_osActivePowerScheme->Initialize(m_spinLockFactory, m_device)",
      137,
      143,
      v5);
    return v5;
  }
  return 0LL;
}
