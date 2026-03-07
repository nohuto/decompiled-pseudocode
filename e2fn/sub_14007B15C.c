__int64 __fastcall sub_14007B15C(_QWORD *a1)
{
  char v1; // bp
  __int64 *v3; // rsi
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rdi
  _QWORD *v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // r14d
  void *v11; // rdi
  void *v12; // rbx
  void *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  void *v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  _BYTE v20[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v21; // [rsp+58h] [rbp-40h]
  _BYTE v22[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v23; // [rsp+68h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareQueue::DisableTraffic", (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = (__int64 *)a1[53];
  v7 = a1 + 7;
  v8 = *v6;
  v9 = (*(__int64 (__fastcall **)(_QWORD *))(a1[7] + 8LL))(a1 + 7);
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v8 + 16))(v6, v9);
  if ( v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = &unk_1400D44E0;
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v7 + 16LL))(a1 + 7, v22) + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v7 + 24LL))(a1 + 7, v20);
      LOBYTE(v15) = 2;
      v16 = *(void **)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v11 = v16;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v15,
        10,
        21,
        (__int64)&unk_1400D9878,
        (__int64)v11,
        (__int64)v12,
        (__int64)L"m_trafficGate->Disable(GetName())",
        v10);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v17 = v21;
      v1 &= ~2u;
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v18 = v23;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_140008DF0((int)a1, (__int64)L"m_trafficGate->Disable(GetName())", 177, 87, v10);
  }
  else
  {
    v10 = 0;
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v10;
}
