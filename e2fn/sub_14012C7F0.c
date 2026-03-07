__int64 __fastcall sub_14012C7F0(__int64 a1, int a2, int a3)
{
  __int16 v3; // r14
  __int64 *v4; // rbx
  int v7; // esi
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  const wchar_t *v10; // r12
  __int64 v11; // rax
  void *v12; // rsi
  const wchar_t *v13; // rdi
  const wchar_t *v14; // rax
  __int64 v15; // rax
  const wchar_t *v16; // rdx
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  const wchar_t *v20; // rsi
  const wchar_t *v21; // rax
  const wchar_t *v22; // rdi
  const wchar_t *v23; // rax
  __int64 v24; // rbx
  const wchar_t *v25; // r9
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  unsigned int v28; // r15d
  const wchar_t *v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rax
  const wchar_t *v32; // rdx
  const wchar_t *v33; // rax
  volatile signed __int32 *v34; // rbx
  volatile signed __int32 *v35; // rbx
  int v36; // r8d
  const wchar_t *v37; // rsi
  const wchar_t *v38; // rsi
  const wchar_t *v39; // rax
  const wchar_t *v40; // rax
  volatile signed __int32 *v41; // rbx
  volatile signed __int32 *v42; // rbx
  int v43; // r8d
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rax
  const wchar_t *v47; // rdx
  const wchar_t *v48; // rax
  volatile signed __int32 *v49; // rbx
  volatile signed __int32 *v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rcx
  const wchar_t *v53; // rsi
  const wchar_t *v54; // rax
  __int64 v55; // rdi
  const wchar_t *v56; // rax
  volatile signed __int32 *v57; // rbx
  volatile signed __int32 *v58; // rbx
  const wchar_t *v59; // rax
  const wchar_t *v60; // rax
  volatile signed __int32 *v61; // rbx
  volatile signed __int32 *v62; // rbx
  __int64 v64; // [rsp+48h] [rbp-B8h]
  __int64 *v65; // [rsp+50h] [rbp-B0h]
  char v66[8]; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v67; // [rsp+60h] [rbp-A0h]
  char v68[8]; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v69; // [rsp+70h] [rbp-90h]
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
  char v90[8]; // [rsp+118h] [rbp+18h] BYREF
  volatile signed __int32 *v91; // [rsp+120h] [rbp+20h]
  char v92[8]; // [rsp+128h] [rbp+28h] BYREF
  volatile signed __int32 *v93; // [rsp+130h] [rbp+30h]
  __int64 (__fastcall **v94)(PVOID); // [rsp+138h] [rbp+38h] BYREF
  PVOID P; // [rsp+148h] [rbp+48h]
  __int64 (__fastcall **v96)(PVOID); // [rsp+160h] [rbp+60h] BYREF
  PVOID v97; // [rsp+170h] [rbp+70h]

  v3 = 0;
  v4 = 0LL;
  v7 = a2;
  v65 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_1400736C0(Pool2, (__int64)L"framework::DeviceD0EntryFlows::EvtD0Entry", a1 - 352);
      if ( v9 )
        v4 = v9;
      v65 = v4;
    }
  }
  v10 = (const wchar_t *)&unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v11 = sub_1400748E4((__int64)&v94, a3);
    v12 = &unk_1400D44E0;
    if ( *(_QWORD *)(v11 + 16) )
      v12 = *(void **)(v11 + 16);
    v13 = (const wchar_t *)&unk_1400D44E0;
    v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                           a1 - 296,
                                           v68)
                            + 16LL);
    if ( v14 )
      v13 = v14;
    v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v66);
    v64 = (__int64)v12;
    v7 = a2;
    v16 = (const wchar_t *)&unk_1400D44E0;
    v17 = *(const wchar_t **)(*(_QWORD *)v15 + 16LL);
    if ( v17 )
      v16 = v17;
    sub_1400A8E20(
      *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
      4u,
      8u,
      0xAu,
      (__int64)&unk_1400D9718,
      v16,
      v13,
      (const wchar_t *)qword_14014EC70,
      a2,
      v64);
    v3 = 7;
  }
  if ( (v3 & 4) != 0 )
  {
    v18 = v67;
    v3 &= ~4u;
    if ( v67 )
    {
      if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  if ( (v3 & 2) != 0 )
  {
    v19 = v69;
    v3 &= ~2u;
    if ( v69 )
    {
      if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
  }
  if ( (v3 & 1) != 0 )
  {
    v3 &= ~1u;
    v94 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
  }
  switch ( a3 )
  {
    case 0:
      v29 = (const wchar_t *)(a1 - 352);
      v51 = *(_QWORD *)(a1 - 352);
      v52 = a1 - 352;
      if ( v7 == 5 )
      {
        v28 = (*(__int64 (__fastcall **)(__int64))(v51 + 40))(v52);
        if ( v28 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            LOBYTE(v3) = v3 | 0x18;
            v53 = (const wchar_t *)&unk_1400D44E0;
            v54 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296)
                                                                                            + 24LL))(
                                                   a1 - 296,
                                                   v86)
                                    + 16LL);
            if ( v54 )
              v53 = v54;
            v55 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
            v56 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296)
                                                                                            + 16LL))(
                                                   a1 - 296,
                                                   v88)
                                    + 16LL);
            if ( v56 )
              v10 = v56;
            sub_1400A5E80(v55, 2u, 8u, 0xBu, (__int64)&unk_1400D9718, v53, v10, L"D0EntryInitial()");
            v29 = (const wchar_t *)(a1 - 352);
          }
          if ( (v3 & 0x10) != 0 )
          {
            v57 = v87;
            LOBYTE(v3) = v3 & 0xEF;
            if ( v87 )
            {
              if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
                if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
              }
            }
          }
          if ( (v3 & 8) != 0 )
          {
            v58 = v89;
            if ( v89 )
            {
              if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
                if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
              }
            }
          }
          v36 = 134;
          goto LABEL_72;
        }
