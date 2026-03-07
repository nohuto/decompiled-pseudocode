__int64 __fastcall sub_14006F470(_QWORD *a1, __int64 a2)
{
  char v2; // si
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // r13
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  void *v12; // rdx
  void *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  unsigned int v16; // r14d
  void *v17; // rdi
  void *v18; // rax
  __int64 v19; // rax
  int v20; // edx
  void *v21; // rax
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  __int64 v25; // [rsp+28h] [rbp-90h]
  _BYTE v26[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v27; // [rsp+58h] [rbp-60h]
  _BYTE v28[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v29; // [rsp+68h] [rbp-50h]
  _BYTE v30[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v31; // [rsp+78h] [rbp-40h]
  _BYTE v32[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v33; // [rsp+88h] [rbp-30h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005B310(Pool2, (__int64)L"os_resources::PowerResource::AcquirePower", (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = &unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v9 = &unk_1400D44E0;
    v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v28) + 16LL);
    if ( v10 )
      v9 = v10;
    v11 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v26);
    v12 = &unk_1400D44E0;
    v13 = *(void **)(*(_QWORD *)v11 + 16LL);
    if ( v13 )
      v12 = v13;
    v25 = (__int64)v12;
    LOBYTE(v12) = 4;
    sub_1400A3320(
      *(_QWORD *)(a1[22] + 16LL),
      (_DWORD)v12,
      4,
      12,
      (__int64)&unk_1400D8F38,
      v25,
      (__int64)v9,
      (__int64)qword_1400B7720);
    v2 = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v14 = v27;
    v2 &= ~2u;
    if ( v27 )
    {
      if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v15 = v29;
    v2 &= ~1u;
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, const char *))(qword_1400DF678 + 3504))(
          qword_1400DF6A8,
          a2,
          0LL,
          0LL,
          78,
          "C:\\Sandbox\\1219361\\Sources\\OsAbstractions\\PowerResource.cpp");
  if ( v16 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v2 |= 0xCu;
      v17 = &unk_1400D44E0;
      v18 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v32) + 16LL);
      if ( v18 )
        v17 = v18;
      v19 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v30);
      LOBYTE(v20) = 2;
      v21 = *(void **)(*(_QWORD *)v19 + 16LL);
      if ( v21 )
        v8 = v21;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v20,
        4,
        13,
        (__int64)&unk_1400D8F38,
        (__int64)v8,
        (__int64)v17,
        (__int64)L"WdfDeviceStopIdleActual(device, false, 0, 78, \"C:\\\\Sandbox\\\\1219361\\\\Sources\\\\OsAbstractions\\"
                  "\\PowerResource.cpp\")",
        v16);
    }
    if ( (v2 & 8) != 0 )
    {
      v22 = v31;
      v2 &= ~8u;
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v23 = v33;
      if ( v33 )
      {
        if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    sub_14006ECE0(
      (int)a1,
      (__int64)L"WdfDeviceStopIdleActual(device, false, 0, 78, \"C:\\\\Sandbox\\\\1219361\\\\Sources\\\\OsAbstractions\\\\"
                "PowerResource.cpp\")",
      78,
      146,
      v16);
  }
  else
  {
    a1[46] = a2;
    v16 = 0;
  }
  if ( v4 )
  {
    sub_14005B5AC(v4);
    ExFreePool(v4);
  }
  return v16;
}
