__int64 __fastcall sub_140023060(_QWORD *a1, unsigned __int16 a2)
{
  char v2; // r15
  __int64 *v3; // rsi
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  int v8; // edi
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // edx
  unsigned int v13; // r12d
  __int64 v14; // rdi
  __int64 v15; // rax
  void *v16; // r8
  void *v17; // rdx
  void *v18; // rax
  __int64 v19; // rcx
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r8d
  int v25; // ebx
  int v26; // eax
  void *v27; // rdi
  void *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  void *v31; // rdx
  void *v32; // rax
  volatile signed __int32 *v33; // rbx
  volatile signed __int32 *v34; // rbx
  void *v35; // rdi
  void *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  int v39; // edx
  void *v40; // rax
  void *v41; // rcx
  volatile signed __int32 *v42; // rbx
  volatile signed __int32 *v43; // rbx
  __int64 v44; // rbx
  __int64 *v45; // rax
  void *v46; // rcx
  void *v47; // r8
  void *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  volatile signed __int32 *v51; // rbx
  volatile signed __int32 *v52; // rbx
  signed __int32 v54[8]; // [rsp+0h] [rbp-A9h] BYREF
  __int64 v55; // [rsp+28h] [rbp-81h]
  __int64 v56; // [rsp+30h] [rbp-79h]
  const wchar_t *v57; // [rsp+38h] [rbp-71h]
  int v58; // [rsp+40h] [rbp-69h]
  char v59[8]; // [rsp+50h] [rbp-59h] BYREF
  volatile signed __int32 *v60; // [rsp+58h] [rbp-51h]
  char v61[8]; // [rsp+60h] [rbp-49h] BYREF
  volatile signed __int32 *v62; // [rsp+68h] [rbp-41h]
  char v63[8]; // [rsp+70h] [rbp-39h] BYREF
  volatile signed __int32 *v64; // [rsp+78h] [rbp-31h]
  char v65[8]; // [rsp+80h] [rbp-29h] BYREF
  volatile signed __int32 *v66; // [rsp+88h] [rbp-21h]
  char v67[8]; // [rsp+90h] [rbp-19h] BYREF
  volatile signed __int32 *v68; // [rsp+98h] [rbp-11h]
  char v69[8]; // [rsp+A0h] [rbp-9h] BYREF
  volatile signed __int32 *v70; // [rsp+A8h] [rbp-1h]
  char v71[8]; // [rsp+B0h] [rbp+7h] BYREF
  volatile signed __int32 *v72; // [rsp+B8h] [rbp+Fh]
  char v73[8]; // [rsp+C0h] [rbp+17h] BYREF
  volatile signed __int32 *v74; // [rsp+C8h] [rbp+1Fh]
  __int64 *v76; // [rsp+120h] [rbp+77h]

  v2 = 0;
  v3 = 0LL;
  v76 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::AcquireOwnership",
             (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v7 )
        v3 = v7;
      v76 = v3;
    }
  }
  v8 = a2 << 16;
  v9 = 0;
  while ( 1 )
  {
    if ( !(unsigned int)sub_1400228E4(a1) )
    {
      v10 = a1[46];
      v11 = *(_QWORD *)(v10 + 8);
      if ( v11 )
      {
        if ( !*(_DWORD *)(v10 + 20) )
        {
          v12 = *(_DWORD *)(v11 + 23388);
          if ( v12 == -1 && *(_DWORD *)(*(_QWORD *)(v10 + 8) + 8LL) == -1 )
          {
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 3LL);
            goto LABEL_15;
          }
          if ( (v12 & v8) == 0 )
            break;
        }
      }
    }
