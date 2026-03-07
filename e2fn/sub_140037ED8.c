__int64 __fastcall sub_140037ED8(_QWORD *a1, unsigned int a2)
{
  char v2; // di
  __int64 *v4; // r15
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // r8
  int *v9; // rax
  int v10; // ecx
  unsigned int v11; // esi
  void *v12; // r14
  void *v13; // rdi
  void *v14; // rax
  __int64 v15; // rax
  int v16; // edx
  void *v17; // rax
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rdi
  unsigned int v20; // ecx
  __int64 v21; // rax
  _DWORD *v22; // rdx
  void *v23; // r14
  void *v24; // rdi
  void *v25; // rax
  __int64 v26; // rax
  int v27; // edx
  void *v28; // rax
  volatile signed __int32 *v29; // r14
  volatile signed __int32 *v30; // rdi
  int v31; // eax
  void *v32; // r14
  void *v33; // rdi
  void *v34; // rax
  __int64 v35; // rax
  int v36; // edx
  void *v37; // rax
  volatile signed __int32 *v38; // r14
  volatile signed __int32 *v39; // rdi
  signed __int32 v41[8]; // [rsp+0h] [rbp-79h] BYREF
  unsigned int v42; // [rsp+40h] [rbp-39h]
  char v43[8]; // [rsp+50h] [rbp-29h] BYREF
  volatile signed __int32 *v44; // [rsp+58h] [rbp-21h]
  char v45[8]; // [rsp+60h] [rbp-19h] BYREF
  volatile signed __int32 *v46; // [rsp+68h] [rbp-11h]
  char v47[8]; // [rsp+70h] [rbp-9h] BYREF
  volatile signed __int32 *v48; // [rsp+78h] [rbp-1h]
  char v49[8]; // [rsp+80h] [rbp+7h] BYREF
  volatile signed __int32 *v50; // [rsp+88h] [rbp+Fh]
  char v51[8]; // [rsp+90h] [rbp+17h] BYREF
  volatile signed __int32 *v52; // [rsp+98h] [rbp+1Fh]
  char v53[8]; // [rsp+A0h] [rbp+27h] BYREF
  volatile signed __int32 *v54; // [rsp+A8h] [rbp+2Fh]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareFlowControl::SetFlowControl", (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = a1[45];
  v9 = *(int **)(v8 + 8);
  if ( !v9 || *(_DWORD *)(v8 + 20) )
  {
    v31 = -1073741661;
    if ( *(_DWORD *)(v8 + 20) == 3 )
      v31 = -1073741130;
    v11 = v31;
    goto LABEL_61;
  }
  v10 = *v9;
  if ( *v9 == -1 && *(_DWORD *)(*(_QWORD *)(v8 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v8 + 8LL))(a1[45], 3LL);
    v11 = -1073741130;
LABEL_61:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v32 = &unk_1400D44E0;
      v33 = &unk_1400D44E0;
      v34 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v53) + 16LL);
      if ( v34 )
        v33 = v34;
      v35 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v51);
      v42 = v11;
      LOBYTE(v36) = 2;
      v37 = *(void **)(*(_QWORD *)v35 + 16LL);
      if ( v37 )
        v32 = v37;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v36,
        14,
        40,
        (__int64)&unk_1400D6CE0,
        (__int64)v32,
        (__int64)v33,
        (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x00000, ctrlValue)",
        v42);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v38 = v52;
      v2 &= ~2u;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v39 = v54;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
          if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
        }
      }
    }
    sub_14000D660((int)a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x00000, ctrlValue)", 391, 48, v11);
    goto LABEL_78;
  }
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1u:
        v20 = v10 & 0xE7FFFFFF | 0x10000000;
        break;
      case 2u:
        v20 = v10 & 0xE7FFFFFF | 0x8000000;
        break;
      case 3u:
        v20 = v10 | 0x18000000;
        break;
      default:
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v12 = &unk_1400D44E0;
          v13 = &unk_1400D44E0;
          v14 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v45) + 16LL);
          if ( v14 )
            v13 = v14;
          v15 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v43);
          v42 = a2;
          LOBYTE(v16) = 2;
          v17 = *(void **)(*(_QWORD *)v15 + 16LL);
          if ( v17 )
            v12 = v17;
          sub_1400A5E80(
            *(_QWORD *)(a1[22] + 16LL),
            v16,
            14,
            41,
            (__int64)&unk_1400D6CE0,
            (__int64)v12,
            (__int64)v13,
            (__int64)qword_1400B7720,
            v42);
          v2 = 12;
        }
        if ( (v2 & 8) != 0 )
        {
          v18 = v44;
          v2 &= ~8u;
          if ( v44 )
          {
            if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
              if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
            }
          }
        }
        if ( (v2 & 4) != 0 )
        {
          v19 = v46;
          if ( v46 )
          {
            if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
              if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
            }
          }
        }
        v11 = -1073741823;
        goto LABEL_78;
    }
  }
  else
  {
    v20 = v10 & 0xE7FFFFFF;
  }
  v21 = a1[45];
  v22 = (_DWORD *)(v21 + 20);
  if ( !*(_QWORD *)(v21 + 8) || *v22 )
  {
    v11 = -1073741130;
    if ( *v22 != 3 )
      v11 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v23 = &unk_1400D44E0;
      v24 = &unk_1400D44E0;
      v25 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v49) + 16LL);
      if ( v25 )
        v24 = v25;
      v26 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v47);
      v42 = v11;
      LOBYTE(v27) = 2;
      v28 = *(void **)(*(_QWORD *)v26 + 16LL);
      if ( v28 )
        v23 = v28;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v27,
        14,
        42,
        (__int64)&unk_1400D6CE0,
        (__int64)v23,
        (__int64)v24,
        (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x00000, ctrlValue)",
        v42);
      v2 = 48;
    }
    if ( (v2 & 0x20) != 0 )
    {
      v29 = v48;
      v2 &= ~0x20u;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      v30 = v50;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    sub_14000D7AC((int)a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x00000, ctrlValue)", 413, 48, v11);
  }
  else
  {
    **(_DWORD **)(v21 + 8) = v20;
    _InterlockedOr(v41, 0);
    v11 = 0;
  }
LABEL_78:
  if ( v4 )
  {
    sub_140005840(v4);
    ExFreePool(v4);
  }
  return v11;
}
