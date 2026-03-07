__int64 __fastcall sub_140038468(_QWORD *a1, int a2)
{
  char v2; // di
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  unsigned int v11; // esi
  __int64 v12; // rax
  __int64 v13; // r8
  _DWORD *v14; // rcx
  void *v15; // r14
  void *v16; // rdi
  void *v17; // rax
  __int64 v18; // rax
  int v19; // edx
  void *v20; // rax
  volatile signed __int32 *v21; // r14
  volatile signed __int32 *v22; // rdi
  int v23; // eax
  void *v24; // r14
  void *v25; // rdi
  void *v26; // rax
  __int64 v27; // rax
  int v28; // edx
  void *v29; // rax
  volatile signed __int32 *v30; // r14
  volatile signed __int32 *v31; // rdi
  signed __int32 v33[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-88h]
  const wchar_t *v35; // [rsp+38h] [rbp-80h]
  unsigned int v36; // [rsp+40h] [rbp-78h]
  char v37[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v38; // [rsp+58h] [rbp-60h]
  char v39[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v40; // [rsp+68h] [rbp-50h]
  char v41[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v42; // [rsp+78h] [rbp-40h]
  char v43[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v44; // [rsp+88h] [rbp-30h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareFlowControl::SetFlowControlReceiveThresholdHighWaterMark",
             (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = a1[45];
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 || *(_DWORD *)(v8 + 20) )
  {
    v23 = -1073741661;
    if ( *(_DWORD *)(v8 + 20) == 3 )
      v23 = -1073741130;
    v11 = v23;
    goto LABEL_36;
  }
  v10 = *(_DWORD *)(v9 + 8560);
  if ( v10 == -1 && *(_DWORD *)(*(_QWORD *)(v8 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 3LL);
    v11 = -1073741130;
LABEL_36:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v24 = &unk_1400D44E0;
      v25 = &unk_1400D44E0;
      v26 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v43) + 16LL);
      if ( v26 )
        v25 = v26;
      v27 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v41);
      v36 = v11;
      v35 = L"m_mmioAccessor->ReadRegisterSafe(0x02170, fcrthValue)";
      LOBYTE(v28) = 2;
      v34 = (__int64)v25;
      v29 = *(void **)(*(_QWORD *)v27 + 16LL);
      if ( v29 )
        v24 = v29;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v28,
        14,
        16,
        (__int64)&unk_1400D6CE0,
        (__int64)v24,
        v34,
        (__int64)v35,
        v36);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v30 = v42;
      v2 &= ~2u;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v31 = v44;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
    }
    sub_14000D7AC((int)a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x02170, fcrthValue)", 128, 48, v11);
    goto LABEL_53;
  }
  v12 = a1[45];
  v13 = *(_QWORD *)(v12 + 8);
  v14 = (_DWORD *)(v12 + 20);
  if ( !v13 || *v14 )
  {
    v11 = -1073741130;
    if ( *v14 != 3 )
      v11 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v15 = &unk_1400D44E0;
      v16 = &unk_1400D44E0;
      v17 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v39) + 16LL);
      if ( v17 )
        v16 = v17;
      v18 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v37);
      v36 = v11;
      v35 = L"m_mmioAccessor->WriteRegisterSafe(0x02170, fcrthValue)";
      LOBYTE(v19) = 2;
      v34 = (__int64)v16;
      v20 = *(void **)(*(_QWORD *)v18 + 16LL);
      if ( v20 )
        v15 = v20;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v19,
        14,
        17,
        (__int64)&unk_1400D6CE0,
        (__int64)v15,
        v34,
        (__int64)v35,
        v36);
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v21 = v38;
      v2 &= ~8u;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v22 = v40;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    sub_1400143F0((int)a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x02170, fcrthValue)", 136, 48, v11);
  }
  else
  {
    *(_DWORD *)(v13 + 8560) = (a2 | v10) & 0x1FFFF;
    _InterlockedOr(v33, 0);
    v11 = 0;
  }
LABEL_53:
  if ( v4 )
  {
    sub_140005840(v4);
    ExFreePool(v4);
  }
  return v11;
}
