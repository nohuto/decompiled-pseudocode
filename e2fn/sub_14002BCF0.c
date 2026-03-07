__int64 __fastcall sub_14002BCF0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v4; // r13
  __int64 *v5; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // rcx
  __int64 v9; // rbx
  __int64 *v10; // rax
  void *v11; // rcx
  void *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  void *v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // edx
  unsigned int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rdi
  void *v27; // rax
  __int64 *v28; // rax
  int v29; // edx
  __int64 v30; // rcx
  volatile signed __int32 *v31; // rdi
  volatile signed __int32 *v32; // rdi
  __int64 v33; // rbx
  void **v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rsi
  __int64 v38; // rax
  volatile signed __int32 *v39; // rsi
  void *v40; // rcx
  __int64 result; // rax
  void *v42; // rdi
  void *v43; // rax
  __int64 v44; // rax
  int v45; // edx
  __int64 v46; // rax
  volatile signed __int32 *v47; // rdi
  volatile signed __int32 *v48; // rdi
  volatile signed __int32 *v49; // rbx
  int v50; // eax
  void *v51; // rdi
  void *v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rax
  int v55; // edx
  __int64 v56; // rax
  volatile signed __int32 *v57; // rdi
  volatile signed __int32 *v58; // rdi
  void *v59; // rcx
  int v60; // eax
  void *v61; // rdi
  void *v62; // rax
  __int64 v63; // rax
  int v64; // edx
  __int64 v65; // rax
  volatile signed __int32 *v66; // rbx
  volatile signed __int32 *v67; // rbx
  void *v68; // rcx
  signed __int32 v69[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v70; // [rsp+30h] [rbp-D0h]
  const wchar_t *v71; // [rsp+38h] [rbp-C8h]
  unsigned int v72; // [rsp+40h] [rbp-C0h]
  char v73[8]; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v74; // [rsp+58h] [rbp-A8h]
  char v75[8]; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v76; // [rsp+68h] [rbp-98h]
  char v77[8]; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v78; // [rsp+78h] [rbp-88h]
  char v79[8]; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v80; // [rsp+88h] [rbp-78h]
  char v81[8]; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v82; // [rsp+98h] [rbp-68h]
  char v83[8]; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v84; // [rsp+A8h] [rbp-58h]
  char v85[8]; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v86; // [rsp+B8h] [rbp-48h]
  char v87[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v88; // [rsp+C8h] [rbp-38h]
  char v89[8]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v90; // [rsp+D8h] [rbp-28h]
  char v91[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v92; // [rsp+E8h] [rbp-18h]
  char v93[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v94; // [rsp+F8h] [rbp-8h]
  char v95[64]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v97; // [rsp+158h] [rbp+58h]
  unsigned int v98; // [rsp+158h] [rbp+58h]
  unsigned int v99; // [rsp+158h] [rbp+58h]

  v2 = a1;
  LOWORD(v4) = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareNsOffload::EnableNsOffload", v2 - 352);
      if ( v7 )
        v5 = v7;
    }
  }
  if ( !a2[2] )
  {
    if ( v5 )
    {
      sub_14000BFA4(v5);
      ExFreePool(v5);
    }
    v8 = (void *)a2[1];
    *a2 = off_1400D4BE0;
    if ( v8 )
    {
      sub_1400A5BB4(v8);
      a2[1] = 0LL;
    }
    v97 = -1073741823;
LABEL_33:
    v18 = v97;
LABEL_123:
    result = v18;
LABEL_148:
    a2[3] = 0LL;
    a2[2] = 0LL;
    return result;
  }
  v97 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 48) + 56LL))(*(_QWORD *)(v2 + 48));
  if ( v97 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 - 296) + 16LL))(v2 - 296, v77);
      v10 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 - 296) + 24LL))(v2 - 296, v75);
      v11 = *(void **)(v9 + 16);
      v4 = (__int64)&unk_1400D44E0;
      v72 = v97;
      v12 = &unk_1400D44E0;
      v13 = *v10;
      if ( v11 )
        v12 = v11;
      v14 = *(_QWORD *)(v13 + 16);
      v71 = L"m_receiveControlRegister->AcceptBroadcast()";
      v70 = (__int64)v12;
      if ( v14 )
        v4 = v14;
      LOBYTE(v12) = 2;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(v2 - 176) + 16LL),
        (_DWORD)v12,
        10,
        14,
        (__int64)&unk_1400D6400,
        v4,
        v70,
        (__int64)v71,
        v72);
      LOBYTE(v4) = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v15 = v76;
      LOBYTE(v4) = v4 & 0xFD;
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v16 = v78;
      if ( v78 )
      {
        if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    sub_1400095B8(a1 - 352, (__int64)L"m_receiveControlRegister->AcceptBroadcast()", 100, 52, v97);
    if ( v5 )
    {
      sub_14000BFA4(v5);
      ExFreePool(v5);
    }
    v17 = (void *)a2[1];
    *a2 = off_1400D4BE0;
    if ( v17 )
    {
      sub_1400A5BB4(v17);
      a2[1] = 0LL;
    }
    goto LABEL_33;
  }
  v19 = *(_QWORD *)(v2 + 16);
  v20 = *(_QWORD *)(v19 + 8);
  if ( !v20 || *(_DWORD *)(v19 + 20) )
  {
    v60 = -1073741661;
    if ( *(_DWORD *)(v19 + 20) == 3 )
      v60 = -1073741130;
    v22 = v60;
    goto LABEL_127;
  }
  v21 = *(_DWORD *)(v20 + 24416);
  if ( v21 == -1 && *(_DWORD *)(*(_QWORD *)(v19 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 8LL))(v19, 3LL);
    v22 = -1073741130;
LABEL_127:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v4 = (__int64)&unk_1400D44E0;
      v61 = &unk_1400D44E0;
      v62 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 - 296) + 16LL))(
                                    v2 - 296,
                                    v93)
                     + 16LL);
      if ( v62 )
        v61 = v62;
      v63 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 - 296) + 24LL))(v2 - 296, v91);
      v72 = v22;
      LOBYTE(v64) = 2;
      v65 = *(_QWORD *)(*(_QWORD *)v63 + 16LL);
      if ( v65 )
        v4 = v65;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(v2 - 176) + 16LL),
        v64,
        10,
        15,
        (__int64)&unk_1400D6400,
        v4,
        (__int64)v61,
        (__int64)L"m_mmioAccessor->SetMaskSafe(0x05F60, (1 << 9))",
        v72);
      LOBYTE(v4) = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v66 = v92;
      LOBYTE(v4) = v4 & 0xF7;
      if ( v92 )
      {
        if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 8LL))(v66);
          if ( _InterlockedExchangeAdd(v66 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 16LL))(v66);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v67 = v94;
      if ( v94 )
      {
        if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 8LL))(v67);
          if ( _InterlockedExchangeAdd(v67 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 16LL))(v67);
        }
      }
    }
    sub_140009704(a1 - 352, (__int64)L"m_mmioAccessor->SetMaskSafe(0x05F60, (1 << 9))", 105, 52, v22);
    if ( v5 )
    {
      sub_14000BFA4(v5);
      ExFreePool(v5);
    }
    v68 = (void *)a2[1];
    *a2 = off_1400D4BE0;
    if ( v68 )
    {
      sub_1400A5BB4(v68);
      a2[1] = 0LL;
    }
    result = v22;
    goto LABEL_148;
  }
  *(_DWORD *)(*(_QWORD *)(v19 + 8) + 24416LL) = v21 | 0x200;
  _InterlockedOr(v69, 0);
  v23 = *(_QWORD *)(v2 + 16);
  v24 = *(_QWORD *)(v23 + 8);
  if ( !v24 || *(_DWORD *)(v23 + 20) )
  {
    v50 = -1073741661;
    if ( *(_DWORD *)(v23 + 20) == 3 )
      v50 = -1073741130;
    v18 = v50;
    goto LABEL_102;
  }
  v25 = *(_DWORD *)(v24 + 22528);
  if ( v25 == -1 && *(_DWORD *)(*(_QWORD *)(v23 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 8LL))(v23, 3LL);
    v18 = -1073741130;
LABEL_102:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v4 = (__int64)&unk_1400D44E0;
      v51 = &unk_1400D44E0;
      v52 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 - 296) + 16LL))(
                                    v2 - 296,
                                    v89)
                     + 16LL);
      if ( v52 )
        v51 = v52;
      v53 = *(_QWORD *)(*(_QWORD *)(v2 - 176) + 16LL);
      v54 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 - 296) + 24LL))(v2 - 296, v87);
      v72 = v18;
      LOBYTE(v55) = 2;
      v56 = *(_QWORD *)(*(_QWORD *)v54 + 16LL);
      if ( v56 )
        v4 = v56;
      sub_1400A5E80(
        v53,
        v55,
        10,
        16,
        (__int64)&unk_1400D6400,
        v4,
        (__int64)v51,
        (__int64)L"m_mmioAccessor->SetMaskSafe(0x05800, (1 << 4))",
        v72);
      LOBYTE(v4) = 48;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v57 = v88;
      LOBYTE(v4) = v4 & 0xDF;
      if ( v88 )
      {
        if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
          if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
        }
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v58 = v90;
      if ( v90 )
      {
        if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
          if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
        }
      }
    }
    sub_140009704(a1 - 352, (__int64)L"m_mmioAccessor->SetMaskSafe(0x05800, (1 << 4))", 108, 52, v18);
