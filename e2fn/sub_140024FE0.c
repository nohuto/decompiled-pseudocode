__int64 __fastcall sub_140024FE0(_QWORD *a1, unsigned __int16 a2)
{
  char v2; // r14
  __int64 *v4; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  unsigned int i; // edi
  unsigned int v9; // r15d
  __int64 v10; // rax
  void *v11; // r14
  void *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // edx
  void *v16; // rax
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rdi
  void *v19; // r14
  void *v20; // rdi
  void *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  void *v24; // rax
  volatile signed __int32 *v25; // rdi
  volatile signed __int32 *v26; // rdi
  int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // edx
  int v31; // ebx
  int v32; // eax
  __int64 v33; // rsi
  void *v34; // r14
  void *v35; // rdi
  void *v36; // rax
  __int64 v37; // rax
  int v38; // edx
  void *v39; // rax
  volatile signed __int32 *v40; // rdi
  volatile signed __int32 *v41; // rdi
  signed __int32 v43[8]; // [rsp+0h] [rbp-89h] BYREF
  __int64 v44; // [rsp+30h] [rbp-59h]
  const wchar_t *v45; // [rsp+38h] [rbp-51h]
  int v46; // [rsp+40h] [rbp-49h]
  char v47[8]; // [rsp+50h] [rbp-39h] BYREF
  volatile signed __int32 *v48; // [rsp+58h] [rbp-31h]
  char v49[8]; // [rsp+60h] [rbp-29h] BYREF
  volatile signed __int32 *v50; // [rsp+68h] [rbp-21h]
  char v51[8]; // [rsp+70h] [rbp-19h] BYREF
  volatile signed __int32 *v52; // [rsp+78h] [rbp-11h]
  char v53[8]; // [rsp+80h] [rbp-9h] BYREF
  volatile signed __int32 *v54; // [rsp+88h] [rbp-1h]
  char v55[8]; // [rsp+90h] [rbp+7h] BYREF
  volatile signed __int32 *v56; // [rsp+98h] [rbp+Fh]
  char v57[8]; // [rsp+A0h] [rbp+17h] BYREF
  volatile signed __int32 *v58; // [rsp+A8h] [rbp+1Fh]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::ReleaseOwnership",
             (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v7 )
        v4 = v7;
    }
  }
  if ( (dword_1400DF6E4 & 1) == 0 )
  {
    dword_1400DF6E4 |= 1u;
    dword_1400DF6E0 = a2 << 16;
  }
  for ( i = 0; i < 0xC8; ++i )
  {
    if ( !(unsigned int)sub_1400228E4(a1) )
    {
      v28 = a1[46];
      v29 = *(_QWORD *)(v28 + 8);
      if ( !v29 || *(_DWORD *)(v28 + 20) )
      {
        v32 = -1073741661;
        if ( *(_DWORD *)(v28 + 20) == 3 )
          v32 = -1073741130;
        v31 = v32;
      }
      else
      {
        v30 = *(_DWORD *)(v29 + 23388);
        if ( v30 == -1 && *(_DWORD *)(*(_QWORD *)(v28 + 8) + 8LL) == -1 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 8LL))(v28, 3LL);
          v31 = -1073741130;
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(v28 + 8) + 23388LL) = v30 & ~a2;
          _InterlockedOr(v43, 0);
          v31 = 0;
        }
      }
      v9 = sub_140024D24(a1);
      if ( !v9 )
      {
        v9 = v31;
        goto LABEL_75;
      }
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v33 = *(_QWORD *)(a1[23] + 16LL);
        v34 = &unk_1400D44E0;
        v35 = &unk_1400D44E0;
        v36 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 24LL))(a1 + 8, v55) + 16LL);
        if ( v36 )
          v35 = v36;
        v37 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 16LL))(a1 + 8, v57);
        v46 = v9;
        LOBYTE(v38) = 2;
        v39 = *(void **)(*(_QWORD *)v37 + 16LL);
        if ( v39 )
          v34 = v39;
        sub_1400A5E80(
          v33,
          v38,
          14,
          48,
          (__int64)&unk_1400D6110,
          (__int64)v35,
          (__int64)v34,
          (__int64)L"ReleaseFirmwareSemaphore()",
          v46);
        v2 = 3;
      }
      if ( (v2 & 2) != 0 )
      {
        v40 = v56;
        v2 &= ~2u;
        if ( v56 )
        {
          if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
            if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
          }
        }
      }
      if ( (v2 & 1) != 0 )
      {
        v41 = v58;
        if ( v58 )
        {
          if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
            if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
          }
        }
      }
      v27 = 622;
LABEL_46:
      sub_1400084DC((_DWORD)a1 + 8, (__int64)L"ReleaseFirmwareSemaphore()", v27, 45, v9);
      goto LABEL_75;
    }
    v9 = sub_140024D24(a1);
    if ( v9 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v19 = &unk_1400D44E0;
        v20 = &unk_1400D44E0;
        v21 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 16LL))(a1 + 8, v53) + 16LL);
        if ( v21 )
          v20 = v21;
        v22 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 24LL))(a1 + 8, v51);
        v46 = v9;
        v45 = L"ReleaseFirmwareSemaphore()";
        LOBYTE(v23) = 2;
        v44 = (__int64)v20;
        v24 = *(void **)(*(_QWORD *)v22 + 16LL);
        if ( v24 )
          v19 = v24;
        sub_1400A5E80(
          *(_QWORD *)(a1[23] + 16LL),
          v23,
          14,
          49,
          (__int64)&unk_1400D6110,
          (__int64)v19,
          v44,
          (__int64)v45,
          v46);
        v2 = 12;
      }
      if ( (v2 & 8) != 0 )
      {
        v25 = v52;
        v2 &= ~8u;
        if ( v52 )
        {
          if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
            if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v26 = v54;
        if ( v54 )
        {
          if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
            if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
      }
      v27 = 627;
      goto LABEL_46;
    }
    KeStallExecutionProcessor(5u);
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 24LL))(a1 + 8, v47);
    v11 = &unk_1400D44E0;
    v12 = &unk_1400D44E0;
    v13 = *(_QWORD *)(a1[23] + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)v10 + 16LL) )
      v12 = *(void **)(*(_QWORD *)v10 + 16LL);
    v14 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 16LL))(a1 + 8, v49);
    v46 = 1000;
    LOBYTE(v15) = 2;
    v16 = *(void **)(*(_QWORD *)v14 + 16LL);
    if ( v16 )
      v11 = v16;
    sub_1400A5E80(
      v13,
      v15,
      v9 + 14,
      v9 + 50,
      (__int64)&unk_1400D6110,
      (__int64)v12,
      (__int64)v11,
      (__int64)qword_1400B7720,
      v46);
    v2 = v9 + 48;
  }
  if ( (v2 & 0x20) != 0 )
  {
    v17 = v48;
    v2 &= ~0x20u;
    if ( v48 )
    {
      if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  if ( (v2 & 0x10) != 0 )
  {
    v18 = v50;
    if ( v50 )
    {
      if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  v9 = -1073741753;
LABEL_75:
  if ( v4 )
  {
    sub_140005840(v4);
    ExFreePool(v4);
  }
  return v9;
}
