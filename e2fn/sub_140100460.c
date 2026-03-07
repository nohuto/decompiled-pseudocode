__int64 __fastcall sub_140100460(__int64 a1, __int64 a2)
{
  char v2; // si
  __int64 *v4; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rdi
  int v9; // r15d
  unsigned int v10; // edx
  unsigned int v11; // r14d
  const wchar_t *v12; // rdi
  const wchar_t *v13; // rax
  __int64 v14; // rsi
  const wchar_t *v15; // rax
  const wchar_t *v16; // rcx
  unsigned int v17; // r14d
  __int64 v18; // rbx
  __int64 v19; // rax
  const wchar_t *v20; // rdi
  __int64 v21; // rcx
  const wchar_t *v22; // rax
  __int64 v23; // rsi
  const wchar_t *v24; // r13
  const wchar_t *v25; // rax
  const wchar_t *v26; // rcx
  volatile signed __int32 *v27; // rdi
  volatile signed __int32 *v28; // rdi
  int v29; // r8d
  const wchar_t *v30; // rsi
  const wchar_t *v31; // rdi
  const wchar_t *v32; // rax
  const wchar_t *v33; // rax
  __int64 v34; // rcx
  volatile signed __int32 *v35; // rdi
  volatile signed __int32 *v36; // rdi
  const wchar_t *v37; // rsi
  const wchar_t *v38; // rdi
  const wchar_t *v39; // rax
  const wchar_t *v40; // rax
  volatile signed __int32 *v41; // rdi
  volatile signed __int32 *v42; // rdi
  volatile signed __int32 *v43; // rdi
  volatile signed __int32 *v44; // rdi
  _BYTE v46[8]; // [rsp+50h] [rbp-59h] BYREF
  volatile signed __int32 *v47; // [rsp+58h] [rbp-51h]
  _BYTE v48[8]; // [rsp+60h] [rbp-49h] BYREF
  volatile signed __int32 *v49; // [rsp+68h] [rbp-41h]
  _BYTE v50[8]; // [rsp+70h] [rbp-39h] BYREF
  volatile signed __int32 *v51; // [rsp+78h] [rbp-31h]
  _BYTE v52[8]; // [rsp+80h] [rbp-29h] BYREF
  volatile signed __int32 *v53; // [rsp+88h] [rbp-21h]
  _BYTE v54[8]; // [rsp+90h] [rbp-19h] BYREF
  volatile signed __int32 *v55; // [rsp+98h] [rbp-11h]
  _BYTE v56[8]; // [rsp+A0h] [rbp-9h] BYREF
  volatile signed __int32 *v57; // [rsp+A8h] [rbp-1h]
  _BYTE v58[8]; // [rsp+B0h] [rbp+7h] BYREF
  volatile signed __int32 *v59; // [rsp+B8h] [rbp+Fh]
  _BYTE v60[8]; // [rsp+C0h] [rbp+17h] BYREF
  volatile signed __int32 *v61; // [rsp+C8h] [rbp+1Fh]
  int v62; // [rsp+118h] [rbp+6Fh]
  int v63; // [rsp+120h] [rbp+77h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareWolPatterns::EnableWakeFromFlexibleFilters",
             a1 - 352);
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = *(_QWORD *)(a2 + 8);
  v9 = a1 - 352;
  v10 = 0;
  v63 = 0;
  if ( *(_QWORD *)(a2 + 96) )
  {
    while ( 1 )
    {
      if ( v8 == a2 )
        goto LABEL_7;
      v17 = ((v10 & 7) << 8) + ((v10 & 7) < 4 ? 36864 : 38400);
      v62 = v17;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 96) + 96LL))(*(_QWORD *)(a1 + 96), v10 >> 3);
      v11 = sub_1400FE980((_QWORD *)(a1 - 352), v8 + 16, v17);
      if ( v11 )
        break;
      v11 = sub_1400FEEE0((_QWORD *)(a1 - 352), v8 + 16, v62);
      if ( v11 )
      {
        if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
        {
          v24 = L"ConfigurePatternMask(flexibleFilter, flexFilterBaseAddr)";
        }
        else
        {
          v30 = (const wchar_t *)&unk_1400D44E0;
          v31 = (const wchar_t *)&unk_1400D44E0;
          v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                                 a1 - 296,
                                                 v52)
                                  + 16LL);
          if ( v32 )
            v31 = v32;
          v33 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                                 a1 - 296,
                                                 v50)
                                  + 16LL);
          v34 = *(_QWORD *)(a1 - 176);
          v24 = L"ConfigurePatternMask(flexibleFilter, flexFilterBaseAddr)";
          if ( v33 )
            v30 = v33;
          sub_1400A5E80(
            *(_QWORD *)(v34 + 16),
            2u,
            0xAu,
            0x24u,
            (__int64)&unk_1400D64E8,
            v30,
            v31,
            L"ConfigurePatternMask(flexibleFilter, flexFilterBaseAddr)");
          v2 = 12;
        }
        if ( (v2 & 8) != 0 )
        {
          v35 = v51;
          v2 &= ~8u;
          if ( v51 )
          {
            if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
              if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
            }
          }
        }
        if ( (v2 & 4) != 0 )
        {
          v36 = v53;
          if ( v53 )
          {
            if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
              if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
            }
          }
        }
        v29 = 558;
        goto LABEL_38;
      }
      v11 = sub_1400FF0D8((_QWORD *)(a1 - 352), v8 + 16, v62);
      if ( v11 )
      {
        if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
        {
          v24 = L"ConfigurePatternSize(flexibleFilter, flexFilterBaseAddr)";
        }
        else
        {
          v18 = a1 - 296;
          v19 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v46);
          v20 = (const wchar_t *)&unk_1400D44E0;
          v21 = a1 - 296;
          v22 = *(const wchar_t **)(*(_QWORD *)v19 + 16LL);
          if ( v22 )
            v20 = v22;
          v23 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
          v24 = L"ConfigurePatternSize(flexibleFilter, flexFilterBaseAddr)";
          v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 16LL))(
                                                 v21,
                                                 v48)
                                  + 16LL);
          v26 = (const wchar_t *)&unk_1400D44E0;
          if ( v25 )
            v26 = v25;
          sub_1400A5E80(
            v23,
            2u,
            0xAu,
            0x25u,
            (__int64)&unk_1400D64E8,
            v20,
            v26,
            L"ConfigurePatternSize(flexibleFilter, flexFilterBaseAddr)");
          v2 = 48;
        }
        if ( (v2 & 0x20) != 0 )
        {
          v27 = v47;
          v2 &= ~0x20u;
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
        if ( (v2 & 0x10) != 0 )
        {
          v28 = v49;
          if ( v49 )
          {
            if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
              if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
            }
          }
        }
        v29 = 560;
