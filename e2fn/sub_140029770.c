__int64 __fastcall sub_140029770(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 *v5; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  volatile signed __int32 *v8; // rdi
  unsigned int v10; // r13d
  void *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // edx
  void *v15; // rax
  volatile signed __int32 *v16; // rsi
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // edx
  unsigned int v22; // esi
  __int64 v23; // rbx
  __int64 v24; // rax
  void *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // edx
  void *v29; // rax
  volatile signed __int32 *v30; // rsi
  volatile signed __int32 *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // edx
  void *v35; // r13
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  int v39; // edx
  void *v40; // rax
  volatile signed __int32 *v41; // rsi
  volatile signed __int32 *v42; // rdi
  void *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // edx
  void *v47; // rax
  volatile signed __int32 *v48; // rsi
  volatile signed __int32 *v49; // rdi
  volatile signed __int32 *v50; // rdi
  int v51; // eax
  void *v52; // r13
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // edx
  void *v56; // rax
  volatile signed __int32 *v57; // r13
  volatile signed __int32 *v58; // rdi
  volatile signed __int32 *v59; // rdi
  int v60; // eax
  void *v61; // r13
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // edx
  void *v65; // rax
  volatile signed __int32 *v66; // r13
  volatile signed __int32 *v67; // rdi
  signed __int32 v68[8]; // [rsp+8h] [rbp-100h] BYREF
  unsigned int v69; // [rsp+48h] [rbp-C0h]
  _QWORD v70[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v71; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v72; // [rsp+70h] [rbp-98h]
  __int64 v73; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v74; // [rsp+80h] [rbp-88h]
  _BYTE v75[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v76; // [rsp+90h] [rbp-78h]
  _BYTE v77[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v78; // [rsp+A0h] [rbp-68h]
  _BYTE v79[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v80; // [rsp+B0h] [rbp-58h]
  _BYTE v81[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v82; // [rsp+C0h] [rbp-48h]
  _BYTE v83[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v84; // [rsp+D0h] [rbp-38h]
  _BYTE v85[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v86; // [rsp+E0h] [rbp-28h]
  _BYTE v87[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v88; // [rsp+F0h] [rbp-18h]
  _BYTE v89[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v90; // [rsp+100h] [rbp-8h]
  _BYTE v91[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v92; // [rsp+110h] [rbp+8h]
  _BYTE v93[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v94; // [rsp+120h] [rbp+18h]
  _BYTE v95[16]; // [rsp+128h] [rbp+20h] BYREF
  unsigned int v96; // [rsp+170h] [rbp+68h]

  LOWORD(v4) = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareArpOffload::EnableArpOffload", a1 - 352);
      if ( v7 )
        v5 = v7;
    }
  }
  if ( (unsigned __int8)sub_1400884D8(*(_QWORD *)(*a2 + 16LL)) )
  {
    if ( v5 )
    {
      sub_14000BFA4(v5);
      ExFreePool(v5);
    }
    v8 = (volatile signed __int32 *)a2[1];
    if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return 3221225473LL;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 56LL))(*(_QWORD *)(a1 + 48));
  if ( v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = &unk_1400D44E0;
      v4 = (__int64)&unk_1400D44E0;
      v12 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                     a1 - 296,
                                     &v73)
                      + 16LL);
      if ( v12 )
        v4 = v12;
      v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, &v71);
      v69 = v10;
      LOBYTE(v14) = 2;
      v15 = *(void **)(*(_QWORD *)v13 + 16LL);
      if ( v15 )
        v11 = v15;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v14,
        10,
        14,
        (__int64)&unk_1400D6318,
        (__int64)v11,
        v4,
        (__int64)L"m_receiveControlRegister->AcceptBroadcast()",
        v69);
      LOBYTE(v4) = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v16 = v72;
      LOBYTE(v4) = v4 & 0xFD;
      if ( v72 )
      {
        if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v17 = v74;
      if ( v74 )
      {
        if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_1400095B8(a1 - 352, (__int64)L"m_receiveControlRegister->AcceptBroadcast()", 103, 47, v10);
LABEL_32:
    if ( v5 )
    {
      sub_14000BFA4(v5);
      ExFreePool(v5);
    }
    v18 = (volatile signed __int32 *)a2[1];
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
    return v10;
  }
  v19 = *(_QWORD *)(a1 + 16);
  v20 = *(_QWORD *)(v19 + 8);
  if ( !v20 || *(_DWORD *)(v19 + 20) )
  {
    v60 = -1073741661;
    if ( *(_DWORD *)(v19 + 20) == 3 )
      v60 = -1073741130;
    v22 = v60;
LABEL_139:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v61 = &unk_1400D44E0;
      v4 = (__int64)&unk_1400D44E0;
      v62 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                     a1 - 296,
                                     v93)
                      + 16LL);
      if ( v62 )
        v4 = v62;
      v63 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v91);
      v69 = v22;
      LOBYTE(v64) = 2;
      v65 = *(void **)(*(_QWORD *)v63 + 16LL);
      if ( v65 )
        v61 = v65;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v64,
        10,
        15,
        (__int64)&unk_1400D6318,
        (__int64)v61,
        v4,
        (__int64)L"m_mmioAccessor->SetMaskSafe(0x05F60, (1 << 5))",
        v69);
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
    sub_140009704(a1 - 352, (__int64)L"m_mmioAccessor->SetMaskSafe(0x05F60, (1 << 5))", 106, 47, v22);
    if ( v5 )
    {
      sub_14000BFA4(v5);
      ExFreePool(v5);
    }
    v59 = (volatile signed __int32 *)a2[1];
    if ( !v59 )
      return v22;
    if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) != 1 )
      return v22;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
    if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) != 1 )
      return v22;
    goto LABEL_160;
  }
  v21 = *(_DWORD *)(v20 + 24416);
  if ( v21 == -1 && *(_DWORD *)(*(_QWORD *)(v19 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 8LL))(v19, 3LL);
    v22 = -1073741130;
    goto LABEL_139;
  }
  *(_DWORD *)(*(_QWORD *)(v19 + 8) + 24416LL) = v21 | 0x20;
  _InterlockedOr(v68, 0);
  v23 = a1 - 352;
  v24 = sub_1400A27D4(v95, *a2 + 16LL);
  v10 = sub_14002AE00(a1 - 352, v24);
  if ( v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v25 = &unk_1400D44E0;
      v4 = (__int64)&unk_1400D44E0;
      v26 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                     a1 - 296,
                                     v77)
                      + 16LL);
      if ( v26 )
        v4 = v26;
      v27 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v75);
      v69 = v10;
      LOBYTE(v28) = 2;
      v29 = *(void **)(*(_QWORD *)v27 + 16LL);
      if ( v29 )
        v25 = v29;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v28,
        10,
        16,
        (__int64)&unk_1400D6318,
        (__int64)v25,
        v4,
        (__int64)L"WriteIpv4ToHardware(hardwareArpOffloadParameters->localIpv4Address)",
        v69);
      LOBYTE(v4) = 48;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v30 = v76;
      LOBYTE(v4) = v4 & 0xDF;
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v31 = v78;
      if ( v78 )
      {
        if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
    }
    sub_14000A3FC(
      a1 - 352,
      (__int64)L"WriteIpv4ToHardware(hardwareArpOffloadParameters->localIpv4Address)",
      109,
      47,
      v10);
    goto LABEL_32;
  }
  v32 = *(_QWORD *)(a1 + 16);
  v33 = *(_QWORD *)(v32 + 8);
  if ( !v33 || *(_DWORD *)(v32 + 20) )
  {
    v51 = -1073741661;
    if ( *(_DWORD *)(v32 + 20) == 3 )
      v51 = -1073741130;
    v22 = v51;
LABEL_114:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v52 = &unk_1400D44E0;
      v4 = (__int64)&unk_1400D44E0;
      v53 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                     a1 - 296,
                                     v89)
                      + 16LL);
      if ( v53 )
        v4 = v53;
      v54 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v87);
      v69 = v22;
      LOBYTE(v55) = 2;
      v56 = *(void **)(*(_QWORD *)v54 + 16LL);
      if ( v56 )
        v52 = v56;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v55,
        10,
        17,
        (__int64)&unk_1400D6318,
        (__int64)v52,
        v4,
        (__int64)L"m_mmioAccessor->SetMaskSafe(0x05800, (1 << 4))",
        v69);
      LOBYTE(v4) = -64;
    }
    if ( (v4 & 0x80u) != 0LL )
    {
      v57 = v88;
      LOBYTE(v4) = v4 & 0x7F;
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
    if ( (v4 & 0x40) != 0 )
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
    sub_140009704(a1 - 352, (__int64)L"m_mmioAccessor->SetMaskSafe(0x05800, (1 << 4))", 112, 47, v22);
    if ( v5 )
    {
      sub_14000BFA4(v5);
      ExFreePool(v5);
    }
    v59 = (volatile signed __int32 *)a2[1];
    if ( !v59 )
      return v22;
    if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) != 1 )
      return v22;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
    if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) != 1 )
      return v22;
