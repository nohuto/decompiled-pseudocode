__int64 __fastcall sub_140108830(_QWORD *a1)
{
  __int16 v1; // bx
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rdi
  _QWORD *v10; // rcx
  const wchar_t *v11; // r15
  const wchar_t *v12; // rdi
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rdi
  volatile signed __int32 *v16; // rbx
  unsigned int v17; // esi
  const wchar_t *v18; // r15
  const wchar_t *v19; // rdi
  const wchar_t *v20; // rax
  const wchar_t *v21; // rax
  volatile signed __int32 *v22; // rdi
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  volatile signed __int32 *v27; // rdi
  const wchar_t *v28; // r15
  const wchar_t *v29; // rdi
  const wchar_t *v30; // rax
  __int64 v31; // rsi
  const wchar_t *v32; // rax
  volatile signed __int32 *v33; // rdi
  volatile signed __int32 *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  volatile signed __int32 *v38; // rdi
  const wchar_t *v39; // r15
  const wchar_t *v40; // rdi
  const wchar_t *v41; // rax
  const wchar_t *v42; // rax
  volatile signed __int32 *v43; // rdi
  volatile signed __int32 *v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  volatile signed __int32 *v48; // rdi
  __int64 v49; // rsi
  const wchar_t *v50; // r15
  const wchar_t *v51; // rdi
  const wchar_t *v52; // rax
  const wchar_t *v53; // rax
  volatile signed __int32 *v54; // rdi
  volatile signed __int32 *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  volatile signed __int32 *v59; // rdi
  const wchar_t *v60; // r15
  const wchar_t *v61; // rdi
  const wchar_t *v62; // rax
  const wchar_t *v63; // rax
  volatile signed __int32 *v64; // rdi
  volatile signed __int32 *v65; // rbx
  const wchar_t *v66; // r15
  const wchar_t *v67; // rdi
  const wchar_t *v68; // rax
  const wchar_t *v69; // rax
  volatile signed __int32 *v70; // rdi
  volatile signed __int32 *v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  volatile signed __int32 *v75; // rdi
  const wchar_t *v76; // r15
  const wchar_t *v77; // rdi
  const wchar_t *v78; // rax
  const wchar_t *v79; // rax
  volatile signed __int32 *v80; // rdi
  volatile signed __int32 *v81; // rbx
  __int64 v83; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v84; // [rsp+60h] [rbp-A8h]
  __int64 v85; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v86; // [rsp+70h] [rbp-98h]
  __int64 v87; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v88; // [rsp+80h] [rbp-88h]
  _BYTE v89[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v90; // [rsp+90h] [rbp-78h]
  _BYTE v91[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v92; // [rsp+A0h] [rbp-68h]
  _BYTE v93[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v94; // [rsp+B0h] [rbp-58h]
  _BYTE v95[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v96; // [rsp+C0h] [rbp-48h]
  _BYTE v97[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v98; // [rsp+D0h] [rbp-38h]
  _BYTE v99[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v100; // [rsp+E0h] [rbp-28h]
  _BYTE v101[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v102; // [rsp+F0h] [rbp-18h]
  _BYTE v103[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v104; // [rsp+100h] [rbp-8h]
  _BYTE v105[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v106; // [rsp+110h] [rbp+8h]
  _BYTE v107[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v108; // [rsp+120h] [rbp+18h]
  _BYTE v109[8]; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v110; // [rsp+130h] [rbp+28h]
  _BYTE v111[8]; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v112; // [rsp+140h] [rbp+38h]
  _BYTE v113[8]; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v114; // [rsp+150h] [rbp+48h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14005B310(Pool2, (__int64)L"os_resources::OsResources::AllocateComponents", (__int64)(a1 - 44));
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = ExAllocatePool2(64LL, 32LL, 808466233LL);
  if ( !v6 || (v7 = sub_1400AC3F8(v6, (int)a1 - 352)) == 0 || (v8 = *(_QWORD *)(v7 + 16)) == 0 )
  {
    v8 = 0LL;
    v7 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v9 = (volatile signed __int32 *)a1[5];
  a1[5] = v7;
  a1[4] = v8;
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  v10 = (_QWORD *)a1[4];
  if ( !v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*(a1 - 37) + 16LL))(
                                             a1 - 37,
                                             &v85)
                              + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*(a1 - 37) + 24LL))(
                                             a1 - 37,
                                             &v83)
                              + 16LL);
      if ( v14 )
        v11 = v14;
      sub_1400A3320(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        2u,
        4u,
        0xAu,
        (__int64)&unk_1400D7B48,
        v11,
        v12,
        L"m_memoryMappedIoAccessorsProvider");
      LOBYTE(v1) = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v15 = v84;
      LOBYTE(v1) = v1 & 0xFD;
      if ( v84 )
      {
        if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v16 = v86;
      if ( v86 )
      {
        if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    sub_14005B238((_DWORD)a1 - 352, (__int64)L"m_memoryMappedIoAccessorsProvider", 81, 142);
LABEL_198:
    v17 = -1073741801;
    goto LABEL_200;
  }
  v17 = sub_140065F84(v10);
  if ( v17 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v18 = (const wchar_t *)&unk_1400D44E0;
      v19 = (const wchar_t *)&unk_1400D44E0;
      v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                             a1 - 37,
                                             v89)
                              + 16LL);
      if ( v20 )
        v19 = v20;
      v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*(a1 - 37) + 24LL))(
                                             a1 - 37,
                                             &v87)
                              + 16LL);
      if ( v21 )
        v18 = v21;
      sub_1400A5E80(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        2u,
        4u,
        0xBu,
        (__int64)&unk_1400D7B48,
        v18,
        v19,
        L"m_memoryMappedIoAccessorsProvider->AllocateComponents()");
      LOBYTE(v1) = 12;
    }
    if ( (v1 & 8) != 0 )
    {
      v22 = v88;
      LOBYTE(v1) = v1 & 0xF7;
      if ( v88 )
      {
        if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v23 = v90;
      if ( v90 )
      {
        if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    sub_1400358A0((_DWORD)a1 - 352, (__int64)L"m_memoryMappedIoAccessorsProvider->AllocateComponents()", 83, 142, v17);
  }
  else
  {
    v24 = ExAllocatePool2(64LL, 32LL, 808466273LL);
    if ( !v24 || (v25 = sub_1400AC548(v24, (int)a1 - 352)) == 0 || (v26 = *(_QWORD *)(v25 + 16)) == 0 )
    {
      v26 = 0LL;
      v25 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    }
    v27 = (volatile signed __int32 *)a1[7];
    a1[7] = v25;
    a1[6] = v26;
    if ( v27 )
    {
      if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
    if ( !a1[6] )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v28 = (const wchar_t *)&unk_1400D44E0;
        v29 = (const wchar_t *)&unk_1400D44E0;
        v30 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                               a1 - 37,
                                               v91)
                                + 16LL);
        if ( v30 )
          v29 = v30;
        v31 = *(_QWORD *)(*(a1 - 22) + 16LL);
        v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                               a1 - 37,
                                               v93)
                                + 16LL);
        if ( v32 )
          v28 = v32;
        sub_1400A3320(v31, 2u, 4u, 0xCu, (__int64)&unk_1400D7B48, v29, v28, L"m_pciConfigSpaceAccessor");
        LOBYTE(v1) = 48;
      }
      if ( (v1 & 0x20) != 0 )
      {
        v33 = v92;
        LOBYTE(v1) = v1 & 0xDF;
        if ( v92 )
        {
          if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
            if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
          }
        }
      }
      if ( (v1 & 0x10) != 0 )
      {
        v34 = v94;
        if ( v94 )
        {
          if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
            if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
          }
        }
      }
      sub_14000B6CC((_DWORD)a1 - 352, (__int64)L"m_pciConfigSpaceAccessor", 86, 142);
      goto LABEL_198;
    }
    v35 = ExAllocatePool2(64LL, 32LL, 808466274LL);
    if ( !v35 || (v36 = sub_1400AC388(v35, (int)a1 - 352)) == 0 || (v37 = *(_QWORD *)(v36 + 16)) == 0 )
    {
      v37 = 0LL;
      v36 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    }
    v38 = (volatile signed __int32 *)a1[9];
    a1[9] = v36;
    a1[8] = v37;
    if ( v38 )
    {
      if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
        if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
      }
    }
    if ( !a1[8] )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v39 = (const wchar_t *)&unk_1400D44E0;
        v40 = (const wchar_t *)&unk_1400D44E0;
        v41 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                               a1 - 37,
                                               v97)
                                + 16LL);
        if ( v41 )
          v40 = v41;
        v42 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                               a1 - 37,
                                               v95)
                                + 16LL);
        if ( v42 )
          v39 = v42;
        sub_1400A3320(
          *(_QWORD *)(*(a1 - 22) + 16LL),
          2u,
          4u,
          0xDu,
          (__int64)&unk_1400D7B48,
          v39,
          v40,
          L"m_commonBufferFactory");
        LOBYTE(v1) = -64;
      }
      if ( (v1 & 0x80u) != 0 )
      {
        v43 = v96;
        LOBYTE(v1) = v1 & 0x7F;
        if ( v96 )
        {
          if ( _InterlockedExchangeAdd(v96 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
            if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
          }
        }
      }
      if ( (v1 & 0x40) != 0 )
      {
        v44 = v98;
        if ( v98 )
        {
          if ( _InterlockedExchangeAdd(v98 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
            if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
          }
        }
      }
      sub_14000B51C((_DWORD)a1 - 352, (__int64)L"m_commonBufferFactory", 89, 142);
      goto LABEL_198;
    }
    v45 = ExAllocatePool2(64LL, 32LL, 808466275LL);
    if ( !v45 || (v46 = sub_1400AC4D8(v45, (int)a1 - 352)) == 0 || (v47 = *(_QWORD *)(v46 + 16)) == 0 )
    {
      v47 = 0LL;
      v46 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    }
    v48 = (volatile signed __int32 *)a1[11];
    a1[11] = v46;
    a1[10] = v47;
    if ( v48 )
    {
      if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
        if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
      }
    }
    if ( !a1[10] )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v49 = *(_QWORD *)(*(a1 - 22) + 16LL);
        v50 = (const wchar_t *)&unk_1400D44E0;
        v51 = (const wchar_t *)&unk_1400D44E0;
        v52 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                               a1 - 37,
                                               v101)
                                + 16LL);
        if ( v52 )
          v51 = v52;
        v53 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                               a1 - 37,
                                               v99)
                                + 16LL);
        if ( v53 )
          v50 = v53;
        sub_1400A3320(v49, 2u, 4u, 0xEu, (__int64)&unk_1400D7B48, v50, v51, L"m_interruptsPool");
        v1 = 768;
      }
      if ( (v1 & 0x200) != 0 )
      {
        v54 = v100;
        v1 &= ~0x200u;
        if ( v100 )
        {
          if ( _InterlockedExchangeAdd(v100 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
            if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
          }
        }
      }
      if ( (v1 & 0x100) != 0 )
      {
        v55 = v102;
        if ( v102 )
        {
          if ( _InterlockedExchangeAdd(v102 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
            if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
          }
        }
      }
      sub_14000B294((_DWORD)a1 - 352, (__int64)L"m_interruptsPool", 92, 142);
      goto LABEL_198;
    }
    v56 = ExAllocatePool2(64LL, 32LL, 808466276LL);
    if ( !v56 || (v57 = sub_1400AC5B8(v56, (int)a1 - 352)) == 0 || (v58 = *(_QWORD *)(v57 + 16)) == 0 )
    {
      v58 = 0LL;
      v57 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    }
    v59 = (volatile signed __int32 *)a1[13];
    a1[13] = v57;
    a1[12] = v58;
    if ( v59 )
    {
      if ( !_InterlockedDecrement(v59 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
        if ( !_InterlockedDecrement(v59 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
      }
    }
    if ( !a1[12] )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v60 = (const wchar_t *)&unk_1400D44E0;
        v61 = (const wchar_t *)&unk_1400D44E0;
        v62 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                               a1 - 37,
                                               v105)
                                + 16LL);
        if ( v62 )
          v61 = v62;
        v63 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                               a1 - 37,
                                               v103)
                                + 16LL);
        if ( v63 )
          v60 = v63;
        sub_1400A3320(*(_QWORD *)(*(a1 - 22) + 16LL), 2u, 4u, 0xFu, (__int64)&unk_1400D7B48, v60, v61, L"m_systemPower");
        v1 = 3072;
      }
      if ( (v1 & 0x800) != 0 )
      {
        v64 = v104;
        v1 &= ~0x800u;
        if ( v104 )
        {
          if ( _InterlockedExchangeAdd(v104 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 8LL))(v64);
            if ( _InterlockedExchangeAdd(v64 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 16LL))(v64);
          }
        }
      }
      if ( (v1 & 0x400) != 0 )
      {
        v65 = v106;
        if ( v106 )
        {
          if ( _InterlockedExchangeAdd(v106 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
            if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 16LL))(v65);
          }
        }
      }
      sub_14000BB04((_DWORD)a1 - 352, (__int64)L"m_systemPower", 95, 142);
      goto LABEL_198;
    }
    v17 = sub_140110190();
    if ( v17 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v66 = (const wchar_t *)&unk_1400D44E0;
        v67 = (const wchar_t *)&unk_1400D44E0;
        v68 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                               a1 - 37,
                                               v109)
                                + 16LL);
        if ( v68 )
          v67 = v68;
        v69 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                               a1 - 37,
                                               v107)
                                + 16LL);
        if ( v69 )
          v66 = v69;
        sub_1400A5E80(
          *(_QWORD *)(*(a1 - 22) + 16LL),
          2u,
          4u,
          0x10u,
          (__int64)&unk_1400D7B48,
          v66,
          v67,
          L"m_systemPower->AllocateComponents()");
        v1 = 12288;
      }
      if ( (v1 & 0x2000) != 0 )
      {
        v70 = v108;
        v1 &= ~0x2000u;
        if ( v108 )
        {
          if ( _InterlockedExchangeAdd(v108 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 8LL))(v70);
            if ( _InterlockedExchangeAdd(v70 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 16LL))(v70);
          }
        }
      }
      if ( (v1 & 0x1000) != 0 )
      {
        v71 = v110;
        if ( v110 )
        {
          if ( _InterlockedExchangeAdd(v110 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 8LL))(v71);
            if ( _InterlockedExchangeAdd(v71 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 16LL))(v71);
          }
        }
      }
      sub_1400113EC((_DWORD)a1 - 352, (__int64)L"m_systemPower->AllocateComponents()", 96, 142, v17);
    }
    else
    {
      v72 = ExAllocatePool2(64LL, 32LL, 808477028LL);
      if ( !v72 || (v73 = sub_1400AC468(v72, (int)a1 - 352)) == 0 || (v74 = *(_QWORD *)(v73 + 16)) == 0 )
      {
        v74 = 0LL;
        v73 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
      }
      v75 = (volatile signed __int32 *)a1[15];
      a1[15] = v73;
      a1[14] = v74;
      if ( v75 )
      {
        if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v75 + 8LL))(v75);
          if ( _InterlockedExchangeAdd(v75 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v75 + 16LL))(v75);
        }
      }
      if ( !a1[14] )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v76 = (const wchar_t *)&unk_1400D44E0;
          v77 = (const wchar_t *)&unk_1400D44E0;
          v78 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                                 a1 - 37,
                                                 v113)
                                  + 16LL);
          if ( v78 )
            v77 = v78;
          v79 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                                 a1 - 37,
                                                 v111)
                                  + 16LL);
          if ( v79 )
            v76 = v79;
          sub_1400A3320(
            *(_QWORD *)(*(a1 - 22) + 16LL),
            2u,
            4u,
            0x11u,
            (__int64)&unk_1400D7B48,
            v76,
            v77,
            L"m_eventDispatcher");
          v1 = -16384;
        }
        if ( v1 < 0 )
        {
          v80 = v112;
          v1 &= ~0x8000u;
          if ( v112 )
          {
            if ( _InterlockedExchangeAdd(v112 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 8LL))(v80);
              if ( _InterlockedExchangeAdd(v80 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 16LL))(v80);
            }
          }
        }
        if ( (v1 & 0x4000) != 0 )
        {
          v81 = v114;
          if ( v114 )
          {
            if ( _InterlockedExchangeAdd(v114 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v81 + 8LL))(v81);
              if ( _InterlockedExchangeAdd(v81 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v81 + 16LL))(v81);
            }
          }
        }
        sub_14000B36C((_DWORD)a1 - 352, (__int64)L"m_eventDispatcher", 99, 142);
        goto LABEL_198;
      }
      v17 = 0;
    }
  }
LABEL_200:
  if ( v3 )
  {
    sub_14005B5AC(v3);
    ExFreePool(v3);
  }
  return v17;
}
