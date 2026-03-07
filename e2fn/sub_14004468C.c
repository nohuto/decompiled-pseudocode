__int64 __fastcall sub_14004468C(_QWORD *a1, unsigned int a2, unsigned __int16 a3)
{
  __int64 v3; // rdi
  unsigned __int16 v4; // si
  unsigned int v5; // ebx
  unsigned int v7; // r12d
  void *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edx
  void *v12; // rax
  volatile signed __int32 *v13; // rsi
  volatile signed __int32 *v14; // rdi
  int v15; // r8d
  unsigned int v17; // r15d
  void *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edx
  void *v22; // rax
  volatile signed __int32 *v23; // rsi
  volatile signed __int32 *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  int v28; // edx
  void *v29; // rax
  void *v30; // rcx
  volatile signed __int32 *v31; // rsi
  volatile signed __int32 *v32; // rdi
  void *v33; // r12
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  int v37; // edx
  void *v38; // rax
  volatile signed __int32 *v39; // rsi
  volatile signed __int32 *v40; // rdi
  void *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // edx
  void *v45; // rax
  volatile signed __int32 *v46; // rsi
  volatile signed __int32 *v47; // rdi
  _BYTE v48[8]; // [rsp+50h] [rbp-79h] BYREF
  volatile signed __int32 *v49; // [rsp+58h] [rbp-71h]
  _BYTE v50[8]; // [rsp+60h] [rbp-69h] BYREF
  volatile signed __int32 *v51; // [rsp+68h] [rbp-61h]
  _BYTE v52[8]; // [rsp+70h] [rbp-59h] BYREF
  volatile signed __int32 *v53; // [rsp+78h] [rbp-51h]
  _BYTE v54[8]; // [rsp+80h] [rbp-49h] BYREF
  volatile signed __int32 *v55; // [rsp+88h] [rbp-41h]
  _BYTE v56[8]; // [rsp+90h] [rbp-39h] BYREF
  volatile signed __int32 *v57; // [rsp+98h] [rbp-31h]
  _BYTE v58[8]; // [rsp+A0h] [rbp-29h] BYREF
  volatile signed __int32 *v59; // [rsp+A8h] [rbp-21h]
  _BYTE v60[8]; // [rsp+B0h] [rbp-19h] BYREF
  volatile signed __int32 *v61; // [rsp+B8h] [rbp-11h]
  _BYTE v62[8]; // [rsp+C0h] [rbp-9h] BYREF
  volatile signed __int32 *v63; // [rsp+C8h] [rbp-1h]
  _BYTE v64[8]; // [rsp+D0h] [rbp+7h] BYREF
  volatile signed __int32 *v65; // [rsp+D8h] [rbp+Fh]
  _BYTE v66[8]; // [rsp+E0h] [rbp+17h] BYREF
  volatile signed __int32 *v67; // [rsp+E8h] [rbp+1Fh]

  LOWORD(v3) = 0;
  v4 = a2;
  v5 = HIWORD(a2);
  v7 = sub_1400441A4(a1, 13, HIWORD(a2));
  if ( v7 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = &unk_1400D44E0;
      v3 = (__int64)&unk_1400D44E0;
      v9 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v50) + 16LL);
      if ( v9 )
        v3 = v9;
      v10 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v48);
      LOBYTE(v11) = 2;
      v12 = *(void **)(*(_QWORD *)v10 + 16LL);
      if ( v12 )
        v8 = v12;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v11,
        14,
        42,
        (__int64)&unk_1400D71E0,
        (__int64)v8,
        v3,
        (__int64)L"WritePhyRegisterSafe(13, mmdmcValue)",
        v7);
      LOBYTE(v3) = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v13 = v49;
      LOBYTE(v3) = v3 & 0xFD;
      if ( v49 )
      {
        if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v14 = v51;
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    v15 = 365;
LABEL_19:
    sub_14000D3C8((int)a1, (__int64)L"WritePhyRegisterSafe(13, mmdmcValue)", v15, 156, v7);
    return v7;
  }
  v17 = sub_1400441A4(a1, 14, v4);
  if ( v17 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v18 = &unk_1400D44E0;
      v3 = (__int64)&unk_1400D44E0;
      v19 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v54) + 16LL);
      if ( v19 )
        v3 = v19;
      v20 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v52);
      LOBYTE(v21) = 2;
      v22 = *(void **)(*(_QWORD *)v20 + 16LL);
      if ( v22 )
        v18 = v22;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v21,
        14,
        43,
        (__int64)&unk_1400D71E0,
        (__int64)v18,
        v3,
        (__int64)L"WritePhyRegisterSafe(14, mmdadValue)",
        v17);
      LOBYTE(v3) = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v23 = v53;
      LOBYTE(v3) = v3 & 0xF7;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v24 = v55;
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    sub_14000D3C8((int)a1, (__int64)L"WritePhyRegisterSafe(14, mmdadValue)", 369, 156, v17);
    return v17;
  }
  v7 = sub_1400441A4(a1, 13, v5 | 0x4000);
  if ( v7 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v3 = (__int64)&unk_1400D44E0;
      v25 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v56) + 16LL);
      if ( v25 )
        v3 = v25;
      v26 = *(_QWORD *)(a1[22] + 16LL);
      v27 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v58);
      LOBYTE(v28) = 2;
      v29 = *(void **)(*(_QWORD *)v27 + 16LL);
      v30 = &unk_1400D44E0;
      if ( v29 )
        v30 = v29;
      sub_1400A5E80(
        v26,
        v28,
        14,
        44,
        (__int64)&unk_1400D71E0,
        v3,
        (__int64)v30,
        (__int64)L"WritePhyRegisterSafe(13, mmdmcValue)",
        v7);
      LOBYTE(v3) = 48;
    }
    if ( (v3 & 0x20) != 0 )
    {
      v31 = v57;
      LOBYTE(v3) = v3 & 0xDF;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
    }
    if ( (v3 & 0x10) != 0 )
    {
      v32 = v59;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
          if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
    }
    v15 = 372;
    goto LABEL_19;
  }
  v17 = sub_1400441A4(a1, 14, a3);
  if ( v17 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v33 = &unk_1400D44E0;
      v3 = (__int64)&unk_1400D44E0;
      v34 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v60) + 16LL);
      if ( v34 )
        v3 = v34;
      v35 = *(_QWORD *)(a1[22] + 16LL);
      v36 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v62);
      LOBYTE(v37) = 2;
      v38 = *(void **)(*(_QWORD *)v36 + 16LL);
      if ( v38 )
        v33 = v38;
      sub_1400A5E80(
        v35,
        v37,
        14,
        45,
        (__int64)&unk_1400D71E0,
        v3,
        (__int64)v33,
        (__int64)L"WritePhyRegisterSafe(14, value)",
        v17);
      LOBYTE(v3) = -64;
    }
    if ( (v3 & 0x80u) != 0LL )
    {
      v39 = v61;
      LOBYTE(v3) = v3 & 0x7F;
      if ( v61 )
      {
        if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
          if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
        }
      }
    }
    if ( (v3 & 0x40) != 0 )
    {
      v40 = v63;
      if ( v63 )
      {
        if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
    }
    sub_140008B58((int)a1, (__int64)L"WritePhyRegisterSafe(14, value)", 374, 156, v17);
    return v17;
  }
  v17 = sub_1400441A4(a1, 13, 0);
  if ( v17 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v41 = &unk_1400D44E0;
      v3 = (__int64)&unk_1400D44E0;
      v42 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v66) + 16LL);
      if ( v42 )
        v3 = v42;
      v43 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v64);
      LOBYTE(v44) = 2;
      v45 = *(void **)(*(_QWORD *)v43 + 16LL);
      if ( v45 )
        v41 = v45;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v44,
        14,
        46,
        (__int64)&unk_1400D71E0,
        (__int64)v41,
        v3,
        (__int64)L"WritePhyRegisterSafe(13, 0)",
        v17);
      LOWORD(v3) = 768;
    }
    if ( (v3 & 0x200) != 0 )
    {
      v46 = v65;
      LOWORD(v3) = v3 & 0xFDFF;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
          if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
        }
      }
    }
    if ( (v3 & 0x100) != 0 )
    {
      v47 = v67;
      if ( v67 )
      {
        if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
          if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
        }
      }
    }
    sub_140008628((int)a1, (__int64)L"WritePhyRegisterSafe(13, 0)", 376, 156, v17);
    return v17;
  }
  return 0LL;
}
