__int64 __fastcall sub_1400536C0(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  char v4; // r15
  __int64 v5; // rsi
  __int64 *v7; // r12
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rax
  void *v19; // r10
  void *v20; // r8
  void *v21; // rax
  void *v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // eax
  volatile signed __int32 *v25; // rdi
  volatile signed __int32 *v26; // rdi
  void *v27; // rsi
  void *v28; // rax
  __int64 v29; // rax
  void *v30; // r8
  void *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // eax
  volatile signed __int32 *v35; // rdi
  void *v36; // rsi
  void *v37; // rax
  __int64 v38; // rax
  void *v39; // rdx
  void *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  volatile signed __int32 *v43; // rdi
  volatile signed __int32 *v44; // rdi
  unsigned int v45; // edi
  void *v46; // r14
  void *v47; // rsi
  void *v48; // rax
  __int64 v49; // rax
  int v50; // edx
  void *v51; // rax
  volatile signed __int32 *v52; // rdi
  volatile signed __int32 *v53; // rdi
  signed __int32 v55[6]; // [rsp+8h] [rbp-B9h] BYREF
  __int64 v56; // [rsp+30h] [rbp-91h]
  unsigned int v57; // [rsp+50h] [rbp-71h]
  int v58; // [rsp+60h] [rbp-61h]
  char v59[8]; // [rsp+68h] [rbp-59h] BYREF
  volatile signed __int32 *v60; // [rsp+70h] [rbp-51h]
  char v61[8]; // [rsp+78h] [rbp-49h] BYREF
  volatile signed __int32 *v62; // [rsp+80h] [rbp-41h]
  char v63[8]; // [rsp+88h] [rbp-39h] BYREF
  volatile signed __int32 *v64; // [rsp+90h] [rbp-31h]
  char v65[8]; // [rsp+98h] [rbp-29h] BYREF
  volatile signed __int32 *v66; // [rsp+A0h] [rbp-21h]
  char v67[8]; // [rsp+A8h] [rbp-19h] BYREF
  volatile signed __int32 *v68; // [rsp+B0h] [rbp-11h]
  char v69[8]; // [rsp+B8h] [rbp-9h] BYREF
  volatile signed __int32 *v70; // [rsp+C0h] [rbp-1h]
  char v71[8]; // [rsp+C8h] [rbp+7h] BYREF
  volatile signed __int32 *v72; // [rsp+D0h] [rbp+Fh]
  char v73[8]; // [rsp+D8h] [rbp+17h] BYREF
  volatile signed __int32 *v74; // [rsp+E0h] [rbp+1Fh]
  __int64 v75; // [rsp+128h] [rbp+67h]
  char v76; // [rsp+130h] [rbp+6Fh]

  v76 = a2;
  v4 = 0;
  v5 = a2;
  v7 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14000BBDC(
              Pool2,
              (__int64)L"product_e2fn::ProductE2fnInterruptVectorAllocator::AllocateInterruptVector",
              a1 - 352);
      if ( v11 )
        v7 = v11;
    }
  }
  v12 = *(_QWORD *)(a1 + 168);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( (unsigned int)v5 < 0xA && a3 < 5 )
  {
    v13 = 3 * v5;
    v75 = v13;
    _mm_lfence();
    v14 = *(_DWORD *)(a1 + 4 * v13 + 24);
    v15 = *(unsigned int *)(a1 + 4 * v13 + 20);
    if ( a4 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 4 * v15 + 184), (a3 | 0x80) << v14);
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        _mm_lfence();
        v16 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(a1 - 296, v61);
        v17 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
        v18 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v59);
        v19 = &unk_1400D44E0;
        v20 = &unk_1400D44E0;
        v21 = *(void **)(*(_QWORD *)v18 + 16LL);
        if ( v21 )
          v19 = v21;
        v22 = *(void **)(v16 + 16);
        v13 = v75;
        if ( v22 )
          v20 = v22;
        v23 = *(unsigned int *)(a1 + 4 * v75 + 20);
        v58 = *(_DWORD *)(a1 + 4 * v23 + 184);
        v24 = dword_1400D76E0[v23];
        LOBYTE(v23) = 4;
        sub_1400AB890(
          v17,
          v23,
          10,
          16,
          (__int64)&unk_1400D76D0,
          (__int64)v19,
          (__int64)v20,
          (__int64)qword_1400B7720,
          v76,
          a3,
          v24,
          v58);
        v4 = 12;
      }
      if ( (v4 & 8) != 0 )
      {
        v25 = v60;
        v4 &= ~8u;
        if ( v60 )
        {
          if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
            if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
          }
        }
      }
      if ( (v4 & 4) == 0 )
        goto LABEL_39;
      v26 = v62;
      v4 &= ~4u;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 4 * v15 + 184), a3 << v14);
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        _mm_lfence();
        v27 = &unk_1400D44E0;
        v28 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                      a1 - 296,
                                      v65)
                       + 16LL);
        if ( v28 )
          v27 = v28;
        v29 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v63);
        v30 = &unk_1400D44E0;
        v31 = *(void **)(*(_QWORD *)v29 + 16LL);
        if ( v31 )
          v30 = v31;
        v32 = *(unsigned int *)(a1 + 4 * v75 + 20);
        v33 = *(_QWORD *)(a1 - 176);
        v58 = *(_DWORD *)(a1 + 4 * v32 + 184);
        v34 = dword_1400D76E0[v32];
        LOBYTE(v32) = 4;
        sub_1400AB890(
          *(_QWORD *)(v33 + 16),
          v32,
          10,
          17,
          (__int64)&unk_1400D76D0,
          (__int64)v30,
          (__int64)v27,
          (__int64)qword_1400B7720,
          v76,
          a3,
          v34,
          v58);
        v13 = v75;
        v4 = 48;
      }
      if ( (v4 & 0x20) != 0 )
      {
        v35 = v64;
        v4 &= ~0x20u;
        if ( v64 )
        {
          if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
            if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
          }
        }
      }
      if ( (v4 & 0x10) == 0 )
        goto LABEL_39;
      v26 = v66;
      v4 &= ~0x10u;
    }
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
      }
    }
