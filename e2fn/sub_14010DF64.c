__int64 __fastcall sub_14010DF64(_QWORD *a1, __int64 a2)
{
  int v2; // r14d
  _QWORD *v3; // rdi
  __int64 *v4; // r15
  __int64 v5; // rbx
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  unsigned int v8; // r12d
  const wchar_t *v9; // r13
  unsigned int v10; // esi
  _BYTE *v11; // rax
  _BYTE *v12; // r13
  char *v13; // rbx
  __int64 v14; // rax
  char *v15; // rcx
  const wchar_t *v16; // rdi
  const wchar_t *v17; // rax
  __int64 v18; // rax
  const wchar_t *v19; // rdx
  const wchar_t *v20; // rax
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  char *v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rax
  const wchar_t *v26; // rdi
  const wchar_t *v27; // rax
  const wchar_t *v28; // rax
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  unsigned int v31; // esi
  char *v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // rax
  const wchar_t *v36; // rdi
  const wchar_t *v37; // rax
  __int64 v38; // rax
  const wchar_t *v39; // rdx
  const wchar_t *v40; // rax
  volatile signed __int32 *v41; // rbx
  volatile signed __int32 *v42; // rbx
  char *v43; // rbx
  __int64 v44; // rax
  const wchar_t *v45; // r12
  char *v46; // rcx
  _QWORD *v47; // rax
  const wchar_t *v48; // rax
  volatile signed __int32 *v49; // rbx
  volatile signed __int32 *v50; // rbx
  char v51[8]; // [rsp+58h] [rbp-59h] BYREF
  volatile signed __int32 *v52; // [rsp+60h] [rbp-51h]
  char v53[8]; // [rsp+68h] [rbp-49h] BYREF
  volatile signed __int32 *v54; // [rsp+70h] [rbp-41h]
  char v55[8]; // [rsp+78h] [rbp-39h] BYREF
  volatile signed __int32 *v56; // [rsp+80h] [rbp-31h]
  char v57[8]; // [rsp+88h] [rbp-29h] BYREF
  volatile signed __int32 *v58; // [rsp+90h] [rbp-21h]
  char v59[8]; // [rsp+98h] [rbp-19h] BYREF
  volatile signed __int32 *v60; // [rsp+A0h] [rbp-11h]
  char v61[8]; // [rsp+A8h] [rbp-9h] BYREF
  volatile signed __int32 *v62; // [rsp+B0h] [rbp-1h]
  char v63[8]; // [rsp+B8h] [rbp+7h] BYREF
  volatile signed __int32 *v64; // [rsp+C0h] [rbp+Fh]
  char v65[8]; // [rsp+C8h] [rbp+17h] BYREF
  volatile signed __int32 *v66; // [rsp+D0h] [rbp+1Fh]

  v2 = 0;
  v3 = a1;
  v4 = 0LL;
  v5 = a2;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005B310(
             Pool2,
             (__int64)L"os_resources::MemoryMappedIoAccessorsProvider::EvtPrepareHardware",
             (__int64)v3);
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = 0;
  v9 = (const wchar_t *)&unk_1400D44E0;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_1400DF678 + 2432))(qword_1400DF6A8, v5);
  if ( !v10 )
  {
LABEL_28:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v23 = (char *)(v3 + 7);
      LOBYTE(v2) = v2 | 0xC0;
      v24 = *(_QWORD *)(v3[22] + 16LL);
      v25 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v3[7] + 24LL))(v3 + 7, v63);
      v26 = (const wchar_t *)&unk_1400D44E0;
      v27 = *(const wchar_t **)(*(_QWORD *)v25 + 16LL);
      if ( v27 )
        v26 = v27;
      v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v23 + 16LL))(v23, v65)
                              + 16LL);
      if ( v28 )
        v9 = v28;
      sub_1400A3320(v24, 2u, 4u, 0xEu, (__int64)&unk_1400D8758, v26, v9, (const wchar_t *)qword_14014EC70);
    }
    if ( (v2 & 0x80u) != 0 )
    {
      v29 = v64;
      LOBYTE(v2) = v2 & 0x7F;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    if ( (v2 & 0x40) != 0 )
    {
      v30 = v66;
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    v31 = -1073741661;
    goto LABEL_45;
  }
  _mm_lfence();
  while ( 1 )
  {
    v11 = (_BYTE *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(qword_1400DF678 + 2440))(
                     qword_1400DF6A8,
                     v5,
                     v8);
    v12 = v11;
    if ( !v11 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v13 = (char *)(v3 + 7);
        v2 |= 3u;
        v14 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v3[7] + 16LL))(v3 + 7, v53);
        v15 = (char *)(v3 + 7);
        v16 = (const wchar_t *)&unk_1400D44E0;
        v17 = *(const wchar_t **)(*(_QWORD *)v14 + 16LL);
        if ( v17 )
          v16 = v17;
        v18 = (*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v13 + 24LL))(v15, v51);
        v19 = (const wchar_t *)&unk_1400D44E0;
        v20 = *(const wchar_t **)(*(_QWORD *)v18 + 16LL);
        if ( v20 )
          v19 = v20;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          3u,
          4u,
          0xBu,
          (__int64)&unk_1400D8758,
          v19,
          v16,
          (const wchar_t *)qword_14014EC70);
        v3 = a1;
      }
      if ( (v2 & 2) != 0 )
      {
        v21 = v52;
        v2 &= ~2u;
        if ( v52 )
        {
          if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
          }
        }
      }
      if ( (v2 & 1) != 0 )
      {
        v22 = v54;
        v2 &= ~1u;
        if ( v54 )
        {
          if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
      }
      v5 = a2;
      goto LABEL_26;
    }
    if ( *v11 == 3 )
      break;
