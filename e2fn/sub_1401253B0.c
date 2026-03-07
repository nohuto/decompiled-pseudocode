__int64 __fastcall sub_1401253B0(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // eax
  const wchar_t *v10; // rsi
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  __int64 v13; // rax
  const wchar_t *v14; // rdx
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rax
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
  const wchar_t *v67; // rdi
  const wchar_t *v68; // rax
  __int64 v69; // rax
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
  __int64 v83; // rax
  const wchar_t *v84; // rdx
  const wchar_t *v85; // rax
  volatile signed __int32 *v86; // rbx
  volatile signed __int32 *v87; // rbx
  const wchar_t *v88; // rdi
  const wchar_t *v89; // rax
  const wchar_t *v90; // rax
  volatile signed __int32 *v91; // rbx
  volatile signed __int32 *v92; // rbx
  volatile signed __int32 *v93; // rbx
  __int64 v95; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v96; // [rsp+60h] [rbp-A8h]
  __int64 v97; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v98; // [rsp+70h] [rbp-98h]
  __int64 v99; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v100; // [rsp+80h] [rbp-88h]
  _BYTE v101[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v102; // [rsp+90h] [rbp-78h]
  _BYTE v103[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v104; // [rsp+A0h] [rbp-68h]
  _BYTE v105[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v106; // [rsp+B0h] [rbp-58h]
  _BYTE v107[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v108; // [rsp+C0h] [rbp-48h]
  _BYTE v109[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v110; // [rsp+D0h] [rbp-38h]
  _BYTE v111[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v112; // [rsp+E0h] [rbp-28h]
  _BYTE v113[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v114; // [rsp+F0h] [rbp-18h]
  _BYTE v115[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v116; // [rsp+100h] [rbp-8h]
  _BYTE v117[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v118; // [rsp+110h] [rbp+8h]
  _BYTE v119[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v120; // [rsp+120h] [rbp+18h]
  _BYTE v121[8]; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v122; // [rsp+130h] [rbp+28h]
  _BYTE v123[8]; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v124; // [rsp+140h] [rbp+38h]
  _BYTE v125[8]; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v126; // [rsp+150h] [rbp+48h]
  _BYTE v127[8]; // [rsp+158h] [rbp+50h] BYREF
  volatile signed __int32 *v128; // [rsp+160h] [rbp+58h]
  _BYTE v129[8]; // [rsp+168h] [rbp+60h] BYREF
  volatile signed __int32 *v130; // [rsp+170h] [rbp+68h]
  _BYTE v131[8]; // [rsp+178h] [rbp+70h] BYREF
  volatile signed __int32 *v132; // [rsp+180h] [rbp+78h]
  _BYTE v133[8]; // [rsp+188h] [rbp+80h] BYREF
  volatile signed __int32 *v134; // [rsp+190h] [rbp+88h]
  _BYTE v135[8]; // [rsp+198h] [rbp+90h] BYREF
  volatile signed __int32 *v136; // [rsp+1A0h] [rbp+98h]
  _BYTE v137[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  volatile signed __int32 *v138; // [rsp+1B0h] [rbp+A8h]
  _BYTE v139[8]; // [rsp+1B8h] [rbp+B0h] BYREF
  volatile signed __int32 *v140; // [rsp+1C0h] [rbp+B8h]
  _BYTE v141[8]; // [rsp+1C8h] [rbp+C0h] BYREF
  volatile signed __int32 *v142; // [rsp+1D0h] [rbp+C8h]
  _BYTE v143[8]; // [rsp+1D8h] [rbp+D0h] BYREF
  volatile signed __int32 *v144; // [rsp+1E0h] [rbp+D8h]

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 8LL))(*(_QWORD *)(a1 + 416));
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 416) + 96LL))(*(_QWORD *)(a1 + 416), &v95);
  v8 = *(unsigned int *)(v7 + 24);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v95 + 8LL))(v95);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 40) = 1LL;
  *(_QWORD *)(a2 + 16) = v9;
  *(_QWORD *)(a2 + 32) = 1LL;
  *(_QWORD *)a2 = 56LL;
  *(_QWORD *)(a2 + 24) = v8;
  *(_QWORD *)(a2 + 48) = a3;
  *(_QWORD *)(a2 + 40) = *(unsigned int *)(v7 + 32);
  *(_DWORD *)(a2 + 12) = 1024;
  v10 = (const wchar_t *)&unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v11 = (const wchar_t *)&unk_1400D44E0;
    v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           &v99)
                            + 16LL);
    if ( v12 )
      v11 = v12;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, &v97);
    v14 = (const wchar_t *)&unk_1400D44E0;
    v15 = *(const wchar_t **)(*(_QWORD *)v13 + 16LL);
    if ( v15 )
      v14 = v15;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x68u,
      (__int64)&unk_1400D9408,
      v14,
      v11,
      (const wchar_t *)qword_14014EC70);
    v6 = 3;
  }
  if ( (v6 & 2) != 0 )
  {
    v16 = v98;
    v6 &= ~2u;
    if ( v98 )
    {
      if ( _InterlockedExchangeAdd(v98 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  if ( (v6 & 1) != 0 )
  {
    v17 = v100;
    v6 &= ~1u;
    if ( v100 )
    {
      if ( _InterlockedExchangeAdd(v100 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 |= 0xCu;
    v18 = (const wchar_t *)&unk_1400D44E0;
    v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v103)
                            + 16LL);
    if ( v19 )
      v18 = v19;
    v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v101);
    v21 = (const wchar_t *)&unk_1400D44E0;
    v22 = *(const wchar_t **)(*(_QWORD *)v20 + 16LL);
    if ( v22 )
      v21 = v22;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x69u,
      (__int64)&unk_1400D9408,
      v21,
      v18,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v6 & 8) != 0 )
  {
    v23 = v102;
    v6 &= ~8u;
    if ( v102 )
    {
      if ( _InterlockedExchangeAdd(v102 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
  }
  if ( (v6 & 4) != 0 )
  {
    v24 = v104;
    v6 &= ~4u;
    if ( v104 )
    {
      if ( _InterlockedExchangeAdd(v104 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 |= 0x30u;
    v25 = (const wchar_t *)&unk_1400D44E0;
    v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v107)
                            + 16LL);
    if ( v26 )
      v25 = v26;
    v27 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v105);
    v28 = (const wchar_t *)&unk_1400D44E0;
    v29 = *(const wchar_t **)(*(_QWORD *)v27 + 16LL);
    if ( v29 )
      v28 = v29;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x6Au,
      (__int64)&unk_1400D9408,
      v28,
      v25,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v6 & 0x20) != 0 )
  {
    v30 = v106;
    v6 &= ~0x20u;
    if ( v106 )
    {
      if ( _InterlockedExchangeAdd(v106 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
      }
    }
  }
  if ( (v6 & 0x10) != 0 )
  {
    v31 = v108;
    v6 &= ~0x10u;
    if ( v108 )
    {
      if ( _InterlockedExchangeAdd(v108 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 |= 0xC0u;
    v32 = (const wchar_t *)&unk_1400D44E0;
    v33 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v111)
                            + 16LL);
    if ( v33 )
      v32 = v33;
    v34 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v109);
    v35 = (const wchar_t *)&unk_1400D44E0;
    v36 = *(const wchar_t **)(*(_QWORD *)v34 + 16LL);
    if ( v36 )
      v35 = v36;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x6Bu,
      (__int64)&unk_1400D9408,
      v35,
      v32,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v6 & 0x80u) != 0 )
  {
    v37 = v110;
    v6 &= ~0x80u;
    if ( v110 )
    {
      if ( _InterlockedExchangeAdd(v110 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
      }
    }
  }
  if ( (v6 & 0x40) != 0 )
  {
    v38 = v112;
    v6 &= ~0x40u;
    if ( v112 )
    {
      if ( _InterlockedExchangeAdd(v112 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
        if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 |= 0x300u;
    v39 = (const wchar_t *)&unk_1400D44E0;
    v40 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v115)
                            + 16LL);
    if ( v40 )
      v39 = v40;
    v41 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v113);
    v42 = (const wchar_t *)&unk_1400D44E0;
    v43 = *(const wchar_t **)(*(_QWORD *)v41 + 16LL);
    if ( v43 )
      v42 = v43;
    sub_1400AA268(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x6Cu,
      (__int64)&unk_1400D9408,
      v42,
      v39,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v6 & 0x200) != 0 )
  {
    v44 = v114;
    v6 &= ~0x200u;
    if ( v114 )
    {
      if ( _InterlockedExchangeAdd(v114 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
        if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
      }
    }
  }
  if ( (v6 & 0x100) != 0 )
  {
    v45 = v116;
    v6 &= ~0x100u;
    if ( v116 )
    {
      if ( _InterlockedExchangeAdd(v116 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
        if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 |= 0xC00u;
    v46 = (const wchar_t *)&unk_1400D44E0;
    v47 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v119)
                            + 16LL);
    if ( v47 )
      v46 = v47;
    v48 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v117);
    v49 = (const wchar_t *)&unk_1400D44E0;
    v50 = *(const wchar_t **)(*(_QWORD *)v48 + 16LL);
    if ( v50 )
      v49 = v50;
    sub_1400AA268(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x6Du,
      (__int64)&unk_1400D9408,
      v49,
      v46,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v6 & 0x800) != 0 )
  {
    v51 = v118;
    v6 &= ~0x800u;
    if ( v118 )
    {
      if ( _InterlockedExchangeAdd(v118 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
        if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
      }
    }
  }
  if ( (v6 & 0x400) != 0 )
  {
    v52 = v120;
    v6 &= ~0x400u;
    if ( v120 )
    {
      if ( _InterlockedExchangeAdd(v120 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
        if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 |= 0x3000u;
    v53 = (const wchar_t *)&unk_1400D44E0;
    v54 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v123)
                            + 16LL);
    if ( v54 )
      v53 = v54;
    v55 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v121);
    v56 = (const wchar_t *)&unk_1400D44E0;
    v57 = *(const wchar_t **)(*(_QWORD *)v55 + 16LL);
    if ( v57 )
      v56 = v57;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x6Eu,
      (__int64)&unk_1400D9408,
      v56,
      v53,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v6 & 0x2000) != 0 )
  {
    v58 = v122;
    v6 &= ~0x2000u;
    if ( v122 )
    {
      if ( _InterlockedExchangeAdd(v122 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
        if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
      }
    }
  }
  if ( (v6 & 0x1000) != 0 )
  {
    v59 = v124;
    v6 &= ~0x1000u;
    if ( v124 )
    {
      if ( _InterlockedExchangeAdd(v124 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
        if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 |= 0xC000u;
    v60 = (const wchar_t *)&unk_1400D44E0;
    v61 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v127)
                            + 16LL);
    if ( v61 )
      v60 = v61;
    v62 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v125);
    v63 = (const wchar_t *)&unk_1400D44E0;
    v64 = *(const wchar_t **)(*(_QWORD *)v62 + 16LL);
    if ( v64 )
      v63 = v64;
    sub_1400AA268(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x6Fu,
      (__int64)&unk_1400D9408,
      v63,
      v60,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v6 & 0x8000) != 0 )
  {
    v65 = v126;
    v6 &= ~0x8000u;
    if ( v126 )
    {
      if ( _InterlockedExchangeAdd(v126 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
        if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 16LL))(v65);
      }
    }
  }
  if ( (v6 & 0x4000) != 0 )
  {
    v66 = v128;
    v6 &= ~0x4000u;
    if ( v128 )
    {
      if ( _InterlockedExchangeAdd(v128 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 8LL))(v66);
        if ( _InterlockedExchangeAdd(v66 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 16LL))(v66);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 |= 0x30000u;
    v67 = (const wchar_t *)&unk_1400D44E0;
    v68 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v131)
                            + 16LL);
    if ( v68 )
      v67 = v68;
    v69 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v129);
    v70 = (const wchar_t *)&unk_1400D44E0;
    v71 = *(const wchar_t **)(*(_QWORD *)v69 + 16LL);
    if ( v71 )
      v70 = v71;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x70u,
      (__int64)&unk_1400D9408,
      v70,
      v67,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v6 & 0x20000) != 0 )
  {
    v72 = v130;
    v6 &= ~0x20000u;
    if ( v130 )
    {
      if ( _InterlockedExchangeAdd(v130 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 8LL))(v72);
        if ( _InterlockedExchangeAdd(v72 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 16LL))(v72);
      }
    }
  }
  if ( (v6 & 0x10000) != 0 )
  {
    v73 = v132;
    v6 &= ~0x10000u;
    if ( v132 )
    {
      if ( _InterlockedExchangeAdd(v132 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 8LL))(v73);
        if ( _InterlockedExchangeAdd(v73 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 16LL))(v73);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 |= 0xC0000u;
    v74 = (const wchar_t *)&unk_1400D44E0;
    v75 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v135)
                            + 16LL);
    if ( v75 )
      v74 = v75;
    v76 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v133);
    v77 = (const wchar_t *)&unk_1400D44E0;
    v78 = *(const wchar_t **)(*(_QWORD *)v76 + 16LL);
    if ( v78 )
      v77 = v78;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x71u,
      (__int64)&unk_1400D9408,
      v77,
      v74,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v6 & 0x80000) != 0 )
  {
    v79 = v134;
    v6 &= ~0x80000u;
    if ( v134 )
    {
      if ( _InterlockedExchangeAdd(v134 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 8LL))(v79);
        if ( _InterlockedExchangeAdd(v79 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 16LL))(v79);
      }
    }
  }
  if ( (v6 & 0x40000) != 0 )
  {
    v80 = v136;
    v6 &= ~0x40000u;
    if ( v136 )
    {
      if ( _InterlockedExchangeAdd(v136 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 8LL))(v80);
        if ( _InterlockedExchangeAdd(v80 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 16LL))(v80);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 |= 0x300000u;
    v81 = (const wchar_t *)&unk_1400D44E0;
    v82 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v139)
                            + 16LL);
    if ( v82 )
      v81 = v82;
    v83 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v137);
    v84 = (const wchar_t *)&unk_1400D44E0;
    v85 = *(const wchar_t **)(*(_QWORD *)v83 + 16LL);
    if ( v85 )
      v84 = v85;
    sub_1400AA268(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x72u,
      (__int64)&unk_1400D9408,
      v84,
      v81,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v6 & 0x200000) != 0 )
  {
    v86 = v138;
    v6 &= ~0x200000u;
    if ( v138 )
    {
      if ( _InterlockedExchangeAdd(v138 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v86 + 8LL))(v86);
        if ( _InterlockedExchangeAdd(v86 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v86 + 16LL))(v86);
      }
    }
  }
  if ( (v6 & 0x100000) != 0 )
  {
    v87 = v140;
    v6 &= ~0x100000u;
    if ( v140 )
    {
      if ( _InterlockedExchangeAdd(v140 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
        if ( _InterlockedExchangeAdd(v87 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 16LL))(v87);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 |= 0xC00000u;
    v88 = (const wchar_t *)&unk_1400D44E0;
    v89 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v143)
                            + 16LL);
    if ( v89 )
      v88 = v89;
    v90 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                           a1 + 56,
                                           v141)
                            + 16LL);
    if ( v90 )
      v10 = v90;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x73u,
      (__int64)&unk_1400D9408,
      v10,
      v88,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v6 & 0x800000) != 0 )
  {
    v91 = v142;
    v6 &= ~0x800000u;
    if ( v142 )
    {
      if ( _InterlockedExchangeAdd(v142 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v91 + 8LL))(v91);
        if ( _InterlockedExchangeAdd(v91 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v91 + 16LL))(v91);
      }
    }
  }
  if ( (v6 & 0x400000) != 0 )
  {
    v92 = v144;
    if ( v144 )
    {
      if ( _InterlockedExchangeAdd(v144 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 8LL))(v92);
        if ( _InterlockedExchangeAdd(v92 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 16LL))(v92);
      }
    }
  }
  v93 = v96;
  if ( v96 )
  {
    if ( _InterlockedExchangeAdd(v96 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v93 + 8LL))(v93);
      if ( _InterlockedExchangeAdd(v93 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v93 + 16LL))(v93);
    }
  }
  return 0LL;
}
