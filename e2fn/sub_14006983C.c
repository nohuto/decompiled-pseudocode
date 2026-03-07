__int64 __fastcall sub_14006983C(__int64 a1, int a2, unsigned __int8 a3)
{
  char v3; // si
  int v4; // ebx
  __int64 *v6; // r15
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // r12d
  void *v12; // rsi
  void *v13; // rdi
  void *v14; // rax
  void *v15; // rax
  int v16; // edx
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rdi
  void *v19; // rsi
  void *v20; // rdi
  void *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  void *v24; // rax
  volatile signed __int32 *v25; // rdi
  volatile signed __int32 *v26; // rdi
  _BYTE *v27; // r14
  __int64 v29; // [rsp+28h] [rbp-81h]
  _BYTE v30[8]; // [rsp+58h] [rbp-51h] BYREF
  volatile signed __int32 *v31; // [rsp+60h] [rbp-49h]
  _BYTE v32[8]; // [rsp+68h] [rbp-41h] BYREF
  volatile signed __int32 *v33; // [rsp+70h] [rbp-39h]
  _BYTE v34[8]; // [rsp+78h] [rbp-31h] BYREF
  volatile signed __int32 *v35; // [rsp+80h] [rbp-29h]
  _BYTE v36[8]; // [rsp+88h] [rbp-21h] BYREF
  volatile signed __int32 *v37; // [rsp+90h] [rbp-19h]
  _DWORD v38[10]; // [rsp+98h] [rbp-11h] BYREF

  v3 = 0;
  v4 = a3;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14005B310(Pool2, (__int64)L"os_resources::SystemPower::AssignS0IdleSettings", a1);
      if ( v9 )
        v6 = v9;
    }
  }
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x10 )
      v38[0] = -1;
    else
      v38[0] = stru_1400DF410.Queue.ListEntry.Flink[8].Flink;
  }
  else
  {
    v38[0] = 36;
  }
  v10 = *(_QWORD *)(a1 + 632);
  v38[4] = 2;
  v38[5] = 2;
  v38[6] = 2;
  v38[1] = 2;
  v38[7] = 2;
  v38[8] = v4 ^ 1;
  v38[2] = 5;
  v38[3] = a2;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(qword_1400DF678 + 368))(qword_1400DF6A8, v10, v38);
  if ( v11 == -1073741101 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = &unk_1400D44E0;
      v13 = &unk_1400D44E0;
      v14 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v32)
                     + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                    a1 + 56,
                                    v30)
                     + 16LL);
      if ( v15 )
        v12 = v15;
      v29 = (__int64)v12;
      v3 = 3;
      LOBYTE(v16) = 3;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v16,
        4,
        13,
        (__int64)&unk_1400D8AB8,
        v29,
        (__int64)v13,
        (__int64)qword_1400B7720,
        v11);
    }
    if ( (v3 & 2) != 0 )
    {
      v17 = v31;
      v3 &= ~2u;
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v18 = v33;
      if ( v33 )
      {
        if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( L"Not supported by platform" != *(wchar_t **)(a1 + 472) )
      sub_1400011A8((_QWORD *)(a1 + 456), (__int64)L"Not supported by platform", 0x19uLL);
    v11 = 0;
LABEL_50:
    v27 = (_BYTE *)(a1 + 448);
    goto LABEL_54;
  }
  if ( v11 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v19 = &unk_1400D44E0;
      v20 = &unk_1400D44E0;
      v21 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v36)
                     + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v34);
      LOBYTE(v23) = 2;
      v24 = *(void **)(*(_QWORD *)v22 + 16LL);
      if ( v24 )
        v19 = v24;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v23,
        4,
        14,
        (__int64)&unk_1400D8AB8,
        (__int64)v19,
        (__int64)v20,
        (__int64)qword_1400B7720,
        v11);
      v3 = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v25 = v35;
      v3 &= ~8u;
      if ( v35 )
      {
        if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v26 = v37;
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    if ( L"Configuration error" != *(wchar_t **)(a1 + 472) )
      sub_1400011A8((_QWORD *)(a1 + 456), (__int64)L"Configuration error", 0x13uLL);
    goto LABEL_50;
  }
  if ( L"Enabled" != *(wchar_t **)(a1 + 472) )
    sub_1400011A8((_QWORD *)(a1 + 456), (__int64)L"Enabled", 7uLL);
  v27 = (_BYTE *)(a1 + 448);
  v11 = 0;
LABEL_54:
  *v27 = 1;
  if ( v6 )
  {
    sub_14005B5AC(v6);
    ExFreePool(v6);
  }
  return v11;
}
