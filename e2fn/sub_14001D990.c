__int64 __fastcall sub_14001D990(_QWORD *a1)
{
  __int64 v1; // r15
  __int64 *v2; // rsi
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // r12d
  void *v7; // rdi
  void *v8; // rax
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  void *v18; // rdi
  void *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rax
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rbx
  void *v26; // rdi
  void *v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rax
  volatile signed __int32 *v32; // rbx
  volatile signed __int32 *v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rbx
  volatile signed __int32 *v37; // rsi
  void *v38; // rdi
  void *v39; // rax
  __int64 v40; // rax
  int v41; // edx
  __int64 v42; // rax
  volatile signed __int32 *v43; // rbx
  volatile signed __int32 *v44; // rbx
  volatile signed __int32 *v45; // rbx
  void *v46; // rdi
  void *v47; // rax
  __int64 v48; // rax
  int v49; // edx
  __int64 v50; // rax
  volatile signed __int32 *v51; // rbx
  volatile signed __int32 *v52; // rbx
  void *v53; // rdi
  void *v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rax
  int v57; // edx
  __int64 v58; // rax
  volatile signed __int32 *v59; // rbx
  volatile signed __int32 *v60; // rbx
  signed __int32 v62[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v63; // [rsp+38h] [rbp-D0h]
  const wchar_t *v64; // [rsp+40h] [rbp-C8h]
  unsigned int v65; // [rsp+48h] [rbp-C0h]
  __int64 v66; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v67; // [rsp+60h] [rbp-A8h]
  __int64 v68; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v69; // [rsp+70h] [rbp-98h]
  __int64 v70; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v71; // [rsp+80h] [rbp-88h]
  char v72[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v73; // [rsp+90h] [rbp-78h]
  char v74[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v75; // [rsp+A0h] [rbp-68h]
  char v76[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v77; // [rsp+B0h] [rbp-58h]
  char v78[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v79; // [rsp+C0h] [rbp-48h]
  char v80[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v81; // [rsp+D0h] [rbp-38h]
  char v82[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v83; // [rsp+E0h] [rbp-28h]
  char v84[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v85; // [rsp+F0h] [rbp-18h]
  char v86[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v87; // [rsp+100h] [rbp-8h]
  char v88[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v89; // [rsp+110h] [rbp+8h]
  char v90[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v91; // [rsp+120h] [rbp+18h]
  __int64 *v92; // [rsp+160h] [rbp+58h]

  LOWORD(v1) = 0;
  v2 = 0LL;
  v92 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnMsixInterruptsFactory::EvtD0Entry", (__int64)a1);
      if ( v5 )
        v2 = v5;
      v92 = v2;
    }
  }
  v6 = sub_14001D754(a1);
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v1 = (__int64)&unk_1400D44E0;
      v7 = &unk_1400D44E0;
      v8 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a1[7] + 16LL))(a1 + 7, &v70) + 16LL);
      if ( v8 )
        v7 = v8;
      v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a1[7] + 24LL))(a1 + 7, &v68);
      v65 = v6;
      LOBYTE(v10) = 2;
      v11 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
      if ( v11 )
        v1 = v11;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v10,
        10,
        25,
        (__int64)&unk_1400D5958,
        v1,
        (__int64)v7,
        (__int64)L"ConfigGpie()",
        v65);
      LOBYTE(v1) = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v12 = v69;
      LOBYTE(v1) = v1 & 0xFD;
      if ( v69 )
      {
        if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v13 = v71;
      if ( v71 )
      {
        if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_14000AD10((int)a1, (__int64)L"ConfigGpie()", 220, 65, v6);
  }
  else
  {
    v14 = a1[47];
    v15 = *(_QWORD *)(v14 + 8);
    if ( !v15 || *(_DWORD *)(v14 + 20) )
    {
      v6 = -1073741130;
      if ( *(_DWORD *)(v14 + 20) != 3 )
        v6 = -1073741661;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v1 = (__int64)&unk_1400D44E0;
        v53 = &unk_1400D44E0;
        v54 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v90) + 16LL);
        if ( v54 )
          v53 = v54;
        v55 = *(_QWORD *)(a1[22] + 16LL);
        v56 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v88);
        v65 = v6;
        LOBYTE(v57) = 2;
        v58 = *(_QWORD *)(*(_QWORD *)v56 + 16LL);
        if ( v58 )
          v1 = v58;
        sub_1400A5E80(
          v55,
          v57,
          10,
          26,
          (__int64)&unk_1400D5958,
          v1,
          (__int64)v53,
          (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x01528, sc_interruptRegisterCleanupMask)",
          v65);
        v2 = v92;
        LOBYTE(v1) = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v59 = v89;
        LOBYTE(v1) = v1 & 0xF7;
        if ( v89 )
        {
          if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
            if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v60 = v91;
        if ( v91 )
        {
          if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
            if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
          }
        }
      }
      sub_14000A7E0(
        (int)a1,
        (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x01528, sc_interruptRegisterCleanupMask)",
        223,
        65,
        v6);
    }
    else
    {
      *(_DWORD *)(v15 + 5416) = -1;
      _InterlockedOr(v62, 0);
      v16 = a1[47];
      v17 = *(_QWORD *)(v16 + 8);
      if ( !v17 || *(_DWORD *)(v16 + 20) )
      {
        v6 = -1073741130;
        if ( *(_DWORD *)(v16 + 20) != 3 )
          v6 = -1073741661;
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v1 = (__int64)&unk_1400D44E0;
          v46 = &unk_1400D44E0;
          v47 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v86) + 16LL);
          if ( v47 )
            v46 = v47;
          v48 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v84);
          v65 = v6;
          LOBYTE(v49) = 2;
          v50 = *(_QWORD *)(*(_QWORD *)v48 + 16LL);
          if ( v50 )
            v1 = v50;
          sub_1400A5E80(
            *(_QWORD *)(a1[22] + 16LL),
            v49,
            10,
            27,
            (__int64)&unk_1400D5958,
            v1,
            (__int64)v46,
            (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x000E0, 0)",
            v65);
          LOBYTE(v1) = 48;
        }
        if ( (v1 & 0x20) != 0 )
        {
          v51 = v85;
          LOBYTE(v1) = v1 & 0xDF;
          if ( v85 )
          {
            if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
              if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
            }
          }
        }
        if ( (v1 & 0x10) != 0 )
        {
          v52 = v87;
          if ( v87 )
          {
            if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
              if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
            }
          }
        }
        sub_1400190D0((int)a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x000E0, 0)", 226, 65, v6);
      }
      else
      {
        *(_DWORD *)(v17 + 224) = 0;
        _InterlockedOr(v62, 0);
        v6 = sub_140054164(a1[51]);
        if ( v6 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v1 = (__int64)&unk_1400D44E0;
            v18 = &unk_1400D44E0;
            v19 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v72) + 16LL);
            if ( v19 )
              v18 = v19;
            v20 = *(_QWORD *)(a1[22] + 16LL);
            v21 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v74);
            v65 = v6;
            LOBYTE(v22) = 2;
            v23 = *(_QWORD *)(*(_QWORD *)v21 + 16LL);
            if ( v23 )
              v1 = v23;
            sub_1400A5E80(
              v20,
              v22,
              10,
              28,
              (__int64)&unk_1400D5958,
              (__int64)v18,
              v1,
              (__int64)L"m_interruptVectorAllocator->EvtD0Entry()",
              v65);
            v2 = v92;
            LOBYTE(v1) = -64;
          }
          if ( (v1 & 0x80u) != 0LL )
          {
            v24 = v73;
            LOBYTE(v1) = v1 & 0x7F;
            if ( v73 )
            {
              if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
                if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
              }
            }
          }
          if ( (v1 & 0x40) != 0 )
          {
            v25 = v75;
            if ( v75 )
            {
              if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
                if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
              }
            }
          }
          sub_140009320((int)a1, (__int64)L"m_interruptVectorAllocator->EvtD0Entry()", 228, 65, v6);
        }
        else
        {
          v6 = sub_14004FCF8(a1[53]);
          if ( v6 )
          {
            if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            {
              v1 = (__int64)&unk_1400D44E0;
              v26 = &unk_1400D44E0;
              v27 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v76)
                             + 16LL);
              if ( v27 )
                v26 = v27;
              v28 = *(_QWORD *)(a1[22] + 16LL);
              v29 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v78);
              v65 = v6;
              LOBYTE(v30) = 2;
              v31 = *(_QWORD *)(*(_QWORD *)v29 + 16LL);
              if ( v31 )
                v1 = v31;
              sub_1400A5E80(
                v28,
                v30,
                10,
                29,
                (__int64)&unk_1400D5958,
                (__int64)v26,
                v1,
                (__int64)L"m_interruptCauseRegister->EvtD0Entry()",
                v65);
              v2 = v92;
              LOWORD(v1) = 768;
            }
            if ( (v1 & 0x200) != 0 )
            {
              v32 = v77;
              LOWORD(v1) = v1 & 0xFDFF;
              if ( v77 )
              {
                if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
                  if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
                }
              }
            }
            if ( (v1 & 0x100) != 0 )
            {
              v33 = v79;
              if ( v79 )
              {
                if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
                  if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
                }
              }
            }
            sub_140009088((int)a1, (__int64)L"m_interruptCauseRegister->EvtD0Entry()", 230, 65, v6);
          }
          else
          {
            v34 = a1[57];
            v35 = a1[56];
            if ( !v34 || (v36 = v35 + 16 * v34, v35 == v36) )
            {
LABEL_74:
              v6 = 0;
            }
            else
            {
              while ( 1 )
              {
                sub_1400A27D4(&v66, v35);
                v6 = sub_14004D68C(v66);
                if ( v6 )
                  break;
                if ( v67 )
                {
                  if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
                  {
                    v37 = v67;
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 8LL))(v67);
                    if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 16LL))(v67);
                  }
                }
                v35 += 16LL;
                if ( v35 == v36 )
                {
                  v2 = v92;
                  goto LABEL_74;
                }
              }
              if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
              {
                v1 = (__int64)&unk_1400D44E0;
                v38 = &unk_1400D44E0;
                v39 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v82)
                               + 16LL);
                if ( v39 )
                  v38 = v39;
                v40 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v80);
                v65 = v6;
                v64 = L"interruptDispatcher->EvtD0Entry()";
                LOBYTE(v41) = 2;
                v63 = (__int64)v38;
                v42 = *(_QWORD *)(*(_QWORD *)v40 + 16LL);
                if ( v42 )
                  v1 = v42;
                sub_1400A5E80(
                  *(_QWORD *)(a1[22] + 16LL),
                  v41,
                  10,
                  30,
                  (__int64)&unk_1400D5958,
                  v1,
                  v63,
                  (__int64)v64,
                  v65);
                LOWORD(v1) = 3072;
              }
              if ( (v1 & 0x800) != 0 )
              {
                v43 = v81;
                LOWORD(v1) = v1 & 0xF7FF;
                if ( v81 )
                {
                  if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
                    if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
                  }
                }
              }
              if ( (v1 & 0x400) != 0 )
              {
                v44 = v83;
                if ( v83 )
                {
                  if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
                    if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
                  }
                }
              }
              sub_140008DF0((int)a1, (__int64)L"interruptDispatcher->EvtD0Entry()", 234, 65, v6);
              if ( v67 )
              {
                if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
                {
                  v45 = v67;
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 8LL))(v67);
                  if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 16LL))(v67);
                }
              }
              v2 = v92;
            }
          }
        }
      }
    }
  }
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
  return v6;
}
