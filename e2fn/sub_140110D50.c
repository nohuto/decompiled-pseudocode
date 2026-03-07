__int64 __fastcall sub_140110D50(__int64 a1, int a2, unsigned __int8 a3)
{
  char v3; // r15
  __int64 *v5; // r12
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  const wchar_t *v10; // r14
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  unsigned int v16; // r13d
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rax
  __int64 v20; // rax
  const wchar_t *v21; // rdx
  const wchar_t *v22; // r8
  const wchar_t *v23; // rax
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rax
  const wchar_t *v28; // rdi
  __int64 v29; // rcx
  const wchar_t *v30; // rax
  __int64 v31; // rsi
  const wchar_t *v32; // rax
  const wchar_t *v33; // rcx
  volatile signed __int32 *v34; // rbx
  volatile signed __int32 *v35; // rbx
  _BYTE v36[8]; // [rsp+50h] [rbp-39h] BYREF
  volatile signed __int32 *v37; // [rsp+58h] [rbp-31h]
  _BYTE v38[8]; // [rsp+60h] [rbp-29h] BYREF
  volatile signed __int32 *v39; // [rsp+68h] [rbp-21h]
  _BYTE v40[8]; // [rsp+70h] [rbp-19h] BYREF
  volatile signed __int32 *v41; // [rsp+78h] [rbp-11h]
  _BYTE v42[8]; // [rsp+80h] [rbp-9h] BYREF
  volatile signed __int32 *v43; // [rsp+88h] [rbp-1h]
  _BYTE v44[8]; // [rsp+90h] [rbp+7h] BYREF
  volatile signed __int32 *v45; // [rsp+98h] [rbp+Fh]
  _BYTE v46[8]; // [rsp+A0h] [rbp+17h] BYREF
  volatile signed __int32 *v47; // [rsp+A8h] [rbp+1Fh]
  int v48; // [rsp+F0h] [rbp+67h]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14005B310(Pool2, (__int64)L"os_resources::SystemPower::InitializeS0IdleSettings", a1 - 352);
      if ( v9 )
        v5 = v9;
    }
  }
  *(_BYTE *)(a1 + 276) = a3;
  *(_DWORD *)(a1 + 272) = a2;
  if ( !a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             v38)
                              + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                             a1 - 296,
                                             v36)
                              + 16LL);
      if ( v13 )
        v10 = v13;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        4u,
        4u,
        0xFu,
        (__int64)&unk_1400D8AB8,
        v10,
        v11,
        (const wchar_t *)qword_14014EC70);
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v14 = v37;
      v3 &= ~2u;
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v15 = v39;
      if ( v39 )
      {
        if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( L"Disabled by user" != *(wchar_t **)(a1 + 120) )
      sub_1400011A8((_QWORD *)(a1 + 104), (__int64)L"Disabled by user", 0x10uLL);
    *(_BYTE *)(a1 + 96) = 1;
LABEL_26:
    v16 = 0;
    goto LABEL_27;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v18 = (const wchar_t *)&unk_1400D44E0;
    v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                           a1 - 296,
                                           v42)
                            + 16LL);
    if ( v19 )
      v18 = v19;
    v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v40);
    v21 = L"Not Supported";
    v22 = (const wchar_t *)&unk_1400D44E0;
    v23 = *(const wchar_t **)(*(_QWORD *)v20 + 16LL);
    if ( v23 )
      v22 = v23;
    if ( *(_BYTE *)(a1 + 276) )
      v21 = L"Supported";
    sub_1400A8E20(
      *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
      4u,
      4u,
      0x10u,
      (__int64)&unk_1400D8AB8,
      v22,
      v18,
      (const wchar_t *)qword_14014EC70,
      a2,
      (__int64)v21);
    v3 = 12;
  }
  if ( (v3 & 8) != 0 )
  {
    v24 = v41;
    v3 &= ~8u;
    if ( v41 )
    {
      if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
  }
  if ( (v3 & 4) != 0 )
  {
    v25 = v43;
    v3 &= ~4u;
    if ( v43 )
    {
      if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
      }
    }
  }
  v48 = a1 - 352;
  v16 = sub_14006983C(a1 - 352, *(_DWORD *)(a1 + 272), a3);
  if ( !v16 )
    goto LABEL_26;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v26 = a1 - 296;
    v3 |= 0x30u;
    v27 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v44);
    v28 = (const wchar_t *)&unk_1400D44E0;
    v29 = a1 - 296;
    v30 = *(const wchar_t **)(*(_QWORD *)v27 + 16LL);
    if ( v30 )
      v28 = v30;
    v31 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
    v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v26 + 16LL))(v29, v46)
                            + 16LL);
    v33 = (const wchar_t *)&unk_1400D44E0;
    if ( v32 )
      v33 = v32;
    sub_1400A5E80(
      v31,
      2u,
      4u,
      0x11u,
      (__int64)&unk_1400D8AB8,
      v28,
      v33,
      L"AssignS0IdleSettings(m_idleTimeoutMs, D3coldSupported)");
  }
  if ( (v3 & 0x20) != 0 )
  {
    v34 = v45;
    v3 &= ~0x20u;
    if ( v45 )
    {
      if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
      }
    }
  }
  if ( (v3 & 0x10) != 0 )
  {
    v35 = v47;
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
        if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
      }
    }
  }
  sub_1400143F0(v48, (__int64)L"AssignS0IdleSettings(m_idleTimeoutMs, D3coldSupported)", 135, 148, v16);
LABEL_27:
  if ( v5 )
  {
    sub_14005B5AC(v5);
    ExFreePool(v5);
  }
  return v16;
}
