__int64 __fastcall sub_14000E5EC(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdi
  __int64 *v7; // r13
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // r14d
  void *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // edx
  void *v16; // rax
  volatile signed __int32 *v17; // rsi
  volatile signed __int32 *v18; // rdi
  __int64 v19; // rcx
  int *v20; // rax
  int v21; // edx
  __int64 v22; // rax
  _DWORD *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // edx
  void *v27; // r12
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // edx
  void *v31; // rax
  volatile signed __int32 *v32; // rsi
  volatile signed __int32 *v33; // rdi
  __int64 v34; // rcx
  void *v35; // r12
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // edx
  void *v39; // rax
  volatile signed __int32 *v40; // rsi
  volatile signed __int32 *v41; // rdi
  __int64 v42; // rcx
  void *v43; // r12
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // edx
  void *v47; // rax
  volatile signed __int32 *v48; // rsi
  volatile signed __int32 *v49; // rdi
  int v50; // eax
  void *v51; // r12
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rax
  int v55; // edx
  void *v56; // rax
  volatile signed __int32 *v57; // rsi
  volatile signed __int32 *v58; // rdi
  void *v59; // r12
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // edx
  void *v63; // rax
  volatile signed __int32 *v64; // rsi
  volatile signed __int32 *v65; // rdi
  int v66; // eax
  void *v67; // r12
  __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rax
  int v71; // edx
  void *v72; // rax
  volatile signed __int32 *v73; // rsi
  volatile signed __int32 *v74; // rdi
  signed __int32 v76[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v77; // [rsp+40h] [rbp-C0h]
  _BYTE v78[8]; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v79; // [rsp+58h] [rbp-A8h]
  _BYTE v80[8]; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v81; // [rsp+68h] [rbp-98h]
  _BYTE v82[8]; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v83; // [rsp+78h] [rbp-88h]
  _BYTE v84[8]; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v85; // [rsp+88h] [rbp-78h]
  _BYTE v86[8]; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v87; // [rsp+98h] [rbp-68h]
  _BYTE v88[8]; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v89; // [rsp+A8h] [rbp-58h]
  _BYTE v90[8]; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v91; // [rsp+B8h] [rbp-48h]
  _BYTE v92[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v93; // [rsp+C8h] [rbp-38h]
  _BYTE v94[8]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v95; // [rsp+D8h] [rbp-28h]
  _BYTE v96[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v97; // [rsp+E8h] [rbp-18h]
  _BYTE v98[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v99; // [rsp+F8h] [rbp-8h]
  _BYTE v100[8]; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v101; // [rsp+108h] [rbp+8h]
  _BYTE v102[8]; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v103; // [rsp+118h] [rbp+18h]
  _BYTE v104[8]; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v105; // [rsp+128h] [rbp+28h]
  int v106; // [rsp+170h] [rbp+70h] BYREF
  __int16 v107; // [rsp+188h] [rbp+88h] BYREF

  v106 = 0;
  LOWORD(v6) = 0;
  v7 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareLink::InitializeSpeedDuplex", (__int64)a1);
      if ( v9 )
        v7 = v9;
    }
  }
  v10 = a1[59];
  LOBYTE(v106) = 0;
  v11 = sub_140041490(v10, &v106);
  if ( v11 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = &unk_1400D44E0;
      v6 = (__int64)&unk_1400D44E0;
      v13 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v80) + 16LL);
      if ( v13 )
        v6 = v13;
      v14 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v78);
      v77 = v11;
      LOBYTE(v15) = 2;
      v16 = *(void **)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v12 = v16;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v15,
        14,
        15,
        (__int64)&unk_1400D4DD8,
        (__int64)v12,
        v6,
        (__int64)L"m_phy->IsPhyResetBlocked(phyBlocked)",
        v77);
      LOBYTE(v6) = 3;
    }
    if ( (v6 & 2) != 0 )
    {
      v17 = v79;
      LOBYTE(v6) = v6 & 0xFD;
      if ( v79 )
      {
        if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v6 & 1) != 0 )
    {
      v18 = v81;
      if ( v81 )
      {
        if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_14000D3C8((int)a1, (__int64)L"m_phy->IsPhyResetBlocked(phyBlocked)", 116, 49, v11);
    goto LABEL_151;
  }
  if ( (_BYTE)v106 )
  {
LABEL_25:
    v11 = 0;
    goto LABEL_151;
  }
  v19 = a1[61];
  v20 = *(int **)(v19 + 8);
  if ( !v20 || *(_DWORD *)(v19 + 20) )
  {
    v66 = -1073741661;
    if ( *(_DWORD *)(v19 + 20) == 3 )
      v66 = -1073741130;
    v11 = v66;
    goto LABEL_134;
  }
  v21 = *v20;
  if ( *v20 == -1 && *(_DWORD *)(*(_QWORD *)(v19 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 8LL))(v19, 3LL);
    v11 = -1073741130;
LABEL_134:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v67 = &unk_1400D44E0;
      v6 = (__int64)&unk_1400D44E0;
      v68 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v104) + 16LL);
      if ( v68 )
        v6 = v68;
      v69 = *(_QWORD *)(a1[22] + 16LL);
      v70 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v102);
      v77 = v11;
      LOBYTE(v71) = 2;
      v72 = *(void **)(*(_QWORD *)v70 + 16LL);
      if ( v72 )
        v67 = v72;
      sub_1400A5E80(
        v69,
        v71,
        14,
        16,
        (__int64)&unk_1400D4DD8,
        (__int64)v67,
        v6,
        (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x00000, ctrlValue)",
        v77);
      LOBYTE(v6) = 12;
    }
    if ( (v6 & 8) != 0 )
    {
      v73 = v103;
      LOBYTE(v6) = v6 & 0xF7;
      if ( v103 )
      {
        if ( _InterlockedExchangeAdd(v103 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 8LL))(v73);
          if ( _InterlockedExchangeAdd(v73 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 16LL))(v73);
        }
      }
    }
    if ( (v6 & 4) != 0 )
    {
      v74 = v105;
      if ( v105 )
      {
        if ( _InterlockedExchangeAdd(v105 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 8LL))(v74);
          if ( _InterlockedExchangeAdd(v74 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 16LL))(v74);
        }
      }
    }
    sub_14000D660((int)a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x00000, ctrlValue)", 126, 49, v11);
    goto LABEL_151;
  }
  v22 = a1[61];
  v23 = (_DWORD *)(v22 + 20);
  if ( !*(_QWORD *)(v22 + 8) || *v23 )
  {
    v11 = -1073741130;
    if ( *v23 != 3 )
      v11 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v59 = &unk_1400D44E0;
      v6 = (__int64)&unk_1400D44E0;
      v60 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v100) + 16LL);
      if ( v60 )
        v6 = v60;
      v61 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v98);
      v77 = v11;
      LOBYTE(v62) = 2;
      v63 = *(void **)(*(_QWORD *)v61 + 16LL);
      if ( v63 )
        v59 = v63;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v62,
        14,
        17,
        (__int64)&unk_1400D4DD8,
        (__int64)v59,
        v6,
        (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x00000, ctrlValue)",
        v77);
      LOBYTE(v6) = 48;
    }
    if ( (v6 & 0x20) != 0 )
    {
      v64 = v99;
      LOBYTE(v6) = v6 & 0xDF;
      if ( v99 )
      {
        if ( _InterlockedExchangeAdd(v99 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 8LL))(v64);
          if ( _InterlockedExchangeAdd(v64 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 16LL))(v64);
        }
      }
    }
    if ( (v6 & 0x10) != 0 )
    {
      v65 = v101;
      if ( v101 )
      {
        if ( _InterlockedExchangeAdd(v101 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
          if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 16LL))(v65);
        }
      }
    }
    sub_14000D7AC((int)a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x00000, ctrlValue)", 131, 49, v11);
  }
  else
  {
    **(_DWORD **)(v22 + 8) = v21 & 0xFFFFE7BF | 0x40;
    _InterlockedOr(v76, 0);
    v24 = a1[61];
    v25 = *(_QWORD *)(v24 + 8);
    if ( !v25 || *(_DWORD *)(v24 + 20) )
    {
      v50 = -1073741661;
      if ( *(_DWORD *)(v24 + 20) == 3 )
        v50 = -1073741130;
      v11 = v50;
      goto LABEL_95;
    }
    v26 = *(_DWORD *)(v25 + 3604);
    if ( v26 == -1 && *(_DWORD *)(*(_QWORD *)(v24 + 8) + 8LL) == -1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 8LL))(v24, 3LL);
      v11 = -1073741130;
