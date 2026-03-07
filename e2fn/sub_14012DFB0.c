__int64 __fastcall sub_14012DFB0(__int64 a1, int a2)
{
  char v2; // di
  __int64 *v4; // r15
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  const wchar_t *v8; // r12
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rsi
  volatile signed __int32 *v13; // rdi
  const wchar_t *v14; // r12
  const wchar_t *v15; // rdi
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rax
  const wchar_t *v21; // r12
  __int64 v22; // rcx
  const wchar_t *v23; // rdi
  const wchar_t *v24; // rax
  __int64 v25; // rsi
  const wchar_t *v26; // rax
  volatile signed __int32 *v27; // rsi
  unsigned int v28; // ebx
  const wchar_t *v29; // r12
  const wchar_t *v30; // rdi
  const wchar_t *v31; // rax
  const wchar_t *v32; // rax
  volatile signed __int32 *v33; // rsi
  volatile signed __int32 *v34; // rdi
  _BYTE v36[8]; // [rsp+50h] [rbp-49h] BYREF
  volatile signed __int32 *v37; // [rsp+58h] [rbp-41h]
  _BYTE v38[8]; // [rsp+60h] [rbp-39h] BYREF
  volatile signed __int32 *v39; // [rsp+68h] [rbp-31h]
  _BYTE v40[8]; // [rsp+70h] [rbp-29h] BYREF
  volatile signed __int32 *v41; // [rsp+78h] [rbp-21h]
  _BYTE v42[8]; // [rsp+80h] [rbp-19h] BYREF
  volatile signed __int32 *v43; // [rsp+88h] [rbp-11h]
  _BYTE v44[8]; // [rsp+90h] [rbp-9h] BYREF
  volatile signed __int32 *v45; // [rsp+98h] [rbp-1h]
  _BYTE v46[8]; // [rsp+A0h] [rbp+7h] BYREF
  volatile signed __int32 *v47; // [rsp+A8h] [rbp+Fh]
  _BYTE v48[8]; // [rsp+B0h] [rbp+17h] BYREF
  volatile signed __int32 *v49; // [rsp+B8h] [rbp+1Fh]
  _BYTE v50[8]; // [rsp+C0h] [rbp+27h] BYREF
  volatile signed __int32 *v51; // [rsp+C8h] [rbp+2Fh]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareQueue::ConfigureQueueLength", a1);
      if ( v7 )
        v4 = v7;
    }
  }
  if ( !a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v38)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v36)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0x10u,
        (__int64)&unk_1400D9878,
        v8,
        v9,
        (const wchar_t *)qword_14014EC70);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v12 = v37;
      v2 &= ~2u;
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v2 & 1) == 0 )
      goto LABEL_52;
    v13 = v39;
LABEL_48:
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
LABEL_52:
    v28 = -1073741811;
    goto LABEL_70;
  }
  if ( (a2 & 0x7F) != 0 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = (const wchar_t *)&unk_1400D44E0;
      v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v42)
                              + 16LL);
      if ( v16 )
        v15 = v16;
      v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v40)
                              + 16LL);
      if ( v17 )
        v14 = v17;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0x11u,
        (__int64)&unk_1400D9878,
        v14,
        v15,
        (const wchar_t *)qword_14014EC70);
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v18 = v41;
      v2 &= ~8u;
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( (v2 & 4) == 0 )
      goto LABEL_52;
    v13 = v43;
    goto LABEL_48;
  }
  if ( ((a2 - 1) & a2) != 0 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v19 = a1 + 56;
      v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v44);
      v21 = (const wchar_t *)&unk_1400D44E0;
      v22 = a1 + 56;
      v23 = (const wchar_t *)&unk_1400D44E0;
      v24 = *(const wchar_t **)(*(_QWORD *)v20 + 16LL);
      if ( v24 )
        v23 = v24;
      v25 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19 + 16LL))(
                                             v22,
                                             v46)
                              + 16LL);
      if ( v26 )
        v21 = v26;
      sub_1400A5E80(v25, 2u, 0xAu, 0x12u, (__int64)&unk_1400D9878, v23, v21, (const wchar_t *)qword_14014EC70);
      v2 = 48;
    }
    if ( (v2 & 0x20) != 0 )
    {
      v27 = v45;
      v2 &= ~0x20u;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    if ( (v2 & 0x10) == 0 )
      goto LABEL_52;
    v13 = v47;
    goto LABEL_48;
  }
  *(_DWORD *)(a1 + 476) = a2;
  *(_DWORD *)(a1 + 472) = a2 - 1;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v29 = (const wchar_t *)&unk_1400D44E0;
    v30 = (const wchar_t *)&unk_1400D44E0;
    v31 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v50)
                            + 16LL);
    if ( v31 )
      v30 = v31;
    v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                           a1 + 56,
                                           v48)
                            + 16LL);
    if ( v32 )
      v29 = v32;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xAu,
      0x13u,
      (__int64)&unk_1400D9878,
      v29,
      v30,
      (const wchar_t *)qword_14014EC70);
    v2 = -64;
  }
  if ( v2 < 0 )
  {
    v33 = v49;
    v2 &= ~0x80u;
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
  if ( (v2 & 0x40) != 0 )
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
  v28 = 0;
LABEL_70:
  if ( v4 )
  {
    sub_14000BFA4(v4);
    ExFreePool(v4);
  }
  return v28;
}
