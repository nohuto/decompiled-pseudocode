__int64 __fastcall sub_140109820(__int64 *a1, __int64 *a2)
{
  char v2; // di
  __int64 *v4; // rsi
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  const wchar_t *v8; // r14
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // r14
  volatile signed __int32 *v13; // rdi
  volatile signed __int32 *v14; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  _QWORD *v20; // rax
  unsigned int v21; // r12d
  const wchar_t *v22; // r14
  const wchar_t *v23; // rdi
  const wchar_t *v24; // rax
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // r14
  volatile signed __int32 *v27; // rdi
  volatile signed __int32 *v28; // rdi
  volatile signed __int32 *v29; // rdi
  char v30[8]; // [rsp+50h] [rbp-78h] BYREF
  volatile signed __int32 *v31; // [rsp+58h] [rbp-70h]
  char v32[8]; // [rsp+60h] [rbp-68h] BYREF
  volatile signed __int32 *v33; // [rsp+68h] [rbp-60h]
  char v34[8]; // [rsp+70h] [rbp-58h] BYREF
  volatile signed __int32 *v35; // [rsp+78h] [rbp-50h]
  char v36[8]; // [rsp+80h] [rbp-48h] BYREF
  volatile signed __int32 *v37; // [rsp+88h] [rbp-40h]
  __int64 v38; // [rsp+90h] [rbp-38h] BYREF

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005B310(Pool2, (__int64)L"os_resources::OsResources::Bind", (__int64)(a1 - 44));
      if ( v7 )
        v4 = v7;
    }
  }
  if ( *a2 )
  {
    v16 = a1[3];
    a1[3] = a2[1];
    v17 = *a2;
    a2[1] = v16;
    v18 = a1[2];
    a1[2] = v17;
    *a2 = v18;
    v19 = a1[10];
    v20 = sub_1400A27D4(&v38, a1 + 2);
    v21 = sub_14010EF6C(v19, v20);
    if ( v21 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v22 = (const wchar_t *)&unk_1400D44E0;
        v23 = (const wchar_t *)&unk_1400D44E0;
        v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*(a1 - 37) + 16))(
                                               a1 - 37,
                                               v36)
                                + 16LL);
        if ( v24 )
          v23 = v24;
        v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*(a1 - 37) + 24))(
                                               a1 - 37,
                                               v34)
                                + 16LL);
        if ( v25 )
          v22 = v25;
        sub_1400A5E80(
          *(_QWORD *)(*(a1 - 22) + 16),
          2u,
          4u,
          0x13u,
          (__int64)&unk_1400D7B48,
          v22,
          v23,
          L"m_interruptsPool->Bind(m_osServices)");
        v2 = 12;
      }
      if ( (v2 & 8) != 0 )
      {
        v26 = v35;
        v2 &= ~8u;
        if ( v35 )
        {
          if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
            if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v27 = v37;
        if ( v37 )
        {
          if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
      }
      sub_14000D3C8((_DWORD)a1 - 352, (__int64)L"m_interruptsPool->Bind(m_osServices)", 114, 142, v21);
      if ( v4 )
      {
        sub_14005B5AC(v4);
        ExFreePool(v4);
      }
      v28 = (volatile signed __int32 *)a2[1];
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
      return v21;
    }
    else
    {
      if ( v4 )
      {
        sub_14005B5AC(v4);
        ExFreePool(v4);
      }
      v29 = (volatile signed __int32 *)a2[1];
      if ( v29 )
      {
        if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
      return 0LL;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*(a1 - 37) + 16))(
                                             a1 - 37,
                                             v32)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*(a1 - 37) + 24))(
                                             a1 - 37,
                                             v30)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A3320(*(_QWORD *)(*(a1 - 22) + 16), 2u, 4u, 0x12u, (__int64)&unk_1400D7B48, v8, v9, L"osServices");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v12 = v31;
      v2 &= ~2u;
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v13 = v33;
      if ( v33 )
      {
        if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_14000B87C((_DWORD)a1 - 352, (__int64)L"osServices", 111, 142);
    if ( v4 )
    {
      sub_14005B5AC(v4);
      ExFreePool(v4);
    }
    v14 = (volatile signed __int32 *)a2[1];
    if ( v14 && _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return 3221225485LL;
  }
}
