__int64 __fastcall sub_14004333C(_QWORD *a1, int a2)
{
  _QWORD *v2; // rdi
  __int16 v3; // r15
  unsigned int v4; // r14d
  __int64 v5; // rcx
  __int64 v6; // r12
  unsigned int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rbx
  __int64 v11; // rax
  void *v12; // rsi
  _QWORD *v13; // rcx
  void *v14; // rdi
  void *v15; // rax
  __int64 v16; // rax
  int v17; // edx
  void *v18; // rax
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  unsigned int v22; // esi
  void *v23; // rsi
  _QWORD *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rax
  _QWORD *v27; // rcx
  void *v28; // rdi
  void *v29; // rax
  __int64 v30; // rax
  void *v31; // rdx
  void *v32; // rax
  volatile signed __int32 *v33; // rbx
  volatile signed __int32 *v34; // rbx
  _QWORD *v35; // rbx
  __int64 v36; // rax
  void *v37; // rdi
  void *v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  int v41; // edx
  void *v42; // rax
  void *v43; // rcx
  volatile signed __int32 *v44; // rbx
  volatile signed __int32 *v45; // rbx
  int v46; // r12d
  _QWORD *v47; // rbx
  __int64 v48; // rax
  void *v49; // rdi
  void *v50; // rax
  __int64 v51; // rax
  int v52; // edx
  void *v53; // rax
  volatile signed __int32 *v54; // rbx
  int v55; // eax
  _QWORD *v56; // rbx
  __int64 v57; // rax
  void *v58; // r14
  _QWORD *v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // rax
  int v62; // edx
  void *v63; // rax
  volatile signed __int32 *v64; // rbx
  volatile signed __int32 *v65; // rbx
  __int64 v66; // [rsp+38h] [rbp-99h]
  _BYTE v67[8]; // [rsp+58h] [rbp-79h] BYREF
  volatile signed __int32 *v68; // [rsp+60h] [rbp-71h]
  _BYTE v69[8]; // [rsp+68h] [rbp-69h] BYREF
  volatile signed __int32 *v70; // [rsp+70h] [rbp-61h]
  _BYTE v71[8]; // [rsp+78h] [rbp-59h] BYREF
  volatile signed __int32 *v72; // [rsp+80h] [rbp-51h]
  _BYTE v73[8]; // [rsp+88h] [rbp-49h] BYREF
  volatile signed __int32 *v74; // [rsp+90h] [rbp-41h]
  _BYTE v75[8]; // [rsp+98h] [rbp-39h] BYREF
  volatile signed __int32 *v76; // [rsp+A0h] [rbp-31h]
  _BYTE v77[8]; // [rsp+A8h] [rbp-29h] BYREF
  volatile signed __int32 *v78; // [rsp+B0h] [rbp-21h]
  _BYTE v79[8]; // [rsp+B8h] [rbp-19h] BYREF
  volatile signed __int32 *v80; // [rsp+C0h] [rbp-11h]
  _BYTE v81[8]; // [rsp+C8h] [rbp-9h] BYREF
  volatile signed __int32 *v82; // [rsp+D0h] [rbp-1h]
  _BYTE v83[8]; // [rsp+D8h] [rbp+7h] BYREF
  volatile signed __int32 *v84; // [rsp+E0h] [rbp+Fh]
  _BYTE v85[8]; // [rsp+E8h] [rbp+17h] BYREF
  volatile signed __int32 *v86; // [rsp+F0h] [rbp+1Fh]

  v2 = a1;
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = v2[47];
    v6 = *(_QWORD *)(v5 + 8);
    if ( !v6 || *(_DWORD *)(v5 + 20) )
    {
      v55 = -1073741661;
      if ( *(_DWORD *)(v5 + 20) == 3 )
        v55 = -1073741130;
      v22 = v55;
      goto LABEL_80;
    }
    v7 = *(_DWORD *)(v6 + 32);
    if ( v7 == -1 )
      break;
    if ( (v7 & 0x10000000) != 0 )
      goto LABEL_26;
    KeStallExecutionProcessor(0xAu);
    ++v4;
    v9 = 0LL;
    if ( v4 >= 0x7D0 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v10 = v2 + 7;
        v11 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *, _QWORD))(v2[7] + 24LL))(v2 + 7, v67, 0LL);
        v12 = &unk_1400D44E0;
        v13 = v2 + 7;
        v14 = &unk_1400D44E0;
        v15 = *(void **)(*(_QWORD *)v11 + 16LL);
        if ( v15 )
          v14 = v15;
        v16 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v10 + 16LL))(v13, v69);
        LOBYTE(v17) = 2;
        v18 = *(void **)(*(_QWORD *)v16 + 16LL);
        if ( v18 )
          v12 = v18;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          v17,
          14,
          51,
          (__int64)&unk_1400D71E0,
          (__int64)v14,
          (__int64)v12,
          (__int64)qword_1400B7720,
          32);
        v3 = 768;
      }
      if ( (v3 & 0x200) != 0 )
      {
        v19 = v68;
        v3 &= ~0x200u;
        if ( v68 )
        {
          if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v19 + 8LL))(v19, v8, v9);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      if ( (v3 & 0x100) != 0 )
      {
        v20 = v70;
        if ( v70 )
        {
          if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v20 + 8LL))(v20, v8, v9);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
      }
      return 3221225635LL;
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 8) + 8LL) != -1 )
  {
LABEL_26:
    v23 = &unk_1400D44E0;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 && LOWORD(DeviceObject->DeviceType) )
    {
      v24 = v2 + 7;
      v25 = *(_QWORD *)(v2[22] + 16LL);
      v26 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(v2[7] + 24LL))(v2 + 7, v71);
      v27 = v2 + 7;
      v28 = &unk_1400D44E0;
      v29 = *(void **)(*(_QWORD *)v26 + 16LL);
      if ( v29 )
        v28 = v29;
      v30 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v24 + 16LL))(v27, v73);
      v31 = &unk_1400D44E0;
      v32 = *(void **)(*(_QWORD *)v30 + 16LL);
      if ( v32 )
        v31 = v32;
      v66 = (__int64)v31;
      LOBYTE(v31) = 5;
      sub_1400A5E80(v25, (_DWORD)v31, 14, 48, (__int64)&unk_1400D71E0, (__int64)v28, v66, (__int64)qword_1400B7720, v4);
      v2 = a1;
      v23 = &unk_1400D44E0;
      LOBYTE(v3) = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v33 = v72;
      LOBYTE(v3) = v3 & 0xF7;
      if ( v72 )
      {
        if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
          if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v34 = v74;
      LOBYTE(v3) = v3 & 0xFB;
      if ( v74 )
      {
        if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
    if ( (v7 & 0x40000000) != 0 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v35 = v2 + 7;
        LOBYTE(v3) = v3 | 0x30;
        v36 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(v2[7] + 24LL))(v2 + 7, v75);
        v37 = &unk_1400D44E0;
        v38 = *(void **)(*(_QWORD *)v36 + 16LL);
        if ( v38 )
          v37 = v38;
        v39 = *(_QWORD *)(a1[22] + 16LL);
        v40 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v35 + 16LL))(v35, v77);
        LOBYTE(v41) = 2;
        v42 = *(void **)(*(_QWORD *)v40 + 16LL);
        v43 = &unk_1400D44E0;
        if ( v42 )
          v43 = v42;
        sub_1400A3320(v39, v41, 14, 49, (__int64)&unk_1400D71E0, (__int64)v37, (__int64)v43, (__int64)qword_1400B7720);
      }
      if ( (v3 & 0x20) != 0 )
      {
        v44 = v76;
        LOBYTE(v3) = v3 & 0xDF;
        if ( v76 )
        {
          if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
            if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
          }
        }
      }
      if ( (v3 & 0x10) == 0 )
        return 3221225666LL;
      v45 = v78;
    }
    else
    {
      v46 = HIWORD(v7) & 0x1F;
      if ( v46 == a2 )
        return 0LL;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v47 = v2 + 7;
        LOBYTE(v3) = v3 | 0xC0;
        v48 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(v2[7] + 16LL))(v2 + 7, v81);
        v49 = &unk_1400D44E0;
        v50 = *(void **)(*(_QWORD *)v48 + 16LL);
        if ( v50 )
          v49 = v50;
        v51 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v47 + 24LL))(v47, v79);
        LOBYTE(v52) = 2;
        v53 = *(void **)(*(_QWORD *)v51 + 16LL);
        if ( v53 )
          v23 = v53;
        sub_1400A6AA8(
          *(_QWORD *)(a1[22] + 16LL),
          v52,
          14,
          50,
          (__int64)&unk_1400D71E0,
          (__int64)v23,
          (__int64)v49,
          (__int64)qword_1400B7720,
          a2,
          v46);
      }
      if ( (v3 & 0x80u) != 0 )
      {
        v54 = v80;
        LOBYTE(v3) = v3 & 0x7F;
        if ( v80 )
        {
          if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
            if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
          }
        }
      }
      if ( (v3 & 0x40) == 0 )
        return 3221225666LL;
      v45 = v82;
    }
    if ( v45 )
    {
      if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
        if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
      }
    }
    return 3221225666LL;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, 3LL);
  v22 = -1073741130;
