__int64 __fastcall sub_140041C4C(_QWORD *a1, __int64 a2, _WORD *a3)
{
  __int64 v4; // rdi
  unsigned int v5; // r12d
  void *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // edx
  void *v10; // rax
  volatile signed __int32 *v11; // rsi
  volatile signed __int32 *v12; // rdi
  int v13; // r8d
  unsigned int v15; // r15d
  void *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // edx
  void *v20; // rax
  volatile signed __int32 *v21; // rsi
  volatile signed __int32 *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  int v26; // edx
  void *v27; // rax
  void *v28; // rcx
  volatile signed __int32 *v29; // rsi
  volatile signed __int32 *v30; // rdi
  void *v31; // r12
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  int v35; // edx
  void *v36; // rax
  volatile signed __int32 *v37; // rsi
  volatile signed __int32 *v38; // rdi
  void *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // edx
  void *v43; // rax
  volatile signed __int32 *v44; // rsi
  volatile signed __int32 *v45; // rdi
  _BYTE v46[8]; // [rsp+50h] [rbp-79h] BYREF
  volatile signed __int32 *v47; // [rsp+58h] [rbp-71h]
  _BYTE v48[8]; // [rsp+60h] [rbp-69h] BYREF
  volatile signed __int32 *v49; // [rsp+68h] [rbp-61h]
  _BYTE v50[8]; // [rsp+70h] [rbp-59h] BYREF
  volatile signed __int32 *v51; // [rsp+78h] [rbp-51h]
  _BYTE v52[8]; // [rsp+80h] [rbp-49h] BYREF
  volatile signed __int32 *v53; // [rsp+88h] [rbp-41h]
  _BYTE v54[8]; // [rsp+90h] [rbp-39h] BYREF
  volatile signed __int32 *v55; // [rsp+98h] [rbp-31h]
  _BYTE v56[8]; // [rsp+A0h] [rbp-29h] BYREF
  volatile signed __int32 *v57; // [rsp+A8h] [rbp-21h]
  _BYTE v58[8]; // [rsp+B0h] [rbp-19h] BYREF
  volatile signed __int32 *v59; // [rsp+B8h] [rbp-11h]
  _BYTE v60[8]; // [rsp+C0h] [rbp-9h] BYREF
  volatile signed __int32 *v61; // [rsp+C8h] [rbp-1h]
  _BYTE v62[8]; // [rsp+D0h] [rbp+7h] BYREF
  volatile signed __int32 *v63; // [rsp+D8h] [rbp+Fh]
  _BYTE v64[8]; // [rsp+E0h] [rbp+17h] BYREF
  volatile signed __int32 *v65; // [rsp+E8h] [rbp+1Fh]

  *a3 = 0;
  LOWORD(v4) = 0;
  v5 = sub_1400441A4(a1, 13LL);
  if ( v5 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v6 = &unk_1400D44E0;
      v4 = (__int64)&unk_1400D44E0;
      v7 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v48) + 16LL);
      if ( v7 )
        v4 = v7;
      v8 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v46);
      LOBYTE(v9) = 2;
      v10 = *(void **)(*(_QWORD *)v8 + 16LL);
      if ( v10 )
        v6 = v10;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v9,
        14,
        37,
        (__int64)&unk_1400D71E0,
        (__int64)v6,
        v4,
        (__int64)L"WritePhyRegisterSafe(13, mmdmcValue)",
        v5);
      LOBYTE(v4) = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v11 = v47;
      LOBYTE(v4) = v4 & 0xFD;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v12 = v49;
      if ( v49 )
      {
        if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    v13 = 341;
LABEL_19:
    sub_14000D3C8((int)a1, (__int64)L"WritePhyRegisterSafe(13, mmdmcValue)", v13, 156, v5);
    return v5;
  }
  v15 = sub_1400441A4(a1, 14LL);
  if ( v15 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v16 = &unk_1400D44E0;
      v4 = (__int64)&unk_1400D44E0;
      v17 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v52) + 16LL);
      if ( v17 )
        v4 = v17;
      v18 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v50);
      LOBYTE(v19) = 2;
      v20 = *(void **)(*(_QWORD *)v18 + 16LL);
      if ( v20 )
        v16 = v20;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v19,
        14,
        38,
        (__int64)&unk_1400D71E0,
        (__int64)v16,
        v4,
        (__int64)L"WritePhyRegisterSafe(14, mmdadValue)",
        v15);
      LOBYTE(v4) = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v21 = v51;
      LOBYTE(v4) = v4 & 0xF7;
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v22 = v53;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    sub_14000D3C8((int)a1, (__int64)L"WritePhyRegisterSafe(14, mmdadValue)", 345, 156, v15);
    return v15;
  }
  v5 = sub_1400441A4(a1, 13LL);
  if ( v5 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v4 = (__int64)&unk_1400D44E0;
      v23 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v54) + 16LL);
      if ( v23 )
        v4 = v23;
      v24 = *(_QWORD *)(a1[22] + 16LL);
      v25 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v56);
      LOBYTE(v26) = 2;
      v27 = *(void **)(*(_QWORD *)v25 + 16LL);
      v28 = &unk_1400D44E0;
      if ( v27 )
        v28 = v27;
      sub_1400A5E80(
        v24,
        v26,
        14,
        39,
        (__int64)&unk_1400D71E0,
        v4,
        (__int64)v28,
        (__int64)L"WritePhyRegisterSafe(13, mmdmcValue)",
        v5);
      LOBYTE(v4) = 48;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v29 = v55;
      LOBYTE(v4) = v4 & 0xDF;
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v30 = v57;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    v13 = 348;
    goto LABEL_19;
  }
  v15 = sub_140041700(a1, 0xEu, a3);
  if ( v15 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v31 = &unk_1400D44E0;
      v4 = (__int64)&unk_1400D44E0;
      v32 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v58) + 16LL);
      if ( v32 )
        v4 = v32;
      v33 = *(_QWORD *)(a1[22] + 16LL);
      v34 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v60);
      LOBYTE(v35) = 2;
      v36 = *(void **)(*(_QWORD *)v34 + 16LL);
      if ( v36 )
        v31 = v36;
      sub_1400A5E80(
        v33,
        v35,
        14,
        40,
        (__int64)&unk_1400D71E0,
        v4,
        (__int64)v31,
        (__int64)L"ReadPhyRegister(14, value)",
        v15);
      LOBYTE(v4) = -64;
    }
    if ( (v4 & 0x80u) != 0LL )
    {
      v37 = v59;
      LOBYTE(v4) = v4 & 0x7F;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    if ( (v4 & 0x40) != 0 )
    {
      v38 = v61;
      if ( v61 )
      {
        if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    sub_1400084DC((int)a1, (__int64)L"ReadPhyRegister(14, value)", 350, 156, v15);
    return v15;
  }
  v15 = sub_1400441A4(a1, 13LL);
  if ( v15 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v39 = &unk_1400D44E0;
      v4 = (__int64)&unk_1400D44E0;
      v40 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v64) + 16LL);
      if ( v40 )
        v4 = v40;
      v41 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v62);
      LOBYTE(v42) = 2;
      v43 = *(void **)(*(_QWORD *)v41 + 16LL);
      if ( v43 )
        v39 = v43;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v42,
        14,
        41,
        (__int64)&unk_1400D71E0,
        (__int64)v39,
        v4,
        (__int64)L"WritePhyRegisterSafe(13, 0)",
        v15);
      LOWORD(v4) = 768;
    }
    if ( (v4 & 0x200) != 0 )
    {
      v44 = v63;
      LOWORD(v4) = v4 & 0xFDFF;
      if ( v63 )
      {
        if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
          if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
        }
      }
    }
    if ( (v4 & 0x100) != 0 )
    {
      v45 = v65;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
          if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
        }
      }
    }
    sub_140008628((int)a1, (__int64)L"WritePhyRegisterSafe(13, 0)", 352, 156, v15);
    return v15;
  }
  return 0LL;
}
