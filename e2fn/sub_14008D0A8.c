__int64 __fastcall sub_14008D0A8(__int64 a1)
{
  unsigned int v1; // r15d
  char v3; // r14
  __int64 *v4; // r12
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  int v7; // esi
  volatile signed __int32 *v8; // rbx
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  void *v12; // rdx
  void *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rax
  void *v17; // rsi
  void *v18; // rax
  __int64 v19; // rax
  void *v20; // rdx
  void *v21; // rax
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  __int64 v25; // [rsp+30h] [rbp-91h]
  __int64 v26; // [rsp+30h] [rbp-91h]
  __int64 v27; // [rsp+58h] [rbp-69h] BYREF
  volatile signed __int32 *v28; // [rsp+60h] [rbp-61h]
  __int64 (__fastcall **v29)(PVOID); // [rsp+68h] [rbp-59h] BYREF
  __int16 v30; // [rsp+70h] [rbp-51h]
  PVOID P; // [rsp+78h] [rbp-49h]
  __int64 v32; // [rsp+80h] [rbp-41h]
  __int64 v33; // [rsp+88h] [rbp-39h]
  _BYTE v34[8]; // [rsp+90h] [rbp-31h] BYREF
  volatile signed __int32 *v35; // [rsp+98h] [rbp-29h]
  _BYTE v36[8]; // [rsp+A0h] [rbp-21h] BYREF
  volatile signed __int32 *v37; // [rsp+A8h] [rbp-19h]
  _BYTE v38[8]; // [rsp+B0h] [rbp-11h] BYREF
  volatile signed __int32 *v39; // [rsp+B8h] [rbp-9h]
  _BYTE v40[8]; // [rsp+C0h] [rbp-1h] BYREF
  volatile signed __int32 *v41; // [rsp+C8h] [rbp+7h]
  __int64 (__fastcall **v42)(PVOID); // [rsp+D0h] [rbp+Fh] BYREF
  PVOID v43; // [rsp+E0h] [rbp+1Fh]

  v1 = 0;
  v3 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_140074D50(
             Pool2,
             (__int64)L"net_adapter::NetAdapterHardwareConfigurationFactory::GetFlowControlFromRegistry",
             a1);
      if ( v6 )
        v4 = v6;
    }
  }
  v30 = 0;
  v29 = &off_1400D41D0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"*FlowControl", 0xCuLL);
  sub_1400A27D4(&v27, a1 + 112);
  v7 = sub_14004BEA4(v27, (__int64)&v29, v27 + 376);
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      v8 = v28;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
    }
  }
  if ( P )
    ExFreePool(P);
  v9 = &unk_1400D44E0;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v1 = 1;
    }
    else if ( v7 == 2 )
    {
      v1 = 2;
    }
    else if ( (unsigned int)(v7 - 3) < 2 )
    {
      v1 = 3;
    }
    else
    {
      v1 = 3;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v36)
                       + 16LL);
        if ( v10 )
          v9 = v10;
        v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v34);
        v12 = &unk_1400D44E0;
        v13 = *(void **)(*(_QWORD *)v11 + 16LL);
        if ( v13 )
          v12 = v13;
        v25 = (__int64)v12;
        LOBYTE(v12) = 2;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          (_DWORD)v12,
          11,
          14,
          (__int64)&unk_1400D9AE0,
          v25,
          (__int64)v9,
          (__int64)qword_1400B7720,
          v7);
        v3 = 3;
        v9 = &unk_1400D44E0;
      }
      if ( (v3 & 2) != 0 )
      {
        v14 = v35;
        v3 &= ~2u;
        if ( v35 )
        {
          if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
            if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
          }
        }
      }
      if ( (v3 & 1) != 0 )
      {
        v15 = v37;
        v3 &= ~1u;
        if ( v37 )
        {
          if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
            if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
          }
        }
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v3 |= 0x1Cu;
    v16 = sub_14009E208(&v42, v1);
    v17 = &unk_1400D44E0;
    if ( *(_QWORD *)(v16 + 16) )
      v17 = *(void **)(v16 + 16);
    v18 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                  a1 + 56,
                                  v40)
                   + 16LL);
    if ( v18 )
      v9 = v18;
    v19 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v38);
    v20 = &unk_1400D44E0;
    v21 = *(void **)(*(_QWORD *)v19 + 16LL);
    if ( v21 )
      v20 = v21;
    v26 = (__int64)v20;
    LOBYTE(v20) = 4;
    sub_1400A9338(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      (_DWORD)v20,
      11,
      15,
      (__int64)&unk_1400D9AE0,
      v26,
      (__int64)v9,
      (__int64)qword_1400B7720,
      (__int64)v17);
  }
  if ( (v3 & 0x10) != 0 )
  {
    v22 = v39;
    v3 &= ~0x10u;
    if ( v39 )
    {
      if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
  }
  if ( (v3 & 8) != 0 )
  {
    v23 = v41;
    v3 &= ~8u;
    if ( v41 )
    {
      if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
  }
  if ( (v3 & 4) != 0 )
  {
    v42 = &off_1400D41D0;
    if ( v43 )
      ExFreePool(v43);
  }
  if ( v4 )
  {
    sub_140075108(v4);
    ExFreePool(v4);
  }
  return v1;
}
