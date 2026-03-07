__int64 __fastcall sub_140027B2C(_QWORD *a1, _DWORD *a2, unsigned int a3)
{
  char v3; // di
  __int64 *v5; // r12
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  unsigned int v10; // r14d
  void *v11; // r13
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  void *v16; // rax
  volatile signed __int32 *v17; // rsi
  volatile signed __int32 *v18; // rdi
  __int64 v19; // rdx
  void *v20; // r13
  void *v21; // rdi
  void *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  volatile signed __int32 *v27; // rsi
  volatile signed __int32 *v28; // rdi
  __int64 v29; // r9
  __int64 v30; // r8
  unsigned int v31; // ebx
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // edx
  unsigned int v36; // esi
  int v37; // r14d
  void *v38; // r13
  void *v39; // rdi
  void *v40; // rax
  __int64 v41; // rax
  int v42; // edx
  void *v43; // rax
  volatile signed __int32 *v44; // r14
  volatile signed __int32 *v45; // rdi
  void *v46; // r13
  void *v47; // rdi
  void *v48; // rax
  __int64 v49; // rax
  int v50; // edx
  void *v51; // rax
  volatile signed __int32 *v52; // rsi
  volatile signed __int32 *v53; // rdi
  signed __int32 v55[8]; // [rsp+8h] [rbp-99h] BYREF
  __int64 v56; // [rsp+38h] [rbp-69h]
  const wchar_t *v57; // [rsp+40h] [rbp-61h]
  unsigned int v58; // [rsp+48h] [rbp-59h]
  char v59[8]; // [rsp+58h] [rbp-49h] BYREF
  volatile signed __int32 *v60; // [rsp+60h] [rbp-41h]
  char v61[8]; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v62; // [rsp+70h] [rbp-31h]
  char v63[8]; // [rsp+78h] [rbp-29h] BYREF
  volatile signed __int32 *v64; // [rsp+80h] [rbp-21h]
  char v65[8]; // [rsp+88h] [rbp-19h] BYREF
  volatile signed __int32 *v66; // [rsp+90h] [rbp-11h]
  char v67[8]; // [rsp+98h] [rbp-9h] BYREF
  volatile signed __int32 *v68; // [rsp+A0h] [rbp-1h]
  char v69[8]; // [rsp+A8h] [rbp+7h] BYREF
  volatile signed __int32 *v70; // [rsp+B0h] [rbp+Fh]
  char v71[8]; // [rsp+B8h] [rbp+17h] BYREF
  volatile signed __int32 *v72; // [rsp+C0h] [rbp+1Fh]
  char v73[8]; // [rsp+C8h] [rbp+27h] BYREF
  volatile signed __int32 *v74; // [rsp+D0h] [rbp+2Fh]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::WriteCommandToFirmware",
             (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v9 )
        v5 = v9;
    }
  }
  v10 = sub_140026DDC((__int64)a1, a3);
  if ( v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = &unk_1400D44E0;
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 16LL))(a1 + 8, v61) + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 24LL))(a1 + 8, v59);
      v58 = v10;
      v57 = L"ValidateFirmwareCommandLength(commandLength)";
      LOBYTE(v15) = 2;
      v56 = (__int64)v12;
      v16 = *(void **)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v11 = v16;
      sub_1400A5E80(
        *(_QWORD *)(a1[23] + 16LL),
        v15,
        14,
        54,
        (__int64)&unk_1400D6110,
        (__int64)v11,
        v56,
        (__int64)v57,
        v58);
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v17 = v60;
      v3 &= ~2u;
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v18 = v62;
      if ( v62 )
      {
        if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_140021FDC((_DWORD)a1 + 8, (__int64)L"ValidateFirmwareCommandLength(commandLength)", 681, 45, v10);
LABEL_94:
    v36 = v10;
    goto LABEL_95;
  }
  v10 = sub_140023940(a1);
  if ( v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v20 = &unk_1400D44E0;
      v21 = &unk_1400D44E0;
      v22 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 16LL))(a1 + 8, v65) + 16LL);
      if ( v22 )
        v21 = v22;
      v23 = *(_QWORD *)(a1[23] + 16LL);
      v24 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 24LL))(a1 + 8, v63);
      v58 = v10;
      LOBYTE(v25) = 2;
      v26 = *(void **)(*(_QWORD *)v24 + 16LL);
      if ( v26 )
        v20 = v26;
      sub_1400A5E80(
        v23,
        v25,
        14,
        55,
        (__int64)&unk_1400D6110,
        (__int64)v20,
        (__int64)v21,
        (__int64)L"CheckIfHostInterfaceEnabled()",
        v58);
      v3 = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v27 = v64;
      v3 &= ~8u;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v28 = v66;
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    sub_1400088C0((_DWORD)a1 + 8, (__int64)L"CheckIfHostInterfaceEnabled()", 683, 45, v10);
    goto LABEL_94;
  }
  v29 = a1[46];
  v30 = 34816LL;
  v31 = a3 >> 2;
  if ( !*(_QWORD *)(v29 + 8) || *(_DWORD *)(v29 + 20) )
  {
    v10 = -1073741661;
    if ( *(_DWORD *)(v29 + 20) == 3 )
      v10 = -1073741130;
    goto LABEL_77;
  }
  if ( !a2 )
  {
    v10 = -1073741811;
LABEL_77:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v46 = &unk_1400D44E0;
      v47 = &unk_1400D44E0;
      v48 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *, __int64))(a1[8] + 16LL))(
                                    a1 + 8,
                                    v73,
                                    34816LL)
                     + 16LL);
      if ( v48 )
        v47 = v48;
      v49 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 24LL))(a1 + 8, v71);
      v58 = v10;
      v57 = L"m_mmioAccessor->WriteRegistersRangeSafe(0x08800, command, dwordLength)";
      LOBYTE(v50) = 2;
      v56 = (__int64)v47;
      v51 = *(void **)(*(_QWORD *)v49 + 16LL);
      if ( v51 )
        v46 = v51;
      sub_1400A5E80(
        *(_QWORD *)(a1[23] + 16LL),
        v50,
        14,
        56,
        (__int64)&unk_1400D6110,
        (__int64)v46,
        v56,
        (__int64)v57,
        v58);
      v3 = 48;
    }
    if ( (v3 & 0x20) != 0 )
    {
      v52 = v72;
      v3 &= ~0x20u;
      if ( v72 )
      {
        if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v52 + 8LL))(v52, v19, v30);
          if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
        }
      }
    }
    if ( (v3 & 0x10) != 0 )
    {
      v53 = v74;
      if ( v74 )
      {
        if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v53 + 8LL))(v53, v19, v30);
          if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
        }
      }
    }
    sub_14000F510(
      (_DWORD)a1 + 8,
      (__int64)L"m_mmioAccessor->WriteRegistersRangeSafe(0x08800, command, dwordLength)",
      687,
      45,
      v10);
    goto LABEL_94;
  }
  if ( v31 )
  {
    v32 = v31;
    do
    {
      *(_DWORD *)((unsigned int)v30 + *(_QWORD *)(v29 + 8)) = *a2;
      _InterlockedOr(v55, 0);
      LODWORD(v30) = v30 + 4;
      ++a2;
      --v32;
    }
    while ( v32 );
  }
  v33 = a1[46];
  v34 = *(_QWORD *)(v33 + 8);
  if ( !v34 || *(_DWORD *)(v33 + 20) )
  {
    v37 = -1073741661;
    if ( *(_DWORD *)(v33 + 20) == 3 )
      v37 = -1073741130;
    v36 = v37;
  }
  else
  {
    v35 = *(_DWORD *)(v34 + 36608);
    if ( v35 != -1 || *(_DWORD *)(*(_QWORD *)(v33 + 8) + 8LL) != -1 )
    {
      *(_DWORD *)(*(_QWORD *)(v33 + 8) + 36608LL) = v35 | 2;
      _InterlockedOr(v55, 0);
      v36 = 0;
      goto LABEL_95;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 8LL))(v33, 3LL);
    v36 = -1073741130;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v38 = &unk_1400D44E0;
    v39 = &unk_1400D44E0;
    v40 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 16LL))(a1 + 8, v69) + 16LL);
    if ( v40 )
      v39 = v40;
    v41 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 24LL))(a1 + 8, v67);
    v58 = v36;
    v57 = L"m_mmioAccessor->SetMaskSafe(0x08F00, (1 << 1))";
    LOBYTE(v42) = 2;
    v56 = (__int64)v39;
    v43 = *(void **)(*(_QWORD *)v41 + 16LL);
    if ( v43 )
      v38 = v43;
    sub_1400A5E80(
      *(_QWORD *)(a1[23] + 16LL),
      v42,
      14,
      57,
      (__int64)&unk_1400D6110,
      (__int64)v38,
      v56,
      (__int64)v57,
      v58);
    v3 = -64;
  }
  if ( v3 < 0 )
  {
    v44 = v68;
    v3 &= ~0x80u;
    if ( v68 )
    {
      if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
        if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
      }
    }
  }
  if ( (v3 & 0x40) != 0 )
  {
    v45 = v70;
    if ( v70 )
    {
      if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
        if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
      }
    }
  }
  sub_140009704((_DWORD)a1 + 8, (__int64)L"m_mmioAccessor->SetMaskSafe(0x08F00, (1 << 1))", 690, 45, v36);
LABEL_95:
  if ( v5 )
  {
    sub_140005840(v5);
    ExFreePool(v5);
  }
  return v36;
}