LABEL_95:
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v51 = &unk_1400D44E0;
        v6 = (__int64)&unk_1400D44E0;
        v52 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v94) + 16LL);
        if ( v52 )
          v6 = v52;
        v53 = *(_QWORD *)(a1[22] + 16LL);
        v54 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v96);
        v77 = v11;
        LOBYTE(v55) = 2;
        v56 = *(void **)(*(_QWORD *)v54 + 16LL);
        if ( v56 )
          v51 = v56;
        sub_1400A5E80(
          v53,
          v55,
          14,
          18,
          (__int64)&unk_1400D4DD8,
          v6,
          (__int64)v51,
          (__int64)L"m_mmioAccessor->UnsetMaskSafe(0x00E14, (1 << 5))",
          v77);
        LOBYTE(v6) = -64;
      }
      if ( (v6 & 0x80u) != 0LL )
      {
        v57 = v95;
        LOBYTE(v6) = v6 & 0x7F;
        if ( v95 )
        {
          if ( _InterlockedExchangeAdd(v95 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
            if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
          }
        }
      }
      if ( (v6 & 0x40) != 0 )
      {
        v58 = v97;
        if ( v97 )
        {
          if ( _InterlockedExchangeAdd(v97 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
            if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
          }
        }
      }
      sub_140009850((int)a1, (__int64)L"m_mmioAccessor->UnsetMaskSafe(0x00E14, (1 << 5))", 134, 49, v11);
      goto LABEL_151;
    }
    *(_DWORD *)(*(_QWORD *)(v24 + 8) + 3604LL) = v26 & 0xFFFFFFDF;
    _InterlockedOr(v76, 0);
    v11 = sub_14003F4B8(a1[59], a2, a3);
    if ( v11 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v27 = &unk_1400D44E0;
        v6 = (__int64)&unk_1400D44E0;
        v28 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v84) + 16LL);
        if ( v28 )
          v6 = v28;
        v29 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v82);
        v77 = v11;
        LOBYTE(v30) = 2;
        v31 = *(void **)(*(_QWORD *)v29 + 16LL);
        if ( v31 )
          v27 = v31;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          v30,
          14,
          19,
          (__int64)&unk_1400D4DD8,
          (__int64)v27,
          v6,
          (__int64)L"m_phy->ConfigureAutoNegotiation(speedDuplex, flowControl)",
          v77);
        LOWORD(v6) = 768;
      }
      if ( (v6 & 0x200) != 0 )
      {
        v32 = v83;
        LOWORD(v6) = v6 & 0xFDFF;
        if ( v83 )
        {
          if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
            if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
          }
        }
      }
      if ( (v6 & 0x100) != 0 )
      {
        v33 = v85;
        if ( v85 )
        {
          if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
            if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
          }
        }
      }
      sub_140009C34((int)a1, (__int64)L"m_phy->ConfigureAutoNegotiation(speedDuplex, flowControl)", 136, 49, v11);
    }
    else
    {
      v34 = a1[59];
      v107 = 0;
      v11 = sub_140041700(v34, 0LL, &v107);
      if ( v11 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v35 = &unk_1400D44E0;
          v6 = (__int64)&unk_1400D44E0;
          v36 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v88) + 16LL);
          if ( v36 )
            v6 = v36;
          v37 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v86);
          v77 = v11;
          LOBYTE(v38) = 2;
          v39 = *(void **)(*(_QWORD *)v37 + 16LL);
          if ( v39 )
            v35 = v39;
          sub_1400A5E80(
            *(_QWORD *)(a1[22] + 16LL),
            v38,
            14,
            20,
            (__int64)&unk_1400D4DD8,
            (__int64)v35,
            v6,
            (__int64)L"m_phy->ReadPhyRegister(0x0, phyCtrlValue)",
            v77);
          LOWORD(v6) = 3072;
        }
        if ( (v6 & 0x800) != 0 )
        {
          v40 = v87;
          LOWORD(v6) = v6 & 0xF7FF;
          if ( v87 )
          {
            if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
              if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
            }
          }
        }
        if ( (v6 & 0x400) != 0 )
        {
          v41 = v89;
          if ( v89 )
          {
            if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
              if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
            }
          }
        }
        sub_14000D514((int)a1, (__int64)L"m_phy->ReadPhyRegister(0x0, phyCtrlValue)", 141, 49, v11);
      }
      else
      {
        v42 = a1[59];
        v107 |= 0x1200u;
        v11 = sub_1400441A4(v42, 0LL);
        if ( !v11 )
          goto LABEL_25;
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v43 = &unk_1400D44E0;
          v6 = (__int64)&unk_1400D44E0;
          v44 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v92) + 16LL);
          if ( v44 )
            v6 = v44;
          v45 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v90);
          v77 = v11;
          LOBYTE(v46) = 2;
          v47 = *(void **)(*(_QWORD *)v45 + 16LL);
          if ( v47 )
            v43 = v47;
          sub_1400A5E80(
            *(_QWORD *)(a1[22] + 16LL),
            v46,
            14,
            21,
            (__int64)&unk_1400D4DD8,
            (__int64)v43,
            v6,
            (__int64)L"m_phy->WritePhyRegisterSafe(0x0, phyCtrlValue)",
            v77);
          LOWORD(v6) = 12288;
        }
        if ( (v6 & 0x2000) != 0 )
        {
          v48 = v91;
          LOWORD(v6) = v6 & 0xDFFF;
          if ( v91 )
          {
            if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
              if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
            }
          }
        }
        if ( (v6 & 0x1000) != 0 )
        {
          v49 = v93;
          if ( v93 )
          {
            if ( _InterlockedExchangeAdd(v93 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
              if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
            }
          }
        }
        sub_140009704((int)a1, (__int64)L"m_phy->WritePhyRegisterSafe(0x0, phyCtrlValue)", 143, 49, v11);
      }
    }
  }
LABEL_151:
  if ( v7 )
  {
    sub_140005840(v7);
    ExFreePool(v7);
  }
  return v11;
}
