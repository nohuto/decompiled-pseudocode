__int64 __fastcall sub_14012A2C0(__int64 a1, int a2, int a3)
{
  int v3; // r14d
  __int64 *v4; // r13
  int v6; // edi
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
  unsigned int v28; // esi
  int v29; // edi
  const wchar_t *v30; // rdi
  const wchar_t *v31; // rax
  const wchar_t *v32; // rax
  volatile signed __int32 *v33; // rbx
  volatile signed __int32 *v34; // rbx
  int v35; // edi
  const wchar_t *v36; // rdi
  const wchar_t *v37; // rax
  const wchar_t *v38; // rax
  volatile signed __int32 *v39; // rbx
  volatile signed __int32 *v40; // rbx
  int v41; // r8d
  const wchar_t *v42; // rdx
  const wchar_t *v43; // rdi
  const wchar_t *v44; // rax
  const wchar_t *v45; // rax
  volatile signed __int32 *v46; // rbx
  volatile signed __int32 *v47; // rbx
  const wchar_t *v48; // rdi
  const wchar_t *v49; // rax
  const wchar_t *v50; // rax
  volatile signed __int32 *v51; // rbx
  volatile signed __int32 *v52; // rbx
  int v53; // r13d
  __int64 v54; // rax
  __int64 v55; // rcx
  const wchar_t *v56; // rdi
  const wchar_t *v57; // rax
  const wchar_t *v58; // rax
  volatile signed __int32 *v59; // rbx
  volatile signed __int32 *v60; // rbx
  const wchar_t *v61; // rdi
  const wchar_t *v62; // rax
  const wchar_t *v63; // rax
  volatile signed __int32 *v64; // rbx
  volatile signed __int32 *v65; // rbx
  __int64 v67; // [rsp+50h] [rbp-B8h]
  __int64 v68; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v69; // [rsp+60h] [rbp-A8h]
  __int64 v70; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v71; // [rsp+70h] [rbp-98h]
  __int64 v72; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v73; // [rsp+80h] [rbp-88h]
  _BYTE v74[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v75; // [rsp+90h] [rbp-78h]
  _BYTE v76[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v77; // [rsp+A0h] [rbp-68h]
  _BYTE v78[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v79; // [rsp+B0h] [rbp-58h]
  _BYTE v80[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v81; // [rsp+C0h] [rbp-48h]
  _BYTE v82[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v83; // [rsp+D0h] [rbp-38h]
  _BYTE v84[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v85; // [rsp+E0h] [rbp-28h]
  _BYTE v86[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v87; // [rsp+F0h] [rbp-18h]
  _BYTE v88[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v89; // [rsp+100h] [rbp-8h]
  _BYTE v90[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v91; // [rsp+110h] [rbp+8h]
  _BYTE v92[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v93; // [rsp+120h] [rbp+18h]
  _BYTE v94[8]; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v95; // [rsp+130h] [rbp+28h]
  _BYTE v96[8]; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v97; // [rsp+140h] [rbp+38h]
  _BYTE v98[8]; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v99; // [rsp+150h] [rbp+48h]
  __int64 (__fastcall **v100)(PVOID); // [rsp+158h] [rbp+50h] BYREF
  PVOID P; // [rsp+168h] [rbp+60h]
  __int64 (__fastcall **v102)(PVOID); // [rsp+180h] [rbp+78h] BYREF
  PVOID v103; // [rsp+190h] [rbp+88h]
  __int64 *v106; // [rsp+200h] [rbp+F8h]

  v3 = 0;
  v4 = 0LL;
  v6 = a3;
  v7 = a2;
  v106 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_1400736C0(Pool2, (__int64)L"framework::DeviceD0ExitFlows::EvtD0Exit", a1 - 352);
      if ( v9 )
        v4 = v9;
      v106 = v4;
    }
  }
  v10 = (const wchar_t *)&unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v11 = sub_1400748E4((__int64)&v100, v6);
    v12 = &unk_1400D44E0;
    if ( *(_QWORD *)(v11 + 16) )
      v12 = *(void **)(v11 + 16);
    v13 = (const wchar_t *)&unk_1400D44E0;
    v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                           a1 - 296,
                                           &v70)
                            + 16LL);
    if ( v14 )
      v13 = v14;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, &v68);
    v67 = (__int64)v12;
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
      (__int64)&unk_1400D9628,
      v16,
      v13,
      (const wchar_t *)qword_14014EC70,
      a2,
      v67);
    v6 = a3;
    v3 = 7;
  }
  if ( (v3 & 4) != 0 )
  {
    v18 = v69;
    v3 &= ~4u;
    if ( v69 )
    {
      if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  if ( (v3 & 2) != 0 )
  {
    v19 = v71;
    v3 &= ~2u;
    if ( v71 )
    {
      if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
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
    v100 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
  }
  switch ( v6 )
  {
    case 0:
      v53 = a1 - 352;
      v54 = *(_QWORD *)(a1 - 352);
      v55 = a1 - 352;
      if ( v7 == 5 )
      {
        v28 = (*(__int64 (__fastcall **)(__int64))(v54 + 40))(v55);
        if ( v28 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            LOBYTE(v3) = v3 | 0x18;
            v56 = (const wchar_t *)&unk_1400D44E0;
            v57 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296)
                                                                                             + 16LL))(
                                                   a1 - 296,
                                                   v94)
                                    + 16LL);
            if ( v57 )
              v56 = v57;
            v58 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296)
                                                                                             + 24LL))(
                                                   a1 - 296,
                                                   v92)
                                    + 16LL);
            if ( v58 )
              v10 = v58;
            sub_1400A5E80(
              *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
              2u,
              8u,
              0xBu,
              (__int64)&unk_1400D9628,
              v10,
              v56,
              L"D0ExitFinal()");
          }
          if ( (v3 & 0x10) != 0 )
          {
            v59 = v93;
            LOBYTE(v3) = v3 & 0xEF;
            if ( v93 )
            {
              if ( _InterlockedExchangeAdd(v93 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
                if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
              }
            }
          }
          if ( (v3 & 8) != 0 )
          {
            v60 = v95;
            if ( v95 )
            {
              if ( _InterlockedExchangeAdd(v95 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
                if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
              }
            }
          }
          sub_140011E4C(v53, (__int64)L"D0ExitFinal()", 135, 77, v28);
LABEL_165:
          v4 = v106;
          goto LABEL_168;
        }
      }
      else
      {
        v28 = (*(__int64 (__fastcall **)(__int64))(v54 + 48))(v55);
        if ( v28 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            LOBYTE(v3) = v3 | 0x60;
            v61 = (const wchar_t *)&unk_1400D44E0;
            v62 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296)
                                                                                             + 24LL))(
                                                   a1 - 296,
                                                   v96)
                                    + 16LL);
            if ( v62 )
              v61 = v62;
            v63 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296)
                                                                                             + 16LL))(
                                                   a1 - 296,
                                                   v98)
                                    + 16LL);
            if ( v63 )
              v10 = v63;
            sub_1400A5E80(
              *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
              2u,
              8u,
              0xCu,
              (__int64)&unk_1400D9628,
              v61,
              v10,
              L"D0ExitToS0()");
          }
          if ( (v3 & 0x40) != 0 )
          {
            v64 = v97;
            LOBYTE(v3) = v3 & 0xBF;
            if ( v97 )
            {
              if ( _InterlockedExchangeAdd(v97 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 8LL))(v64);
                if ( _InterlockedExchangeAdd(v64 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 16LL))(v64);
              }
            }
          }
          if ( (v3 & 0x20) != 0 )
          {
            v65 = v99;
            if ( v99 )
            {
              if ( _InterlockedExchangeAdd(v99 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
                if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 16LL))(v65);
              }
            }
          }
          sub_14000AD10(v53, (__int64)L"D0ExitToS0()", 139, 77, v28);
          goto LABEL_165;
        }
      }
      v4 = v106;
      goto LABEL_167;
    case 1:
      v35 = a1 - 352;
      v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 352) + 56LL))(a1 - 352);
      if ( !v28 )
        goto LABEL_167;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        LOWORD(v3) = v3 | 0x180;
        v48 = (const wchar_t *)&unk_1400D44E0;
        v49 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               v88)
                                + 16LL);
        if ( v49 )
          v48 = v49;
        v50 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v90)
                                + 16LL);
        if ( v50 )
          v10 = v50;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          2u,
          8u,
          0xDu,
          (__int64)&unk_1400D9628,
          v48,
          v10,
          L"D0ExitToS3()");
        v35 = a1 - 352;
      }
      if ( (v3 & 0x100) != 0 )
      {
        v51 = v89;
        if ( v89 )
        {
          if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
            if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
          }
        }
      }
      if ( (v3 & 0x80u) != 0 )
      {
        v52 = v91;
        if ( v91 )
        {
          if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
            if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
          }
        }
      }
      v41 = 143;
      v42 = L"D0ExitToS3()";
      goto LABEL_91;
    case 2:
      v35 = a1 - 352;
      v28 = sub_140129B68(a1 - 352);
      if ( !v28 )
        goto LABEL_167;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        LOWORD(v3) = v3 | 0x600;
        v43 = (const wchar_t *)&unk_1400D44E0;
        v44 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v86)
                                + 16LL);
        if ( v44 )
          v43 = v44;
        v45 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               v84)
                                + 16LL);
        if ( v45 )
          v10 = v45;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          2u,
          8u,
          0xEu,
          (__int64)&unk_1400D9628,
          v10,
          v43,
          L"D0ExitToS4()");
        v35 = a1 - 352;
      }
      if ( (v3 & 0x400) != 0 )
      {
        v46 = v85;
        LOWORD(v3) = v3 & 0xFBFF;
        if ( v85 )
        {
          if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
            if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
          }
        }
      }
      if ( (v3 & 0x200) != 0 )
      {
        v47 = v87;
        if ( v87 )
        {
          if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
            if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
          }
        }
      }
      v41 = 147;
      v42 = L"D0ExitToS4()";
      goto LABEL_91;
    case 3:
      v35 = a1 - 352;
      v28 = sub_140129F14(a1 - 352);
      if ( !v28 )
        goto LABEL_167;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        LOWORD(v3) = v3 | 0x1800;
        v36 = (const wchar_t *)&unk_1400D44E0;
        v37 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               v80)
                                + 16LL);
        if ( v37 )
          v36 = v37;
        v38 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v82)
                                + 16LL);
        if ( v38 )
          v10 = v38;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          2u,
          8u,
          0xFu,
          (__int64)&unk_1400D9628,
          v36,
          v10,
          L"D0ExitToS5()");
        v35 = a1 - 352;
      }
      if ( (v3 & 0x1000) != 0 )
      {
        v39 = v81;
        LOWORD(v3) = v3 & 0xEFFF;
        if ( v81 )
        {
          if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
            if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
          }
        }
      }
      if ( (v3 & 0x800) != 0 )
      {
        v40 = v83;
        if ( v83 )
        {
          if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
            if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
          }
        }
      }
      v41 = 150;
      v42 = L"D0ExitToS5()";
