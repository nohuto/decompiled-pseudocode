_QWORD *sub_14001B4C0(__int64 a1, _QWORD *a2, unsigned int a3, __int64 *a4, ...)
{
  char v4; // r14
  __int64 *v6; // r15
  __int64 *v7; // rsi
  unsigned int v8; // edi
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  void *v15; // rdx
  void *v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  int v19; // ebx
  void *v20; // rdi
  void *v21; // rax
  __int64 v22; // rax
  void *v23; // rdx
  void *v24; // rax
  volatile signed __int32 *v25; // rbx
  volatile signed __int32 *v26; // rbx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // rax
  void *v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  int v34; // edx
  void *v35; // rax
  void *v36; // rcx
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rbx
  __int64 v39; // rax
  unsigned __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  unsigned int v44; // edi
  void *v45; // rsi
  void *v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  int v49; // edx
  void *v50; // rax
  void *v51; // rcx
  volatile signed __int32 *v52; // rbx
  volatile signed __int32 *v53; // rbx
  volatile signed __int32 *v54; // rcx
  volatile signed __int32 *v55; // rbx
  volatile signed __int32 *v56; // rbx
  volatile signed __int32 *v57; // rbx
  __int64 v59; // [rsp+30h] [rbp-D8h]
  __int64 v60; // [rsp+30h] [rbp-D8h]
  __int64 v61; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v62; // [rsp+60h] [rbp-A8h]
  __int64 v63; // [rsp+68h] [rbp-A0h]
  __int64 v64; // [rsp+78h] [rbp-90h] BYREF
  int v65; // [rsp+80h] [rbp-88h]
  _QWORD v66[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 (__fastcall **v67)(PVOID); // [rsp+98h] [rbp-70h] BYREF
  PVOID P; // [rsp+A8h] [rbp-60h]
  __int64 v69; // [rsp+B0h] [rbp-58h]
  __int64 v70; // [rsp+B8h] [rbp-50h]
  __int64 (__fastcall **v71)(PVOID); // [rsp+C0h] [rbp-48h] BYREF
  PVOID v72; // [rsp+D0h] [rbp-38h]
  __int64 v73; // [rsp+D8h] [rbp-30h]
  __int64 v74; // [rsp+E0h] [rbp-28h]
  char v75[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v76; // [rsp+F0h] [rbp-18h]
  char v77[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v78; // [rsp+100h] [rbp-8h]
  char v79[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v80; // [rsp+110h] [rbp+8h]
  char v81[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v82; // [rsp+120h] [rbp+18h]
  char v83[8]; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v84; // [rsp+130h] [rbp+28h]
  char v85[8]; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v86; // [rsp+140h] [rbp+38h]
  char v87[8]; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v88; // [rsp+150h] [rbp+48h]
  char v89[8]; // [rsp+158h] [rbp+50h] BYREF
  volatile signed __int32 *v90; // [rsp+160h] [rbp+58h]
  __int64 (__fastcall **v91[2])(PVOID); // [rsp+168h] [rbp+60h] BYREF
  PVOID v92; // [rsp+178h] [rbp+70h]
  char v93[16]; // [rsp+190h] [rbp+88h] BYREF
  char v94[72]; // [rsp+1A0h] [rbp+98h] BYREF
  unsigned int v95; // [rsp+1F8h] [rbp+F0h] BYREF
  unsigned int v96; // [rsp+208h] [rbp+100h]
  __int64 *v97; // [rsp+210h] [rbp+108h]
  __int64 v98; // [rsp+218h] [rbp+110h] BYREF
  va_list va; // [rsp+218h] [rbp+110h]
  va_list va1; // [rsp+220h] [rbp+118h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v98 = va_arg(va1, _QWORD);
  v97 = a4;
  v96 = a3;
  v4 = 0;
  v95 = 0;
  v6 = 0LL;
  v7 = a4;
  v8 = a3;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14000BBDC(
              Pool2,
              (__int64)L"product_e2fn::ProductE2fnMsixInterruptsFactory::AllocateRxInterrupt",
              a1 - 352);
      if ( v11 )
        v6 = v11;
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v12 = &unk_1400D44E0;
    v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                  a1 - 296,
                                  v77)
                   + 16LL);
    if ( v13 )
      v12 = v13;
    v14 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v75);
    v15 = &unk_1400D44E0;
    v16 = *(void **)(*(_QWORD *)v14 + 16LL);
    if ( v16 )
      v15 = v16;
    v59 = (__int64)v15;
    LOBYTE(v15) = 4;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
      (_DWORD)v15,
      10,
      32,
      (__int64)&unk_1400D5958,
      v59,
      (__int64)v12,
      (__int64)qword_1400B7720,
      v96);
    v8 = v96;
    v4 = 3;
  }
  if ( (v4 & 2) != 0 )
  {
    v17 = v76;
    v4 &= ~2u;
    if ( v76 )
    {
      if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v18 = v78;
    v4 &= ~1u;
    if ( v78 )
    {
      if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  v19 = a1 - 352;
  if ( v98 )
    v19 = v98;
  if ( v8 < 4 )
  {
    v63 = v8 | 0xA00000000LL;
    v96 = dword_1400D5978[v8];
    v95 = v96;
    LODWORD(v98) = 2 * v8;
    v64 = v63;
    v65 = 10;
    sub_1400042F0((__int64)v91, (int *)&v64);
    v27 = sub_140018CA0((__int64)&v71, (__int64)L"Rx Queue ", v91);
    v28 = sub_140018EB4((__int64)&v67, v27, (__int64)L" Interrupt Control");
    sub_1400A7708((unsigned int)&v61, 808465712, v19, v28, (__int64)&v95, (__int64)va);
    v67 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
    P = 0LL;
    v69 = 0LL;
    v70 = 0LL;
    v71 = &off_1400D41D0;
    if ( v72 )
      ExFreePool(v72);
    v72 = 0LL;
    v73 = 0LL;
    v74 = 0LL;
    if ( v92 )
      ExFreePool(v92);
    v29 = v61;
    if ( v61 )
    {
      v39 = v7[1];
      v40 = v96;
      v7[1] = 0LL;
      v66[1] = v39;
      v41 = *v7;
      *v7 = 0LL;
      v66[0] = v41;
      if ( v40 >= *(_QWORD *)(a1 + 104) )
        sub_140072758(65LL, 569LL, v40, *(unsigned int *)(a1 + 104), 0);
      v63 = 16LL * (unsigned int)v40 + *(_QWORD *)(a1 + 96);
      v42 = sub_1400A5180(v93, a1 + 56);
      v43 = sub_1400A5180(v94, v63);
      v96 = sub_14004A6CC(v29, v43, v66, v42);
      v44 = v96;
      if ( v96 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v4 |= 0xC0u;
          v45 = &unk_1400D44E0;
          v46 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                        a1 - 296,
                                        v87)
                         + 16LL);
          if ( v46 )
            v45 = v46;
          v47 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
          v48 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(a1 - 296, v89);
          LOBYTE(v49) = 2;
          v50 = *(void **)(*(_QWORD *)v48 + 16LL);
          v51 = &unk_1400D44E0;
          if ( v50 )
            v51 = v50;
          sub_1400A5E80(
            v47,
            v49,
            10,
            35,
            (__int64)&unk_1400D5958,
            (__int64)v45,
            (__int64)v51,
            (__int64)L"interruptControl->Bind(m_interruptDispatchers.at(messageId), move(interruptAssertedCallback), m_int"
                      "erruptVectorAllocator)",
            v96);
          v7 = v97;
          v44 = v96;
        }
        if ( v4 < 0 )
        {
          v52 = v88;
          v4 &= ~0x80u;
          if ( v88 )
          {
            if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
              if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
            }
          }
        }
        if ( (v4 & 0x40) != 0 )
        {
          v53 = v90;
          if ( v90 )
          {
            if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
              if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
            }
          }
        }
        sub_140019368(
          a1 - 352,
          (__int64)L"interruptControl->Bind(m_interruptDispatchers.at(messageId), move(interruptAssertedCallback), m_inter"
                    "ruptVectorAllocator)",
          313,
          65,
          v44);
        v54 = v62;
        *a2 = 0LL;
        a2[1] = 0LL;
        if ( v54 )
        {
          if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
          {
            v55 = v62;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 8LL))(v62);
            if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 16LL))(v62);
          }
        }
        if ( v6 )
        {
          sub_14000BFA4(v6);
          ExFreePool(v6);
        }
        v56 = (volatile signed __int32 *)v7[1];
        if ( v56 && _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
          goto LABEL_103;
        return a2;
      }
      sub_1400A5180(a2, &v61);
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v4 |= 0x30u;
        v30 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(a1 - 296, v85);
        v31 = &unk_1400D44E0;
        v32 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
        if ( *(_QWORD *)(*(_QWORD *)v30 + 16LL) )
          v31 = *(void **)(*(_QWORD *)v30 + 16LL);
        v33 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v83);
        LOBYTE(v34) = 2;
        v35 = *(void **)(*(_QWORD *)v33 + 16LL);
        v36 = &unk_1400D44E0;
        if ( v35 )
          v36 = v35;
        sub_1400A3320(
          v32,
          v34,
          10,
          34,
          (__int64)&unk_1400D5958,
          (__int64)v36,
          (__int64)v31,
          (__int64)L"interruptControl");
        v7 = v97;
      }
      if ( (v4 & 0x20) != 0 )
      {
        v37 = v84;
        v4 &= ~0x20u;
        if ( v84 )
        {
          if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
            if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
          }
        }
      }
      if ( (v4 & 0x10) != 0 )
      {
        v38 = v86;
        if ( v86 )
        {
          if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
            if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
          }
        }
      }
      sub_14000B294(a1 - 352, (__int64)L"interruptControl", 307, 65);
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    if ( v62 )
    {
      if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
      {
        v57 = v62;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 8LL))(v62);
        if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 16LL))(v62);
      }
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v4 |= 0xCu;
      v20 = &unk_1400D44E0;
      v21 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v81)
                     + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v79);
      v23 = &unk_1400D44E0;
      v24 = *(void **)(*(_QWORD *)v22 + 16LL);
      if ( v24 )
        v23 = v24;
      v60 = (__int64)v23;
      LOBYTE(v23) = 2;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        (_DWORD)v23,
        10,
        33,
        (__int64)&unk_1400D5958,
        v60,
        (__int64)v20,
        (__int64)qword_1400B7720,
        v96);
    }
    if ( (v4 & 8) != 0 )
    {
      v25 = v80;
      v4 &= ~8u;
      if ( v80 )
      {
        if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v26 = v82;
      if ( v82 )
      {
        if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  if ( v6 )
  {
    sub_14000BFA4(v6);
    ExFreePool(v6);
  }
  v56 = (volatile signed __int32 *)v7[1];
  if ( v56 && _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
  {
LABEL_103:
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
    if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 16LL))(v56);
  }
  return a2;
}