LABEL_80:
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v56 = v2 + 7;
    v57 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(v2[7] + 16LL))(v2 + 7, v85);
    v58 = &unk_1400D44E0;
    v59 = v2 + 7;
    v2 = &unk_1400D44E0;
    v60 = *(_QWORD **)(*(_QWORD *)v57 + 16LL);
    if ( v60 )
      v2 = v60;
    v61 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v56 + 24LL))(v59, v83);
    LOBYTE(v62) = 2;
    v63 = *(void **)(*(_QWORD *)v61 + 16LL);
    if ( v63 )
      v58 = v63;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      v62,
      14,
      47,
      (__int64)&unk_1400D71E0,
      (__int64)v58,
      (__int64)v2,
      (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x00020, mdicValue)",
      v22);
    LODWORD(v2) = (_DWORD)a1;
    LOBYTE(v3) = 3;
  }
  if ( (v3 & 2) != 0 )
  {
    v64 = v84;
    LOBYTE(v3) = v3 & 0xFD;
    if ( v84 )
    {
      if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 8LL))(v64);
        if ( _InterlockedExchangeAdd(v64 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 16LL))(v64);
      }
    }
  }
  if ( (v3 & 1) != 0 )
  {
    v65 = v86;
    if ( v86 )
    {
      if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
        if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 16LL))(v65);
      }
    }
  }
  sub_14000D660((int)v2, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x00020, mdicValue)", 394, 156, v22);
  return v22;
}
