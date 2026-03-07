__int64 __fastcall sub_140042668(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // rax
  void *v9; // r13
  void *v10; // rdx
  void *v11; // rax
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rsi
  volatile signed __int32 *v14; // rdi
  void *v15; // r13
  void *v16; // rdi
  void *v17; // rax
  __int64 v18; // rax
  int v19; // edx
  void *v20; // rax
  volatile signed __int32 *v21; // rsi
  volatile signed __int32 *v22; // rdi
  void *v23; // r13
  void *v24; // rdi
  void *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  int v28; // edx
  void *v29; // rax
  volatile signed __int32 *v30; // rsi
  volatile signed __int32 *v31; // rdi
  int v32; // r8d
  const wchar_t *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // ebx
  _DWORD *v37; // rax
  int v38; // eax
  void *v39; // r13
  void *v40; // rdi
  void *v41; // rax
  __int64 v42; // rax
  int v43; // edx
  void *v44; // rax
  volatile signed __int32 *v45; // rsi
  volatile signed __int32 *v46; // rdi
  signed __int32 v48[8]; // [rsp+8h] [rbp-99h] BYREF
  __int64 v49; // [rsp+30h] [rbp-71h]
  __int64 v50; // [rsp+38h] [rbp-69h]
  const wchar_t *v51; // [rsp+40h] [rbp-61h]
  unsigned int v52; // [rsp+48h] [rbp-59h]
  char v53[8]; // [rsp+58h] [rbp-49h] BYREF
  volatile signed __int32 *v54; // [rsp+60h] [rbp-41h]
  char v55[8]; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v56; // [rsp+70h] [rbp-31h]
  char v57[8]; // [rsp+78h] [rbp-29h] BYREF
  volatile signed __int32 *v58; // [rsp+80h] [rbp-21h]
  char v59[8]; // [rsp+88h] [rbp-19h] BYREF
  volatile signed __int32 *v60; // [rsp+90h] [rbp-11h]
  char v61[8]; // [rsp+98h] [rbp-9h] BYREF
  volatile signed __int32 *v62; // [rsp+A0h] [rbp-1h]
  char v63[8]; // [rsp+A8h] [rbp+7h] BYREF
  volatile signed __int32 *v64; // [rsp+B0h] [rbp+Fh]
  char v65[8]; // [rsp+B8h] [rbp+17h] BYREF
  volatile signed __int32 *v66; // [rsp+C0h] [rbp+1Fh]
  char v67[8]; // [rsp+C8h] [rbp+27h] BYREF
  volatile signed __int32 *v68; // [rsp+D0h] [rbp+2Fh]
  int v69; // [rsp+110h] [rbp+6Fh] BYREF

  v1 = 0;
  v69 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwarePhy::ResetPhy", (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  LOBYTE(v69) = 0;
  v6 = sub_140041490(a1, (bool *)&v69);
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v55);
      v8 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v53);
      v52 = v6;
      v9 = &unk_1400D44E0;
      v51 = L"IsPhyResetBlocked(phyBlocked)";
      v10 = &unk_1400D44E0;
      v11 = *(void **)(*(_QWORD *)v8 + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = *(_QWORD *)(a1[22] + 16LL);
      if ( *(_QWORD *)(v7 + 16) )
        v9 = *(void **)(v7 + 16);
      v49 = (__int64)v10;
      LOBYTE(v10) = 2;
      sub_1400A5E80(v12, (_DWORD)v10, 14, 17, (__int64)&unk_1400D71E0, v49, (__int64)v9, (__int64)v51, v52);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v13 = v54;
      v1 &= ~2u;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v14 = v56;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    sub_1400088C0((int)a1, (__int64)L"IsPhyResetBlocked(phyBlocked)", 113, 156, v6);
    goto LABEL_93;
  }
  if ( !(_BYTE)v69 )
  {
    v6 = sub_14003E7A0((__int64)a1);
    if ( v6 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v23 = &unk_1400D44E0;
        v24 = &unk_1400D44E0;
        v25 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v61) + 16LL);
        if ( v25 )
          v24 = v25;
        v26 = *(_QWORD *)(a1[22] + 16LL);
        v27 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v63);
        v52 = v6;
        LOBYTE(v28) = 2;
        v29 = *(void **)(*(_QWORD *)v27 + 16LL);
        if ( v29 )
          v23 = v29;
        sub_1400A5E80(
          v26,
          v28,
          14,
          19,
          (__int64)&unk_1400D71E0,
          (__int64)v24,
          (__int64)v23,
          (__int64)L"AcquirePhyOwnership()",
          v52);
        v1 = 48;
      }
      if ( (v1 & 0x20) != 0 )
      {
        v30 = v62;
        v1 &= ~0x20u;
        if ( v62 )
        {
          if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
            if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
          }
        }
      }
      if ( (v1 & 0x10) != 0 )
      {
        v31 = v64;
        if ( v64 )
        {
          if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
            if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
      }
      v32 = 122;
      v33 = L"AcquirePhyOwnership()";
      goto LABEL_91;
    }
    v34 = a1[47];
    v35 = *(_QWORD *)(v34 + 8);
    if ( !v35 || *(_DWORD *)(v34 + 20) )
      goto LABEL_70;
    if ( *(_DWORD *)(v35 + 3604) == -1 && *(_DWORD *)(*(_QWORD *)(v34 + 8) + 8LL) == -1 )
      goto LABEL_64;
    v34 = a1[47];
    v37 = *(_DWORD **)(v34 + 8);
    if ( !v37 || *(_DWORD *)(v34 + 20) )
    {
LABEL_70:
      v38 = -1073741661;
      if ( *(_DWORD *)(v34 + 20) == 3 )
        v38 = -1073741130;
    }
    else
    {
      if ( *v37 == -1 && *(_DWORD *)(*(_QWORD *)(v34 + 8) + 8LL) == -1 )
      {
LABEL_64:
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 8LL))(v34, 3LL);
        v36 = -1073741130;