LABEL_15:
    v13 = sub_140024D24(a1);
    if ( v13 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v44 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 24LL))(a1 + 8, v71);
        v45 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 16LL))(a1 + 8, v73);
        v46 = *(void **)(v44 + 16);
        v47 = &unk_1400D44E0;
        v58 = v13;
        v48 = &unk_1400D44E0;
        v49 = *v45;
        if ( v46 )
          v48 = v46;
        v57 = L"ReleaseFirmwareSemaphore()";
        if ( *(_QWORD *)(v49 + 16) )
          v47 = *(void **)(v49 + 16);
        v50 = a1[23];
        v55 = (__int64)v48;
        LOBYTE(v48) = 2;
        sub_1400A5E80(
          *(_QWORD *)(v50 + 16),
          (_DWORD)v48,
          14,
          46,
          (__int64)&unk_1400D6110,
          v55,
          (__int64)v47,
          (__int64)v57,
          v58);
        v2 = 48;
      }
      if ( (v2 & 0x20) != 0 )
      {
        v51 = v72;
        v2 &= ~0x20u;
        if ( v72 )
        {
          if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
            if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
          }
        }
      }
      if ( (v2 & 0x10) != 0 )
      {
        v52 = v74;
        if ( v74 )
        {
          if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
            if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
          }
        }
      }
      sub_1400084DC((_DWORD)a1 + 8, (__int64)L"ReleaseFirmwareSemaphore()", 595, 45, v13);
      goto LABEL_98;
    }
    KeStallExecutionProcessor(5u);
    if ( (unsigned int)++v9 >= 0xC8 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v14 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 24LL))(a1 + 8, v67);
        v15 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 16LL))(a1 + 8, v69);
        v58 = 1000;
        v16 = &unk_1400D44E0;
        v17 = &unk_1400D44E0;
        v18 = *(void **)(*(_QWORD *)v15 + 16LL);
        if ( v18 )
          v17 = v18;
        v19 = *(_QWORD *)(a1[23] + 16LL);
        if ( *(_QWORD *)(v14 + 16) )
          v16 = *(void **)(v14 + 16);
        v56 = (__int64)v17;
        LOBYTE(v17) = 2;
        sub_1400A5E80(
          v19,
          (_DWORD)v17,
          v13 + 14,
          v13 + 47,
          (__int64)&unk_1400D6110,
          (__int64)v16,
          v56,
          (__int64)qword_1400B7720,
          v58);
        v2 = -64;
      }
      if ( v2 < 0 )
      {
        v20 = v68;
        v2 &= ~0x80u;
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
      if ( (v2 & 0x40) != 0 )
      {
        v21 = v70;
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
      v13 = -1073741212;
      goto LABEL_98;
    }
  }
  if ( ((unsigned __int16)v12 & a2) != 0 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v27 = &unk_1400D44E0;
      v28 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 16LL))(a1 + 8, v61) + 16LL);
      if ( v28 )
        v27 = v28;
      v29 = *(_QWORD *)(a1[23] + 16LL);
      v30 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 24LL))(a1 + 8, v59);
      v58 = a2;
      v31 = &unk_1400D44E0;
      v32 = *(void **)(*(_QWORD *)v30 + 16LL);
      if ( v32 )
        v31 = v32;
      v55 = (__int64)v31;
      LOBYTE(v31) = 3;
      sub_1400A5E80(v29, (_DWORD)v31, 14, 44, (__int64)&unk_1400D6110, v55, (__int64)v27, (__int64)qword_1400B7720, v58);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v33 = v60;
      v2 &= ~2u;
      if ( v60 )
      {
        if ( !_InterlockedDecrement(v60 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
          if ( !_InterlockedDecrement(v33 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v34 = v62;
      v2 &= ~1u;
      if ( v62 )
      {
        if ( !_InterlockedDecrement(v62 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( !_InterlockedDecrement(v34 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
    goto LABEL_60;
  }
  v22 = a1[46];
  v23 = *(_QWORD *)(v22 + 8);
  if ( !v23 || *(_DWORD *)(v22 + 20) )
  {
    v26 = -1073741661;
    if ( *(_DWORD *)(v22 + 20) == 3 )
      v26 = -1073741130;
    v25 = v26;
    goto LABEL_61;
  }
  v24 = *(_DWORD *)(v23 + 23388);
  if ( v24 != -1 || *(_DWORD *)(*(_QWORD *)(v22 + 8) + 8LL) != -1 )
  {
    *(_DWORD *)(*(_QWORD *)(v22 + 8) + 23388LL) = a2 | v24;
    _InterlockedOr(v54, 0);
LABEL_60:
    v25 = 0;
    goto LABEL_61;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 8LL))(v22, 3LL);
  v25 = -1073741130;
LABEL_61:
  v13 = sub_140024D24(a1);
  if ( v13 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v2 |= 0xCu;
      v35 = &unk_1400D44E0;
      v36 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 16LL))(a1 + 8, v65) + 16LL);
      if ( v36 )
        v35 = v36;
      v37 = *(_QWORD *)(a1[23] + 16LL);
      v38 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 24LL))(a1 + 8, v63);
      v58 = v13;
      LOBYTE(v39) = 2;
      v40 = *(void **)(*(_QWORD *)v38 + 16LL);
      v41 = &unk_1400D44E0;
      if ( v40 )
        v41 = v40;
      sub_1400A5E80(
        v37,
        v39,
        14,
        45,
        (__int64)&unk_1400D6110,
        (__int64)v41,
        (__int64)v35,
        (__int64)L"ReleaseFirmwareSemaphore()",
        v58);
    }
    if ( (v2 & 8) != 0 )
    {
      v42 = v64;
      v2 &= ~8u;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v43 = v66;
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
      }
    }
    sub_1400084DC((_DWORD)a1 + 8, (__int64)L"ReleaseFirmwareSemaphore()", 589, 45, v13);
  }
  else
  {
    v13 = v25;
  }
  v3 = v76;
LABEL_98:
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v13;
}
