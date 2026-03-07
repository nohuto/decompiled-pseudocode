__int64 __fastcall sub_14002AE00(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rdi
  __int16 v4; // r14
  __int64 *v5; // r15
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  unsigned int v8; // r12d
  void *v9; // rsi
  void *v10; // rdi
  void *v11; // rax
  __int64 v12; // rax
  int v13; // edx
  void *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  _DWORD *v20; // rcx
  void *v21; // r12
  __int64 v22; // rax
  void *v23; // r14
  __int64 v24; // rax
  void *v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  void *v28; // rdx
  void *v29; // rax
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // r8d
  void *v35; // rdi
  void *v36; // rax
  void *v37; // rax
  int v38; // edx
  volatile signed __int32 *v39; // rbx
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  int v43; // eax
  void *v44; // rdi
  void *v45; // rax
  __int64 v46; // rax
  void *v47; // rdx
  void *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  volatile signed __int32 *v51; // rbx
  volatile signed __int32 *v52; // rbx
  volatile signed __int32 *v53; // rbx
  void *v54; // rsi
  void *v55; // rdi
  void *v56; // rax
  __int64 v57; // rax
  int v58; // edx
  void *v59; // rax
  volatile signed __int32 *v60; // rbx
  volatile signed __int32 *v61; // rbx
  signed __int32 v62[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v63; // [rsp+28h] [rbp-D8h]
  const wchar_t *v64; // [rsp+38h] [rbp-C8h]
  __int64 v65; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall **v66)(PVOID); // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h]
  __int64 v68; // [rsp+68h] [rbp-98h]
  __int64 v69; // [rsp+70h] [rbp-90h]
  char v70[8]; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v71; // [rsp+80h] [rbp-80h]
  char v72[8]; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v73; // [rsp+90h] [rbp-70h]
  char v74[8]; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v75; // [rsp+A0h] [rbp-60h]
  char v76[8]; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v77; // [rsp+B0h] [rbp-50h]
  char v78[8]; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v79; // [rsp+C0h] [rbp-40h]
  char v80[8]; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v81; // [rsp+D0h] [rbp-30h]
  char v82[8]; // [rsp+D8h] [rbp-28h] BYREF
  volatile signed __int32 *v83; // [rsp+E0h] [rbp-20h]
  char v84[8]; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v85; // [rsp+F0h] [rbp-10h]
  char v86[8]; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v87; // [rsp+100h] [rbp+0h]
  char v88[8]; // [rsp+108h] [rbp+8h] BYREF
  volatile signed __int32 *v89; // [rsp+110h] [rbp+10h]
  int v91; // [rsp+170h] [rbp+70h] BYREF

  v91 = 0;
  v3 = a2;
  v4 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareArpOffload::WriteIpv4ToHardware",
             (__int64)a1);
      if ( v7 )
        v5 = v7;
    }
  }
  v91 = 0;
  v8 = sub_14002A414(a1, &v91);
  if ( v8 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = &unk_1400D44E0;
      v10 = &unk_1400D44E0;
      v11 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v72) + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v70);
      LODWORD(v65) = v8;
      LOBYTE(v13) = 2;
      v14 = *(void **)(*(_QWORD *)v12 + 16LL);
      if ( v14 )
        v9 = v14;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v13,
        10,
        21,
        (__int64)&unk_1400D6318,
        (__int64)v9,
        (__int64)v10,
        (__int64)L"GetFreeIp4atIndex(freeIndex)",
        v65);
      v3 = a2;
      LOBYTE(v4) = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v15 = v71;
      LOBYTE(v4) = v4 & 0xFD;
      if ( v71 )
      {
        if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v16 = v73;
      if ( v73 )
      {
        if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    sub_140008774((int)a1, (__int64)L"GetFreeIp4atIndex(freeIndex)", 152, 47, v8);
    goto LABEL_120;
  }
  v17 = *(unsigned int *)sub_1400884D0(*v3);
  v18 = a1[46];
  v19 = *(_QWORD *)(v18 + 8);
  v20 = (_DWORD *)(v18 + 20);
  if ( !v19 || *v20 )
  {
    v8 = -1073741130;
    if ( *v20 != 3 )
      v8 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v54 = &unk_1400D44E0;
      v55 = &unk_1400D44E0;
      v56 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *, __int64))(a1[7] + 16LL))(
                                    a1 + 7,
                                    v88,
                                    v17)
                     + 16LL);
      if ( v56 )
        v55 = v56;
      v57 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v86);
      LODWORD(v65) = v8;
      LOBYTE(v58) = 2;
      v59 = *(void **)(*(_QWORD *)v57 + 16LL);
      if ( v59 )
        v54 = v59;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v58,
        10,
        22,
        (__int64)&unk_1400D6318,
        (__int64)v54,
        (__int64)v55,
        (__int64)L"m_mmioAccessor->WriteRegisterSafe(ip4atOffset, ip4atValue)",
        v65);
      v3 = a2;
      LOBYTE(v4) = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v60 = v87;
      LOBYTE(v4) = v4 & 0xF7;
      if ( v87 )
      {
        if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v60 + 8LL))(v60, v19, v17);
          if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v61 = v89;
      if ( v89 )
      {
        if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v61 + 8LL))(v61, v19, v17);
          if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 16LL))(v61);
        }
      }
    }
    sub_140028E54((int)a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(ip4atOffset, ip4atValue)", 158, 47, v8);
LABEL_120:
    if ( v5 )
    {
      sub_14000BFA4(v5);
      ExFreePool(v5);
    }
    v53 = (volatile signed __int32 *)v3[1];
    if ( !v53 )
      return v8;
    if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) != 1 )
      return v8;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
    if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) != 1 )
      return v8;
    goto LABEL_125;
  }
  *(_DWORD *)((unsigned int)(8 * v91 + 22592) + v19) = v17;
  _InterlockedOr(v62, 0);
  v21 = &unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(PVOID)))(*(_QWORD *)*a2 + 24LL))(*a2, &v66);
    v23 = &unk_1400D44E0;
    if ( *(_QWORD *)(v22 + 16) )
      v23 = *(void **)(v22 + 16);
    v24 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v76);
    v25 = &unk_1400D44E0;
    v26 = *(_QWORD *)(a1[22] + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)v24 + 16LL) )
      v25 = *(void **)(*(_QWORD *)v24 + 16LL);
    v27 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v74);
    v65 = (__int64)v23;
    v28 = &unk_1400D44E0;
    v29 = *(void **)(*(_QWORD *)v27 + 16LL);
    if ( v29 )
      v28 = v29;
    v63 = (__int64)v28;
    LOBYTE(v28) = 4;
    sub_1400A9338(v26, (_DWORD)v28, 10, 23, (__int64)&unk_1400D6318, v63, (__int64)v25, (__int64)qword_1400B7720, v65);
    v4 = 112;
  }
  if ( (v4 & 0x40) != 0 )
  {
    v30 = v75;
    v4 &= ~0x40u;
    if ( v75 )
    {
      if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
      }
    }
  }
  if ( (v4 & 0x20) != 0 )
  {
    v31 = v77;
    v4 &= ~0x20u;
    if ( v77 )
    {
      if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
      }
    }
  }
  if ( (v4 & 0x10) != 0 )
  {
    v4 &= ~0x10u;
    v66 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
    P = 0LL;
    v68 = 0LL;
    v69 = 0LL;
  }
  v32 = a1[46];
  v33 = *(_QWORD *)(v32 + 8);
  if ( !v33 || *(_DWORD *)(v32 + 20) )
  {
    v43 = -1073741661;
    if ( *(_DWORD *)(v32 + 20) == 3 )
      v43 = -1073741130;
    v8 = v43;
LABEL_79:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v4 |= 0x180u;
      v44 = &unk_1400D44E0;
      v45 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v84) + 16LL);
      if ( v45 )
        v44 = v45;
      v46 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v82);
      LODWORD(v65) = v8;
      v47 = &unk_1400D44E0;
      v48 = *(void **)(*(_QWORD *)v46 + 16LL);
      v49 = a1[22];
      if ( v48 )
        v47 = v48;
      v64 = L"m_mmioAccessor->SetMaskSafe(0x05838, (0x1 << (freeIndex)))";
      v50 = *(_QWORD *)(v49 + 16);
      v63 = (__int64)v47;
      LOBYTE(v47) = 2;
      sub_1400A5E80(
        v50,
        (_DWORD)v47,
        10,
        24,
        (__int64)&unk_1400D6318,
        v63,
        (__int64)v44,
        (__int64)L"m_mmioAccessor->SetMaskSafe(0x05838, (0x1 << (freeIndex)))",
        v65);
    }
    if ( (v4 & 0x100) != 0 )
    {
      v51 = v83;
      if ( v83 )
      {
        if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
          if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
        }
      }
    }
    if ( (v4 & 0x80u) != 0 )
    {
      v52 = v85;
      if ( v85 )
      {
        if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
          if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
        }
      }
    }
    sub_140028E54((int)a1, (__int64)L"m_mmioAccessor->SetMaskSafe(0x05838, (0x1 << (freeIndex)))", 162, 47, v8);
    if ( v5 )
    {
      sub_14000BFA4(v5);
      ExFreePool(v5);
    }
    v53 = (volatile signed __int32 *)a2[1];
    if ( !v53 )
      return v8;
    if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) != 1 )
      return v8;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
    if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) != 1 )
      return v8;