LABEL_119:
    if ( v5 )
    {
      sub_14000BFA4(v5);
      ExFreePool(v5);
    }
    v59 = (void *)a2[1];
    *a2 = off_1400D4BE0;
    if ( v59 )
    {
      sub_1400A5BB4(v59);
      a2[1] = 0LL;
    }
    goto LABEL_123;
  }
  *(_DWORD *)(*(_QWORD *)(v23 + 8) + 22528LL) = v25 | 0x10;
  _InterlockedOr(v69, 0);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 32) + 56LL))(*(_QWORD *)(v2 + 32));
  v98 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 32) + 88LL))(*(_QWORD *)(v2 + 32));
  v18 = v98;
  if ( v98 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v4 = (__int64)&unk_1400D44E0;
      v26 = &unk_1400D44E0;
      v27 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 - 296) + 16LL))(
                                    v2 - 296,
                                    v81)
                     + 16LL);
      if ( v27 )
        v26 = v27;
      v28 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 - 296) + 24LL))(v2 - 296, v79);
      v18 = v98;
      v72 = v98;
      LOBYTE(v29) = 2;
      v71 = L"m_firmware->ClearNsOffloadTableInFirmware()";
      v30 = *v28;
      v70 = (__int64)v26;
      if ( *(_QWORD *)(v30 + 16) )
        v4 = *(_QWORD *)(v30 + 16);
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(v2 - 176) + 16LL),
        v29,
        10,
        17,
        (__int64)&unk_1400D6400,
        v4,
        v70,
        (__int64)v71,
        v72);
      LOBYTE(v4) = -64;
    }
    if ( (v4 & 0x80u) != 0LL )
    {
      v31 = v80;
      LOBYTE(v4) = v4 & 0x7F;
      if ( v80 )
      {
        if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
    }
    if ( (v4 & 0x40) != 0 )
    {
      v32 = v82;
      if ( v82 )
      {
        if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
          if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
    }
    sub_1400095B8(a1 - 352, (__int64)L"m_firmware->ClearNsOffloadTableInFirmware()", 113, 52, v18);
    goto LABEL_119;
  }
  v33 = a2[2];
  v34 = (void **)(a2 + 1);
  v35 = a2[1];
  if ( v33 )
  {
    v36 = v35 + 16 * v33;
    if ( v35 != v36 )
    {
      v37 = v2 - 352;
      while ( 1 )
      {
        sub_1400A27D4(v73, v35);
        v38 = sub_1400A27D4(v95, v73);
        v99 = sub_14002CA08(v37, v38);
        if ( v99 )
          break;
        if ( v74 )
        {
          if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
          {
            v39 = v74;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 8LL))(v74);
            if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 16LL))(v74);
          }
        }
        v37 = v2 - 352;
        v35 += 16LL;
        if ( v35 == v36 )
        {
          v2 = a1;
          v34 = (void **)(a2 + 1);
          goto LABEL_72;
        }
      }
      if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
      {
        v18 = v99;
      }
      else
      {
        v4 = (__int64)&unk_1400D44E0;
        v42 = &unk_1400D44E0;
        v43 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                      a1 - 296,
                                      v85)
                       + 16LL);
        if ( v43 )
          v42 = v43;
        v44 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v83);
        v18 = v99;
        v72 = v99;
        LOBYTE(v45) = 2;
        v46 = *(_QWORD *)(*(_QWORD *)v44 + 16LL);
        if ( v46 )
          v4 = v46;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          v45,
          10,
          18,
          (__int64)&unk_1400D6400,
          v4,
          (__int64)v42,
          (__int64)L"SetNSOffloadparameters(hardwareNsOffloadParameters)",
          v72);
        LOWORD(v4) = 768;
      }
      if ( (v4 & 0x200) != 0 )
      {
        v47 = v84;
        LOWORD(v4) = v4 & 0xFDFF;
        if ( v84 )
        {
          if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
            if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
          }
        }
      }
      if ( (v4 & 0x100) != 0 )
      {
        v48 = v86;
        if ( v86 )
        {
          if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
            if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
          }
        }
      }
      sub_1400142A4(a1 - 352, (__int64)L"SetNSOffloadparameters(hardwareNsOffloadParameters)", 117, 52, v18);
      if ( v74 && _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
      {
        v49 = v74;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 8LL))(v74);
        if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 16LL))(v74);
        v18 = v99;
      }
      goto LABEL_119;
    }
  }
LABEL_72:
  *(_BYTE *)(v2 + 64) = 1;
  if ( v5 )
  {
    sub_14000BFA4(v5);
    ExFreePool(v5);
  }
  v40 = *v34;
  *a2 = off_1400D4BE0;
  if ( v40 )
  {
    sub_1400A5BB4(v40);
    *v34 = 0LL;
  }
  a2[2] = 0LL;
  result = 0LL;
  a2[3] = 0LL;
  return result;
}
