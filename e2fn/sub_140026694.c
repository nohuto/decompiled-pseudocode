__int64 __fastcall sub_140026694(_QWORD *a1, _DWORD *a2, unsigned int a3)
{
  char v3; // di
  __int64 *v5; // r15
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  unsigned int v10; // r14d
  const wchar_t *v11; // r12
  void *v12; // rsi
  void *v13; // rdi
  void *v14; // rax
  __int64 v15; // rax
  int v16; // edx
  void *v17; // rax
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rdi
  int v20; // r8d
  unsigned int v21; // ebx
  void *v22; // rsi
  void *v23; // rdi
  void *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  void *v27; // rax
  volatile signed __int32 *v28; // rsi
  volatile signed __int32 *v29; // rdi
  _BYTE v31[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v32; // [rsp+58h] [rbp-60h]
  _BYTE v33[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v34; // [rsp+68h] [rbp-50h]
  _BYTE v35[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v36; // [rsp+78h] [rbp-40h]
  _BYTE v37[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v38; // [rsp+88h] [rbp-30h]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::SendHostInterfaceCommand",
             (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v9 )
        v5 = v9;
    }
  }
  v10 = sub_1400228E4(a1);
  if ( v10 )
  {
    v11 = L"AcquireFirmwareSemaphore()";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = &unk_1400D44E0;
      v13 = &unk_1400D44E0;
      v14 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 16LL))(a1 + 8, v33) + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 24LL))(a1 + 8, v31);
      LOBYTE(v16) = 2;
      v17 = *(void **)(*(_QWORD *)v15 + 16LL);
      if ( v17 )
        v12 = v17;
      sub_1400A5E80(
        *(_QWORD *)(a1[23] + 16LL),
        v16,
        14,
        51,
        (__int64)&unk_1400D6110,
        (__int64)v12,
        (__int64)v13,
        (__int64)L"AcquireFirmwareSemaphore()",
        v10);
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v18 = v32;
      v3 &= ~2u;
      if ( v32 )
      {
        if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v19 = v34;
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    v20 = 643;
LABEL_45:
    sub_1400084DC((_DWORD)a1 + 8, (__int64)v11, v20, 45, v10);
    goto LABEL_47;
  }
  v21 = sub_140027B2C(a1, a2, a3);
  if ( !v21 )
  {
    v21 = sub_140027148(a1);
    if ( !v21 )
      v21 = sub_1400247B8(a1, a2, a3);
  }
  v10 = sub_140024D24(a1);
  if ( v10 )
  {
    v11 = L"ReleaseFirmwareSemaphore()";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v22 = &unk_1400D44E0;
      v23 = &unk_1400D44E0;
      v24 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 16LL))(a1 + 8, v37) + 16LL);
      if ( v24 )
        v23 = v24;
      v25 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 24LL))(a1 + 8, v35);
      LOBYTE(v26) = 2;
      v27 = *(void **)(*(_QWORD *)v25 + 16LL);
      if ( v27 )
        v22 = v27;
      sub_1400A5E80(
        *(_QWORD *)(a1[23] + 16LL),
        v26,
        14,
        52,
        (__int64)&unk_1400D6110,
        (__int64)v22,
        (__int64)v23,
        (__int64)L"ReleaseFirmwareSemaphore()",
        v10);
      v3 = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v28 = v36;
      v3 &= ~8u;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v29 = v38;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    v20 = 657;
    goto LABEL_45;
  }
  v10 = v21;
LABEL_47:
  if ( v5 )
  {
    sub_140005840(v5);
    ExFreePool(v5);
  }
  return v10;
}
