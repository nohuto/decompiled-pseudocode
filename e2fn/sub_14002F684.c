__int64 __fastcall sub_14002F684(__int64 a1)
{
  char v1; // r12
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  void *v9; // rsi
  void *v10; // rax
  __int64 v11; // rax
  void *v12; // rdx
  void *v13; // rax
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rdi
  unsigned int v16; // r14d
  __int64 v17; // rsi
  __int64 v18; // r14
  void *v19; // rax
  void *v20; // rcx
  void *v21; // rdx
  volatile signed __int32 *v22; // rdi
  volatile signed __int32 *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // r8
  __int64 v26; // rdx
  _DWORD *v27; // rcx
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rax
  void *v31; // r8
  void *v32; // rdx
  void *v33; // rax
  volatile signed __int32 *v34; // rdi
  volatile signed __int32 *v35; // rdi
  void *v36; // r14
  void *v37; // rsi
  void *v38; // rax
  __int64 v39; // rax
  int v40; // edx
  void *v41; // rax
  volatile signed __int32 *v42; // rdi
  volatile signed __int32 *v43; // rdi
  void *v44; // rcx
  __int64 v46; // [rsp+28h] [rbp-81h]
  __int64 v47; // [rsp+28h] [rbp-81h]
  __int64 v48; // [rsp+28h] [rbp-81h]
  char v49[8]; // [rsp+50h] [rbp-59h] BYREF
  volatile signed __int32 *v50; // [rsp+58h] [rbp-51h]
  char v51[8]; // [rsp+60h] [rbp-49h] BYREF
  volatile signed __int32 *v52; // [rsp+68h] [rbp-41h]
  char v53[8]; // [rsp+70h] [rbp-39h] BYREF
  volatile signed __int32 *v54; // [rsp+78h] [rbp-31h]
  char v55[8]; // [rsp+80h] [rbp-29h] BYREF
  volatile signed __int32 *v56; // [rsp+88h] [rbp-21h]
  char v57[8]; // [rsp+90h] [rbp-19h] BYREF
  volatile signed __int32 *v58; // [rsp+98h] [rbp-11h]
  char v59[8]; // [rsp+A0h] [rbp-9h] BYREF
  volatile signed __int32 *v60; // [rsp+A8h] [rbp-1h]
  char v61[8]; // [rsp+B0h] [rbp+7h] BYREF
  volatile signed __int32 *v62; // [rsp+B8h] [rbp+Fh]
  char v63[8]; // [rsp+C0h] [rbp+17h] BYREF
  volatile signed __int32 *v64; // [rsp+C8h] [rbp+1Fh]
  int v65; // [rsp+110h] [rbp+67h]
  __int64 *P; // [rsp+118h] [rbp+6Fh]

  v1 = 0;
  v2 = 0LL;
  P = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareWolPatterns::UpdateWakePacket", a1);
      if ( v5 )
        v2 = v5;
      P = v2;
    }
  }
  v6 = *(_QWORD *)(a1 + 464);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *(_DWORD *)(a1 + 512);
  if ( !v7 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v36 = &unk_1400D44E0;
      v37 = &unk_1400D44E0;
      v38 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v63)
                     + 16LL);
      if ( v38 )
        v37 = v38;
      v39 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v61);
      LOBYTE(v40) = 4;
      v41 = *(void **)(*(_QWORD *)v39 + 16LL);
      if ( v41 )
        v36 = v41;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v40,
        10,
        27,
        (__int64)&unk_1400D64E8,
        (__int64)v36,
        (__int64)v37,
        (__int64)qword_1400B7720);
      v1 = -64;
    }
    if ( v1 < 0 )
    {
      v42 = v62;
      v1 &= ~0x80u;
      if ( v62 )
      {
        if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    if ( (v1 & 0x40) != 0 )
    {
      v43 = v64;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
      }
    }
    v44 = *(void **)(a1 + 392);
    if ( v44 )
    {
      ExFreePool(v44);
      *(_QWORD *)(a1 + 392) = 0LL;
    }
    *(_QWORD *)(a1 + 400) = 0LL;
    *(_QWORD *)(a1 + 408) = 0LL;
    goto LABEL_94;
  }
  v8 = (v7 >> 2) + ((v7 & 3) != 0);
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v9 = &unk_1400D44E0;
    v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v51)
                   + 16LL);
    if ( v10 )
      v9 = v10;
    v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v49);
    v12 = &unk_1400D44E0;
    v13 = *(void **)(*(_QWORD *)v11 + 16LL);
    if ( v13 )
      v12 = v13;
    v46 = (__int64)v12;
    LOBYTE(v12) = 4;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      (_DWORD)v12,
      10,
      24,
      (__int64)&unk_1400D64E8,
      v46,
      (__int64)v9,
      (__int64)qword_1400B7720,
      v8);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v14 = v50;
    v1 &= ~2u;
    if ( v50 )
    {
      if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v15 = v52;
    v1 &= ~1u;
    if ( v52 )
    {
      if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 400) != v8 )
  {
    if ( !(unsigned int)sub_14002DF0C((_QWORD *)(a1 + 384), v8) )
      *(_QWORD *)(a1 + 400) = v8;
    if ( *(_QWORD *)(a1 + 400) != v8 )
    {
      v16 = -1073741801;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v1 |= 0xCu;
        v17 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v55);
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
        v19 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                      a1 + 56,
                                      v53)
                       + 16LL);
        v20 = &unk_1400D44E0;
        v21 = &unk_1400D44E0;
        if ( v19 )
          v21 = v19;
        if ( *(_QWORD *)(v17 + 16) )
          v20 = *(void **)(v17 + 16);
        v47 = (__int64)v21;
        LOBYTE(v21) = 2;
        sub_1400A5E80(
          v18,
          (_DWORD)v21,
          10,
          25,
          (__int64)&unk_1400D64E8,
          v47,
          (__int64)v20,
          (__int64)L"ResizeVector(m_wakePacket, wakePacketSizeInDwords)",
          23);
        v16 = -1073741801;
      }
      if ( (v1 & 8) != 0 )
      {
        v22 = v54;
        v1 &= ~8u;
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
      if ( (v1 & 4) != 0 )
      {
        v23 = v56;
        if ( v56 )
        {
          if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
            if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
          }
        }
      }
      sub_14000F3C4(a1, (__int64)L"ResizeVector(m_wakePacket, wakePacketSizeInDwords)", 202, 59, 0xC0000017);
      goto LABEL_95;
    }
  }
  v24 = 0LL;
  if ( !v8 )
  {
LABEL_94:
    v16 = 0;
    goto LABEL_95;
  }
  while ( 1 )
  {
    v25 = *(_QWORD *)(a1 + 432);
    v26 = *(_QWORD *)(v25 + 8);
    if ( !v26 || *(_DWORD *)(v25 + 20) )
      break;
    v65 = *(_DWORD *)((unsigned int)(4 * v24 + 47104) + v26);
    if ( v65 == -1 && *(_DWORD *)(*(_QWORD *)(v25 + 8) + 8LL) == -1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 8LL))(v25, 3LL);
      v16 = -1073741130;
      goto LABEL_58;
    }
    if ( (unsigned __int64)(unsigned int)v24 >= *(_QWORD *)(a1 + 400) )
      sub_140072758(59LL, 569LL, (unsigned int)v24, *(unsigned int *)(a1 + 400), 0);
    v27 = (_DWORD *)(*(_QWORD *)(a1 + 392) + 4 * v24);
    v24 = (unsigned int)(v24 + 1);
    *v27 = v65;
    if ( (unsigned int)v24 >= v8 )
      goto LABEL_94;
  }
  v28 = -1073741661;
  if ( *(_DWORD *)(v25 + 20) == 3 )
    v28 = -1073741130;
  v16 = v28;
LABEL_58:
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v1 |= 0x30u;
    v29 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v59);
    v30 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v57);
    v31 = &unk_1400D44E0;
    v32 = &unk_1400D44E0;
    v33 = *(void **)(*(_QWORD *)v30 + 16LL);
    if ( v33 )
      v32 = v33;
    if ( *(_QWORD *)(v29 + 16) )
      v31 = *(void **)(v29 + 16);
    v48 = (__int64)v32;
    LOBYTE(v32) = 2;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      (_DWORD)v32,
      10,
      26,
      (__int64)&unk_1400D64E8,
      v48,
      (__int64)v31,
      (__int64)L"m_mmioAccessor->ReadRegisterSafe(offset, packetPart)",
      v16);
  }
  if ( (v1 & 0x20) != 0 )
  {
    v34 = v58;
    v1 &= ~0x20u;
    if ( v58 )
    {
      if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
      }
    }
  }
  if ( (v1 & 0x10) != 0 )
  {
    v35 = v60;
    if ( v60 )
    {
      if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
        if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
      }
    }
  }
  sub_14000D660(a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(offset, packetPart)", 209, 59, v16);
LABEL_95:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
  if ( P )
  {
    sub_14000BFA4(P);
    ExFreePool(P);
  }
  return v16;
}
