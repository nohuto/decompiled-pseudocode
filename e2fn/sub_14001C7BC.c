__int64 __fastcall sub_14001C7BC(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  _QWORD *v5; // r14
  __int64 *v6; // r13
  _QWORD *v7; // rdi
  __int64 *v8; // rsi
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rsi
  void *v20; // rdi
  void *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rax
  volatile signed __int32 *v25; // rbx
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rax
  unsigned int v37; // esi
  volatile signed __int32 *v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned int v42; // edi
  void *v43; // rdi
  void *v44; // rax
  __int64 v45; // rax
  int v46; // edx
  __int64 v47; // rax
  volatile signed __int32 *v48; // rbx
  volatile signed __int32 *v49; // rbx
  volatile signed __int32 *v50; // rbx
  volatile signed __int32 *v51; // rbx
  volatile signed __int32 *v52; // rbx
  __int64 v53; // rsi
  void *v54; // rdi
  void *v55; // rax
  __int64 v56; // rax
  int v57; // edx
  __int64 v58; // rax
  volatile signed __int32 *v59; // rbx
  volatile signed __int32 *v60; // rbx
  volatile signed __int32 *v61; // rbx
  volatile signed __int32 *v62; // rbx
  volatile signed __int32 *v63; // rbx
  volatile signed __int32 *v64; // rbx
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rsi
  void *v68; // rdi
  void *v69; // rax
  __int64 v70; // rax
  int v71; // edx
  __int64 v72; // rax
  volatile signed __int32 *v73; // rbx
  volatile signed __int32 *v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  void *v78; // rdi
  void *v79; // rax
  __int64 v80; // rax
  int v81; // edx
  __int64 v82; // rax
  volatile signed __int32 *v83; // rbx
  volatile signed __int32 *v84; // rbx
  volatile signed __int32 *v85; // rbx
  volatile signed __int32 *v86; // rbx
  volatile signed __int32 *v87; // rbx
  unsigned int v88; // [rsp+58h] [rbp-B0h]
  unsigned int v89; // [rsp+58h] [rbp-B0h]
  unsigned int v90; // [rsp+58h] [rbp-B0h]
  _QWORD *v91; // [rsp+60h] [rbp-A8h]
  __int64 v92; // [rsp+60h] [rbp-A8h]
  __int64 v93; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v94; // [rsp+70h] [rbp-98h]
  _QWORD v95[2]; // [rsp+78h] [rbp-90h] BYREF
  char v96[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v97; // [rsp+90h] [rbp-78h]
  char v98[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v99; // [rsp+A0h] [rbp-68h]
  char v100[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v101; // [rsp+B0h] [rbp-58h]
  char v102[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v103; // [rsp+C0h] [rbp-48h]
  char v104[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v105; // [rsp+D0h] [rbp-38h]
  char v106[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v107; // [rsp+E0h] [rbp-28h]
  char v108[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v109; // [rsp+F0h] [rbp-18h]
  char v110[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v111; // [rsp+100h] [rbp-8h]
  char v112[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v113; // [rsp+110h] [rbp+8h]
  char v114[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v115; // [rsp+120h] [rbp+18h]
  char v116[8]; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v117; // [rsp+130h] [rbp+28h]
  char v118[8]; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v119; // [rsp+140h] [rbp+38h]
  char v120[16]; // [rsp+148h] [rbp+40h] BYREF
  char v121[16]; // [rsp+158h] [rbp+50h] BYREF
  char v122[16]; // [rsp+168h] [rbp+60h] BYREF
  char v123[16]; // [rsp+178h] [rbp+70h] BYREF
  char v124[16]; // [rsp+188h] [rbp+80h] BYREF
  char v125[16]; // [rsp+198h] [rbp+90h] BYREF
  char v126[80]; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int v129; // [rsp+210h] [rbp+108h]

  LOWORD(v4) = 0;
  v5 = a1;
  v6 = 0LL;
  v7 = (_QWORD *)a4;
  v8 = (__int64 *)a2;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnMsixInterruptsFactory::Bind", (__int64)v5);
      if ( v10 )
        v6 = v10;
    }
  }
  if ( !*v8 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v4 = (__int64)&unk_1400D44E0;
      v11 = &unk_1400D44E0;
      v12 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v5[7] + 16LL))(v5 + 7, v98) + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = *(_QWORD *)(v5[22] + 16LL);
      v14 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v5[7] + 24LL))(v5 + 7, v96);
      LOBYTE(v15) = 2;
      v16 = *(_QWORD *)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v4 = v16;
      sub_1400A3320(v13, v15, 10, 16, (__int64)&unk_1400D5958, v4, (__int64)v11, (__int64)L"mmioAccessor");
      v8 = (__int64 *)a2;
      LOBYTE(v4) = 3;
      v7 = (_QWORD *)a4;
    }
    if ( (v4 & 2) != 0 )
    {
      v17 = v97;
      LOBYTE(v4) = v4 & 0xFD;
      if ( v97 )
      {
        if ( _InterlockedExchangeAdd(v97 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v18 = v99;
      if ( v99 )
      {
        if ( _InterlockedExchangeAdd(v99 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_14000BA2C((int)v5, (__int64)L"mmioAccessor", 156, 65);
LABEL_42:
    if ( v6 )
    {
      sub_14000BFA4(v6);
      ExFreePool(v6);
    }
    v27 = (volatile signed __int32 *)v8[1];
    if ( v27 )
    {
      if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
    v28 = *(volatile signed __int32 **)(a3 + 8);
    if ( v28 )
    {
      if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
      }
    }
    v29 = (volatile signed __int32 *)v7[1];
    if ( v29 && _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
    }
    return 3221225485LL;
  }
  v91 = v5 + 47;
  sub_1400A5B28(v5 + 47, v8);
  if ( !*v7 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v19 = *(_QWORD *)(v5[22] + 16LL);
      v4 = (__int64)&unk_1400D44E0;
      v20 = &unk_1400D44E0;
      v21 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v5[7] + 16LL))(v5 + 7, v102) + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v5[7] + 24LL))(v5 + 7, v100);
      LOBYTE(v23) = 2;
      v24 = *(_QWORD *)(*(_QWORD *)v22 + 16LL);
      if ( v24 )
        v4 = v24;
      sub_1400A3320(v19, v23, 10, 17, (__int64)&unk_1400D5958, v4, (__int64)v20, (__int64)L"osServices");
      v8 = (__int64 *)a2;
      LOBYTE(v4) = 12;
      v7 = (_QWORD *)a4;
    }
    if ( (v4 & 8) != 0 )
    {
      v25 = v101;
      LOBYTE(v4) = v4 & 0xF7;
      if ( v101 )
      {
        if ( _InterlockedExchangeAdd(v101 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v26 = v103;
      if ( v103 )
      {
        if ( _InterlockedExchangeAdd(v103 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    sub_14000B87C((int)v5, (__int64)L"osServices", 159, 65);
    goto LABEL_42;
  }
  sub_1400A5B28(v5 + 49, v7);
  v31 = v5[57];
  v32 = v5[56];
  if ( !v31 || (v33 = v32 + 16 * v31, v32 == v33) )
  {
LABEL_66:
    v92 = v5[59];
    if ( v5[57] <= 4uLL )
      sub_140072758(65LL, 569LL, 4LL, *((unsigned int *)v5 + 114), 0);
    v39 = sub_1400A5180(v123, v5[56] + 64LL);
    v40 = sub_1400A5180(v124, v5 + 51);
    v41 = sub_1400A5180(v125, v5 + 53);
    v89 = sub_140051320(v92, v41, v40, v39);
    v42 = v89;
    if ( v89 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v4 = (__int64)&unk_1400D44E0;
        v43 = &unk_1400D44E0;
        v44 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v5[7] + 16LL))(v5 + 7, v110) + 16LL);
        if ( v44 )
          v43 = v44;
        v45 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v5[7] + 24LL))(v5 + 7, v108);
        LOBYTE(v46) = 2;
        v47 = *(_QWORD *)(*(_QWORD *)v45 + 16LL);
        if ( v47 )
          v4 = v47;
        sub_1400A5E80(
          *(_QWORD *)(v5[22] + 16LL),
          v46,
          10,
          19,
          (__int64)&unk_1400D5958,
          v4,
          (__int64)v43,
          (__int64)L"m_otherInterruptsDispatcher->Bind(m_interruptCauseRegister, m_interruptVectorAllocator, m_interruptDi"
                    "spatchers.at(sc_otherInterruptsToMessageIdLookup))",
          v89);
        v42 = v89;
        LOBYTE(v4) = -64;
      }
      if ( (v4 & 0x80u) != 0LL )
      {
        v48 = v109;
        LOBYTE(v4) = v4 & 0x7F;
        if ( v109 )
        {
          if ( _InterlockedExchangeAdd(v109 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
            if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
          }
        }
      }
      if ( (v4 & 0x40) != 0 )
      {
        v49 = v111;
        if ( v111 )
        {
          if ( _InterlockedExchangeAdd(v111 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
            if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
          }
        }
      }
      sub_1400194B4(
        (int)v5,
        (__int64)L"m_otherInterruptsDispatcher->Bind(m_interruptCauseRegister, m_interruptVectorAllocator, m_interruptDisp"
                  "atchers.at(sc_otherInterruptsToMessageIdLookup))",
        174,
        65,
        v42);
    }
    else
    {
      v65 = v5[51];
      v66 = sub_1400A27D4(v126, v8);
      v90 = sub_140053DE8(v65, v66);
      v42 = v90;
      if ( v90 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v67 = *(_QWORD *)(v5[22] + 16LL);
          v4 = (__int64)&unk_1400D44E0;
          v68 = &unk_1400D44E0;
          v69 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v5[7] + 16LL))(v5 + 7, v114) + 16LL);
          if ( v69 )
            v68 = v69;
          v70 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v5[7] + 24LL))(v5 + 7, v112);
          LOBYTE(v71) = 2;
          v72 = *(_QWORD *)(*(_QWORD *)v70 + 16LL);
          if ( v72 )
            v4 = v72;
          sub_1400A5E80(
            v67,
            v71,
            10,
            20,
            (__int64)&unk_1400D5958,
            v4,
            (__int64)v68,
            (__int64)L"m_interruptVectorAllocator->Bind(mmioAccessor)",
            v90);
          v8 = (__int64 *)a2;
          LOWORD(v4) = 768;
          v42 = v90;
        }
        if ( (v4 & 0x200) != 0 )
        {
          v73 = v113;
          LOWORD(v4) = v4 & 0xFDFF;
          if ( v113 )
          {
            if ( _InterlockedExchangeAdd(v113 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 8LL))(v73);
              if ( _InterlockedExchangeAdd(v73 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 16LL))(v73);
            }
          }
        }
        if ( (v4 & 0x100) != 0 )
        {
          v74 = v115;
          if ( v115 )
          {
            if ( _InterlockedExchangeAdd(v115 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 8LL))(v74);
              if ( _InterlockedExchangeAdd(v74 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 16LL))(v74);
            }
          }
        }
        sub_140009704((int)v5, (__int64)L"m_interruptVectorAllocator->Bind(mmioAccessor)", 176, 65, v42);
      }
      else
      {
        v75 = v8[1];
        v76 = v5[53];
        v8[1] = 0LL;
        v95[1] = v75;
        v77 = *v8;
        *v8 = 0LL;
        v95[0] = v77;
        v129 = sub_14004F2F8(v76, v95);
        v42 = v129;
        if ( !v129 )
        {
          if ( v6 )
          {
            sub_14000BFA4(v6);
            ExFreePool(v6);
          }
          v85 = (volatile signed __int32 *)v8[1];
          if ( v85 )
          {
            if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 8LL))(v85);
              if ( _InterlockedExchangeAdd(v85 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 16LL))(v85);
            }
          }
          v86 = *(volatile signed __int32 **)(a3 + 8);
          if ( v86 )
          {
            if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v86 + 8LL))(v86);
              if ( _InterlockedExchangeAdd(v86 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v86 + 16LL))(v86);
            }
          }
          v87 = *(volatile signed __int32 **)(a4 + 8);
          if ( v87 )
          {
            if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
              if ( _InterlockedExchangeAdd(v87 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 16LL))(v87);
            }
          }
          return 0LL;
        }
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v4 = (__int64)&unk_1400D44E0;
          v78 = &unk_1400D44E0;
          v79 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v5[7] + 16LL))(v5 + 7, v118) + 16LL);
          if ( v79 )
            v78 = v79;
          v80 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v5[7] + 24LL))(v5 + 7, v116);
          LOBYTE(v81) = 2;
          v82 = *(_QWORD *)(*(_QWORD *)v80 + 16LL);
          if ( v82 )
            v4 = v82;
          sub_1400A5E80(
            *(_QWORD *)(v5[22] + 16LL),
            v81,
            10,
            21,
            (__int64)&unk_1400D5958,
            v4,
            (__int64)v78,
            (__int64)L"m_interruptCauseRegister->Bind(move(mmioAccessor))",
            v129);
          v42 = v129;
          LOWORD(v4) = 3072;
        }
        if ( (v4 & 0x800) != 0 )
        {
          v83 = v117;
          LOWORD(v4) = v4 & 0xF7FF;
          if ( v117 )
          {
            if ( _InterlockedExchangeAdd(v117 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v83 + 8LL))(v83);
              if ( _InterlockedExchangeAdd(v83 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v83 + 16LL))(v83);
            }
          }
        }
        if ( (v4 & 0x400) != 0 )
        {
          v84 = v119;
          if ( v119 )
          {
            if ( _InterlockedExchangeAdd(v119 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v84 + 8LL))(v84);
              if ( _InterlockedExchangeAdd(v84 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v84 + 16LL))(v84);
            }
          }
        }
        sub_14000F3C4((int)v5, (__int64)L"m_interruptCauseRegister->Bind(move(mmioAccessor))", 178, 65, v42);
      }
    }
    if ( v6 )
    {
      sub_14000BFA4(v6);
      ExFreePool(v6);
    }
    v50 = (volatile signed __int32 *)v8[1];
    if ( v50 )
    {
      if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
        if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
      }
    }
    v51 = *(volatile signed __int32 **)(a3 + 8);
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
        if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
      }
    }
    v52 = *(volatile signed __int32 **)(a4 + 8);
    if ( v52 )
    {
      if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
        if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
      }
    }
    return v42;
  }
  while ( 1 )
  {
    sub_1400A27D4(&v93, v32);
    v34 = sub_1400A27D4(v120, a4);
    v35 = sub_1400A27D4(v121, a3);
    v36 = sub_1400A27D4(v122, v91);
    v88 = sub_14004C518(v93, v36, v35, v34);
    v37 = v88;
    if ( v88 )
      break;
    if ( v94 )
    {
      if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
      {
        v38 = v94;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v94 + 8LL))(v94);
        if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v94 + 16LL))(v94);
      }
    }
    v32 += 16LL;
    if ( v32 == v33 )
    {
      v5 = a1;
      v8 = (__int64 *)a2;
      goto LABEL_66;
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v53 = *(_QWORD *)(a1[22] + 16LL);
    v4 = (__int64)&unk_1400D44E0;
    v54 = &unk_1400D44E0;
    v55 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v104) + 16LL);
    if ( v55 )
      v54 = v55;
    v56 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v106);
    LOBYTE(v57) = 2;
    v58 = *(_QWORD *)(*(_QWORD *)v56 + 16LL);
    if ( v58 )
      v4 = v58;
    sub_1400A5E80(
      v53,
      v57,
      10,
      18,
      (__int64)&unk_1400D5958,
      (__int64)v54,
      v4,
      (__int64)L"interruptDispatcher->Bind(m_mmioAccessor, interruptsPool, osServices)",
      v88);
    v37 = v88;
    LOBYTE(v4) = 48;
  }
  if ( (v4 & 0x20) != 0 )
  {
    v59 = v105;
    LOBYTE(v4) = v4 & 0xDF;
    if ( v105 )
    {
      if ( _InterlockedExchangeAdd(v105 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
        if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
      }
    }
  }
  if ( (v4 & 0x10) != 0 )
  {
    v60 = v107;
    if ( v107 )
    {
      if ( _InterlockedExchangeAdd(v107 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
        if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
      }
    }
  }
  sub_14001921C(
    (int)a1,
    (__int64)L"interruptDispatcher->Bind(m_mmioAccessor, interruptsPool, osServices)",
    168,
    65,
    v37);
  if ( v94 )
  {
    if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
    {
      v61 = v94;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v94 + 8LL))(v94);
      if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v94 + 16LL))(v94);
    }
  }
  if ( v6 )
  {
    sub_14000BFA4(v6);
    ExFreePool(v6);
  }
  v62 = *(volatile signed __int32 **)(a2 + 8);
  if ( v62 )
  {
    if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 8LL))(v62);
      if ( _InterlockedExchangeAdd(v62 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 16LL))(v62);
    }
  }
  v63 = *(volatile signed __int32 **)(a3 + 8);
  if ( v63 )
  {
    if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 8LL))(v63);
      if ( _InterlockedExchangeAdd(v63 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 16LL))(v63);
    }
  }
  v64 = *(volatile signed __int32 **)(a4 + 8);
  if ( v64 )
  {
    if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 8LL))(v64);
      if ( _InterlockedExchangeAdd(v64 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 16LL))(v64);
    }
  }
  return v37;
}