LABEL_147:
        v28 = 0;
        goto LABEL_148;
      }
      v28 = (*(__int64 (__fastcall **)(__int64))(v51 + 48))(v52);
      if ( !v28 )
        goto LABEL_147;
      v37 = L"D0EntryFromS0()";
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        LOBYTE(v3) = v3 | 0x60;
        v29 = (const wchar_t *)&unk_1400D44E0;
        v59 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v92)
                                + 16LL);
        if ( v59 )
          v29 = v59;
        v60 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               v90)
                                + 16LL);
        if ( v60 )
          v10 = v60;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          2u,
          8u,
          0xCu,
          (__int64)&unk_1400D9718,
          v10,
          v29,
          L"D0EntryFromS0()");
        LODWORD(v29) = a1 - 352;
      }
      if ( (v3 & 0x40) != 0 )
      {
        v61 = v91;
        LOBYTE(v3) = v3 & 0xBF;
        if ( v91 )
        {
          if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
            if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 16LL))(v61);
          }
        }
      }
      if ( (v3 & 0x20) != 0 )
      {
        v62 = v93;
        if ( v93 )
        {
          if ( _InterlockedExchangeAdd(v93 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 8LL))(v62);
            if ( _InterlockedExchangeAdd(v62 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 16LL))(v62);
          }
        }
      }
      v43 = 138;
