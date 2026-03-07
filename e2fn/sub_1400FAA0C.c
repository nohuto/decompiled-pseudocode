__int64 __fastcall sub_1400FAA0C(_QWORD *a1, __int64 *a2, _QWORD *a3, __int64 *a4)
{
  char v4; // bl
  __int64 *v6; // r15
  __int64 *v7; // rsi
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  const wchar_t *v11; // r14
  const wchar_t *v12; // rdi
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rdi
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  const wchar_t *v20; // r14
  const wchar_t *v21; // rdi
  const wchar_t *v22; // rax
  const wchar_t *v23; // rax
  volatile signed __int32 *v24; // rdi
  volatile signed __int32 *v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  volatile signed __int32 *v30; // rdi
  const wchar_t *v31; // rdi
  const wchar_t *v32; // rax
  __int64 v33; // rsi
  const wchar_t *v34; // rax
  const wchar_t *v35; // rcx
  volatile signed __int32 *v36; // rdi
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 *v39; // rbx
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  const wchar_t *v43; // rdi
  const wchar_t *v44; // rax
  __int64 v45; // rsi
  const wchar_t *v46; // rax
  const wchar_t *v47; // rcx
  volatile signed __int32 *v48; // rdi
  volatile signed __int32 *v49; // rbx
  volatile signed __int32 *v50; // rbx
  volatile signed __int32 *v51; // rbx
  volatile signed __int32 *v52; // rbx
  volatile signed __int32 *v53; // rbx
  __int64 v54; // rcx
  volatile signed __int32 *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rcx
  volatile signed __int32 *v58; // rbx
  volatile signed __int32 *v59; // rbx
  volatile signed __int32 *v60; // rbx
  __int64 v61; // [rsp+48h] [rbp-79h] BYREF
  volatile signed __int32 *v62; // [rsp+50h] [rbp-71h]
  _BYTE v63[8]; // [rsp+58h] [rbp-69h] BYREF
  volatile signed __int32 *v64; // [rsp+60h] [rbp-61h]
  _BYTE v65[8]; // [rsp+68h] [rbp-59h] BYREF
  volatile signed __int32 *v66; // [rsp+70h] [rbp-51h]
  _BYTE v67[8]; // [rsp+78h] [rbp-49h] BYREF
  volatile signed __int32 *v68; // [rsp+80h] [rbp-41h]
  _BYTE v69[8]; // [rsp+88h] [rbp-39h] BYREF
  volatile signed __int32 *v70; // [rsp+90h] [rbp-31h]
  _BYTE v71[8]; // [rsp+98h] [rbp-29h] BYREF
  volatile signed __int32 *v72; // [rsp+A0h] [rbp-21h]
  _BYTE v73[8]; // [rsp+A8h] [rbp-19h] BYREF
  volatile signed __int32 *v74; // [rsp+B0h] [rbp-11h]
  _BYTE v75[8]; // [rsp+B8h] [rbp-9h] BYREF
  volatile signed __int32 *v76; // [rsp+C0h] [rbp-1h]
  _BYTE v77[8]; // [rsp+C8h] [rbp+7h] BYREF
  volatile signed __int32 *v78; // [rsp+D0h] [rbp+Fh]
  _BYTE v79[8]; // [rsp+D8h] [rbp+17h] BYREF
  volatile signed __int32 *v80; // [rsp+E0h] [rbp+1Fh]
  _QWORD *v81; // [rsp+138h] [rbp+77h]

  v81 = a3;
  v4 = 0;
  v6 = 0LL;
  v7 = a4;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_1400045E8(
              Pool2,
              (__int64)L"product_e2fn::ProductE2fnFirmware::Bind",
              (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v10 )
        v6 = v10;
    }
    a3 = v81;
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 16LL))(a1 + 8, v65)
                              + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 24LL))(a1 + 8, v63)
                              + 16LL);
      if ( v14 )
        v11 = v14;
      sub_1400A3320(*(_QWORD *)(a1[23] + 16LL), 2u, 0xEu, 0xAu, (__int64)&unk_1400D6110, v11, v12, L"mmioAccessor");
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v15 = v64;
      v4 &= ~2u;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v16 = v66;
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    sub_14000BA2C((_DWORD)a1 + 8, (__int64)L"mmioAccessor", 70, 45);
LABEL_104:
    if ( v6 )
    {
      sub_140005840(v6);
      ExFreePool(v6);
    }
    v51 = (volatile signed __int32 *)a2[1];
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
        if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
      }
    }
    v52 = (volatile signed __int32 *)v81[1];
    if ( v52 )
    {
      if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
        if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
      }
    }
    v53 = (volatile signed __int32 *)v7[1];
    if ( v53 && _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
      if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
    }
    return 3221225485LL;
  }
  v17 = a1[47];
  a1[47] = a2[1];
  v18 = *a2;
  a2[1] = v17;
  v19 = a1[46];
  a1[46] = v18;
  *a2 = v19;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v20 = (const wchar_t *)&unk_1400D44E0;
      v21 = (const wchar_t *)&unk_1400D44E0;
      v22 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 16LL))(a1 + 8, v69)
                              + 16LL);
      if ( v22 )
        v21 = v22;
      v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 24LL))(a1 + 8, v67)
                              + 16LL);
      if ( v23 )
        v20 = v23;
      sub_1400A3320(*(_QWORD *)(a1[23] + 16LL), 2u, 0xEu, 0xBu, (__int64)&unk_1400D6110, v20, v21, L"osServices");
      v4 = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v24 = v68;
      v4 &= ~8u;
      if ( v68 )
      {
        if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v25 = v70;
      if ( v70 )
      {
        if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    sub_14000B87C((_DWORD)a1 + 8, (__int64)L"osServices", 73, 45);
    goto LABEL_104;
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 8LL))(*a3, &v61);
  v26 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v61 + 8LL))(v61, v71);
  v27 = a1[49];
  a1[49] = v26[1];
  v28 = *v26;
  v26[1] = v27;
  v29 = a1[48];
  a1[48] = v28;
  *v26 = v29;
  v30 = v72;
  if ( v72 )
  {
    if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
      if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
    }
  }
  if ( a1[48] )
  {
    if ( !*v7 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v43 = (const wchar_t *)&unk_1400D44E0;
        v44 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 24LL))(a1 + 8, v77)
                                + 16LL);
        if ( v44 )
          v43 = v44;
        v45 = *(_QWORD *)(a1[23] + 16LL);
        v46 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 16LL))(a1 + 8, v79)
                                + 16LL);
        v47 = (const wchar_t *)&unk_1400D44E0;
        if ( v46 )
          v47 = v46;
        sub_1400A3320(v45, 2u, 0xAu, 0xDu, (__int64)&unk_1400D6110, v43, v47, L"interruptsFactory");
        v7 = a4;
        v4 = -64;
      }
      if ( v4 < 0 )
      {
        v48 = v78;
        v4 &= ~0x80u;
        if ( v78 )
        {
          if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
            if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
          }
        }
      }
      if ( (v4 & 0x40) != 0 )
      {
        v49 = v80;
        if ( v80 )
        {
          if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
            if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
          }
        }
      }
      sub_14000B36C((_DWORD)a1 + 8, (__int64)L"interruptsFactory", 80, 45);
      v50 = v62;
      if ( v62 )
      {
        if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
          if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
        }
      }
      goto LABEL_104;
    }
    v54 = a1[51];
    v55 = v62;
    a1[51] = v7[1];
    v56 = *v7;
    v7[1] = v54;
    v57 = a1[50];
    a1[50] = v56;
    *v7 = v57;
    if ( v55 )
    {
      if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
        if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
      }
    }
    if ( v6 )
    {
      sub_140005840(v6);
      ExFreePool(v6);
    }
    v58 = (volatile signed __int32 *)a2[1];
    if ( v58 )
    {
      if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
        if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
      }
    }
    v59 = (volatile signed __int32 *)v81[1];
    if ( v59 )
    {
      if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
        if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
      }
    }
    v60 = (volatile signed __int32 *)v7[1];
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
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v31 = (const wchar_t *)&unk_1400D44E0;
      v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 24LL))(a1 + 8, v73)
                              + 16LL);
      if ( v32 )
        v31 = v32;
      v33 = *(_QWORD *)(a1[23] + 16LL);
      v34 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 16LL))(a1 + 8, v75)
                              + 16LL);
      v35 = (const wchar_t *)&unk_1400D44E0;
      if ( v34 )
        v35 = v34;
      sub_1400A3320(v33, 2u, 0xEu, 0xCu, (__int64)&unk_1400D6110, v31, v35, L"m_firmwareLock");
      v7 = a4;
      v4 = 48;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v36 = v74;
      v4 &= ~0x20u;
      if ( v74 )
      {
        if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
          if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
        }
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v37 = v76;
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    sub_140022208((_DWORD)a1 + 8, (__int64)L"m_firmwareLock", 78, 45);
    v38 = v62;
    if ( v62 )
    {
      if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
        if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
      }
    }
    if ( v6 )
    {
      sub_140005840(v6);
      ExFreePool(v6);
    }
    v39 = (volatile signed __int32 *)a2[1];
    if ( v39 )
    {
      if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
        if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
      }
    }
    v40 = (volatile signed __int32 *)v81[1];
    if ( v40 )
    {
      if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
        if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
      }
    }
    v41 = (volatile signed __int32 *)v7[1];
    if ( v41 )
    {
      if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
        if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
      }
    }
    return 3221225495LL;
  }
}
