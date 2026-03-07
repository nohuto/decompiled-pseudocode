void __fastcall sub_140086B10(__int64 a1)
{
  char v2; // si
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // r15d
  int v7; // r13d
  void *v8; // rdi
  void *v9; // rax
  __int64 v10; // rax
  void *v11; // rdx
  void *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  char v15; // r12
  __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rax
  void *v19; // rdx
  void *v20; // rax
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  __int64 v23; // [rsp+28h] [rbp-90h]
  __int64 v24; // [rsp+28h] [rbp-90h]
  _BYTE v25[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v26; // [rsp+58h] [rbp-60h]
  _BYTE v27[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v28; // [rsp+68h] [rbp-50h]
  _BYTE v29[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v30; // [rsp+78h] [rbp-40h]
  _BYTE v31[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v32; // [rsp+88h] [rbp-30h]

  v2 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareRxQueue::Flush", a1 - 496);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = *(_DWORD *)(a1 - 12);
  v7 = *(_DWORD *)(a1 - 8);
  v8 = &unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v9 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                 a1 - 440,
                                 v27)
                  + 16LL);
    if ( v9 )
      v8 = v9;
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v25);
    v11 = &unk_1400D44E0;
    v12 = *(void **)(*(_QWORD *)v10 + 16LL);
    if ( v12 )
      v11 = v12;
    v23 = (__int64)v11;
    LOBYTE(v11) = 4;
    sub_1400A6AA8(
      *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
      (_DWORD)v11,
      10,
      19,
      (__int64)&unk_1400D9908,
      v23,
      (__int64)v8,
      (__int64)qword_1400B7720,
      v6,
      v7);
    v2 = 3;
    v8 = &unk_1400D44E0;
  }
  if ( (v2 & 2) != 0 )
  {
    v13 = v26;
    v2 &= ~2u;
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v14 = v28;
    v2 &= ~1u;
    if ( v28 )
    {
      if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  v15 = 0;
  if ( v6 != v7 )
  {
    do
    {
      if ( (unsigned __int64)v6 >= *(_QWORD *)(a1 + 80) )
        sub_140072758(90, 0x239u, v6, *(_DWORD *)(a1 + 80), 0);
      *(_WORD *)(*(_QWORD *)(a1 + 72) + 8LL * v6) = 0;
      if ( (unsigned __int64)v6 >= *(_QWORD *)(a1 + 80) )
        sub_140072758(90, 0x239u, v6, *(_DWORD *)(a1 + 80), 0);
      v16 = *(_QWORD *)(a1 + 72) + 8LL * v6;
      *(_WORD *)(v16 + 2) |= 1u;
      ++v15;
      v6 = *(_DWORD *)(a1 - 24) & (v6 + 1);
    }
    while ( v6 != v7 );
    v8 = &unk_1400D44E0;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v2 |= 0xCu;
    v17 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                  a1 - 440,
                                  v31)
                   + 16LL);
    if ( v17 )
      v8 = v17;
    v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v29);
    v19 = &unk_1400D44E0;
    v20 = *(void **)(*(_QWORD *)v18 + 16LL);
    if ( v20 )
      v19 = v20;
    v24 = (__int64)v19;
    LOBYTE(v19) = 4;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
      (_DWORD)v19,
      10,
      20,
      (__int64)&unk_1400D9908,
      v24,
      (__int64)v8,
      (__int64)qword_1400B7720,
      v15);
  }
  if ( (v2 & 8) != 0 )
  {
    v21 = v30;
    v2 &= ~8u;
    if ( v30 )
    {
      if ( !_InterlockedDecrement(v30 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( !_InterlockedDecrement(v21 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
  }
  if ( (v2 & 4) != 0 )
  {
    v22 = v32;
    if ( v32 )
    {
      if ( !_InterlockedDecrement(v32 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        if ( !_InterlockedDecrement(v22 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
}