LABEL_73:
        v6 = sub_14004240C((__int64)a1);
        if ( !v6 )
        {
          v6 = v36;
          goto LABEL_93;
        }
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v39 = &unk_1400D44E0;
          v40 = &unk_1400D44E0;
          v41 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v67) + 16LL);
          if ( v41 )
            v40 = v41;
          v42 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v65);
          v52 = v6;
          v51 = L"ReleasePhyOwnership()";
          LOBYTE(v43) = 2;
          v50 = (__int64)v40;
          v44 = *(void **)(*(_QWORD *)v42 + 16LL);
          if ( v44 )
            v39 = v44;
          sub_1400A5E80(
            *(_QWORD *)(a1[22] + 16LL),
            v43,
            14,
            20,
            (__int64)&unk_1400D71E0,
            (__int64)v39,
            v50,
            (__int64)v51,
            v52);
          v1 = -64;
        }
        if ( v1 < 0 )
        {
          v45 = v66;
          v1 &= ~0x80u;
          if ( v66 )
          {
            if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
              if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
            }
          }
        }
        if ( (v1 & 0x40) != 0 )
        {
          v46 = v68;
          if ( v68 )
          {
            if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
              if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
            }
          }
        }
        v32 = 139;
        v33 = L"ReleasePhyOwnership()";
LABEL_91:
        sub_14003B824((int)a1, (__int64)v33, v32, 156, v6);
        goto LABEL_93;
      }
      **(_DWORD **)(v34 + 8) = *v37 | 0x80000000;
      _InterlockedOr(v48, 0);
      v38 = sub_140043ADC(a1);
    }
    v36 = v38;
    goto LABEL_73;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v15 = &unk_1400D44E0;
    v16 = &unk_1400D44E0;
    v17 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v59) + 16LL);
    if ( v17 )
      v16 = v17;
    v18 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v57);
    LOBYTE(v19) = 4;
    v20 = *(void **)(*(_QWORD *)v18 + 16LL);
    if ( v20 )
      v15 = v20;
    sub_1400A3320(
      *(_QWORD *)(a1[22] + 16LL),
      v19,
      14,
      18,
      (__int64)&unk_1400D71E0,
      (__int64)v15,
      (__int64)v16,
      (__int64)qword_1400B7720);
    v1 = 12;
  }
  if ( (v1 & 8) != 0 )
  {
    v21 = v58;
    v1 &= ~8u;
    if ( v58 )
    {
      if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
  }
  if ( (v1 & 4) != 0 )
  {
    v22 = v60;
    if ( v60 )
    {
      if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
  }
  v6 = 0;
LABEL_93:
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v6;
}