LABEL_26:
    if ( ++v8 >= v10 )
    {
      v9 = (const wchar_t *)&unk_1400D44E0;
      goto LABEL_28;
    }
  }
  _mm_lfence();
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v33 = (char *)(v3 + 7);
    LOBYTE(v2) = v2 | 0xC;
    v34 = *(_QWORD *)(v3[22] + 16LL);
    v35 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v3[7] + 24LL))(v3 + 7, v55);
    v36 = (const wchar_t *)&unk_1400D44E0;
    v37 = *(const wchar_t **)(*(_QWORD *)v35 + 16LL);
    if ( v37 )
      v36 = v37;
    v38 = (*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v33 + 16LL))(v33, v57);
    v39 = (const wchar_t *)&unk_1400D44E0;
    v40 = *(const wchar_t **)(*(_QWORD *)v38 + 16LL);
    if ( v40 )
      v39 = v40;
    sub_1400A5E80(v34, 4u, 4u, 0xCu, (__int64)&unk_1400D8758, v36, v39, (const wchar_t *)qword_14014EC70);
    v3 = a1;
  }
  if ( (v2 & 8) != 0 )
  {
    v41 = v56;
    LOBYTE(v2) = v2 & 0xF7;
    if ( v56 )
    {
      if ( !_InterlockedDecrement(v56 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
        if ( !_InterlockedDecrement(v41 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
      }
    }
  }
  if ( (v2 & 4) != 0 )
  {
    v42 = v58;
    LOBYTE(v2) = v2 & 0xFB;
    if ( v58 )
    {
      if ( !_InterlockedDecrement(v58 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
        if ( !_InterlockedDecrement(v42 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
      }
    }
  }
  v31 = sub_1401117D0(v3[46], *(_QWORD *)(v12 + 4), *((unsigned int *)v12 + 3));
  if ( v31 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v43 = (char *)(v3 + 7);
      LOBYTE(v2) = v2 | 0x30;
      v44 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v3[7] + 16LL))(v3 + 7, v61);
      v45 = (const wchar_t *)&unk_1400D44E0;
      v46 = (char *)(v3 + 7);
      v3 = &unk_1400D44E0;
      v47 = *(_QWORD **)(*(_QWORD *)v44 + 16LL);
      if ( v47 )
        v3 = v47;
      v48 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v43 + 24LL))(v46, v59)
                              + 16LL);
      if ( v48 )
        v45 = v48;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        4u,
        0xDu,
        (__int64)&unk_1400D8758,
        v45,
        (const wchar_t *)v3,
        L"m_bar0->Map(descriptor->u.Memory.Start, descriptor->u.Memory.Length)");
      LODWORD(v3) = (_DWORD)a1;
    }
    if ( (v2 & 0x20) != 0 )
    {
      v49 = v60;
      LOBYTE(v2) = v2 & 0xDF;
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
          if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
        }
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
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
    }
    sub_140039A50(
      (int)v3,
      (__int64)L"m_bar0->Map(descriptor->u.Memory.Start, descriptor->u.Memory.Length)",
      81,
      136,
      v31);
  }
  else
  {
    v31 = 0;
  }
LABEL_45:
  if ( v4 )
  {
    sub_14005B5AC(v4);
    ExFreePool(v4);
  }
  return v31;
}