LABEL_146:
      sub_140011154((int)v29, (__int64)v37, v43, 76, v28);
      goto LABEL_148;
    case 1:
      LODWORD(v29) = a1 - 352;
      v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 352) + 56LL))(a1 - 352);
      if ( !v28 )
        goto LABEL_147;
      v37 = L"D0EntryFromS3()";
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v3 |= 0x180u;
        v44 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
        v45 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v82);
        v46 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(a1 - 296, v84);
        v47 = (const wchar_t *)&unk_1400D44E0;
        v48 = *(const wchar_t **)(*(_QWORD *)v46 + 16LL);
        if ( v48 )
          v47 = v48;
        if ( *(_QWORD *)(v45 + 16) )
          v10 = *(const wchar_t **)(v45 + 16);
        sub_1400A5E80(v44, 2u, 8u, 0xDu, (__int64)&unk_1400D9718, v10, v47, L"D0EntryFromS3()");
        LODWORD(v29) = a1 - 352;
        v37 = L"D0EntryFromS3()";
      }
      if ( (v3 & 0x100) != 0 )
      {
        v49 = v83;
        if ( v83 )
        {
          if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
            if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
          }
        }
      }
      if ( (v3 & 0x80u) != 0 )
      {
        v50 = v85;
        if ( v85 )
        {
          if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
            if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
          }
        }
      }
      v43 = 143;
      goto LABEL_146;
    case 2:
      LODWORD(v29) = a1 - 352;
      v28 = sub_14012BDC4(a1 - 352);
      if ( !v28 )
        goto LABEL_147;
      v37 = L"D0EntryFromS4()";
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v3 |= 0x600u;
        v38 = (const wchar_t *)&unk_1400D44E0;
        v39 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               v78)
                                + 16LL);
        if ( v39 )
          v38 = v39;
        v29 = *(const wchar_t **)(*(_QWORD *)(a1 - 176) + 16LL);
        v40 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v80)
                                + 16LL);
        if ( v40 )
          v10 = v40;
        sub_1400A5E80((__int64)v29, 2u, 8u, 0xEu, (__int64)&unk_1400D9718, v38, v10, L"D0EntryFromS4()");
        LODWORD(v29) = a1 - 352;
        v37 = L"D0EntryFromS4()";
      }
      if ( (v3 & 0x400) != 0 )
      {
        v41 = v79;
        v3 &= ~0x400u;
        if ( v79 )
        {
          if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
            if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
          }
        }
      }
      if ( (v3 & 0x200) != 0 )
      {
        v42 = v81;
        if ( v81 )
        {
          if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
            if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
          }
        }
      }
      v43 = 146;
      goto LABEL_146;
  }
  if ( (unsigned int)(a3 - 3) < 2 )
  {
    v29 = (const wchar_t *)(a1 - 352);
    v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 352) + 40LL))(a1 - 352);
    if ( v28 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v3 |= 0x1800u;
        v30 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(a1 - 296, v76);
        v31 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v74);
        v32 = (const wchar_t *)&unk_1400D44E0;
        v33 = *(const wchar_t **)(*(_QWORD *)v31 + 16LL);
        if ( v33 )
          v32 = v33;
        if ( *(_QWORD *)(v30 + 16) )
          v10 = *(const wchar_t **)(v30 + 16);
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          2u,
          8u,
          0xFu,
          (__int64)&unk_1400D9718,
          v32,
          v10,
          L"D0EntryInitial()");
        v29 = (const wchar_t *)(a1 - 352);
      }
      if ( (v3 & 0x1000) != 0 )
      {
        v34 = v75;
        v3 &= ~0x1000u;
        if ( v75 )
        {
          if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
            if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
          }
        }
      }
      if ( (v3 & 0x800) != 0 )
      {
        v35 = v77;
        if ( v77 )
        {
          if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
            if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
          }
        }
      }
      v36 = 154;
LABEL_72:
      sub_1400731B8((__int64)v29, (__int64)L"D0EntryInitial()", v36, 76, v28);
      goto LABEL_148;
    }
    goto LABEL_147;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v3 |= 0xE000u;
    v20 = (const wchar_t *)&unk_1400D44E0;
    v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                           a1 - 296,
                                           v72)
                            + 16LL);
    if ( v21 )
      v20 = v21;
    v22 = (const wchar_t *)&unk_1400D44E0;
    v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                           a1 - 296,
                                           v70)
                            + 16LL);
    if ( v23 )
      v22 = v23;
    v24 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
    v25 = *(const wchar_t **)(sub_1400748E4((__int64)&v96, a3) + 16);
    if ( v25 )
      v10 = v25;
    sub_1400A9338(v24, 2u, 8u, 0x10u, (__int64)&unk_1400D9718, v22, v20, (const wchar_t *)qword_14014EC70, (__int64)v10);
  }
  if ( v3 < 0 )
  {
    v26 = v71;
    v3 &= ~0x8000u;
    if ( v71 )
    {
      if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
      }
    }
  }
  if ( (v3 & 0x4000) != 0 )
  {
    v27 = v73;
    v3 &= ~0x4000u;
    if ( v73 )
    {
      if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
  }
  if ( (v3 & 0x2000) != 0 )
  {
    v96 = &off_1400D41D0;
    if ( v97 )
      ExFreePool(v97);
  }
  v28 = -1073741637;
LABEL_148:
  if ( v65 )
  {
    sub_140073F78(v65);
    ExFreePool(v65);
  }
  return v28;
}
