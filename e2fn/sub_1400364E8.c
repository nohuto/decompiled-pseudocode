__int64 __fastcall sub_1400364E8(_QWORD *a1, int a2, _DWORD *a3)
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
  void *v19; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // edx
  void *v23; // rax
  volatile signed __int32 *v24; // rsi
  volatile signed __int32 *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rsi
  void *v28; // r12
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // edx
  void *v32; // rax
  volatile signed __int32 *v33; // rsi
  volatile signed __int32 *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rsi
  void *v37; // r12
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // edx
  void *v41; // rax
  volatile signed __int32 *v42; // rsi
  volatile signed __int32 *v43; // rdi
  void *v44; // r12
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // edx
  void *v48; // rax
  volatile signed __int32 *v49; // rsi
  void *v50; // r12
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // edx
  void *v54; // rax
  volatile signed __int32 *v55; // rsi
  __int64 v56; // rsi
  void *v57; // r12
  __int64 v58; // rax
  __int64 v59; // rax
  int v60; // edx
  void *v61; // rax
  volatile signed __int32 *v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rax
  void *v65; // r12
  void *v66; // rdx
  void *v67; // rax
  volatile signed __int32 *v68; // rsi
  void *v69; // r12
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // edx
  void *v73; // rax
  volatile signed __int32 *v74; // rsi
  __int64 v76; // [rsp+28h] [rbp-D8h]
  _BYTE v77[8]; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v78; // [rsp+58h] [rbp-A8h]
  _BYTE v79[8]; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v80; // [rsp+68h] [rbp-98h]
  _BYTE v81[8]; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v82; // [rsp+78h] [rbp-88h]
  _BYTE v83[8]; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v84; // [rsp+88h] [rbp-78h]
  _BYTE v85[8]; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v86; // [rsp+98h] [rbp-68h]
  _BYTE v87[8]; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v88; // [rsp+A8h] [rbp-58h]
  _BYTE v89[8]; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v90; // [rsp+B8h] [rbp-48h]
  _BYTE v91[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v92; // [rsp+C8h] [rbp-38h]
  _BYTE v93[8]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v94; // [rsp+D8h] [rbp-28h]
  _BYTE v95[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v96; // [rsp+E8h] [rbp-18h]
  _BYTE v97[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v98; // [rsp+F8h] [rbp-8h]
  _BYTE v99[8]; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v100; // [rsp+108h] [rbp+8h]
  _BYTE v101[8]; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v102; // [rsp+118h] [rbp+18h]
  _BYTE v103[8]; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v104; // [rsp+128h] [rbp+28h]
  _BYTE v105[8]; // [rsp+130h] [rbp+30h] BYREF
  volatile signed __int32 *v106; // [rsp+138h] [rbp+38h]
  _BYTE v107[8]; // [rsp+140h] [rbp+40h] BYREF
  volatile signed __int32 *v108; // [rsp+148h] [rbp+48h]
  _BYTE v109[8]; // [rsp+150h] [rbp+50h] BYREF
  volatile signed __int32 *v110; // [rsp+158h] [rbp+58h]
  _BYTE v111[8]; // [rsp+160h] [rbp+60h] BYREF
  volatile signed __int32 *v112; // [rsp+168h] [rbp+68h]
  unsigned __int16 v113; // [rsp+1B0h] [rbp+B0h] BYREF
  int v114; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned __int16 v115; // [rsp+1C0h] [rbp+C0h] BYREF

  v114 = 0;
  LODWORD(v6) = 0;
  v7 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareFlowControl::CalculateFlowControlMode",
             (__int64)a1);
      if ( v9 )
        v7 = v9;
    }
  }
  *a3 = a2;
  v10 = a1[47];
  LOWORD(v114) = 0;
  v11 = sub_140041700(v10, 1LL, &v114);
  if ( v11 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = &unk_1400D44E0;
      v6 = (__int64)&unk_1400D44E0;
      v13 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v79) + 16LL);
      if ( v13 )
        v6 = v13;
      v14 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v77);
      LOBYTE(v15) = 2;
      v16 = *(void **)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v12 = v16;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v15,
        14,
        31,
        (__int64)&unk_1400D6CE0,
        (__int64)v12,
        v6,
        (__int64)L"m_phy->ReadPhyRegister(0x1, phyStatus)",
        v11);
      LOBYTE(v6) = 3;
    }
    if ( (v6 & 2) != 0 )
    {
      v17 = v78;
      LOBYTE(v6) = v6 & 0xFD;
      if ( v78 )
      {
        if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v6 & 1) != 0 )
    {
      v18 = v80;
      if ( v80 )
      {
        if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_140009088((int)a1, (__int64)L"m_phy->ReadPhyRegister(0x1, phyStatus)", 275, 48, v11);
    goto LABEL_150;
  }
  if ( (v114 & 0x20) == 0 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v19 = &unk_1400D44E0;
      v6 = (__int64)&unk_1400D44E0;
      v20 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v83) + 16LL);
      if ( v20 )
        v6 = v20;
      v21 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v81);
      LOBYTE(v22) = 3;
      v23 = *(void **)(*(_QWORD *)v21 + 16LL);
      if ( v23 )
        v19 = v23;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v22,
        14,
        32,
        (__int64)&unk_1400D6CE0,
        (__int64)v19,
        v6,
        (__int64)qword_1400B7720);
      LOBYTE(v6) = 12;
    }
    if ( (v6 & 8) != 0 )
    {
      v24 = v82;
      LOBYTE(v6) = v6 & 0xF7;
      if ( v82 )
      {
        if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    if ( (v6 & 4) == 0 )
      goto LABEL_149;
    v25 = v84;
LABEL_145:
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
      }
    }
