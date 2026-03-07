__int64 __fastcall sub_14011F490(__int64 *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  const wchar_t *v8; // r12
  __int64 *v9; // r13
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  const wchar_t *v12; // rdi
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rdi
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v19; // rdi
  volatile signed __int32 *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  const wchar_t *v24; // rdi
  const wchar_t *v25; // rax
  const wchar_t *v26; // rax
  volatile signed __int32 *v27; // rdi
  volatile signed __int32 *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  const wchar_t *v32; // rdi
  const wchar_t *v33; // rax
  const wchar_t *v34; // rax
  volatile signed __int32 *v35; // rdi
  volatile signed __int32 *v36; // rdi
  volatile signed __int32 *v37; // rdi
  volatile signed __int32 *v38; // rdi
  volatile signed __int32 *v39; // rdi
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rsi
  _QWORD *v46; // rbx
  __int64 v47; // rax
  unsigned int v48; // esi
  const wchar_t *v49; // rdi
  const wchar_t *v50; // rax
  const wchar_t *v51; // rax
  volatile signed __int32 *v52; // rdi
  volatile signed __int32 *v53; // rdi
  volatile signed __int32 *v54; // rdi
  volatile signed __int32 *v55; // rdi
  volatile signed __int32 *v56; // rdi
  volatile signed __int32 *v57; // rdi
  __int64 v58; // rbx
  __int64 v59; // rax
  const wchar_t *v60; // rdi
  const wchar_t *v61; // rax
  const wchar_t *v62; // rax
  volatile signed __int32 *v63; // rdi
  volatile signed __int32 *v64; // rdi
  __int64 v65; // rbx
  _QWORD *v66; // rax
  const wchar_t *v67; // rdi
  const wchar_t *v68; // rax
  const wchar_t *v69; // rax
  volatile signed __int32 *v70; // rdi
  volatile signed __int32 *v71; // rdi
  __int64 *v72; // rdx
  __int64 v73; // r15
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // r14
  _QWORD *v77; // rsi
  int v78; // edi
  int v79; // ebx
  int v80; // eax
  unsigned int v81; // r15d
  const wchar_t *v82; // rdi
  const wchar_t *v83; // rax
  __int64 v84; // rsi
  const wchar_t *v85; // rax
  volatile signed __int32 *v86; // rdi
  volatile signed __int32 *v87; // rdi
  volatile signed __int32 *v88; // rdi
  volatile signed __int32 *v89; // rdi
  volatile signed __int32 *v90; // rdi
  volatile signed __int32 *v91; // rdi
  volatile signed __int32 *v92; // rdi
  volatile signed __int32 *v93; // rdi
  volatile signed __int32 *v94; // rdi
  volatile signed __int32 *v95; // rdi
  _QWORD v96[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v97; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v98; // [rsp+78h] [rbp-90h]
  __int64 v99; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 *v100; // [rsp+88h] [rbp-80h]
  char v101[8]; // [rsp+90h] [rbp-78h] BYREF
  volatile signed __int32 *v102; // [rsp+98h] [rbp-70h]
  char v103[8]; // [rsp+A0h] [rbp-68h] BYREF
  volatile signed __int32 *v104; // [rsp+A8h] [rbp-60h]
  char v105[8]; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v106; // [rsp+B8h] [rbp-50h]
  char v107[8]; // [rsp+C0h] [rbp-48h] BYREF
  volatile signed __int32 *v108; // [rsp+C8h] [rbp-40h]
  char v109[8]; // [rsp+D0h] [rbp-38h] BYREF
  volatile signed __int32 *v110; // [rsp+D8h] [rbp-30h]
  char v111[8]; // [rsp+E0h] [rbp-28h] BYREF
  volatile signed __int32 *v112; // [rsp+E8h] [rbp-20h]
  char v113[8]; // [rsp+F0h] [rbp-18h] BYREF
  volatile signed __int32 *v114; // [rsp+F8h] [rbp-10h]
  char v115[8]; // [rsp+100h] [rbp-8h] BYREF
  volatile signed __int32 *v116; // [rsp+108h] [rbp+0h]
  char v117[8]; // [rsp+110h] [rbp+8h] BYREF
  volatile signed __int32 *v118; // [rsp+118h] [rbp+10h]
  char v119[8]; // [rsp+120h] [rbp+18h] BYREF
  volatile signed __int32 *v120; // [rsp+128h] [rbp+20h]
  char v121[8]; // [rsp+130h] [rbp+28h] BYREF
  volatile signed __int32 *v122; // [rsp+138h] [rbp+30h]
  char v123[8]; // [rsp+140h] [rbp+38h] BYREF
  volatile signed __int32 *v124; // [rsp+148h] [rbp+40h]
  __int64 v125; // [rsp+150h] [rbp+48h] BYREF
  char v126[16]; // [rsp+160h] [rbp+58h] BYREF
  char v127[16]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v128; // [rsp+180h] [rbp+78h] BYREF
  __int64 v129; // [rsp+190h] [rbp+88h] BYREF
  char v130[16]; // [rsp+1A0h] [rbp+98h] BYREF
  char v131[16]; // [rsp+1B0h] [rbp+A8h] BYREF
  char v132[88]; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 *v136; // [rsp+240h] [rbp+138h]

  v136 = a4;
  LOWORD(v8) = 0;
  v9 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapter::Bind", (__int64)(a1 - 44));
      if ( v11 )
        v9 = v11;
    }
    a4 = v136;
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(*(a1 - 37) + 16))(
                                             a1 - 37,
                                             &v99)
                              + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(*(a1 - 37) + 24))(
                                             a1 - 37,
                                             &v97)
                              + 16LL);
      if ( v14 )
        v8 = v14;
      sub_1400A3320(*(_QWORD *)(*(a1 - 22) + 16), 2u, 0xBu, 0x14u, (__int64)&unk_1400D9408, v8, v12, L"osServices");
      LOBYTE(v8) = 3;
    }
    if ( ((unsigned __int8)v8 & 2) != 0 )
    {
      v15 = v98;
      LOBYTE(v8) = (unsigned __int8)v8 & 0xFD;
      if ( v98 )
      {
        if ( _InterlockedExchangeAdd(v98 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      v16 = v100;
      if ( v100 )
      {
        if ( _InterlockedExchangeAdd(v100 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    sub_14000B87C((_DWORD)a1 - 352, (__int64)L"osServices", 139, 100);
LABEL_25:
    if ( v9 )
    {
      sub_140075108(v9);
      ExFreePool(v9);
    }
    v17 = (volatile signed __int32 *)a2[1];
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
    v18 = (volatile signed __int32 *)a3[1];
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
    v19 = (volatile signed __int32 *)v136[1];
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    v20 = (volatile signed __int32 *)a5[1];
LABEL_90:
    if ( v20 && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    return 3221225485LL;
  }
  v21 = a1[5];
  a1[5] = a2[1];
  v22 = *a2;
  a2[1] = v21;
  v23 = a1[4];
  a1[4] = v22;
  *a2 = v23;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v24 = (const wchar_t *)&unk_1400D44E0;
      v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*(a1 - 37) + 16))(
                                             a1 - 37,
                                             v103)
                              + 16LL);
      if ( v25 )
        v24 = v25;
      v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*(a1 - 37) + 24))(
                                             a1 - 37,
                                             v101)
                              + 16LL);
      if ( v26 )
        v8 = v26;
      sub_1400A3320(*(_QWORD *)(*(a1 - 22) + 16), 2u, 0xBu, 0x15u, (__int64)&unk_1400D9408, v8, v24, L"osResources");
      LOBYTE(v8) = 12;
    }
    if ( ((unsigned __int8)v8 & 8) != 0 )
    {
      v27 = v102;
      LOBYTE(v8) = (unsigned __int8)v8 & 0xF7;
      if ( v102 )
      {
        if ( _InterlockedExchangeAdd(v102 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    if ( ((unsigned __int8)v8 & 4) != 0 )
    {
      v28 = v104;
      if ( v104 )
      {
        if ( _InterlockedExchangeAdd(v104 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    sub_14000B954((_DWORD)a1 - 352, (__int64)L"osResources", 142, 100);
    goto LABEL_25;
  }
  v29 = a1[7];
  a1[7] = a3[1];
  v30 = *a3;
  a3[1] = v29;
  v31 = a1[6];
  a1[6] = v30;
  *a3 = v31;
  if ( !*a5 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v32 = (const wchar_t *)&unk_1400D44E0;
      v33 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*(a1 - 37) + 16))(
                                             a1 - 37,
                                             v107)
                              + 16LL);
      if ( v33 )
        v32 = v33;
      v34 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*(a1 - 37) + 24))(
                                             a1 - 37,
                                             v105)
                              + 16LL);
      if ( v34 )
        v8 = v34;
      sub_1400A3320(
        *(_QWORD *)(*(a1 - 22) + 16),
        2u,
        0xBu,
        0x16u,
        (__int64)&unk_1400D9408,
        v8,
        v32,
        L"hardwareAbstraction");
      LOBYTE(v8) = 48;
    }
    if ( ((unsigned __int8)v8 & 0x20) != 0 )
    {
      v35 = v106;
      LOBYTE(v8) = (unsigned __int8)v8 & 0xDF;
      if ( v106 )
      {
        if ( _InterlockedExchangeAdd(v106 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
          if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
        }
      }
    }
    if ( ((unsigned __int8)v8 & 0x10) != 0 )
    {
      v36 = v108;
      if ( v108 )
      {
        if ( _InterlockedExchangeAdd(v108 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
          if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
        }
      }
    }
    sub_14000B444((_DWORD)a1 - 352, (__int64)L"hardwareAbstraction", 145, 100);
    if ( v9 )
    {
      sub_140075108(v9);
      ExFreePool(v9);
    }
    v37 = (volatile signed __int32 *)a2[1];
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
      }
    }
    v38 = (volatile signed __int32 *)a3[1];
    if ( v38 )
    {
      if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
        if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
      }
    }
    v39 = (volatile signed __int32 *)v136[1];
    if ( v39 )
    {
      if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
        if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
      }
    }
    v20 = (volatile signed __int32 *)a5[1];
    goto LABEL_90;
  }
  v41 = a1[9];
  a1[9] = a5[1];
  v42 = *a5;
  a5[1] = v41;
  v43 = a1[8];
  a1[8] = v42;
  *a5 = v43;
  v44 = a1[8];
  v45 = a1[10];
  v46 = sub_1400A27D4(&v125, a4);
  v47 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v44 + 16LL))(v44, v126);
  v48 = sub_140135664(v45, v47, v46);
  if ( v48 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v49 = (const wchar_t *)&unk_1400D44E0;
      v50 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*(a1 - 37) + 16))(
                                             a1 - 37,
                                             v111)
                              + 16LL);
      if ( v50 )
        v49 = v50;
      v51 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*(a1 - 37) + 24))(
                                             a1 - 37,
                                             v109)
                              + 16LL);
      if ( v51 )
        v8 = v51;
      sub_1400A5E80(
        *(_QWORD *)(*(a1 - 22) + 16),
        2u,
        0xBu,
        0x17u,
        (__int64)&unk_1400D9408,
        v8,
        v49,
        L"m_link->Bind(m_hardwareAbstraction->GetLink(), eventViewerLogger)");
      LOBYTE(v8) = -64;
    }
    if ( (char)v8 < 0 )
    {
      v52 = v110;
      LOBYTE(v8) = (unsigned __int8)v8 & 0x7F;
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
    if ( ((unsigned __int8)v8 & 0x40) != 0 )
    {
      v53 = v112;
      if ( v112 )
      {
        if ( _InterlockedExchangeAdd(v112 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
          if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
        }
      }
    }
    sub_14002D834(
      (_DWORD)a1 - 352,
      (__int64)L"m_link->Bind(m_hardwareAbstraction->GetLink(), eventViewerLogger)",
      148,
      100,
      v48);
LABEL_113:
    if ( v9 )
    {
      sub_140075108(v9);
      ExFreePool(v9);
    }
    v54 = (volatile signed __int32 *)a2[1];
    if ( v54 )
    {
      if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
        if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
      }
    }
    v55 = (volatile signed __int32 *)a3[1];
    if ( v55 )
    {
      if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
        if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
      }
    }
    v56 = (volatile signed __int32 *)v136[1];
    if ( v56 )
    {
      if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
        if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 16LL))(v56);
      }
    }
    v57 = (volatile signed __int32 *)a5[1];
    if ( v57 )
    {
      if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
        if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
      }
    }
    return v48;
  }
  v58 = a1[18];
  v59 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1[8] + 72LL))(a1[8], v127);
  v48 = sub_1401411C8(v58, v59);
  if ( v48 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v60 = (const wchar_t *)&unk_1400D44E0;
      v61 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*(a1 - 37) + 16))(
                                             a1 - 37,
                                             v115)
                              + 16LL);
      if ( v61 )
        v60 = v61;
      v62 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*(a1 - 37) + 24))(
                                             a1 - 37,
                                             v113)
                              + 16LL);
      if ( v62 )
        v8 = v62;
      sub_1400A5E80(
        *(_QWORD *)(*(a1 - 22) + 16),
        2u,
        0xBu,
        0x18u,
        (__int64)&unk_1400D9408,
        v8,
        v60,
        L"m_rxPacketFilter->Bind(m_hardwareAbstraction->GetRxFilter())");
      LOWORD(v8) = 768;
    }
    if ( ((unsigned __int16)v8 & 0x200) != 0 )
    {
      v63 = v114;
      LOWORD(v8) = (unsigned __int16)v8 & 0xFDFF;
      if ( v114 )
      {
        if ( _InterlockedExchangeAdd(v114 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 8LL))(v63);
          if ( _InterlockedExchangeAdd(v63 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 16LL))(v63);
        }
      }
    }
    if ( ((unsigned __int16)v8 & 0x100) != 0 )
    {
      v64 = v116;
      if ( v116 )
      {
        if ( _InterlockedExchangeAdd(v116 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 8LL))(v64);
          if ( _InterlockedExchangeAdd(v64 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 16LL))(v64);
        }
      }
    }
    sub_14005E0C8(
      (_DWORD)a1 - 352,
      (__int64)L"m_rxPacketFilter->Bind(m_hardwareAbstraction->GetRxFilter())",
      149,
      100,
      v48);
    goto LABEL_113;
  }
  v65 = a1[20];
  v66 = sub_1400A27D4(&v128, a1 + 4);
  v48 = sub_140149D40(v65, v66);
  if ( v48 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v67 = (const wchar_t *)&unk_1400D44E0;
      v68 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*(a1 - 37) + 16))(
                                             a1 - 37,
                                             v119)
                              + 16LL);
      if ( v68 )
        v67 = v68;
      v69 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*(a1 - 37) + 24))(
                                             a1 - 37,
                                             v117)
                              + 16LL);
      if ( v69 )
        v8 = v69;
      sub_1400A5E80(
        *(_QWORD *)(*(a1 - 22) + 16),
        2u,
        0xBu,
        0x19u,
        (__int64)&unk_1400D9408,
        v8,
        v67,
        L"m_checksumOffload->Bind(m_osServices)");
      LOWORD(v8) = 3072;
    }
    if ( ((unsigned __int16)v8 & 0x800) != 0 )
    {
      v70 = v118;
      LOWORD(v8) = (unsigned __int16)v8 & 0xF7FF;
      if ( v118 )
      {
        if ( _InterlockedExchangeAdd(v118 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 8LL))(v70);
          if ( _InterlockedExchangeAdd(v70 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 16LL))(v70);
        }
      }
    }
    if ( ((unsigned __int16)v8 & 0x400) != 0 )
    {
      v71 = v120;
      if ( v120 )
      {
        if ( _InterlockedExchangeAdd(v120 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 8LL))(v71);
          if ( _InterlockedExchangeAdd(v71 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 16LL))(v71);
        }
      }
    }
    sub_140008F3C((_DWORD)a1 - 352, (__int64)L"m_checksumOffload->Bind(m_osServices)", 150, 100, v48);
    goto LABEL_113;
  }
  v72 = a1 + 4;
  v73 = a1[8];
  v74 = v136[1];
  v136[1] = 0LL;
  v96[1] = v74;
  v75 = *v136;
  *v136 = 0LL;
  v76 = a1[16];
  v96[0] = v75;
  v77 = sub_1400A27D4(&v129, v72);
  v78 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v73 + 72LL))(v73, v130);
  v79 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v73 + 48LL))(v73, v131);
  v80 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v73 + 16LL))(v73, v132);
  v81 = sub_14013C36C(v76, v80, v79, v78, (__int64)v77, (__int64)v96);
  if ( v81 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v82 = (const wchar_t *)&unk_1400D44E0;
      v83 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*(a1 - 37) + 24))(
                                             a1 - 37,
                                             v121)
                              + 16LL);
      if ( v83 )
        v82 = v83;
      v84 = *(_QWORD *)(*(a1 - 22) + 16);
      v85 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*(a1 - 37) + 16))(
                                             a1 - 37,
                                             v123)
                              + 16LL);
      if ( v85 )
        v8 = v85;
      sub_1400A5E80(
        v84,
        2u,
        0xBu,
        0x1Au,
        (__int64)&unk_1400D9408,
        v82,
        v8,
        L"m_wolPatterns->Bind(m_hardwareAbstraction->GetLink(), m_hardwareAbstraction->GetWolPatterns(), m_hardwareAbstrac"
         "tion->GetRxFilter(), m_osServices, kstd::move(eventViewerLogger))");
      LOWORD(v8) = 12288;
    }
    if ( ((unsigned __int16)v8 & 0x2000) != 0 )
    {
      v86 = v122;
      LOWORD(v8) = (unsigned __int16)v8 & 0xDFFF;
      if ( v122 )
      {
        if ( _InterlockedExchangeAdd(v122 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v86 + 8LL))(v86);
          if ( _InterlockedExchangeAdd(v86 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v86 + 16LL))(v86);
        }
      }
    }
    if ( ((unsigned __int16)v8 & 0x1000) != 0 )
    {
      v87 = v124;
      if ( v124 )
      {
        if ( _InterlockedExchangeAdd(v124 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
          if ( _InterlockedExchangeAdd(v87 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 16LL))(v87);
        }
      }
    }
    sub_140074AB8(
      (__int64)(a1 - 44),
      (__int64)L"m_wolPatterns->Bind(m_hardwareAbstraction->GetLink(), m_hardwareAbstraction->GetWolPatterns(), m_hardware"
                "Abstraction->GetRxFilter(), m_osServices, kstd::move(eventViewerLogger))",
      156,
      100,
      v81);
    if ( v9 )
    {
      sub_140075108(v9);
      ExFreePool(v9);
    }
    v88 = (volatile signed __int32 *)a2[1];
    if ( v88 )
    {
      if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v88 + 8LL))(v88);
        if ( _InterlockedExchangeAdd(v88 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v88 + 16LL))(v88);
      }
    }
    v89 = (volatile signed __int32 *)a3[1];
    if ( v89 )
    {
      if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 8LL))(v89);
        if ( _InterlockedExchangeAdd(v89 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 16LL))(v89);
      }
    }
    v90 = (volatile signed __int32 *)v136[1];
    if ( v90 )
    {
      if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v90 + 8LL))(v90);
        if ( _InterlockedExchangeAdd(v90 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v90 + 16LL))(v90);
      }
    }
    v91 = (volatile signed __int32 *)a5[1];
    if ( v91 )
    {
      if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v91 + 8LL))(v91);
        if ( _InterlockedExchangeAdd(v91 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v91 + 16LL))(v91);
      }
    }
    return v81;
  }
  else
  {
    if ( v9 )
    {
      sub_140075108(v9);
      ExFreePool(v9);
    }
    v92 = (volatile signed __int32 *)a2[1];
    if ( v92 )
    {
      if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 8LL))(v92);
        if ( _InterlockedExchangeAdd(v92 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 16LL))(v92);
      }
    }
    v93 = (volatile signed __int32 *)a3[1];
    if ( v93 )
    {
      if ( _InterlockedExchangeAdd(v93 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v93 + 8LL))(v93);
        if ( _InterlockedExchangeAdd(v93 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v93 + 16LL))(v93);
      }
    }
    v94 = (volatile signed __int32 *)v136[1];
    if ( v94 )
    {
      if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v94 + 8LL))(v94);
        if ( _InterlockedExchangeAdd(v94 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v94 + 16LL))(v94);
      }
    }
    v95 = (volatile signed __int32 *)a5[1];
    if ( v95 )
    {
      if ( _InterlockedExchangeAdd(v95 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v95 + 8LL))(v95);
        if ( _InterlockedExchangeAdd(v95 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v95 + 16LL))(v95);
      }
    }
    return 0LL;
  }
}
