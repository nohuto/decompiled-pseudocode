__int64 __fastcall sub_14011E1D0(_QWORD *a1)
{
  int v1; // ebx
  __int64 *v3; // r13
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rdi
  const wchar_t *v10; // r12
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rbx
  unsigned int v16; // r15d
  const wchar_t *v17; // r12
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rax
  __int64 v20; // rsi
  const wchar_t *v21; // rax
  volatile signed __int32 *v22; // rdi
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  volatile signed __int32 *v27; // rdi
  const wchar_t *v28; // r12
  const wchar_t *v29; // rdi
  const wchar_t *v30; // rax
  const wchar_t *v31; // rax
  volatile signed __int32 *v32; // rdi
  volatile signed __int32 *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  volatile signed __int32 *v37; // rdi
  const wchar_t *v38; // r12
  const wchar_t *v39; // rdi
  const wchar_t *v40; // rax
  const wchar_t *v41; // rax
  volatile signed __int32 *v42; // rdi
  volatile signed __int32 *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  volatile signed __int32 *v47; // rdi
  __int64 v48; // rsi
  const wchar_t *v49; // r12
  const wchar_t *v50; // rdi
  const wchar_t *v51; // rax
  const wchar_t *v52; // rax
  volatile signed __int32 *v53; // rdi
  volatile signed __int32 *v54; // rbx
  const wchar_t *v55; // r12
  const wchar_t *v56; // rdi
  const wchar_t *v57; // rax
  __int64 v58; // rsi
  const wchar_t *v59; // rax
  volatile signed __int32 *v60; // rdi
  volatile signed __int32 *v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  volatile signed __int32 *v65; // rdi
  __int64 v66; // rsi
  const wchar_t *v67; // r12
  const wchar_t *v68; // rdi
  const wchar_t *v69; // rax
  const wchar_t *v70; // rax
  volatile signed __int32 *v71; // rdi
  volatile signed __int32 *v72; // rbx
  int v73; // r8d
  const wchar_t *v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rcx
  volatile signed __int32 *v78; // rdi
  __int64 v79; // rsi
  const wchar_t *v80; // r12
  const wchar_t *v81; // rdi
  const wchar_t *v82; // rax
  const wchar_t *v83; // rax
  volatile signed __int32 *v84; // rdi
  volatile signed __int32 *v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rcx
  volatile signed __int32 *v89; // rdi
  const wchar_t *v90; // r12
  const wchar_t *v91; // rdi
  const wchar_t *v92; // rax
  __int64 v93; // rsi
  const wchar_t *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rcx
  volatile signed __int32 *v98; // rdx
  __int64 v99; // rdi
  __int64 v100; // rax
  const wchar_t *v101; // r12
  const wchar_t *v102; // rdx
  const wchar_t *v103; // rax
  _BYTE v105[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v106[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v107[8]; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v108; // [rsp+78h] [rbp-88h]
  _BYTE v109[8]; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v110; // [rsp+88h] [rbp-78h]
  _BYTE v111[8]; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v112; // [rsp+98h] [rbp-68h]
  _BYTE v113[8]; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v114; // [rsp+A8h] [rbp-58h]
  _BYTE v115[8]; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v116; // [rsp+B8h] [rbp-48h]
  _BYTE v117[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v118; // [rsp+C8h] [rbp-38h]
  _BYTE v119[8]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v120; // [rsp+D8h] [rbp-28h]
  _BYTE v121[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v122; // [rsp+E8h] [rbp-18h]
  _BYTE v123[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v124; // [rsp+F8h] [rbp-8h]
  _BYTE v125[8]; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v126; // [rsp+108h] [rbp+8h]
  _BYTE v127[8]; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v128; // [rsp+118h] [rbp+18h]
  _BYTE v129[8]; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v130; // [rsp+128h] [rbp+28h]
  _BYTE v131[8]; // [rsp+130h] [rbp+30h] BYREF
  volatile signed __int32 *v132; // [rsp+138h] [rbp+38h]
  _BYTE v133[8]; // [rsp+140h] [rbp+40h] BYREF
  volatile signed __int32 *v134; // [rsp+148h] [rbp+48h]
  _BYTE v135[8]; // [rsp+150h] [rbp+50h] BYREF
  volatile signed __int32 *v136; // [rsp+158h] [rbp+58h]
  _BYTE v137[8]; // [rsp+160h] [rbp+60h] BYREF
  volatile signed __int32 *v138; // [rsp+168h] [rbp+68h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapter::AllocateComponents", (__int64)(a1 - 44));
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = ExAllocatePool2(64LL, 32LL, 808465766LL);
  if ( !v6 || (v7 = sub_1400B05EC(v6, (__int64)(a1 - 44))) == 0 || (v8 = *(_QWORD *)(v7 + 16)) == 0 )
  {
    v8 = 0LL;
    v7 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v9 = (volatile signed __int32 *)a1[11];
  a1[11] = v7;
  a1[10] = v8;
  if ( v9 )
  {
    if ( !_InterlockedDecrement(v9 + 2) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      if ( !_InterlockedDecrement(v9 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  if ( !a1[10] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                             a1 - 37,
                                             v109)
                              + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                             a1 - 37,
                                             v107)
                              + 16LL);
      if ( v13 )
        v10 = v13;
      sub_1400A3320(*(_QWORD *)(*(a1 - 22) + 16LL), 2u, 0xBu, 0xAu, (__int64)&unk_1400D9408, v10, v11, L"m_link");
      LOBYTE(v1) = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v14 = v108;
      LOBYTE(v1) = v1 & 0xFD;
      if ( v108 )
      {
        if ( _InterlockedExchangeAdd(v108 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v15 = v110;
      if ( v110 )
      {
        if ( _InterlockedExchangeAdd(v110 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_14000B00C((_DWORD)a1 - 352, (__int64)L"m_link", 99, 100);
    goto LABEL_237;
  }
  v16 = sub_1401353B8();
  if ( v16 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v17 = (const wchar_t *)&unk_1400D44E0;
      v18 = (const wchar_t *)&unk_1400D44E0;
      v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                             a1 - 37,
                                             v111)
                              + 16LL);
      if ( v19 )
        v18 = v19;
      v20 = *(_QWORD *)(*(a1 - 22) + 16LL);
      v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                             a1 - 37,
                                             v113)
                              + 16LL);
      if ( v21 )
        v17 = v21;
      sub_1400A5E80(v20, 2u, 0xBu, 0xBu, (__int64)&unk_1400D9408, v18, v17, L"m_link->AllocateComponents()");
      LOBYTE(v1) = 12;
    }
    if ( (v1 & 8) != 0 )
    {
      v22 = v112;
      LOBYTE(v1) = v1 & 0xF7;
      if ( v112 )
      {
        if ( _InterlockedExchangeAdd(v112 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v23 = v114;
      if ( v114 )
      {
        if ( _InterlockedExchangeAdd(v114 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    sub_140008774((_DWORD)a1 - 352, (__int64)L"m_link->AllocateComponents()", 101, 100, v16);
  }
  else
  {
    v24 = ExAllocatePool2(64LL, 32LL, 808465968LL);
    if ( !v24 || (v25 = sub_1400B050C(v24, (__int64)(a1 - 44))) == 0 || (v26 = *(_QWORD *)(v25 + 16)) == 0 )
    {
      v26 = 0LL;
      v25 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    }
    v27 = (volatile signed __int32 *)a1[13];
    a1[13] = v25;
    a1[12] = v26;
    if ( v27 )
    {
      if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
    if ( !a1[12] )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v28 = (const wchar_t *)&unk_1400D44E0;
        v29 = (const wchar_t *)&unk_1400D44E0;
        v30 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                               a1 - 37,
                                               v117)
                                + 16LL);
        if ( v30 )
          v29 = v30;
        v31 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                               a1 - 37,
                                               v115)
                                + 16LL);
        if ( v31 )
          v28 = v31;
        sub_1400A3320(
          *(_QWORD *)(*(a1 - 22) + 16LL),
          2u,
          0xBu,
          0xCu,
          (__int64)&unk_1400D9408,
          v28,
          v29,
          L"m_arpOffload");
        LOBYTE(v1) = 48;
      }
      if ( (v1 & 0x20) != 0 )
      {
        v32 = v116;
        LOBYTE(v1) = v1 & 0xDF;
        if ( v116 )
        {
          if ( _InterlockedExchangeAdd(v116 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
            if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
          }
        }
      }
      if ( (v1 & 0x10) != 0 )
      {
        v33 = v118;
        if ( v118 )
        {
          if ( _InterlockedExchangeAdd(v118 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
            if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
          }
        }
      }
      sub_14000BA2C((_DWORD)a1 - 352, (__int64)L"m_arpOffload", 104, 100);
      goto LABEL_237;
    }
    v34 = ExAllocatePool2(64LL, 32LL, 808465969LL);
    if ( !v34 || (v35 = sub_1400B065C(v34, (__int64)(a1 - 44))) == 0 || (v36 = *(_QWORD *)(v35 + 16)) == 0 )
    {
      v36 = 0LL;
      v35 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    }
    v37 = (volatile signed __int32 *)a1[15];
    a1[15] = v35;
    a1[14] = v36;
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
      }
    }
    if ( !a1[14] )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v38 = (const wchar_t *)&unk_1400D44E0;
        v39 = (const wchar_t *)&unk_1400D44E0;
        v40 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                               a1 - 37,
                                               v121)
                                + 16LL);
        if ( v40 )
          v39 = v40;
        v41 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                               a1 - 37,
                                               v119)
                                + 16LL);
        if ( v41 )
          v38 = v41;
        sub_1400A3320(*(_QWORD *)(*(a1 - 22) + 16LL), 2u, 0xBu, 0xDu, (__int64)&unk_1400D9408, v38, v39, L"m_nsOffload");
        LOBYTE(v1) = -64;
      }
      if ( (v1 & 0x80u) != 0 )
      {
        v42 = v120;
        LOBYTE(v1) = v1 & 0x7F;
        if ( v120 )
        {
          if ( _InterlockedExchangeAdd(v120 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
            if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
          }
        }
      }
      if ( (v1 & 0x40) != 0 )
      {
        v43 = v122;
        if ( v122 )
        {
          if ( _InterlockedExchangeAdd(v122 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
            if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
          }
        }
      }
      sub_14000B954((_DWORD)a1 - 352, (__int64)L"m_nsOffload", 107, 100);
      goto LABEL_237;
    }
    v44 = ExAllocatePool2(64LL, 32LL, 808466743LL);
    if ( !v44 || (v45 = sub_1400B088C(v44, (__int64)(a1 - 44))) == 0 || (v46 = *(_QWORD *)(v45 + 16)) == 0 )
    {
      v46 = 0LL;
      v45 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    }
    v47 = (volatile signed __int32 *)a1[17];
    a1[17] = v45;
    a1[16] = v46;
    if ( v47 )
    {
      if ( !_InterlockedDecrement(v47 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
        if ( !_InterlockedDecrement(v47 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
      }
    }
    if ( !a1[16] )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v48 = *(_QWORD *)(*(a1 - 22) + 16LL);
        v49 = (const wchar_t *)&unk_1400D44E0;
        v50 = (const wchar_t *)&unk_1400D44E0;
        v51 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                               a1 - 37,
                                               v125)
                                + 16LL);
        if ( v51 )
          v50 = v51;
        v52 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                               a1 - 37,
                                               v123)
                                + 16LL);
        if ( v52 )
          v49 = v52;
        sub_1400A3320(v48, 2u, 0xBu, 0xEu, (__int64)&unk_1400D9408, v49, v50, L"m_wolPatterns");
        LOWORD(v1) = 768;
      }
      if ( (v1 & 0x200) != 0 )
      {
        v53 = v124;
        LOWORD(v1) = v1 & 0xFDFF;
        if ( v124 )
        {
          if ( _InterlockedExchangeAdd(v124 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
            if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
          }
        }
      }
      if ( (v1 & 0x100) != 0 )
      {
        v54 = v126;
        if ( v126 )
        {
          if ( _InterlockedExchangeAdd(v126 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
            if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
          }
        }
      }
      sub_14000BB04((_DWORD)a1 - 352, (__int64)L"m_wolPatterns", 110, 100);
      goto LABEL_237;
    }
    v16 = sub_14013AA48();
    if ( !v16 )
    {
      v62 = ExAllocatePool2(64LL, 32LL, 808465970LL);
      if ( !v62 || (v63 = sub_1400B07AC(v62, (__int64)(a1 - 44))) == 0 || (v64 = *(_QWORD *)(v63 + 16)) == 0 )
      {
        v64 = 0LL;
        v63 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
      }
      v65 = (volatile signed __int32 *)a1[19];
      a1[19] = v63;
      a1[18] = v64;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
          if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 16LL))(v65);
        }
      }
      if ( a1[18] )
      {
        v75 = ExAllocatePool2(64LL, 32LL, 808466736LL);
        if ( !v75 || (v76 = sub_1400B057C(v75, (__int64)(a1 - 44))) == 0 || (v77 = *(_QWORD *)(v76 + 16)) == 0 )
        {
          v77 = 0LL;
          v76 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
        }
        v78 = (volatile signed __int32 *)a1[21];
        a1[21] = v76;
        a1[20] = v77;
        if ( v78 )
        {
          if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v78 + 8LL))(v78);
            if ( _InterlockedExchangeAdd(v78 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v78 + 16LL))(v78);
          }
        }
        if ( !a1[20] )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v79 = *(_QWORD *)(*(a1 - 22) + 16LL);
            v80 = (const wchar_t *)&unk_1400D44E0;
            v81 = (const wchar_t *)&unk_1400D44E0;
            v82 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                                   a1 - 37,
                                                   v135)
                                    + 16LL);
            if ( v82 )
              v81 = v82;
            v83 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                                   a1 - 37,
                                                   v137)
                                    + 16LL);
            if ( v83 )
              v80 = v83;
            sub_1400A3320(v79, 2u, 0xBu, 0x11u, (__int64)&unk_1400D9408, v81, v80, L"m_checksumOffload");
            LOWORD(v1) = -16384;
          }
          if ( (v1 & 0x8000) != 0 )
          {
            v84 = v136;
            LOWORD(v1) = v1 & 0x7FFF;
            if ( v136 )
            {
              if ( _InterlockedExchangeAdd(v136 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v84 + 8LL))(v84);
                if ( _InterlockedExchangeAdd(v84 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v84 + 16LL))(v84);
              }
            }
          }
          if ( (v1 & 0x4000) != 0 )
          {
            v85 = v138;
            if ( v138 )
            {
              if ( _InterlockedExchangeAdd(v138 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 8LL))(v85);
                if ( _InterlockedExchangeAdd(v85 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 16LL))(v85);
              }
            }
          }
          sub_14000B36C((_DWORD)a1 - 352, (__int64)L"m_checksumOffload", 118, 100);
          goto LABEL_237;
        }
        v86 = ExAllocatePool2(64LL, 32LL, 808466789LL);
        if ( !v86 || (v87 = sub_1400B081C(v86, (__int64)(a1 - 44))) == 0 || (v88 = *(_QWORD *)(v87 + 16)) == 0 )
        {
          v88 = 0LL;
          v87 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
        }
        v89 = (volatile signed __int32 *)a1[23];
        a1[23] = v87;
        a1[22] = v88;
        if ( v89 )
        {
          if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 8LL))(v89);
            if ( _InterlockedExchangeAdd(v89 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 16LL))(v89);
          }
        }
        if ( !a1[22] )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v90 = (const wchar_t *)&unk_1400D44E0;
            v91 = (const wchar_t *)&unk_1400D44E0;
            v92 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                                   a1 - 37,
                                                   v105)
                                    + 16LL);
            if ( v92 )
              v91 = v92;
            v93 = *(_QWORD *)(*(a1 - 22) + 16LL);
            v94 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                                   a1 - 37,
                                                   v106)
                                    + 16LL);
            if ( v94 )
              v90 = v94;
            sub_1400A3320(v93, 2u, 0xBu, 0x12u, (__int64)&unk_1400D9408, v91, v90, L"m_segmentationOffload");
            v1 = 196608;
          }
          if ( (v1 & 0x20000) != 0 )
          {
            v1 &= ~0x20000u;
            sub_1400A58D4((__int64)v105);
          }
          if ( (v1 & 0x10000) != 0 )
            sub_1400A58D4((__int64)v106);
          sub_14000B51C((_DWORD)a1 - 352, (__int64)L"m_segmentationOffload", 121, 100);
          goto LABEL_237;
        }
        v95 = ExAllocatePool2(64LL, 32LL, 808477492LL);
        if ( !v95 || (v96 = sub_1400B06CC(v95, (__int64)(a1 - 44))) == 0 || (v97 = *(_QWORD *)(v96 + 16)) == 0 )
        {
          v97 = 0LL;
          v96 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
        }
        v98 = (volatile signed __int32 *)a1[25];
        a1[25] = v96;
        a1[24] = v97;
        if ( v98 )
          sub_1400A5E38(v98);
        if ( a1[24] )
        {
          v16 = 0;
          goto LABEL_239;
        }
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v99 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(a1 - 37, v105);
          v100 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(a1 - 37, v106);
          v101 = (const wchar_t *)&unk_1400D44E0;
          v102 = (const wchar_t *)&unk_1400D44E0;
          v103 = *(const wchar_t **)(*(_QWORD *)v100 + 16LL);
          if ( v103 )
            v102 = v103;
          if ( *(_QWORD *)(v99 + 16) )
            v101 = *(const wchar_t **)(v99 + 16);
          sub_1400A3320(
            *(_QWORD *)(*(a1 - 22) + 16LL),
            2u,
            0xBu,
            0x13u,
            (__int64)&unk_1400D9408,
            v102,
            v101,
            L"m_receiveScaling");
          v1 = 786432;
        }
        if ( (v1 & 0x80000) != 0 )
        {
          v1 &= ~0x80000u;
          sub_1400A58D4((__int64)v106);
        }
        if ( (v1 & 0x40000) != 0 )
          sub_1400A58D4((__int64)v105);
        v73 = 124;
        v74 = L"m_receiveScaling";
      }
      else
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v66 = *(_QWORD *)(*(a1 - 22) + 16LL);
          v67 = (const wchar_t *)&unk_1400D44E0;
          v68 = (const wchar_t *)&unk_1400D44E0;
          v69 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                                 a1 - 37,
                                                 v133)
                                  + 16LL);
          if ( v69 )
            v68 = v69;
          v70 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                                 a1 - 37,
                                                 v131)
                                  + 16LL);
          if ( v70 )
            v67 = v70;
          sub_1400A3320(v66, 2u, 0xBu, 0x10u, (__int64)&unk_1400D9408, v67, v68, L"m_rxPacketFilter");
          LOWORD(v1) = 12288;
        }
        if ( (v1 & 0x2000) != 0 )
        {
          v71 = v132;
          LOWORD(v1) = v1 & 0xDFFF;
          if ( v132 )
          {
            if ( _InterlockedExchangeAdd(v132 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 8LL))(v71);
              if ( _InterlockedExchangeAdd(v71 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 16LL))(v71);
            }
          }
        }
        if ( (v1 & 0x1000) != 0 )
        {
          v72 = v134;
          if ( v134 )
          {
            if ( _InterlockedExchangeAdd(v134 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 8LL))(v72);
              if ( _InterlockedExchangeAdd(v72 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 16LL))(v72);
            }
          }
        }
        v73 = 115;
        v74 = L"m_rxPacketFilter";
      }
      sub_14000B294((_DWORD)a1 - 352, (__int64)v74, v73, 100);
