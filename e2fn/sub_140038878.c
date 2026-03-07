__int64 __fastcall sub_140038878(_QWORD *a1, int a2, unsigned int a3, int a4)
{
  __int16 v4; // si
  __int64 *v6; // r12
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  unsigned int v11; // r14d
  void *v12; // r13
  void *v13; // rdi
  void *v14; // rax
  __int64 v15; // rax
  void *v16; // rdx
  void *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  void *v22; // rdi
  void *v23; // rax
  __int64 v24; // rax
  void *v25; // rdx
  void *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // r14d
  void *v36; // rdi
  void *v37; // rax
  __int64 v38; // rax
  int v39; // edx
  void *v40; // rax
  volatile signed __int32 *v41; // rbx
  volatile signed __int32 *v42; // rbx
  const wchar_t *v43; // r13
  void *v44; // rdi
  void *v45; // rax
  __int64 v46; // rax
  void *v47; // rdx
  void *v48; // rax
  __int64 v49; // rcx
  volatile signed __int32 *v50; // rbx
  volatile signed __int32 *v51; // rbx
  int v52; // r8d
  __int64 v53; // rbx
  __int64 *v54; // rax
  void *v55; // rcx
  void *v56; // r8
  void *v57; // rdx
  __int64 v58; // rax
  volatile signed __int32 *v59; // rbx
  volatile signed __int32 *v60; // rbx
  signed __int32 v62[8]; // [rsp+0h] [rbp-C9h] BYREF
  __int64 v63; // [rsp+28h] [rbp-A1h]
  __int64 v64; // [rsp+30h] [rbp-99h]
  const wchar_t *v65; // [rsp+38h] [rbp-91h]
  unsigned int v66; // [rsp+40h] [rbp-89h]
  char v67[8]; // [rsp+50h] [rbp-79h] BYREF
  volatile signed __int32 *v68; // [rsp+58h] [rbp-71h]
  char v69[8]; // [rsp+60h] [rbp-69h] BYREF
  volatile signed __int32 *v70; // [rsp+68h] [rbp-61h]
  char v71[8]; // [rsp+70h] [rbp-59h] BYREF
  volatile signed __int32 *v72; // [rsp+78h] [rbp-51h]
  char v73[8]; // [rsp+80h] [rbp-49h] BYREF
  volatile signed __int32 *v74; // [rsp+88h] [rbp-41h]
  char v75[8]; // [rsp+90h] [rbp-39h] BYREF
  volatile signed __int32 *v76; // [rsp+98h] [rbp-31h]
  char v77[8]; // [rsp+A0h] [rbp-29h] BYREF
  volatile signed __int32 *v78; // [rsp+A8h] [rbp-21h]
  char v79[8]; // [rsp+B0h] [rbp-19h] BYREF
  volatile signed __int32 *v80; // [rsp+B8h] [rbp-11h]
  char v81[8]; // [rsp+C0h] [rbp-9h] BYREF
  volatile signed __int32 *v82; // [rsp+C8h] [rbp-1h]
  char v83[8]; // [rsp+D0h] [rbp+7h] BYREF
  volatile signed __int32 *v84; // [rsp+D8h] [rbp+Fh]
  char v85[8]; // [rsp+E0h] [rbp+17h] BYREF
  volatile signed __int32 *v86; // [rsp+E8h] [rbp+1Fh]
  int v87; // [rsp+138h] [rbp+6Fh]
  int v88; // [rsp+148h] [rbp+7Fh]

  v88 = a4;
  v4 = 0;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareFlowControl::SetWaterMarks", (__int64)a1);
      if ( v10 )
        v6 = v10;
    }
    a4 = v88;
  }
  v87 = 0;
  v11 = 0;
  if ( ((a2 - 1) & 0xFFFFFFFD) == 0 )
  {
    v11 = a3;
    v87 = a4;
  }
  v12 = &unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v13 = &unk_1400D44E0;
    v14 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v69) + 16LL);
    if ( v14 )
      v13 = v14;
    v15 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v67);
    v66 = v11;
    v16 = &unk_1400D44E0;
    v17 = *(void **)(*(_QWORD *)v15 + 16LL);
    v18 = a1[22];
    if ( v17 )
      v16 = v17;
    v65 = (const wchar_t *)qword_1400B7720;
    v19 = *(_QWORD *)(v18 + 16);
    v63 = (__int64)v16;
    LOBYTE(v16) = 4;
    sub_1400A5E80(v19, (_DWORD)v16, 14, 18, (__int64)&unk_1400D6CE0, v63, (__int64)v13, (__int64)qword_1400B7720, v66);
    v4 = 3;
  }
  if ( (v4 & 2) != 0 )
  {
    v20 = v68;
    v4 &= ~2u;
    if ( v68 )
    {
      if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v21 = v70;
    v4 &= ~1u;
    if ( v70 )
    {
      if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v4 |= 0xCu;
    v22 = &unk_1400D44E0;
    v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v73) + 16LL);
    if ( v23 )
      v22 = v23;
    v24 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v71);
    v25 = &unk_1400D44E0;
    v26 = *(void **)(*(_QWORD *)v24 + 16LL);
    v27 = a1[22];
    if ( v26 )
      v25 = v26;
    v66 = v87;
    v28 = *(_QWORD *)(v27 + 16);
    v63 = (__int64)v25;
    LOBYTE(v25) = 4;
    sub_1400A5E80(v28, (_DWORD)v25, 14, 19, (__int64)&unk_1400D6CE0, v63, (__int64)v22, (__int64)qword_1400B7720, v87);
  }
  if ( (v4 & 8) != 0 )
  {
    v29 = v72;
    v4 &= ~8u;
    if ( v72 )
    {
      if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
        if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
  }
  if ( (v4 & 4) != 0 )
  {
    v30 = v74;
    v4 &= ~4u;
    if ( v74 )
    {
      if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
      }
    }
  }
  v31 = a1[45];
  v32 = *(_QWORD *)(v31 + 8);
  if ( !v32 || *(_DWORD *)(v31 + 20) )
  {
    v35 = -1073741130;
    if ( *(_DWORD *)(v31 + 20) != 3 )
      v35 = -1073741661;
    v43 = L"m_mmioAccessor->WriteRegisterSafe(0x02160, fcrtlValue)";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOBYTE(v4) = v4 | 0x30;
      v53 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v85);
      v54 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v83);
      v55 = *(void **)(v53 + 16);
      v56 = &unk_1400D44E0;
      v66 = v35;
      v57 = &unk_1400D44E0;
      v65 = L"m_mmioAccessor->WriteRegisterSafe(0x02160, fcrtlValue)";
      v58 = *v54;
      if ( v55 )
        v57 = v55;
      v64 = (__int64)v57;
      LOBYTE(v57) = 2;
      if ( *(_QWORD *)(v58 + 16) )
        v56 = *(void **)(v58 + 16);
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        (_DWORD)v57,
        14,
        20,
        (__int64)&unk_1400D6CE0,
        (__int64)v56,
        v64,
        (__int64)v65,
        v66);
    }
    if ( (v4 & 0x20) != 0 )
    {
      v59 = v84;
      LOBYTE(v4) = v4 & 0xDF;
      if ( v84 )
      {
        if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
          if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
        }
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v60 = v86;
      if ( v86 )
      {
        if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
          if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
        }
      }
    }
    v52 = 159;
    goto LABEL_102;
  }
  *(_DWORD *)(v32 + 8544) = v11;
  _InterlockedOr(v62, 0);
  v33 = a1[45];
  v34 = *(_QWORD *)(v33 + 8);
  if ( !v34 || *(_DWORD *)(v33 + 20) )
  {
    v35 = -1073741130;
    if ( *(_DWORD *)(v33 + 20) != 3 )
      v35 = -1073741661;
    v43 = L"m_mmioAccessor->WriteRegisterSafe(0x02168, fcrthValue)";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOBYTE(v4) = v4 | 0xC0;
      v44 = &unk_1400D44E0;
      v45 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v81) + 16LL);
      if ( v45 )
        v44 = v45;
      v46 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v79);
      v66 = v35;
      v47 = &unk_1400D44E0;
      v65 = L"m_mmioAccessor->WriteRegisterSafe(0x02168, fcrthValue)";
      v64 = (__int64)v44;
      v48 = *(void **)(*(_QWORD *)v46 + 16LL);
      v49 = a1[22];
      if ( v48 )
        v47 = v48;
      v63 = (__int64)v47;
      LOBYTE(v47) = 2;
      sub_1400A5E80(*(_QWORD *)(v49 + 16), (_DWORD)v47, 14, 21, (__int64)&unk_1400D6CE0, v63, v64, (__int64)v65, v66);
    }
    if ( (v4 & 0x80u) != 0 )
    {
      v50 = v80;
      LOBYTE(v4) = v4 & 0x7F;
      if ( v80 )
      {
        if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
          if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
        }
      }
    }
    if ( (v4 & 0x40) != 0 )
    {
      v51 = v82;
      if ( v82 )
      {
        if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
          if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
        }
      }
    }
    v52 = 160;
