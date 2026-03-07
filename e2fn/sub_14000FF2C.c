__int64 __fastcall sub_14000FF2C(_QWORD *a1, unsigned int a2)
{
  char v2; // bp
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // ebx
  int v11; // edx
  unsigned int v12; // esi
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  void *v17; // rbp
  void *v18; // rdi
  void *v19; // rax
  __int64 v20; // rax
  int v21; // edx
  void *v22; // rax
  volatile signed __int32 *v23; // rdi
  volatile signed __int32 *v24; // rdi
  int v25; // eax
  void *v26; // rbp
  void *v27; // rdi
  void *v28; // rax
  __int64 v29; // rax
  int v30; // edx
  void *v31; // rax
  volatile signed __int32 *v32; // rdi
  volatile signed __int32 *v33; // rdi
  signed __int32 v35[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+30h] [rbp-88h]
  const wchar_t *v37; // [rsp+38h] [rbp-80h]
  unsigned int v38; // [rsp+40h] [rbp-78h]
  char v39[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v40; // [rsp+58h] [rbp-60h]
  char v41[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v42; // [rsp+68h] [rbp-50h]
  char v43[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v44; // [rsp+78h] [rbp-40h]
  char v45[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v46; // [rsp+88h] [rbp-30h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareReceiveScaling::EnableMultipleReceiveQueues",
             (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = a1[59];
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 || *(_DWORD *)(v8 + 20) )
  {
    v25 = -1073741661;
    if ( *(_DWORD *)(v8 + 20) == 3 )
      v25 = -1073741130;
    v12 = v25;
    goto LABEL_47;
  }
  v10 = *(_DWORD *)(v9 + 22552);
  v11 = -1;
  if ( v10 == -1 && *(_DWORD *)(*(_QWORD *)(v8 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 3LL);
    v12 = -1073741130;
LABEL_47:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v26 = &unk_1400D44E0;
      v27 = &unk_1400D44E0;
      v28 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v45) + 16LL);
      if ( v28 )
        v27 = v28;
      v29 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v43);
      v38 = v12;
      v37 = L"m_mmioAccessor->ReadRegisterSafe(0x05818, multipleReceiveControlValue)";
      LOBYTE(v30) = 2;
      v36 = (__int64)v27;
      v31 = *(void **)(*(_QWORD *)v29 + 16LL);
      if ( v31 )
        v26 = v31;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v30,
        10,
        19,
        (__int64)&unk_1400D5028,
        (__int64)v26,
        v36,
        (__int64)v37,
        v38);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v32 = v44;
      v2 &= ~2u;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
          if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v33 = v46;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
          if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
        }
      }
    }
    sub_14000F510(
      (int)a1,
      (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x05818, multipleReceiveControlValue)",
      148,
      54,
      v12);
    goto LABEL_64;
  }
  v13 = v10 & 0xFFF8 | 2;
  if ( (a2 & 1) != 0 )
  {
    v13 |= (((a2 >> 4) & 1) + 2) << 16;
    if ( (a2 & 0x20) != 0 )
      v13 |= 0x400000u;
  }
  if ( (a2 & 4) != 0 )
  {
    v13 |= (((a2 >> 4) & 1) << 21) + 0x100000;
    if ( (a2 & 0x20) != 0 )
      v13 |= 0x800000u;
  }
  if ( (a2 & 8) != 0 )
  {
    v13 |= (((a2 >> 4) & 1) + 2) << 18;
    if ( (a2 & 0x20) != 0 )
      v13 |= 0x1000000u;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    LOBYTE(v11) = 4;
    sub_1400A69B8(*(_QWORD *)(*((_QWORD *)P + 1) + 16LL), v11, 10, 20, (__int64)&unk_1400D5028, v13);
  }
  v14 = a1[59];
  v15 = *(_QWORD *)(v14 + 8);
  v16 = (_DWORD *)(v14 + 20);
  if ( !v15 || *v16 )
  {
    v12 = -1073741130;
    if ( *v16 != 3 )
      v12 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v17 = &unk_1400D44E0;
      v18 = &unk_1400D44E0;
      v19 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v39) + 16LL);
      if ( v19 )
        v18 = v19;
      v20 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v41);
      v38 = v12;
      LOBYTE(v21) = 2;
      v22 = *(void **)(*(_QWORD *)v20 + 16LL);
      if ( v22 )
        v17 = v22;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v21,
        10,
        21,
        (__int64)&unk_1400D5028,
        (__int64)v18,
        (__int64)v17,
        (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x05818, multipleReceiveControlValue)",
        v38);
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v23 = v40;
      v2 &= ~8u;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v24 = v42;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    sub_14000F65C(
      (int)a1,
      (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x05818, multipleReceiveControlValue)",
      196,
      54,
      v12);
  }
  else
  {
    *(_DWORD *)(v15 + 22552) = v13;
    _InterlockedOr(v35, 0);
    v12 = 0;
  }
LABEL_64:
  if ( v4 )
  {
    sub_14000BFA4(v4);
    ExFreePool(v4);
  }
  return v12;
}