LABEL_149:
    v11 = 0;
    goto LABEL_150;
  }
  v26 = a1[47];
  v115 = 0;
  v11 = sub_140041700(v26, 4LL, &v115);
  if ( v11 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v27 = *(_QWORD *)(a1[22] + 16LL);
      v28 = &unk_1400D44E0;
      v6 = (__int64)&unk_1400D44E0;
      v29 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v87) + 16LL);
      if ( v29 )
        v6 = v29;
      v30 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v85);
      LOBYTE(v31) = 2;
      v32 = *(void **)(*(_QWORD *)v30 + 16LL);
      if ( v32 )
        v28 = v32;
      sub_1400A5E80(
        v27,
        v31,
        14,
        33,
        (__int64)&unk_1400D6CE0,
        (__int64)v28,
        v6,
        (__int64)L"m_phy->ReadPhyRegister(0x4, phyAutonegAdvertisment)",
        v11);
      LOBYTE(v6) = 48;
    }
    if ( (v6 & 0x20) != 0 )
    {
      v33 = v86;
      LOBYTE(v6) = v6 & 0xDF;
      if ( v86 )
      {
        if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
          if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
        }
      }
    }
    if ( (v6 & 0x10) != 0 )
    {
      v34 = v88;
      if ( v88 )
      {
        if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
    sub_1400142A4((int)a1, (__int64)L"m_phy->ReadPhyRegister(0x4, phyAutonegAdvertisment)", 284, 48, v11);
  }
  else
  {
    v35 = a1[47];
    v113 = 0;
    v11 = sub_140041700(v35, 5LL, &v113);
    if ( !v11 )
    {
      if ( (v115 & v113 & 0x400) != 0 )
      {
        if ( a2 == 3 )
        {
          *a3 = 3;
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v44 = &unk_1400D44E0;
            v6 = (__int64)&unk_1400D44E0;
            v45 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v93)
                            + 16LL);
            if ( v45 )
              v6 = v45;
            v46 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v95);
            LOBYTE(v47) = 4;
            v48 = *(void **)(*(_QWORD *)v46 + 16LL);
            if ( v48 )
              v44 = v48;
            sub_1400A3320(
              *(_QWORD *)(a1[22] + 16LL),
              v47,
              14,
              35,
              (__int64)&unk_1400D6CE0,
              v6,
              (__int64)v44,
              (__int64)qword_1400B7720);
            LOWORD(v6) = 768;
          }
          if ( (v6 & 0x200) != 0 )
          {
            v49 = v94;
            LOWORD(v6) = v6 & 0xFDFF;
            if ( v94 )
            {
              if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
                if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
              }
            }
          }
          if ( (v6 & 0x100) == 0 )
            goto LABEL_149;
          v25 = v96;
        }
        else
        {
          *a3 = 2;
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v50 = &unk_1400D44E0;
            v6 = (__int64)&unk_1400D44E0;
            v51 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v99)
                            + 16LL);
            if ( v51 )
              v6 = v51;
            v52 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v97);
            LOBYTE(v53) = 4;
            v54 = *(void **)(*(_QWORD *)v52 + 16LL);
            if ( v54 )
              v50 = v54;
            sub_1400A3320(
              *(_QWORD *)(a1[22] + 16LL),
              v53,
              14,
              36,
              (__int64)&unk_1400D6CE0,
              (__int64)v50,
              v6,
              (__int64)qword_1400B7720);
            LOWORD(v6) = 3072;
          }
          if ( (v6 & 0x800) != 0 )
          {
            v55 = v98;
            LOWORD(v6) = v6 & 0xF7FF;
            if ( v98 )
            {
              if ( _InterlockedExchangeAdd(v98 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
                if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
              }
            }
          }
          if ( (v6 & 0x400) == 0 )
            goto LABEL_149;
          v25 = v100;
        }
        goto LABEL_145;
      }
      if ( (v115 & 0xC00) == 0x800 )
      {
        if ( (v113 & 0xC00) == 0xC00 )
        {
          *a3 = 1;
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v56 = *(_QWORD *)(a1[22] + 16LL);
            v57 = &unk_1400D44E0;
            v6 = (__int64)&unk_1400D44E0;
            v58 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v103)
                            + 16LL);
            if ( v58 )
              v6 = v58;
            v59 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v101);
            LOBYTE(v60) = 4;
            v61 = *(void **)(*(_QWORD *)v59 + 16LL);
            if ( v61 )
              v57 = v61;
            sub_1400A3320(v56, v60, 14, 37, (__int64)&unk_1400D6CE0, (__int64)v57, v6, (__int64)qword_1400B7720);
            LOWORD(v6) = 12288;
          }
          if ( (v6 & 0x2000) != 0 )
          {
            v62 = v102;
            LOWORD(v6) = v6 & 0xDFFF;
            if ( v102 )
            {
              if ( _InterlockedExchangeAdd(v102 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 8LL))(v62);
                if ( _InterlockedExchangeAdd(v62 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 16LL))(v62);
              }
            }
          }
          if ( (v6 & 0x1000) == 0 )
            goto LABEL_149;
          v25 = v104;
          goto LABEL_145;
        }
      }
      else if ( (v115 & 0xC00) == 0xC00 && (v113 & 0xC00) == 0x800 )
      {
        *a3 = 2;
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v63 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v107);
          v64 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v105);
          v65 = &unk_1400D44E0;
          v66 = &unk_1400D44E0;
          v67 = *(void **)(*(_QWORD *)v64 + 16LL);
          if ( v67 )
            v66 = v67;
          if ( *(_QWORD *)(v63 + 16) )
            v65 = *(void **)(v63 + 16);
          v76 = (__int64)v66;
          LOBYTE(v66) = 4;
          sub_1400A3320(
            *(_QWORD *)(a1[22] + 16LL),
            (_DWORD)v66,
            14,
            38,
            (__int64)&unk_1400D6CE0,
            v76,
            (__int64)v65,
            (__int64)qword_1400B7720);
          LOWORD(v6) = -16384;
        }
        if ( (v6 & 0x8000) != 0 )
        {
          v68 = v106;
          LOWORD(v6) = v6 & 0x7FFF;
          if ( v106 )
          {
            if ( _InterlockedExchangeAdd(v106 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 8LL))(v68);
              if ( _InterlockedExchangeAdd(v68 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 16LL))(v68);
            }
          }
        }
        if ( (v6 & 0x4000) == 0 )
          goto LABEL_149;
        v25 = v108;
        goto LABEL_145;
      }
      *a3 = 0;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v69 = &unk_1400D44E0;
        v6 = (__int64)&unk_1400D44E0;
        v70 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v111) + 16LL);
        if ( v70 )
          v6 = v70;
        v71 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v109);
        LOBYTE(v72) = 4;
        v73 = *(void **)(*(_QWORD *)v71 + 16LL);
        if ( v73 )
          v69 = v73;
        sub_1400A3320(
          *(_QWORD *)(a1[22] + 16LL),
          v72,
          14,
          39,
          (__int64)&unk_1400D6CE0,
          (__int64)v69,
          v6,
          (__int64)qword_1400B7720);
        LODWORD(v6) = 196608;
      }
      if ( (v6 & 0x20000) != 0 )
      {
        v74 = v110;
        LODWORD(v6) = v6 & 0xFFFDFFFF;
        if ( v110 )
        {
          if ( _InterlockedExchangeAdd(v110 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 8LL))(v74);
            if ( _InterlockedExchangeAdd(v74 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 16LL))(v74);
          }
        }
      }
      if ( (v6 & 0x10000) == 0 )
        goto LABEL_149;
      v25 = v112;
      goto LABEL_145;
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v36 = *(_QWORD *)(a1[22] + 16LL);
      v37 = &unk_1400D44E0;
      v6 = (__int64)&unk_1400D44E0;
      v38 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v91) + 16LL);
      if ( v38 )
        v6 = v38;
      v39 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v89);
      LOBYTE(v40) = 2;
      v41 = *(void **)(*(_QWORD *)v39 + 16LL);
      if ( v41 )
        v37 = v41;
      sub_1400A5E80(
        v36,
        v40,
        14,
        34,
        (__int64)&unk_1400D6CE0,
        (__int64)v37,
        v6,
        (__int64)L"m_phy->ReadPhyRegister(0x5, phyLinkPartnerAbility)",
        v11);
      LOBYTE(v6) = -64;
    }
    if ( (v6 & 0x80u) != 0LL )
    {
      v42 = v90;
      LOBYTE(v6) = v6 & 0x7F;
      if ( v90 )
      {
        if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    if ( (v6 & 0x40) != 0 )
    {
      v43 = v92;
      if ( v92 )
      {
        if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
      }
    }
    sub_14000F3C4((int)a1, (__int64)L"m_phy->ReadPhyRegister(0x5, phyLinkPartnerAbility)", 287, 48, v11);
  }
LABEL_150:
  if ( v7 )
  {
    sub_140005840(v7);
    ExFreePool(v7);
  }
  return v11;
}