LABEL_125:
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
    return v8;
  }
  v34 = *(_DWORD *)(v33 + 22584);
  if ( v34 == -1 && *(_DWORD *)(*(_QWORD *)(v32 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 8LL))(v32, 3LL);
    v8 = -1073741130;
    goto LABEL_79;
  }
  *(_DWORD *)(*(_QWORD *)(v32 + 8) + 22584LL) = (1 << v91) | v34;
  _InterlockedOr(v62, 0);
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v4 |= 0x600u;
    v35 = &unk_1400D44E0;
    v36 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v80) + 16LL);
    if ( v36 )
      v35 = v36;
    v37 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v78) + 16LL);
    if ( v37 )
      v21 = v37;
    LOBYTE(v38) = 4;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      v38,
      10,
      25,
      (__int64)&unk_1400D6318,
      (__int64)v21,
      (__int64)v35,
      (__int64)qword_1400B7720,
      *(_DWORD *)(*(_QWORD *)(a1[46] + 8LL) + 22584LL));
  }
  if ( (v4 & 0x400) != 0 )
  {
    v39 = v79;
    v4 &= ~0x400u;
    if ( v79 )
    {
      if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
        if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
      }
    }
  }
  if ( (v4 & 0x200) != 0 )
  {
    v40 = v81;
    if ( v81 )
    {
      if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
        if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
      }
    }
  }
  if ( v5 )
  {
    sub_14000BFA4(v5);
    ExFreePool(v5);
  }
  v41 = (volatile signed __int32 *)a2[1];
  if ( v41 )
  {
    if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
      if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
    }
  }
  return 0LL;
}