LABEL_160:
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
    return v22;
  }
  v34 = *(_DWORD *)(v33 + 22528);
  if ( v34 != -1 )
    goto LABEL_67;
  if ( *(_DWORD *)(*(_QWORD *)(v32 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 8LL))(v32, 3LL);
    v22 = -1073741130;
    goto LABEL_114;
  }
  v23 = a1 - 352;
LABEL_67:
  *(_DWORD *)(*(_QWORD *)(v32 + 8) + 22528LL) = v34 | 0x10;
  _InterlockedOr(v68, 0);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 56LL))(*(_QWORD *)(a1 + 32));
  v96 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 72LL))(*(_QWORD *)(a1 + 32));
  v10 = v96;
  if ( v96 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v35 = &unk_1400D44E0;
      v4 = (__int64)&unk_1400D44E0;
      v36 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                     a1 - 296,
                                     v79)
                      + 16LL);
      if ( v36 )
        v4 = v36;
      v37 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
      v38 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(a1 - 296, v81);
      LOBYTE(v39) = 2;
      v40 = *(void **)(*(_QWORD *)v38 + 16LL);
      if ( v40 )
        v35 = v40;
      sub_1400A5E80(
        v37,
        v39,
        10,
        18,
        (__int64)&unk_1400D6318,
        v4,
        (__int64)v35,
        (__int64)L"m_firmware->ClearArpOffloadTableInFirmware()",
        v96);
      v10 = v96;
      LOWORD(v4) = 768;
    }
    if ( (v4 & 0x200) != 0 )
    {
      v41 = v80;
      LOWORD(v4) = v4 & 0xFDFF;
      if ( v80 )
      {
        if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    if ( (v4 & 0x100) != 0 )
    {
      v42 = v82;
      if ( v82 )
      {
        if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    sub_140021FDC(a1 - 352, (__int64)L"m_firmware->ClearArpOffloadTableInFirmware()", 116, 47, v10);
    goto LABEL_32;
  }
  v70[1] = a2[1];
  v70[0] = *a2;
  a2[1] = 0LL;
  *a2 = 0LL;
  v10 = sub_14002AAC8(v23, v70);
  if ( v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v43 = &unk_1400D44E0;
      v4 = (__int64)&unk_1400D44E0;
      v44 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                     a1 - 296,
                                     v85)
                      + 16LL);
      if ( v44 )
        v4 = v44;
      v45 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v83);
      v69 = v10;
      LOBYTE(v46) = 2;
      v47 = *(void **)(*(_QWORD *)v45 + 16LL);
      if ( v47 )
        v43 = v47;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v46,
        10,
        19,
        (__int64)&unk_1400D6318,
        (__int64)v43,
        v4,
        (__int64)L"SetArpOffloadparameters(move(hardwareArpOffloadParameters))",
        v69);
      LOWORD(v4) = 3072;
    }
    if ( (v4 & 0x800) != 0 )
    {
      v48 = v84;
      LOWORD(v4) = v4 & 0xF7FF;
      if ( v84 )
      {
        if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
          if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
        }
      }
    }
    if ( (v4 & 0x400) != 0 )
    {
      v49 = v86;
      if ( v86 )
      {
        if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
          if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
        }
      }
    }
    sub_140028FA0(a1 - 352, (__int64)L"SetArpOffloadparameters(move(hardwareArpOffloadParameters))", 117, 47, v10);
    goto LABEL_32;
  }
  *(_BYTE *)(a1 + 64) = 1;
  if ( v5 )
  {
    sub_14000BFA4(v5);
    ExFreePool(v5);
  }
  v50 = (volatile signed __int32 *)a2[1];
  if ( v50 )
  {
    if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
      if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
    }
  }
  return 0LL;
}
