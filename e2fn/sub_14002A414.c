__int64 __fastcall sub_14002A414(_QWORD *a1, _DWORD *a2)
{
  char v4; // di
  __int64 *v5; // r15
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  unsigned int v11; // r14d
  unsigned __int8 v12; // r14
  void *v13; // rsi
  void *v14; // rdi
  void *v15; // rax
  __int64 v16; // rax
  int v17; // edx
  void *v18; // rax
  volatile signed __int32 *v19; // rsi
  volatile signed __int32 *v20; // rdi
  void *v21; // rsi
  void *v22; // rdi
  void *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  volatile signed __int32 *v27; // rsi
  volatile signed __int32 *v28; // rdi
  int v29; // eax
  int v30; // eax
  void *v31; // rsi
  void *v32; // rdi
  void *v33; // rax
  __int64 v34; // rax
  int v35; // edx
  void *v36; // rax
  volatile signed __int32 *v37; // rsi
  volatile signed __int32 *v38; // rdi
  _BYTE v40[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v41; // [rsp+60h] [rbp-21h]
  _BYTE v42[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v43; // [rsp+70h] [rbp-11h]
  _BYTE v44[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v45; // [rsp+80h] [rbp-1h]
  _BYTE v46[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v47; // [rsp+90h] [rbp+Fh]
  _BYTE v48[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v49; // [rsp+A0h] [rbp+1Fh]
  _BYTE v50[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v51; // [rsp+B0h] [rbp+2Fh]

  v4 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareArpOffload::GetFreeIp4atIndex", (__int64)a1);
      if ( v7 )
        v5 = v7;
    }
  }
  v8 = a1[46];
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 || *(_DWORD *)(v8 + 20) )
  {
    v30 = -1073741661;
    if ( *(_DWORD *)(v8 + 20) == 3 )
      v30 = -1073741130;
    v11 = v30;
    goto LABEL_52;
  }
  v10 = *(_DWORD *)(v9 + 22584);
  if ( v10 == -1 && *(_DWORD *)(*(_QWORD *)(v8 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 3LL);
    v11 = -1073741130;
LABEL_52:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v31 = &unk_1400D44E0;
      v32 = &unk_1400D44E0;
      v33 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v50) + 16LL);
      if ( v33 )
        v32 = v33;
      v34 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v48);
      LOBYTE(v35) = 2;
      v36 = *(void **)(*(_QWORD *)v34 + 16LL);
      if ( v36 )
        v31 = v36;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v35,
        10,
        26,
        (__int64)&unk_1400D6318,
        (__int64)v31,
        (__int64)v32,
        (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x05838, ipavValue)",
        v11);
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v37 = v49;
      v4 &= ~2u;
      if ( v49 )
      {
        if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v38 = v51;
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    sub_14000D660((int)a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x05838, ipavValue)", 175, 47, v11);
    goto LABEL_69;
  }
  v12 = 0;
  while ( _bittest(&v10, v12) )
  {
    if ( ++v12 >= 4u )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v13 = &unk_1400D44E0;
        v14 = &unk_1400D44E0;
        v15 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v42) + 16LL);
        if ( v15 )
          v14 = v15;
        v16 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v40);
        LOBYTE(v17) = 3;
        v18 = *(void **)(*(_QWORD *)v16 + 16LL);
        if ( v18 )
          v13 = v18;
        sub_1400A3320(
          *(_QWORD *)(a1[22] + 16LL),
          v17,
          10,
          28,
          (__int64)&unk_1400D6318,
          (__int64)v13,
          (__int64)v14,
          (__int64)qword_1400B7720);
        v4 = 48;
      }
      if ( (v4 & 0x20) != 0 )
      {
        v19 = v41;
        v4 &= ~0x20u;
        if ( v41 )
        {
          if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      if ( (v4 & 0x10) != 0 )
      {
        v20 = v43;
        if ( v43 )
        {
          if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
      }
      v11 = -1073741823;
      goto LABEL_69;
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 && LOWORD(DeviceObject->DeviceType) )
  {
    v21 = &unk_1400D44E0;
    v22 = &unk_1400D44E0;
    v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v46) + 16LL);
    if ( v23 )
      v22 = v23;
    v24 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v44);
    LOBYTE(v25) = 5;
    v26 = *(void **)(*(_QWORD *)v24 + 16LL);
    if ( v26 )
      v21 = v26;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      v25,
      10,
      27,
      (__int64)&unk_1400D6318,
      (__int64)v21,
      (__int64)v22,
      (__int64)qword_1400B7720,
      v12);
    v4 = 12;
  }
  if ( (v4 & 8) != 0 )
  {
    v27 = v45;
    v4 &= ~8u;
    if ( v45 )
    {
      if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
  }
  if ( (v4 & 4) != 0 )
  {
    v28 = v47;
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
      }
    }
  }
  v29 = v12;
  v11 = 0;
  *a2 = v29;
LABEL_69:
  if ( v5 )
  {
    sub_14000BFA4(v5);
    ExFreePool(v5);
  }
  return v11;
}
