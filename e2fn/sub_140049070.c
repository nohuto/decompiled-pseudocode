__int64 __fastcall sub_140049070(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // r14d
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // esi
  unsigned int i; // ebx
  _BYTE *v16; // rax
  unsigned int v17; // edx
  int v18; // edi
  unsigned int j; // ebx
  _BYTE *v20; // rax
  unsigned int v21; // edx
  int v22; // eax
  void *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // edx
  void *v27; // rax
  volatile signed __int32 *v28; // r14
  volatile signed __int32 *v29; // rdi
  int v30; // eax
  void *v31; // r14
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // edx
  void *v35; // rax
  volatile signed __int32 *v36; // r14
  volatile signed __int32 *v37; // rdi
  _BYTE v39[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v40; // [rsp+58h] [rbp-60h]
  _BYTE v41[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v42; // [rsp+68h] [rbp-50h]
  _BYTE v43[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v44; // [rsp+78h] [rbp-40h]
  _BYTE v45[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v46; // [rsp+88h] [rbp-30h]

  LODWORD(v2) = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareMacAddress::ReadMacAddress", (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = a1[45];
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 || *(_DWORD *)(v8 + 20) )
  {
    v30 = -1073741661;
    if ( *(_DWORD *)(v8 + 20) == 3 )
      v30 = -1073741130;
    v11 = v30;
    goto LABEL_44;
  }
  v10 = *(_DWORD *)(v9 + 21508);
  if ( v10 == -1 && *(_DWORD *)(*(_QWORD *)(v8 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 3LL);
    v11 = -1073741130;
LABEL_44:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v31 = &unk_1400D44E0;
      v2 = (__int64)&unk_1400D44E0;
      v32 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v45) + 16LL);
      if ( v32 )
        v2 = v32;
      v33 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v43);
      LOBYTE(v34) = 2;
      v35 = *(void **)(*(_QWORD *)v33 + 16LL);
      if ( v35 )
        v31 = v35;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v34,
        14,
        15,
        (__int64)&unk_1400D72A0,
        (__int64)v31,
        v2,
        (__int64)L"m_mmioAccessor->ReadRegisterSafe((0x05404 + (0) * 8), rarHighValue)",
        v11);
      LOBYTE(v2) = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v36 = v44;
      LOBYTE(v2) = v2 & 0xFD;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
          if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v37 = v46;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    sub_14000A3FC(
      (int)a1,
      (__int64)L"m_mmioAccessor->ReadRegisterSafe((0x05404 + (0) * 8), rarHighValue)",
      141,
      158,
      v11);
    goto LABEL_61;
  }
  v12 = a1[45];
  v13 = *(_QWORD *)(v12 + 8);
  if ( !v13 || *(_DWORD *)(v12 + 20) )
  {
    v22 = -1073741661;
    if ( *(_DWORD *)(v12 + 20) == 3 )
      v22 = -1073741130;
    v11 = v22;
  }
  else
  {
    v14 = *(_DWORD *)(v13 + 21504);
    if ( v14 != -1 || *(_DWORD *)(*(_QWORD *)(v12 + 8) + 8LL) != -1 )
    {
      for ( i = 0; i < 0x20; i += 8 )
      {
        v16 = (_BYTE *)sub_140088C7C(a2, (unsigned int)v2);
        v17 = v14 >> i;
        LODWORD(v2) = v2 + 1;
        *v16 = v17;
      }
      v18 = 0;
      for ( j = 0; j < 0x10; j += 8 )
      {
        v20 = (_BYTE *)sub_140088C7C(a2, (unsigned int)(v18 + 4));
        v21 = v10 >> j;
        ++v18;
        *v20 = v21;
      }
      v11 = 0;
      goto LABEL_61;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 8LL))(v12, 3LL);
    v11 = -1073741130;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v23 = &unk_1400D44E0;
    v2 = (__int64)&unk_1400D44E0;
    v24 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v41) + 16LL);
    if ( v24 )
      v2 = v24;
    v25 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v39);
    LOBYTE(v26) = 2;
    v27 = *(void **)(*(_QWORD *)v25 + 16LL);
    if ( v27 )
      v23 = v27;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      v26,
      14,
      16,
      (__int64)&unk_1400D72A0,
      (__int64)v23,
      v2,
      (__int64)L"m_mmioAccessor->ReadRegisterSafe((0x05400 + (0) * 8), rarLowValue)",
      v11);
    LOBYTE(v2) = 12;
  }
  if ( (v2 & 8) != 0 )
  {
    v28 = v40;
    LOBYTE(v2) = v2 & 0xF7;
    if ( v40 )
    {
      if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
      }
    }
  }
  if ( (v2 & 4) != 0 )
  {
    v29 = v42;
    if ( v42 )
    {
      if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
        if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
  }
  sub_14000A2B0((int)a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe((0x05400 + (0) * 8), rarLowValue)", 142, 158, v11);
LABEL_61:
  if ( v4 )
  {
    sub_140005840(v4);
    ExFreePool(v4);
  }
  return v11;
}