LABEL_38:
        sub_140009AE8(v9, (__int64)v24, v29, 59, v11);
        goto LABEL_86;
      }
      v8 = *(_QWORD *)(v8 + 8);
      v10 = ++v63;
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v37 = (const wchar_t *)&unk_1400D44E0;
      v38 = (const wchar_t *)&unk_1400D44E0;
      v39 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             v56)
                              + 16LL);
      if ( v39 )
        v38 = v39;
      v40 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                             a1 - 296,
                                             v54)
                              + 16LL);
      if ( v40 )
        v37 = v40;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        0xAu,
        0x23u,
        (__int64)&unk_1400D64E8,
        v37,
        v38,
        L"ConfigurePattern(flexibleFilter, flexFilterBaseAddr)");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v41 = v55;
      v2 &= ~2u;
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v42 = v57;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    sub_14000D660(v9, (__int64)L"ConfigurePattern(flexibleFilter, flexFilterBaseAddr)", 556, 59, v11);
  }
  else
  {
LABEL_7:
    v11 = sub_1400FD488((_QWORD *)(a1 - 352), v10);
    if ( v11 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v12 = (const wchar_t *)&unk_1400D44E0;
        v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               v58)
                                + 16LL);
        if ( v13 )
          v12 = v13;
        v14 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
        v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v60)
                                + 16LL);
        v16 = (const wchar_t *)&unk_1400D44E0;
        if ( v15 )
          v16 = v15;
        sub_1400A5E80(
          v14,
          2u,
          0xAu,
          0x26u,
          (__int64)&unk_1400D64E8,
          v12,
          v16,
          L"ArmFlexibleFilters(flexibleFilterIndex)");
        v2 = -64;
      }
      if ( v2 < 0 )
      {
        v43 = v59;
        v2 &= ~0x80u;
        if ( v59 )
        {
          if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
            if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
          }
        }
      }
      if ( (v2 & 0x40) != 0 )
      {
        v44 = v61;
        if ( v61 )
        {
          if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
            if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
          }
        }
      }
      sub_1400091D4(v9, (__int64)L"ArmFlexibleFilters(flexibleFilterIndex)", 565, 59, v11);
    }
    else
    {
      *(_BYTE *)(a1 + 149) = 1;
      v11 = 0;
    }
  }
LABEL_86:
  if ( v4 )
  {
    sub_14000BFA4(v4);
    ExFreePool(v4);
  }
  return v11;
}
