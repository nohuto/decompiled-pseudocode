__int64 __fastcall sub_140118DE4(__int64 *a1, __int64 *a2)
{
  const wchar_t *v2; // rdi
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  const wchar_t *v8; // r13
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rsi
  volatile signed __int32 *v12; // rdi
  volatile signed __int32 *v13; // rdi
  unsigned int v15; // esi
  const wchar_t *v16; // r13
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  volatile signed __int32 *v19; // rsi
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rdi
  _QWORD *v22; // rax
  const wchar_t *v23; // r13
  const wchar_t *v24; // rax
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // rsi
  volatile signed __int32 *v27; // rdi
  const wchar_t *v28; // r13
  const wchar_t *v29; // rax
  const wchar_t *v30; // rax
  volatile signed __int32 *v31; // rsi
  volatile signed __int32 *v32; // rdi
  const wchar_t *v33; // r13
  const wchar_t *v34; // rax
  const wchar_t *v35; // rax
  volatile signed __int32 *v36; // rsi
  volatile signed __int32 *v37; // rdi
  _QWORD *v38; // rax
  const wchar_t *v39; // r13
  const wchar_t *v40; // rax
  const wchar_t *v41; // rax
  volatile signed __int32 *v42; // rsi
  volatile signed __int32 *v43; // rdi
  unsigned int v44; // r13d
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rax
  const wchar_t *v48; // r13
  const wchar_t *v49; // rdx
  const wchar_t *v50; // rax
  volatile signed __int32 *v51; // rsi
  volatile signed __int32 *v52; // rdi
  volatile signed __int32 *v53; // rdi
  const wchar_t *v54; // r13
  const wchar_t *v55; // rax
  const wchar_t *v56; // rax
  volatile signed __int32 *v57; // rsi
  volatile signed __int32 *v58; // rdi
  volatile signed __int32 *v59; // rdi
  char v60[8]; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v61; // [rsp+58h] [rbp-A8h]
  char v62[8]; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v63; // [rsp+68h] [rbp-98h]
  char v64[8]; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v65; // [rsp+78h] [rbp-88h]
  char v66[8]; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v67; // [rsp+88h] [rbp-78h]
  char v68[8]; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v69; // [rsp+98h] [rbp-68h]
  char v70[8]; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v71; // [rsp+A8h] [rbp-58h]
  char v72[8]; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v73; // [rsp+B8h] [rbp-48h]
  char v74[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v75; // [rsp+C8h] [rbp-38h]
  char v76[8]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v77; // [rsp+D8h] [rbp-28h]
  char v78[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v79; // [rsp+E8h] [rbp-18h]
  char v80[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v81; // [rsp+F8h] [rbp-8h]
  char v82[8]; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v83; // [rsp+108h] [rbp+8h]
  char v84[8]; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v85; // [rsp+118h] [rbp+18h]
  char v86[8]; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v87; // [rsp+128h] [rbp+28h]
  char v88[8]; // [rsp+130h] [rbp+30h] BYREF
  volatile signed __int32 *v89; // [rsp+138h] [rbp+38h]
  char v90[8]; // [rsp+140h] [rbp+40h] BYREF
  volatile signed __int32 *v91; // [rsp+148h] [rbp+48h]
  __int64 v92; // [rsp+150h] [rbp+50h] BYREF
  __int64 v93; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v94; // [rsp+1A8h] [rbp+A8h]
  unsigned int v95; // [rsp+1A8h] [rbp+A8h]
  unsigned int v96; // [rsp+1A8h] [rbp+A8h]
  unsigned int v97; // [rsp+1A8h] [rbp+A8h]
  unsigned int v98; // [rsp+1A8h] [rbp+A8h]
  unsigned int v99; // [rsp+1A8h] [rbp+A8h]
  unsigned int v100; // [rsp+1A8h] [rbp+A8h]

  LOWORD(v2) = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140073750(Pool2, (__int64)L"framework::DeviceContext::Initialize", (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v2 = (const wchar_t *)&unk_1400D44E0;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v62) + 16LL);
      if ( v9 )
        v2 = v9;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v60)
                              + 16LL);
      if ( v10 )
        v8 = v10;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16), 2u, 8u, 0xEu, (__int64)&unk_1400D91A8, v8, v2, L"initializeResources");
      LOBYTE(v2) = 3;
    }
    if ( ((unsigned __int8)v2 & 2) != 0 )
    {
      v11 = v61;
      LOBYTE(v2) = (unsigned __int8)v2 & 0xFD;
      if ( v61 )
      {
        if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    if ( ((unsigned __int8)v2 & 1) != 0 )
    {
      v12 = v63;
      if ( v63 )
      {
        if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    sub_14000B444((int)a1, (__int64)L"initializeResources", 163, 74);
    if ( v4 )
    {
      sub_14007404C(v4);
      ExFreePool(v4);
    }
    v13 = (volatile signed __int32 *)a2[1];
    if ( v13 && _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return 3221225485LL;
  }
  v94 = sub_14008AC8C((_QWORD *)*a2);
  v15 = v94;
  if ( v94 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v16 = (const wchar_t *)&unk_1400D44E0;
      v2 = (const wchar_t *)&unk_1400D44E0;
      v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v66)
                              + 16LL);
      if ( v17 )
        v2 = v17;
      v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v64)
                              + 16LL);
      if ( v18 )
        v16 = v18;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16),
        2u,
        8u,
        0xFu,
        (__int64)&unk_1400D91A8,
        v16,
        v2,
        L"initializeResources->CheckResources()");
      LOBYTE(v2) = 12;
    }
    if ( ((unsigned __int8)v2 & 8) != 0 )
    {
      v19 = v65;
      LOBYTE(v2) = (unsigned __int8)v2 & 0xF7;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
      v15 = v94;
    }
    if ( ((unsigned __int8)v2 & 4) != 0 )
    {
      v20 = v67;
      if ( v67 )
      {
        if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    sub_140008F3C((int)a1, (__int64)L"initializeResources->CheckResources()", 165, 74, v15);
LABEL_49:
    if ( v4 )
    {
      sub_14007404C(v4);
      ExFreePool(v4);
    }
    v21 = (volatile signed __int32 *)a2[1];
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    return v15;
  }
  v22 = sub_1400A27D4(&v92, a2);
  v95 = sub_140113450(a1, v22);
  v15 = v95;
  if ( v95 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v23 = (const wchar_t *)&unk_1400D44E0;
      v2 = (const wchar_t *)&unk_1400D44E0;
      v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v70)
                              + 16LL);
      if ( v24 )
        v2 = v24;
      v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v68)
                              + 16LL);
      if ( v25 )
        v23 = v25;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16),
        2u,
        8u,
        0x10u,
        (__int64)&unk_1400D91A8,
        v23,
        v2,
        L"AllocateComponents(initializeResources)");
      LOBYTE(v2) = 48;
    }
    if ( ((unsigned __int8)v2 & 0x20) != 0 )
    {
      v26 = v69;
      LOBYTE(v2) = (unsigned __int8)v2 & 0xDF;
      if ( v69 )
      {
        if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
      v15 = v95;
    }
    if ( ((unsigned __int8)v2 & 0x10) != 0 )
    {
      v27 = v71;
      if ( v71 )
      {
        if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    sub_1400091D4((int)a1, (__int64)L"AllocateComponents(initializeResources)", 167, 74, v15);
    goto LABEL_49;
  }
  v96 = sub_1401154C0(a1);
  v15 = v96;
  if ( v96 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v28 = (const wchar_t *)&unk_1400D44E0;
      v2 = (const wchar_t *)&unk_1400D44E0;
      v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v74)
                              + 16LL);
      if ( v29 )
        v2 = v29;
      v30 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v72)
                              + 16LL);
      if ( v30 )
        v28 = v30;
      sub_1400A5E80(*(_QWORD *)(a1[22] + 16), 2u, 8u, 0x11u, (__int64)&unk_1400D91A8, v28, v2, L"BindComponents()");
      LOBYTE(v2) = -64;
    }
    if ( (char)v2 < 0 )
    {
      v31 = v73;
      LOBYTE(v2) = (unsigned __int8)v2 & 0x7F;
      if ( v73 )
      {
        if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
      v15 = v96;
    }
    if ( ((unsigned __int8)v2 & 0x40) != 0 )
    {
      v32 = v75;
      if ( v75 )
      {
        if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
          if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
    }
    sub_1400731B8((__int64)a1, (__int64)L"BindComponents()", 169, 74, v15);
    goto LABEL_49;
  }
  v97 = sub_140116720((__int64)a1);
  v15 = v97;
  if ( v97 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v33 = (const wchar_t *)&unk_1400D44E0;
      v2 = (const wchar_t *)&unk_1400D44E0;
      v34 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v78)
                              + 16LL);
      if ( v34 )
        v2 = v34;
      v35 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v76)
                              + 16LL);
      if ( v35 )
        v33 = v35;
      sub_1400A5E80(*(_QWORD *)(a1[22] + 16), 2u, 8u, 0x12u, (__int64)&unk_1400D91A8, v33, v2, L"CreateNetAdapter()");
      LOWORD(v2) = 768;
    }
    if ( ((unsigned __int16)v2 & 0x200) != 0 )
    {
      v36 = v77;
      LOWORD(v2) = (unsigned __int16)v2 & 0xFDFF;
      if ( v77 )
      {
        if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
          if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
        }
      }
      v15 = v97;
    }
    if ( ((unsigned __int16)v2 & 0x100) != 0 )
    {
      v37 = v79;
      if ( v79 )
      {
        if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    sub_14002D6E8((int)a1, (__int64)L"CreateNetAdapter()", 174, 74, v15);
    goto LABEL_49;
  }
  v38 = sub_1400A27D4(&v93, (__int64 *)(*a2 + 80));
  v98 = sub_14011B764(a1, v38);
  v15 = v98;
  if ( v98 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v39 = (const wchar_t *)&unk_1400D44E0;
      v2 = (const wchar_t *)&unk_1400D44E0;
      v40 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v82)
                              + 16LL);
      if ( v40 )
        v2 = v40;
      v41 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v80)
                              + 16LL);
      if ( v41 )
        v39 = v41;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16),
        2u,
        8u,
        0x13u,
        (__int64)&unk_1400D91A8,
        v39,
        v2,
        L"ReadRegistryConfiguration(initializeResources->m_registryTables)");
      LOWORD(v2) = 3072;
    }
    if ( ((unsigned __int16)v2 & 0x800) != 0 )
    {
      v42 = v81;
      LOWORD(v2) = (unsigned __int16)v2 & 0xF7FF;
      if ( v81 )
      {
        if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
      v15 = v98;
    }
    if ( ((unsigned __int16)v2 & 0x400) != 0 )
    {
      v43 = v83;
      if ( v83 )
      {
        if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
      }
    }
    sub_14000A164((int)a1, (__int64)L"ReadRegistryConfiguration(initializeResources->m_registryTables)", 175, 74, v15);
    goto LABEL_49;
  }
  v99 = sub_140119C34(a1);
  v44 = v99;
  if ( v99 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v45 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v84);
      v46 = *(_QWORD *)(a1[22] + 16);
      v47 = (*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v86);
      v48 = (const wchar_t *)&unk_1400D44E0;
      v49 = (const wchar_t *)&unk_1400D44E0;
      v50 = *(const wchar_t **)(*(_QWORD *)v47 + 16LL);
      if ( v50 )
        v49 = v50;
      if ( *(_QWORD *)(v45 + 16) )
        v48 = *(const wchar_t **)(v45 + 16);
      sub_1400A5E80(v46, 2u, 8u, 0x14u, (__int64)&unk_1400D91A8, v48, v49, L"InitializeComponents()");
      v44 = v99;
      LOWORD(v2) = 12288;
    }
    if ( ((unsigned __int16)v2 & 0x2000) != 0 )
    {
      v51 = v85;
      LOWORD(v2) = (unsigned __int16)v2 & 0xDFFF;
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
    if ( ((unsigned __int16)v2 & 0x1000) != 0 )
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
    sub_1400080F8((int)a1, (__int64)L"InitializeComponents()", 177, 74, v44);
    if ( v4 )
    {
      sub_14007404C(v4);
      ExFreePool(v4);
    }
    v53 = (volatile signed __int32 *)a2[1];
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
        if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
      }
    }
    return v44;
  }
  else
  {
    v100 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 40))(a1);
    v15 = v100;
    if ( v100 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v54 = (const wchar_t *)&unk_1400D44E0;
        v2 = (const wchar_t *)&unk_1400D44E0;
        v55 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v90)
                                + 16LL);
        if ( v55 )
          v2 = v55;
        v56 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v88)
                                + 16LL);
        if ( v56 )
          v54 = v56;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16),
          2u,
          8u,
          0x15u,
          (__int64)&unk_1400D91A8,
          v54,
          v2,
          L"InitializeSecondLevelComponents()");
        LOWORD(v2) = -16384;
      }
      if ( ((unsigned __int16)v2 & 0x8000) != 0 )
      {
        v57 = v89;
        LOWORD(v2) = (unsigned __int16)v2 & 0x7FFF;
        if ( v89 )
        {
          if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
            if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
          }
        }
        v15 = v100;
      }
      if ( ((unsigned __int16)v2 & 0x4000) != 0 )
      {
        v58 = v91;
        if ( v91 )
        {
          if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
            if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
          }
        }
      }
      sub_140008DF0((int)a1, (__int64)L"InitializeSecondLevelComponents()", 179, 74, v15);
      goto LABEL_49;
    }
    if ( v4 )
    {
      sub_14007404C(v4);
      ExFreePool(v4);
    }
    v59 = (volatile signed __int32 *)a2[1];
    if ( v59 )
    {
      if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
        if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
      }
    }
    return 0LL;
  }
}