LABEL_39:
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 20LL) )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        _mm_lfence();
        v4 |= 0xC0u;
        v36 = &unk_1400D44E0;
        v37 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                      a1 - 296,
                                      v69)
                       + 16LL);
        if ( v37 )
          v36 = v37;
        v38 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v67);
        v39 = &unk_1400D44E0;
        v40 = *(void **)(*(_QWORD *)v38 + 16LL);
        v41 = *(_QWORD *)(a1 - 176);
        if ( v40 )
          v39 = v40;
        v57 = a3;
        v42 = *(_QWORD *)(v41 + 16);
        v56 = (__int64)v39;
        LOBYTE(v39) = 4;
        sub_1400A6AA8(
          v42,
          (_DWORD)v39,
          10,
          18,
          (__int64)&unk_1400D76D0,
          v56,
          (__int64)v36,
          (__int64)qword_1400B7720,
          v76,
          a3);
      }
      if ( v4 < 0 )
      {
        v43 = v68;
        v4 &= ~0x80u;
        if ( v68 )
        {
          if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
            if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
          }
        }
      }
      if ( (v4 & 0x40) != 0 )
      {
        v44 = v70;
        if ( v70 )
        {
          if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
            if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
          }
        }
      }
    }
    else
    {
      _mm_lfence();
      *(_DWORD *)(dword_1400D76E0[*(unsigned int *)(a1 + 4 * v13 + 20)] + *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8LL)) = *(_DWORD *)(a1 + 4LL * *(unsigned int *)(a1 + 4 * v13 + 20) + 184);
      _InterlockedOr(v55, 0);
    }
    v45 = 0;
    goto LABEL_75;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v46 = &unk_1400D44E0;
    v47 = &unk_1400D44E0;
    v48 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                  a1 - 296,
                                  v73)
                   + 16LL);
    if ( v48 )
      v47 = v48;
    v49 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v71);
    LOBYTE(v50) = 2;
    v51 = *(void **)(*(_QWORD *)v49 + 16LL);
    if ( v51 )
      v46 = v51;
    sub_1400A6AA8(
      *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
      v50,
      10,
      15,
      (__int64)&unk_1400D76D0,
      (__int64)v46,
      (__int64)v47,
      (__int64)qword_1400B7720,
      v76,
      a3);
    v4 = 3;
  }
  if ( (v4 & 2) != 0 )
  {
    v52 = v72;
    v4 &= ~2u;
    if ( v72 )
    {
      if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
        if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v53 = v74;
    if ( v74 )
    {
      if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
        if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
      }
    }
  }
  v45 = -1073741811;
LABEL_75:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
  if ( v7 )
  {
    sub_14000BFA4(v7);
    ExFreePool(v7);
  }
  return v45;
}