LABEL_237:
      v16 = -1073741801;
      goto LABEL_239;
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v55 = (const wchar_t *)&unk_1400D44E0;
      v56 = (const wchar_t *)&unk_1400D44E0;
      v57 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                             a1 - 37,
                                             v127)
                              + 16LL);
      if ( v57 )
        v56 = v57;
      v58 = *(_QWORD *)(*(a1 - 22) + 16LL);
      v59 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                             a1 - 37,
                                             v129)
                              + 16LL);
      if ( v59 )
        v55 = v59;
      sub_1400A5E80(v58, 2u, 0xBu, 0xFu, (__int64)&unk_1400D9408, v56, v55, L"m_wolPatterns->AllocateComponents()");
      LOWORD(v1) = 3072;
    }
    if ( (v1 & 0x800) != 0 )
    {
      v60 = v128;
      LOWORD(v1) = v1 & 0xF7FF;
      if ( v128 )
      {
        if ( _InterlockedExchangeAdd(v128 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
          if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
        }
      }
    }
    if ( (v1 & 0x400) != 0 )
    {
      v61 = v130;
      if ( v130 )
      {
        if ( _InterlockedExchangeAdd(v130 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
          if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 16LL))(v61);
        }
      }
    }
    sub_1400113EC((_DWORD)a1 - 352, (__int64)L"m_wolPatterns->AllocateComponents()", 112, 100, v16);
  }
LABEL_239:
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v16;
}
