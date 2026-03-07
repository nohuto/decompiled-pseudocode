__int64 __fastcall sub_140104830(__int64 a1)
{
  char v1; // r15
  __int64 *v2; // rsi
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  const wchar_t *v6; // rdi
  const wchar_t *v7; // rax
  __int64 v8; // rax
  const wchar_t *v9; // rdx
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  unsigned int v13; // r12d
  __int64 v14; // rdi
  __int64 v15; // rsi
  const wchar_t *v16; // rax
  const wchar_t *v17; // rcx
  const wchar_t *v18; // rdx
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  const wchar_t *v21; // rdi
  const wchar_t *v22; // rax
  __int64 v23; // rax
  const wchar_t *v24; // rdx
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  const wchar_t *v28; // rdi
  const wchar_t *v29; // rax
  __int64 v30; // rax
  const wchar_t *v31; // rdx
  const wchar_t *v32; // rax
  volatile signed __int32 *v33; // rbx
  volatile signed __int32 *v34; // rbx
  _BYTE v36[8]; // [rsp+58h] [rbp-49h] BYREF
  volatile signed __int32 *v37; // [rsp+60h] [rbp-41h]
  _BYTE v38[8]; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v39; // [rsp+70h] [rbp-31h]
  _BYTE v40[8]; // [rsp+78h] [rbp-29h] BYREF
  volatile signed __int32 *v41; // [rsp+80h] [rbp-21h]
  _BYTE v42[8]; // [rsp+88h] [rbp-19h] BYREF
  volatile signed __int32 *v43; // [rsp+90h] [rbp-11h]
  _BYTE v44[8]; // [rsp+98h] [rbp-9h] BYREF
  volatile signed __int32 *v45; // [rsp+A0h] [rbp-1h]
  _BYTE v46[8]; // [rsp+A8h] [rbp+7h] BYREF
  volatile signed __int32 *v47; // [rsp+B0h] [rbp+Fh]
  _BYTE v48[8]; // [rsp+B8h] [rbp+17h] BYREF
  volatile signed __int32 *v49; // [rsp+C0h] [rbp+1Fh]
  _BYTE v50[8]; // [rsp+C8h] [rbp+27h] BYREF
  volatile signed __int32 *v51; // [rsp+D0h] [rbp+2Fh]
  __int64 *P; // [rsp+108h] [rbp+67h]

  v1 = 0;
  v2 = 0LL;
  P = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareLowPowerIdle::EvtD0Entry", a1);
      if ( v5 )
        v2 = v5;
      P = v2;
    }
  }
  if ( *(_BYTE *)(a1 + 360) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v6 = (const wchar_t *)&unk_1400D44E0;
      v7 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                            a1 + 56,
                                            v38)
                             + 16LL);
      if ( v7 )
        v6 = v7;
      v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v36);
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)v8 + 16LL);
      if ( v10 )
        v9 = v10;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xAu,
        0xBu,
        (__int64)&unk_1400D6F10,
        v9,
        v6,
        (const wchar_t *)qword_14014EC70);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v11 = v37;
      v1 &= ~2u;
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v12 = v39;
      v1 &= ~1u;
      if ( v39 )
      {
        if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    v13 = sub_14003A320((_QWORD *)a1);
    if ( v13 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v1 |= 0xCu;
        v14 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v42);
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
        v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v40)
                                + 16LL);
        v17 = (const wchar_t *)&unk_1400D44E0;
        v18 = (const wchar_t *)&unk_1400D44E0;
        if ( v16 )
          v18 = v16;
        if ( *(_QWORD *)(v14 + 16) )
          v17 = *(const wchar_t **)(v14 + 16);
        sub_1400A5E80(v15, 2u, 0xAu, 0xCu, (__int64)&unk_1400D6F10, v18, v17, L"EnableEnergyEfficientEthernet()");
        v2 = P;
      }
      if ( (v1 & 8) != 0 )
      {
        v19 = v41;
        v1 &= ~8u;
        if ( v41 )
        {
          if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v20 = v43;
        if ( v43 )
        {
          if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
      }
      sub_140008B58(a1, (__int64)L"EnableEnergyEfficientEthernet()", 73, 50, v13);
      goto LABEL_77;
    }
LABEL_76:
    v13 = 0;
    goto LABEL_77;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v21 = (const wchar_t *)&unk_1400D44E0;
    v22 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v46)
                            + 16LL);
    if ( v22 )
      v21 = v22;
    v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v44);
    v24 = (const wchar_t *)&unk_1400D44E0;
    v25 = *(const wchar_t **)(*(_QWORD *)v23 + 16LL);
    if ( v25 )
      v24 = v25;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xAu,
      0xDu,
      (__int64)&unk_1400D6F10,
      v24,
      v21,
      (const wchar_t *)qword_14014EC70);
    v1 = 48;
  }
  if ( (v1 & 0x20) != 0 )
  {
    v26 = v45;
    v1 &= ~0x20u;
    if ( v45 )
    {
      if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
      }
    }
  }
  if ( (v1 & 0x10) != 0 )
  {
    v27 = v47;
    v1 &= ~0x10u;
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
  }
  v13 = sub_140039ED0((_QWORD *)a1);
  if ( !v13 )
    goto LABEL_76;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v1 |= 0xC0u;
    v28 = (const wchar_t *)&unk_1400D44E0;
    v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v50)
                            + 16LL);
    if ( v29 )
      v28 = v29;
    v30 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v48);
    v31 = (const wchar_t *)&unk_1400D44E0;
    v32 = *(const wchar_t **)(*(_QWORD *)v30 + 16LL);
    if ( v32 )
      v31 = v32;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      2u,
      0xAu,
      0xEu,
      (__int64)&unk_1400D6F10,
      v31,
      v28,
      L"DisableEnergyEfficientEthernet()");
  }
  if ( v1 < 0 )
  {
    v33 = v49;
    v1 &= ~0x80u;
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
  if ( (v1 & 0x40) != 0 )
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
  sub_140008CA4(a1, (__int64)L"DisableEnergyEfficientEthernet()", 78, 50, v13);
LABEL_77:
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
  return v13;
}
