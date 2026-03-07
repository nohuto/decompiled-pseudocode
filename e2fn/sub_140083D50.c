__int64 __fastcall sub_140083D50(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r15
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  void *v12; // r12
  void *v13; // rdx
  void *v14; // rax
  volatile signed __int32 *v15; // rsi
  volatile signed __int32 *v16; // rdi
  unsigned int v17; // ebx
  void *v18; // r12
  void *v19; // rdi
  void *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // edx
  void *v24; // rax
  volatile signed __int32 *v25; // rsi
  volatile signed __int32 *v26; // rdi
  __int64 v27; // rsi
  void *v28; // r12
  void *v29; // rdi
  void *v30; // rax
  __int64 v31; // rax
  int v32; // edx
  void *v33; // rax
  volatile signed __int32 *v34; // rsi
  volatile signed __int32 *v35; // rdi
  __int64 v37; // [rsp+28h] [rbp-41h]
  _BYTE v38[8]; // [rsp+40h] [rbp-29h] BYREF
  volatile signed __int32 *v39; // [rsp+48h] [rbp-21h]
  _BYTE v40[8]; // [rsp+50h] [rbp-19h] BYREF
  volatile signed __int32 *v41; // [rsp+58h] [rbp-11h]
  _BYTE v42[8]; // [rsp+60h] [rbp-9h] BYREF
  volatile signed __int32 *v43; // [rsp+68h] [rbp-1h]
  _BYTE v44[8]; // [rsp+70h] [rbp+7h] BYREF
  volatile signed __int32 *v45; // [rsp+78h] [rbp+Fh]
  _BYTE v46[8]; // [rsp+80h] [rbp+17h] BYREF
  volatile signed __int32 *v47; // [rsp+88h] [rbp+1Fh]
  _BYTE v48[8]; // [rsp+90h] [rbp+27h] BYREF
  volatile signed __int32 *v49; // [rsp+98h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareTxQueue::Drain", a1 - 496);
      if ( v5 )
        v3 = v5;
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
  v6 = 0;
  while ( !*(_DWORD *)(*(_QWORD *)(a1 - 104) + 20LL) )
  {
    v7 = sub_14007B5DC(a1 - 496);
    *(_DWORD *)(a1 - 12) = v7;
    if ( *(_DWORD *)(a1 - 8) == v7 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v18 = &unk_1400D44E0;
        v19 = &unk_1400D44E0;
        v20 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(
                                      a1 - 440,
                                      v42)
                       + 16LL);
        if ( v20 )
          v19 = v20;
        v21 = *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL);
        v22 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(a1 - 440, v44);
        LOBYTE(v23) = 4;
        v24 = *(void **)(*(_QWORD *)v22 + 16LL);
        if ( v24 )
          v18 = v24;
        sub_1400A3320(v21, v23, 10, 19, (__int64)&unk_1400D98F8, (__int64)v19, (__int64)v18, (__int64)qword_1400B7720);
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v25 = v43;
        v1 &= ~8u;
        if ( v43 )
        {
          if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
            if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v26 = v45;
        if ( v45 )
        {
          if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
            if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
      }
      v17 = 0;
      goto LABEL_63;
    }
    v8 = 200LL;
    do
    {
      KeStallExecutionProcessor(0x32u);
      --v8;
    }
    while ( v8 );
    if ( (unsigned int)++v6 >= 0x64 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v9 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(a1 - 440, v40);
        v10 = *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL);
        v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v38);
        v12 = &unk_1400D44E0;
        v13 = &unk_1400D44E0;
        v14 = *(void **)(*(_QWORD *)v11 + 16LL);
        if ( v14 )
          v13 = v14;
        if ( *(_QWORD *)(v9 + 16) )
          v12 = *(void **)(v9 + 16);
        v37 = (__int64)v13;
        LOBYTE(v13) = 2;
        sub_1400A3320(v10, (_DWORD)v13, 10, 20, (__int64)&unk_1400D98F8, v37, (__int64)v12, (__int64)qword_1400B7720);
        v1 = 48;
      }
      if ( (v1 & 0x20) != 0 )
      {
        v15 = v39;
        v1 &= ~0x20u;
        if ( v39 )
        {
          if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
            if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
          }
        }
      }
      if ( (v1 & 0x10) != 0 )
      {
        v16 = v41;
        if ( v41 )
        {
          if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
            if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
          }
        }
      }
      v17 = -1073741643;
      goto LABEL_63;
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v27 = *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL);
    v28 = &unk_1400D44E0;
    v29 = &unk_1400D44E0;
    v30 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(
                                  a1 - 440,
                                  v46)
                   + 16LL);
    if ( v30 )
      v29 = v30;
    v31 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(a1 - 440, v48);
    LOBYTE(v32) = 2;
    v33 = *(void **)(*(_QWORD *)v31 + 16LL);
    if ( v33 )
      v28 = v33;
    sub_1400A3320(v27, v32, 10, 18, (__int64)&unk_1400D98F8, (__int64)v29, (__int64)v28, (__int64)qword_1400B7720);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v34 = v47;
    v1 &= ~2u;
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v35 = v49;
    if ( v49 )
    {
      if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
        if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
      }
    }
  }
  v17 = -1073741661;
LABEL_63:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v17;
}
