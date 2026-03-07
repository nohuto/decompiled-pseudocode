__int64 __fastcall sub_140021224(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  char v6; // di
  __int64 *v7; // rsi
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  unsigned int v10; // r13d
  void *v11; // r14
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  void *v16; // rax
  volatile signed __int32 *v17; // r14
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v19; // rdi
  volatile signed __int32 *v20; // rdi
  void *v22; // r14
  void *v23; // rdi
  void *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  void *v27; // rax
  volatile signed __int32 *v28; // r14
  volatile signed __int32 *v29; // rdi
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  volatile signed __int32 *v35; // rdi
  volatile signed __int32 *v36; // rdi
  _QWORD v37[2]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v38[8]; // [rsp+60h] [rbp-68h] BYREF
  volatile signed __int32 *v39; // [rsp+68h] [rbp-60h]
  _BYTE v40[8]; // [rsp+70h] [rbp-58h] BYREF
  volatile signed __int32 *v41; // [rsp+78h] [rbp-50h]
  _BYTE v42[8]; // [rsp+80h] [rbp-48h] BYREF
  volatile signed __int32 *v43; // [rsp+88h] [rbp-40h]
  _BYTE v44[8]; // [rsp+90h] [rbp-38h] BYREF
  volatile signed __int32 *v45; // [rsp+98h] [rbp-30h]

  v6 = 0;
  v7 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14000BBDC(Pool2, (__int64)L"e1000_hardware::E1000HardwareReceiveGate::Bind", (__int64)a1);
      if ( v9 )
        v7 = v9;
    }
  }
  v37[1] = a2[1];
  v37[0] = *a2;
  a2[1] = 0LL;
  *a2 = 0LL;
  v10 = sub_140087364(a1, v37);
  if ( v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = &unk_1400D44E0;
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v40) + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v38);
      LOBYTE(v15) = 2;
      v16 = *(void **)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v11 = v16;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v15,
        10,
        10,
        (__int64)&unk_1400D5D48,
        (__int64)v11,
        (__int64)v12,
        (__int64)L"HardwareTrafficGate::Bind(kstd::move(osServices))",
        v10);
      v6 = 3;
    }
    if ( (v6 & 2) != 0 )
    {
      v17 = v39;
      v6 &= ~2u;
      if ( v39 )
      {
        if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v6 & 1) != 0 )
    {
      v18 = v41;
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_14000999C((int)a1, (__int64)L"HardwareTrafficGate::Bind(kstd::move(osServices))", 53, 122, v10);
    if ( v7 )
    {
      sub_14000BFA4(v7);
      ExFreePool(v7);
    }
    v19 = (volatile signed __int32 *)a2[1];
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    v20 = (volatile signed __int32 *)a3[1];
    if ( v20 && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    return v10;
  }
  else if ( *a3 )
  {
    v32 = a1[59];
    a1[59] = a3[1];
    v33 = *a3;
    a3[1] = v32;
    v34 = a1[58];
    a1[58] = v33;
    *a3 = v34;
    if ( v7 )
    {
      sub_14000BFA4(v7);
      ExFreePool(v7);
    }
    v35 = (volatile signed __int32 *)a2[1];
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
        if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
      }
    }
    v36 = (volatile signed __int32 *)a3[1];
    if ( v36 )
    {
      if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
        if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
      }
    }
    return 0LL;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v22 = &unk_1400D44E0;
      v23 = &unk_1400D44E0;
      v24 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v44) + 16LL);
      if ( v24 )
        v23 = v24;
      v25 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v42);
      LOBYTE(v26) = 2;
      v27 = *(void **)(*(_QWORD *)v25 + 16LL);
      if ( v27 )
        v22 = v27;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v26,
        10,
        11,
        (__int64)&unk_1400D5D48,
        (__int64)v22,
        (__int64)v23,
        (__int64)L"receiveControlRegister");
      v6 = 12;
    }
    if ( (v6 & 8) != 0 )
    {
      v28 = v43;
      v6 &= ~8u;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v6 & 4) != 0 )
    {
      v29 = v45;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    sub_14000B5F4((int)a1, (__int64)L"receiveControlRegister", 55, 122);
    if ( v7 )
    {
      sub_14000BFA4(v7);
      ExFreePool(v7);
    }
    v30 = (volatile signed __int32 *)a2[1];
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
      }
    }
    v31 = (volatile signed __int32 *)a3[1];
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
      }
    }
    return 3221225485LL;
  }
}
