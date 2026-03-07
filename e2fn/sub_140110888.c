__int64 __fastcall sub_140110888(_QWORD *a1, __int64 a2, __int64 *a3)
{
  char v3; // bp
  __int64 *v5; // rsi
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  const wchar_t *v10; // r13
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rdi
  volatile signed __int32 *v16; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // r12d
  const wchar_t *v23; // r13
  const wchar_t *v24; // rdi
  const wchar_t *v25; // rax
  const wchar_t *v26; // rax
  volatile signed __int32 *v27; // rdi
  volatile signed __int32 *v28; // rdi
  volatile signed __int32 *v29; // rdi
  volatile signed __int32 *v30; // rdi
  _QWORD v31[2]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v32[8]; // [rsp+60h] [rbp-68h] BYREF
  volatile signed __int32 *v33; // [rsp+68h] [rbp-60h]
  _BYTE v34[8]; // [rsp+70h] [rbp-58h] BYREF
  volatile signed __int32 *v35; // [rsp+78h] [rbp-50h]
  _BYTE v36[8]; // [rsp+80h] [rbp-48h] BYREF
  volatile signed __int32 *v37; // [rsp+88h] [rbp-40h]
  _BYTE v38[8]; // [rsp+90h] [rbp-38h] BYREF
  volatile signed __int32 *v39; // [rsp+98h] [rbp-30h]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14005B310(Pool2, (__int64)L"os_resources::SystemPower::BindAndInitialize", (__int64)a1);
      if ( v9 )
        v5 = v9;
    }
  }
  if ( a2 )
  {
    a1[79] = a2;
    v18 = a3[1];
    a3[1] = 0LL;
    v31[1] = v18;
    v19 = *a3;
    *a3 = 0LL;
    v20 = a1[79];
    v21 = a1[46];
    v31[0] = v19;
    v22 = sub_140112834(v21, v20, v31);
    if ( v22 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v23 = (const wchar_t *)&unk_1400D44E0;
        v24 = (const wchar_t *)&unk_1400D44E0;
        v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v38)
                                + 16LL);
        if ( v25 )
          v24 = v25;
        v3 = 12;
        v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v36)
                                + 16LL);
        if ( v26 )
          v23 = v26;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          2u,
          4u,
          0xCu,
          (__int64)&unk_1400D8AB8,
          v23,
          v24,
          L"m_idlePower->BindAndInitialize(m_device, kstd::move(osServices))");
      }
      if ( (v3 & 8) != 0 )
      {
        v27 = v37;
        v3 &= ~8u;
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
      if ( (v3 & 4) != 0 )
      {
        v28 = v39;
        if ( v39 )
        {
          if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
            if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
          }
        }
      }
      sub_14000A164((int)a1, (__int64)L"m_idlePower->BindAndInitialize(m_device, kstd::move(osServices))", 72, 148, v22);
      if ( v5 )
      {
        sub_14005B5AC(v5);
        ExFreePool(v5);
      }
      v29 = (volatile signed __int32 *)a3[1];
      if ( v29 )
      {
        if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
      return v22;
    }
    else
    {
      if ( v5 )
      {
        sub_14005B5AC(v5);
        ExFreePool(v5);
      }
      v30 = (volatile signed __int32 *)a3[1];
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
      return 0LL;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v34)
                              + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v32)
                              + 16LL);
      if ( v13 )
        v10 = v13;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 4u, 0xBu, (__int64)&unk_1400D8AB8, v10, v11, L"device");
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v14 = v33;
      v3 &= ~2u;
      if ( v33 )
      {
        if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v15 = v35;
      if ( v35 )
      {
        if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_14000B00C((int)a1, (__int64)L"device", 69, 148);
    if ( v5 )
    {
      sub_14005B5AC(v5);
      ExFreePool(v5);
    }
    v16 = (volatile signed __int32 *)a3[1];
    if ( v16 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return 3221225485LL;
  }
}
