__int64 __fastcall sub_1400460DC(_QWORD *a1)
{
  char v1; // si
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // r14d
  void *v7; // r13
  void *v8; // rdi
  void *v9; // rax
  __int64 v10; // rax
  int v11; // edx
  void *v12; // rax
  volatile signed __int32 *v13; // rdi
  volatile signed __int32 *v14; // rdi
  void *v15; // r13
  void *v16; // rdi
  void *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // edx
  void *v21; // rax
  volatile signed __int32 *v22; // rdi
  volatile signed __int32 *v23; // rdi
  void *v24; // r13
  void *v25; // rdi
  void *v26; // rax
  __int64 v27; // rax
  int v28; // edx
  void *v29; // rax
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v31; // rdi
  _BYTE v33[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v34; // [rsp+60h] [rbp-21h]
  _BYTE v35[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v36; // [rsp+70h] [rbp-11h]
  _BYTE v37[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v38; // [rsp+80h] [rbp-1h]
  _BYTE v39[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v40; // [rsp+90h] [rbp+Fh]
  _BYTE v41[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v42; // [rsp+A0h] [rbp+1Fh]
  _BYTE v43[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v44; // [rsp+B0h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareMacAddress::EvtD0Entry", (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = sub_140047D48(a1);
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = &unk_1400D44E0;
      v8 = &unk_1400D44E0;
      v9 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v35) + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v33);
      LOBYTE(v11) = 2;
      v12 = *(void **)(*(_QWORD *)v10 + 16LL);
      if ( v12 )
        v7 = v12;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v11,
        14,
        12,
        (__int64)&unk_1400D72A0,
        (__int64)v7,
        (__int64)v8,
        (__int64)L"InitializeMacAddress()",
        v6);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v13 = v34;
      v1 &= ~2u;
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v14 = v36;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    sub_1400080F8((int)a1, (__int64)L"InitializeMacAddress()", 123, 158, v6);
  }
  else
  {
    v6 = sub_140045CD0(a1);
    if ( v6 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v15 = &unk_1400D44E0;
        v16 = &unk_1400D44E0;
        v17 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v37) + 16LL);
        if ( v17 )
          v16 = v17;
        v18 = *(_QWORD *)(a1[22] + 16LL);
        v19 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v39);
        LOBYTE(v20) = 2;
        v21 = *(void **)(*(_QWORD *)v19 + 16LL);
        if ( v21 )
          v15 = v21;
        sub_1400A5E80(
          v18,
          v20,
          14,
          13,
          (__int64)&unk_1400D72A0,
          (__int64)v16,
          (__int64)v15,
          (__int64)L"ClearReceiveAddressTable()",
          v6);
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v22 = v38;
        v1 &= ~8u;
        if ( v38 )
        {
          if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v23 = v40;
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
      sub_1400084DC((int)a1, (__int64)L"ClearReceiveAddressTable()", 125, 158, v6);
    }
    else
    {
      v6 = sub_140049CE0(a1);
      if ( v6 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v24 = &unk_1400D44E0;
          v25 = &unk_1400D44E0;
          v26 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v43) + 16LL);
          if ( v26 )
            v25 = v26;
          v27 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v41);
          LOBYTE(v28) = 2;
          v29 = *(void **)(*(_QWORD *)v27 + 16LL);
          if ( v29 )
            v24 = v29;
          sub_1400A5E80(
            *(_QWORD *)(a1[22] + 16LL),
            v28,
            14,
            14,
            (__int64)&unk_1400D72A0,
            (__int64)v24,
            (__int64)v25,
            (__int64)L"WriteCurrentMacAddressToHardware()",
            v6);
          v1 = 48;
        }
        if ( (v1 & 0x20) != 0 )
        {
          v30 = v42;
          v1 &= ~0x20u;
          if ( v42 )
          {
            if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
              if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
            }
          }
        }
        if ( (v1 & 0x10) != 0 )
        {
          v31 = v44;
          if ( v44 )
          {
            if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
              if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
            }
          }
        }
        sub_1400452DC((int)a1, (__int64)L"WriteCurrentMacAddressToHardware()", 127, 158, v6);
      }
      else
      {
        v6 = 0;
      }
    }
  }
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v6;
}