LABEL_91:
      sub_14000AD10(v35, (__int64)v42, v41, 77, v28);
      goto LABEL_168;
  }
  if ( v6 != 4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v3 |= 0x38000u;
      v20 = (const wchar_t *)&unk_1400D44E0;
      v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             v74)
                              + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = (const wchar_t *)&unk_1400D44E0;
      v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                             a1 - 296,
                                             &v72)
                              + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
      v25 = *(const wchar_t **)(sub_1400748E4((__int64)&v102, a3) + 16);
      if ( v25 )
        v10 = v25;
      sub_1400A9338(
        v24,
        2u,
        8u,
        0x11u,
        (__int64)&unk_1400D9628,
        v22,
        v20,
        (const wchar_t *)qword_14014EC70,
        (__int64)v10);
    }
    if ( (v3 & 0x20000) != 0 )
    {
      v26 = v73;
      v3 &= ~0x20000u;
      if ( v73 )
      {
        if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    if ( (v3 & 0x10000) != 0 )
    {
      v27 = v75;
      if ( v75 )
      {
        if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    if ( (v3 & 0x8000) != 0 )
    {
      v102 = &off_1400D41D0;
      if ( v103 )
        ExFreePool(v103);
    }
    v28 = -1073741637;
    goto LABEL_168;
  }
  v29 = a1 - 352;
  v28 = sub_140129208(a1 - 352);
  if ( !v28 )
  {
LABEL_167:
    v28 = 0;
    goto LABEL_168;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    LOWORD(v3) = v3 | 0x6000;
    v30 = (const wchar_t *)&unk_1400D44E0;
    v31 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                           a1 - 296,
                                           v78)
                            + 16LL);
    if ( v31 )
      v30 = v31;
    v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                           a1 - 296,
                                           v76)
                            + 16LL);
    if ( v32 )
      v10 = v32;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
      2u,
      8u,
      0x10u,
      (__int64)&unk_1400D9628,
      v10,
      v30,
      L"D0ExitToRestart()");
    v29 = a1 - 352;
  }
  if ( (v3 & 0x4000) != 0 )
  {
    v33 = v77;
    LOWORD(v3) = v3 & 0xBFFF;
    if ( v77 )
    {
      if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
      }
    }
  }
  if ( (v3 & 0x2000) != 0 )
  {
    v34 = v79;
    if ( v79 )
    {
      if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
      }
    }
  }
  sub_140007D14(v29, (__int64)L"D0ExitToRestart()", 153, 77, v28);
LABEL_168:
  if ( v4 )
  {
    sub_140073F78(v4);
    ExFreePool(v4);
  }
  return v28;
}
