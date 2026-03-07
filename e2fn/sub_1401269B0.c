__int64 __fastcall sub_1401269B0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r14d
  unsigned int *v7; // rax
  __int64 v8; // rcx
  const wchar_t *v9; // r12
  const wchar_t *v10; // rdi
  const wchar_t *v11; // rax
  __int64 v12; // rax
  const wchar_t *v13; // rdx
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  const wchar_t *v17; // rsi
  const wchar_t *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  const wchar_t *v21; // rdx
  const wchar_t *v22; // rax
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  const wchar_t *v25; // rdi
  const wchar_t *v26; // rax
  __int64 v27; // rax
  const wchar_t *v28; // rdx
  const wchar_t *v29; // rax
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  const wchar_t *v32; // rdi
  const wchar_t *v33; // rax
  __int64 v34; // rax
  const wchar_t *v35; // rdx
  const wchar_t *v36; // rax
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rbx
  const wchar_t *v39; // rdi
  const wchar_t *v40; // rax
  __int64 v41; // rax
  const wchar_t *v42; // rdx
  const wchar_t *v43; // rax
  volatile signed __int32 *v44; // rbx
  volatile signed __int32 *v45; // rbx
  const wchar_t *v46; // rdi
  const wchar_t *v47; // rax
  __int64 v48; // rax
  const wchar_t *v49; // rdx
  const wchar_t *v50; // rax
  volatile signed __int32 *v51; // rbx
  volatile signed __int32 *v52; // rbx
  const wchar_t *v53; // rdi
  const wchar_t *v54; // rax
  __int64 v55; // rax
  const wchar_t *v56; // rdx
  const wchar_t *v57; // rax
  volatile signed __int32 *v58; // rbx
  volatile signed __int32 *v59; // rbx
  const wchar_t *v60; // rdi
  const wchar_t *v61; // rax
  __int64 v62; // rax
  const wchar_t *v63; // rdx
  const wchar_t *v64; // rax
  volatile signed __int32 *v65; // rbx
  volatile signed __int32 *v66; // rbx
  __int64 v67; // rdi
  __int64 v68; // rax
  const wchar_t *v69; // r8
  const wchar_t *v70; // rdx
  const wchar_t *v71; // rax
  volatile signed __int32 *v72; // rbx
  volatile signed __int32 *v73; // rbx
  const wchar_t *v74; // rdi
  const wchar_t *v75; // rax
  __int64 v76; // rax
  const wchar_t *v77; // rdx
  const wchar_t *v78; // rax
  volatile signed __int32 *v79; // rbx
  volatile signed __int32 *v80; // rbx
  const wchar_t *v81; // rdi
  const wchar_t *v82; // rax
  const wchar_t *v83; // rax
  volatile signed __int32 *v84; // rbx
  volatile signed __int32 *v85; // rbx
  __int64 v87; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v88; // [rsp+60h] [rbp-A8h]
  __int64 v89; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v90; // [rsp+70h] [rbp-98h]
  __int64 v91; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v92; // [rsp+80h] [rbp-88h]
  _BYTE v93[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v94; // [rsp+90h] [rbp-78h]
  _BYTE v95[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v96; // [rsp+A0h] [rbp-68h]
  _BYTE v97[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v98; // [rsp+B0h] [rbp-58h]
  _BYTE v99[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v100; // [rsp+C0h] [rbp-48h]
  _BYTE v101[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v102; // [rsp+D0h] [rbp-38h]
  _BYTE v103[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v104; // [rsp+E0h] [rbp-28h]
  _BYTE v105[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v106; // [rsp+F0h] [rbp-18h]
  _BYTE v107[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v108; // [rsp+100h] [rbp-8h]
  _BYTE v109[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v110; // [rsp+110h] [rbp+8h]
  _BYTE v111[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v112; // [rsp+120h] [rbp+18h]
  _BYTE v113[8]; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v114; // [rsp+130h] [rbp+28h]
  _BYTE v115[8]; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v116; // [rsp+140h] [rbp+38h]
  _BYTE v117[8]; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v118; // [rsp+150h] [rbp+48h]
  _BYTE v119[8]; // [rsp+158h] [rbp+50h] BYREF
  volatile signed __int32 *v120; // [rsp+160h] [rbp+58h]
  _BYTE v121[8]; // [rsp+168h] [rbp+60h] BYREF
  volatile signed __int32 *v122; // [rsp+170h] [rbp+68h]
  _BYTE v123[8]; // [rsp+178h] [rbp+70h] BYREF
  volatile signed __int32 *v124; // [rsp+180h] [rbp+78h]
  _BYTE v125[8]; // [rsp+188h] [rbp+80h] BYREF
  volatile signed __int32 *v126; // [rsp+190h] [rbp+88h]
  _BYTE v127[8]; // [rsp+198h] [rbp+90h] BYREF
  volatile signed __int32 *v128; // [rsp+1A0h] [rbp+98h]
  _BYTE v129[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  volatile signed __int32 *v130; // [rsp+1B0h] [rbp+A8h]

  v4 = 0;
  v7 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 8LL))(*(_QWORD *)(a1 + 416));
  v8 = v7[4];
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 24) = 1LL;
  *(_QWORD *)(a2 + 16) = -1LL;
  *(_DWORD *)a2 = 56;
  *(_QWORD *)(a2 + 40) = v8;
  *(_QWORD *)(a2 + 48) = a3;
  *(_DWORD *)(a2 + 4) = 1;
  *(_QWORD *)(a2 + 16) = v7[5] != 0;
  *(_QWORD *)(a2 + 24) = v7[7];
  v9 = (const wchar_t *)&unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v10 = (const wchar_t *)&unk_1400D44E0;
    v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           &v89)
                            + 16LL);
    if ( v11 )
      v10 = v11;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, &v87);
    v13 = (const wchar_t *)&unk_1400D44E0;
    v14 = *(const wchar_t **)(*(_QWORD *)v12 + 16LL);
    if ( v14 )
      v13 = v14;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x5Du,
      (__int64)&unk_1400D9408,
      v13,
      v10,
      (const wchar_t *)qword_14014EC70);
    v4 = 3;
  }
  if ( (v4 & 2) != 0 )
  {
    v15 = v88;
    v4 &= ~2u;
    if ( v88 )
    {
      if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v16 = v90;
    v4 &= ~1u;
    if ( v90 )
    {
      if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v4 |= 0xCu;
    v17 = (const wchar_t *)&unk_1400D44E0;
    v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                           a1 + 56,
                                           &v91)
                            + 16LL);
    if ( v18 )
      v17 = v18;
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
    v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v93);
    v21 = (const wchar_t *)&unk_1400D44E0;
    v22 = *(const wchar_t **)(*(_QWORD *)v20 + 16LL);
    if ( v22 )
      v21 = v22;
    sub_1400A5E80(v19, 4u, 0xBu, 0x5Eu, (__int64)&unk_1400D9408, v17, v21, (const wchar_t *)qword_14014EC70);
  }
  if ( (v4 & 8) != 0 )
  {
    v23 = v92;
    v4 &= ~8u;
    if ( v92 )
    {
      if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
  }
  if ( (v4 & 4) != 0 )
  {
    v24 = v94;
    v4 &= ~4u;
    if ( v94 )
    {
      if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v4 |= 0x30u;
    v25 = (const wchar_t *)&unk_1400D44E0;
    v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v97)
                            + 16LL);
    if ( v26 )
      v25 = v26;
    v27 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v95);
    v28 = (const wchar_t *)&unk_1400D44E0;
    v29 = *(const wchar_t **)(*(_QWORD *)v27 + 16LL);
    if ( v29 )
      v28 = v29;
    sub_1400AA268(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x5Fu,
      (__int64)&unk_1400D9408,
      v28,
      v25,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v4 & 0x20) != 0 )
  {
    v30 = v96;
    v4 &= ~0x20u;
    if ( v96 )
    {
      if ( _InterlockedExchangeAdd(v96 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
      }
    }
  }
  if ( (v4 & 0x10) != 0 )
  {
    v31 = v98;
    v4 &= ~0x10u;
    if ( v98 )
    {
      if ( _InterlockedExchangeAdd(v98 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v4 |= 0xC0u;
    v32 = (const wchar_t *)&unk_1400D44E0;
    v33 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v101)
                            + 16LL);
    if ( v33 )
      v32 = v33;
    v34 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v99);
    v35 = (const wchar_t *)&unk_1400D44E0;
    v36 = *(const wchar_t **)(*(_QWORD *)v34 + 16LL);
    if ( v36 )
      v35 = v36;
    sub_1400AA268(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x60u,
      (__int64)&unk_1400D9408,
      v35,
      v32,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v37 = v100;
    v4 &= ~0x80u;
    if ( v100 )
    {
      if ( _InterlockedExchangeAdd(v100 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
      }
    }
  }
  if ( (v4 & 0x40) != 0 )
  {
    v38 = v102;
    v4 &= ~0x40u;
    if ( v102 )
    {
      if ( _InterlockedExchangeAdd(v102 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
        if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v4 |= 0x300u;
    v39 = (const wchar_t *)&unk_1400D44E0;
    v40 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v105)
                            + 16LL);
    if ( v40 )
      v39 = v40;
    v41 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v103);
    v42 = (const wchar_t *)&unk_1400D44E0;
    v43 = *(const wchar_t **)(*(_QWORD *)v41 + 16LL);
    if ( v43 )
      v42 = v43;
    sub_1400AA268(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x61u,
      (__int64)&unk_1400D9408,
      v42,
      v39,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v4 & 0x200) != 0 )
  {
    v44 = v104;
    v4 &= ~0x200u;
    if ( v104 )
    {
      if ( _InterlockedExchangeAdd(v104 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
        if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
      }
    }
  }
  if ( (v4 & 0x100) != 0 )
  {
    v45 = v106;
    v4 &= ~0x100u;
    if ( v106 )
    {
      if ( _InterlockedExchangeAdd(v106 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
        if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v4 |= 0xC00u;
    v46 = (const wchar_t *)&unk_1400D44E0;
    v47 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v109)
                            + 16LL);
    if ( v47 )
      v46 = v47;
    v48 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v107);
    v49 = (const wchar_t *)&unk_1400D44E0;
    v50 = *(const wchar_t **)(*(_QWORD *)v48 + 16LL);
    if ( v50 )
      v49 = v50;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x62u,
      (__int64)&unk_1400D9408,
      v49,
      v46,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v4 & 0x800) != 0 )
  {
    v51 = v108;
    v4 &= ~0x800u;
    if ( v108 )
    {
      if ( _InterlockedExchangeAdd(v108 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
        if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
      }
    }
  }
  if ( (v4 & 0x400) != 0 )
  {
    v52 = v110;
    v4 &= ~0x400u;
    if ( v110 )
    {
      if ( _InterlockedExchangeAdd(v110 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
        if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v4 |= 0x3000u;
    v53 = (const wchar_t *)&unk_1400D44E0;
    v54 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v113)
                            + 16LL);
    if ( v54 )
      v53 = v54;
    v55 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v111);
    v56 = (const wchar_t *)&unk_1400D44E0;
    v57 = *(const wchar_t **)(*(_QWORD *)v55 + 16LL);
    if ( v57 )
      v56 = v57;
    sub_1400AA268(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x63u,
      (__int64)&unk_1400D9408,
      v56,
      v53,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v4 & 0x2000) != 0 )
  {
    v58 = v112;
    v4 &= ~0x2000u;
    if ( v112 )
    {
      if ( _InterlockedExchangeAdd(v112 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
        if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
      }
    }
  }
  if ( (v4 & 0x1000) != 0 )
  {
    v59 = v114;
    v4 &= ~0x1000u;
    if ( v114 )
    {
      if ( _InterlockedExchangeAdd(v114 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
        if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v4 |= 0xC000u;
    v60 = (const wchar_t *)&unk_1400D44E0;
    v61 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v117)
                            + 16LL);
    if ( v61 )
      v60 = v61;
    v62 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v115);
    v63 = (const wchar_t *)&unk_1400D44E0;
    v64 = *(const wchar_t **)(*(_QWORD *)v62 + 16LL);
    if ( v64 )
      v63 = v64;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x64u,
      (__int64)&unk_1400D9408,
      v63,
      v60,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v4 & 0x8000) != 0 )
  {
    v65 = v116;
    v4 &= ~0x8000u;
    if ( v116 )
    {
      if ( _InterlockedExchangeAdd(v116 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
        if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 16LL))(v65);
      }
    }
  }
  if ( (v4 & 0x4000) != 0 )
  {
    v66 = v118;
    v4 &= ~0x4000u;
    if ( v118 )
    {
      if ( _InterlockedExchangeAdd(v118 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 8LL))(v66);
        if ( _InterlockedExchangeAdd(v66 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 16LL))(v66);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v4 |= 0x30000u;
    v67 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v121);
    v68 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v119);
    v69 = (const wchar_t *)&unk_1400D44E0;
    v70 = (const wchar_t *)&unk_1400D44E0;
    v71 = *(const wchar_t **)(*(_QWORD *)v68 + 16LL);
    if ( v71 )
      v69 = v71;
    if ( *(_QWORD *)(v67 + 16) )
      v70 = *(const wchar_t **)(v67 + 16);
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x65u,
      (__int64)&unk_1400D9408,
      v69,
      v70,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v4 & 0x20000) != 0 )
  {
    v72 = v120;
    v4 &= ~0x20000u;
    if ( v120 )
    {
      if ( _InterlockedExchangeAdd(v120 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 8LL))(v72);
        if ( _InterlockedExchangeAdd(v72 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 16LL))(v72);
      }
    }
  }
  if ( (v4 & 0x10000) != 0 )
  {
    v73 = v122;
    v4 &= ~0x10000u;
    if ( v122 )
    {
      if ( _InterlockedExchangeAdd(v122 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 8LL))(v73);
        if ( _InterlockedExchangeAdd(v73 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 16LL))(v73);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v4 |= 0xC0000u;
    v74 = (const wchar_t *)&unk_1400D44E0;
    v75 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v125)
                            + 16LL);
    if ( v75 )
      v74 = v75;
    v76 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v123);
    v77 = (const wchar_t *)&unk_1400D44E0;
    v78 = *(const wchar_t **)(*(_QWORD *)v76 + 16LL);
    if ( v78 )
      v77 = v78;
    sub_1400AA268(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x66u,
      (__int64)&unk_1400D9408,
      v77,
      v74,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v4 & 0x80000) != 0 )
  {
    v79 = v124;
    v4 &= ~0x80000u;
    if ( v124 )
    {
      if ( _InterlockedExchangeAdd(v124 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 8LL))(v79);
        if ( _InterlockedExchangeAdd(v79 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 16LL))(v79);
      }
    }
  }
  if ( (v4 & 0x40000) != 0 )
  {
    v80 = v126;
    v4 &= ~0x40000u;
    if ( v126 )
    {
      if ( _InterlockedExchangeAdd(v126 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 8LL))(v80);
        if ( _InterlockedExchangeAdd(v80 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 16LL))(v80);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v4 |= 0x300000u;
    v81 = (const wchar_t *)&unk_1400D44E0;
    v82 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v129)
                            + 16LL);
    if ( v82 )
      v81 = v82;
    v83 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                           a1 + 56,
                                           v127)
                            + 16LL);
    if ( v83 )
      v9 = v83;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x67u,
      (__int64)&unk_1400D9408,
      v9,
      v81,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v4 & 0x200000) != 0 )
  {
    v84 = v128;
    v4 &= ~0x200000u;
    if ( v128 )
    {
      if ( _InterlockedExchangeAdd(v128 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v84 + 8LL))(v84);
        if ( _InterlockedExchangeAdd(v84 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v84 + 16LL))(v84);
      }
    }
  }
  if ( (v4 & 0x100000) != 0 )
  {
    v85 = v130;
    if ( v130 )
    {
      if ( _InterlockedExchangeAdd(v130 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 8LL))(v85);
        if ( _InterlockedExchangeAdd(v85 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 16LL))(v85);
      }
    }
  }
  return 0LL;
}