LABEL_102:
    sub_1400143F0((int)a1, (__int64)v43, v52, 48, v35);
    goto LABEL_103;
  }
  *(_DWORD *)(v34 + 8552) = v87;
  _InterlockedOr(v62, 0);
  v35 = sub_140038468(a1, v88);
  if ( v35 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v4 |= 0x300u;
      v36 = &unk_1400D44E0;
      v37 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v77) + 16LL);
      if ( v37 )
        v36 = v37;
      v38 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v75);
      v66 = v35;
      LOBYTE(v39) = 2;
      v40 = *(void **)(*(_QWORD *)v38 + 16LL);
      if ( v40 )
        v12 = v40;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v39,
        14,
        22,
        (__int64)&unk_1400D6CE0,
        (__int64)v12,
        (__int64)v36,
        (__int64)L"SetFlowControlReceiveThresholdHighWaterMark(highWaterMark)",
        v66);
    }
    if ( (v4 & 0x200) != 0 )
    {
      v41 = v76;
      v4 &= ~0x200u;
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    if ( (v4 & 0x100) != 0 )
    {
      v42 = v78;
      if ( v78 )
      {
        if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    sub_140028E54((int)a1, (__int64)L"SetFlowControlReceiveThresholdHighWaterMark(highWaterMark)", 162, 48, v35);
  }
  else
  {
    v35 = 0;
  }
LABEL_103:
  if ( v6 )
  {
    sub_140005840(v6);
    ExFreePool(v6);
  }
  return v35;
}
