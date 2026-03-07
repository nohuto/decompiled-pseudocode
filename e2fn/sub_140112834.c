__int64 __fastcall sub_140112834(__int64 *a1, __int64 a2, _QWORD *a3)
{
  const wchar_t *v3; // r14
  __int64 *v5; // r15
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  const wchar_t *v12; // r8
  const wchar_t *v13; // rdx
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rax
  const wchar_t *v19; // r8
  const wchar_t *v20; // rdx
  const wchar_t *v21; // rax
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  const wchar_t *v24; // rsi
  const wchar_t *v25; // rdi
  const wchar_t *v26; // rax
  const wchar_t *v27; // rax
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  __int64 *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  volatile signed __int32 *v37; // rbx
  const wchar_t *v38; // rdi
  const wchar_t *v39; // rax
  const wchar_t *v40; // rax
  volatile signed __int32 *v41; // rbx
  volatile signed __int32 *v42; // rbx
  __int64 *v43; // rax
  volatile signed __int32 *v44; // rbx
  __int64 *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  volatile signed __int32 *v49; // rbx
  volatile signed __int32 *v50; // rbx
  const wchar_t *v51; // rdi
  const wchar_t *v52; // rax
  const wchar_t *v53; // rax
  volatile signed __int32 *v54; // rbx
  volatile signed __int32 *v55; // rbx
  volatile signed __int32 *v56; // rbx
  volatile signed __int32 *v57; // rbx
  _QWORD *v58; // rax
  volatile signed __int32 *v59; // rbx
  volatile signed __int32 *v60; // rbx
  __int64 v61; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v62; // [rsp+48h] [rbp-B8h]
  __int64 v63; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v64; // [rsp+58h] [rbp-A8h]
  void (__fastcall *v65)(_QWORD *, __int64); // [rsp+60h] [rbp-A0h] BYREF
  int v66; // [rsp+68h] [rbp-98h]
  char v67[8]; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v68; // [rsp+78h] [rbp-88h]
  char v69[8]; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v70; // [rsp+88h] [rbp-78h]
  char v71[8]; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v72; // [rsp+98h] [rbp-68h]
  char v73[8]; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v74; // [rsp+A8h] [rbp-58h]
  char v75[8]; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v76; // [rsp+B8h] [rbp-48h]
  char v77[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v78; // [rsp+C8h] [rbp-38h]
  char v79[8]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v80; // [rsp+D8h] [rbp-28h]
  char v81[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v82; // [rsp+E8h] [rbp-18h]
  char v83[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v84; // [rsp+F8h] [rbp-8h]
  __int64 v85; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v86; // [rsp+108h] [rbp+8h]
  __int64 v87; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v88; // [rsp+118h] [rbp+18h]
  char v89[8]; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v90; // [rsp+128h] [rbp+28h]
  char v91[8]; // [rsp+130h] [rbp+30h] BYREF
  volatile signed __int32 *v92; // [rsp+138h] [rbp+38h]
  __int64 v93[8]; // [rsp+140h] [rbp+40h] BYREF
  int v94; // [rsp+198h] [rbp+98h] BYREF
  char v95; // [rsp+1A8h] [rbp+A8h] BYREF

  LOWORD(v3) = 0;
  v94 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14005B310(Pool2, (__int64)L"os_resources::IdlePower::BindAndInitialize", (__int64)a1);
      if ( v9 )
        v5 = v9;
    }
  }
  if ( !a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v69);
      v11 = (*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v67);
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = *(const wchar_t **)(*(_QWORD *)v11 + 16LL);
      if ( v14 )
        v13 = v14;
      if ( *(_QWORD *)(v10 + 16) )
        v12 = *(const wchar_t **)(v10 + 16);
      sub_1400A3320(*(_QWORD *)(a1[22] + 16), 2u, 4u, 0xAu, (__int64)&unk_1400D8E60, v13, v12, L"device");
      LOBYTE(v3) = 3;
    }
    if ( ((unsigned __int8)v3 & 2) != 0 )
    {
      v15 = v68;
      LOBYTE(v3) = (unsigned __int8)v3 & 0xFD;
      if ( v68 )
      {
        if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( ((unsigned __int8)v3 & 1) != 0 )
    {
      v16 = v70;
      if ( v70 )
      {
        if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    sub_14000B00C((int)a1, (__int64)L"device", 55, 132);
LABEL_63:
    if ( v5 )
    {
      sub_14005B5AC(v5);
      ExFreePool(v5);
    }
    v31 = (volatile signed __int32 *)a3[1];
    if ( v31 && _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
      if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
    }
    return 3221225485LL;
  }
  a1[45] = a2;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v17 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v73);
      v18 = (*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v71);
      v19 = (const wchar_t *)&unk_1400D44E0;
      v20 = (const wchar_t *)&unk_1400D44E0;
      v21 = *(const wchar_t **)(*(_QWORD *)v18 + 16LL);
      if ( v21 )
        v20 = v21;
      if ( *(_QWORD *)(v17 + 16) )
        v19 = *(const wchar_t **)(v17 + 16);
      sub_1400A3320(*(_QWORD *)(a1[22] + 16), 2u, 4u, 0xBu, (__int64)&unk_1400D8E60, v20, v19, L"osServices");
      LOBYTE(v3) = 12;
    }
    if ( ((unsigned __int8)v3 & 8) != 0 )
    {
      v22 = v72;
      LOBYTE(v3) = (unsigned __int8)v3 & 0xF7;
      if ( v72 )
      {
        if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    if ( ((unsigned __int8)v3 & 4) != 0 )
    {
      v23 = v74;
      if ( v74 )
      {
        if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    sub_14000B87C((int)a1, (__int64)L"osServices", 58, 132);
    goto LABEL_63;
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 8LL))(*a3, &v61);
  if ( !v61 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v24 = (const wchar_t *)&unk_1400D44E0;
      v25 = (const wchar_t *)&unk_1400D44E0;
      v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v77)
                              + 16LL);
      if ( v26 )
        v25 = v26;
      v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v75)
                              + 16LL);
      if ( v27 )
        v24 = v27;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16), 2u, 4u, 0xCu, (__int64)&unk_1400D8E60, v24, v25, L"spinLockFactory");
      LOBYTE(v3) = 48;
    }
    if ( ((unsigned __int8)v3 & 0x20) != 0 )
    {
      v28 = v76;
      LOBYTE(v3) = (unsigned __int8)v3 & 0xDF;
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( ((unsigned __int8)v3 & 0x10) != 0 )
    {
      v29 = v78;
      if ( v78 )
      {
        if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    sub_14000B1BC((int)a1, (__int64)L"spinLockFactory", 61, 132);
    v30 = v62;
    if ( v62 )
    {
      if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
      }
    }
    goto LABEL_63;
  }
  v33 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v61 + 8LL))(v61, v79);
  v34 = a1[47];
  a1[47] = v33[1];
  v35 = *v33;
  v33[1] = v34;
  v36 = a1[46];
  a1[46] = v35;
  *v33 = v36;
  v37 = v80;
  if ( v80 )
  {
    if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
      if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
    }
  }
  if ( !a1[46] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v3 = (const wchar_t *)&unk_1400D44E0;
      v38 = (const wchar_t *)&unk_1400D44E0;
      v39 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v83)
                              + 16LL);
      if ( v39 )
        v38 = v39;
      v40 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v81)
                              + 16LL);
      if ( v40 )
        v3 = v40;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16), 2u, 4u, 0xDu, (__int64)&unk_1400D8E60, v3, v38, L"m_powerResourcesLock");
      LOBYTE(v3) = -64;
    }
    if ( (char)v3 < 0 )
    {
      v41 = v82;
      LOBYTE(v3) = (unsigned __int8)v3 & 0x7F;
      if ( v82 )
      {
        if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    if ( ((unsigned __int8)v3 & 0x40) != 0 )
    {
      v42 = v84;
      if ( v84 )
      {
        if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    sub_14001453C((int)a1, (__int64)L"m_powerResourcesLock", 63, 132);
LABEL_122:
    v56 = v62;
    if ( v62 )
    {
      if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
        if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 16LL))(v56);
      }
    }
    if ( v5 )
    {
      sub_14005B5AC(v5);
      ExFreePool(v5);
    }
    v57 = (volatile signed __int32 *)a3[1];
    if ( v57 )
    {
      if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
        if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
      }
    }
    return 3221225495LL;
  }
  v66 = 0;
  v65 = sub_14006E340;
  v43 = sub_14006D650(&v85, a1, (__int64)&v65);
  sub_1400A3C70(a1 + 54, v43);
  v44 = v86;
  if ( v86 )
  {
    if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
      if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
    }
  }
  LOBYTE(v94) = 1;
  v95 = 0;
  sub_1400A27D4(&v63, a1 + 12);
  v45 = sub_1400AF20C(&v87, 0x30306238u, (__int64)L"Released power resources history", &v63, &v61, &v95, (char *)&v94);
  v46 = a1[57];
  a1[57] = v45[1];
  v47 = *v45;
  v45[1] = v46;
  v48 = a1[56];
  a1[56] = v47;
  *v45 = v48;
  v49 = v88;
  if ( v88 )
  {
    if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
      if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
    }
  }
  if ( v64 )
  {
    if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
    {
      v50 = v64;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 8LL))(v64);
      if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 16LL))(v64);
    }
  }
  if ( !a1[56] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v3 = (const wchar_t *)&unk_1400D44E0;
      v51 = (const wchar_t *)&unk_1400D44E0;
      v52 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v91)
                              + 16LL);
      if ( v52 )
        v51 = v52;
      v53 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v89)
                              + 16LL);
      if ( v53 )
        v3 = v53;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16),
        2u,
        4u,
        0xEu,
        (__int64)&unk_1400D8E60,
        v3,
        v51,
        L"m_releasedPowerResourcesHistory");
      LOWORD(v3) = 768;
    }
    if ( ((unsigned __int16)v3 & 0x200) != 0 )
    {
      v54 = v90;
      LOWORD(v3) = (unsigned __int16)v3 & 0xFDFF;
      if ( v90 )
      {
        if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
          if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
        }
      }
    }
    if ( ((unsigned __int16)v3 & 0x100) != 0 )
    {
      v55 = v92;
      if ( v92 )
      {
        if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
          if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
        }
      }
    }
    sub_14004A2A4((int)a1, (__int64)L"m_releasedPowerResourcesHistory", 68, 132);
    goto LABEL_122;
  }
  v58 = sub_1400A27D4(v93, a1 + 56);
  sub_1400714D4(a1, v58, 0);
  v59 = v62;
  if ( v62 )
  {
    if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
      if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
    }
  }
  if ( v5 )
  {
    sub_14005B5AC(v5);
    ExFreePool(v5);
  }
  v60 = (volatile signed __int32 *)a3[1];
  if ( v60 )
  {
    if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
      if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
    }
  }
  return 0LL;
}
