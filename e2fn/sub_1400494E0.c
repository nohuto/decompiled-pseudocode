__int64 __fastcall sub_1400494E0(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 *v4; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // r15
  unsigned int v9; // esi
  void *v10; // r14
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  int v14; // edx
  void *v15; // rax
  volatile signed __int32 *v16; // r14
  volatile signed __int32 *v17; // rdi
  int v18; // edx
  __int64 v19; // rdx
  void *v20; // r14
  void *v21; // rdi
  void *v22; // rax
  __int64 v23; // rax
  int v24; // edx
  void *v25; // rax
  volatile signed __int32 *v26; // r14
  volatile signed __int32 *v27; // rdi
  void *v28; // r14
  void *v29; // rdi
  void *v30; // rax
  __int64 v31; // rax
  int v32; // edx
  void *v33; // rax
  volatile signed __int32 *v34; // r14
  volatile signed __int32 *v35; // rdi
  int v36; // edx
  _BYTE v38[8]; // [rsp+50h] [rbp-39h] BYREF
  volatile signed __int32 *v39; // [rsp+58h] [rbp-31h]
  _BYTE v40[8]; // [rsp+60h] [rbp-29h] BYREF
  volatile signed __int32 *v41; // [rsp+68h] [rbp-21h]
  _BYTE v42[8]; // [rsp+70h] [rbp-19h] BYREF
  volatile signed __int32 *v43; // [rsp+78h] [rbp-11h]
  _BYTE v44[8]; // [rsp+80h] [rbp-9h] BYREF
  volatile signed __int32 *v45; // [rsp+88h] [rbp-1h]
  _BYTE v46[8]; // [rsp+90h] [rbp+7h] BYREF
  volatile signed __int32 *v47; // [rsp+98h] [rbp+Fh]
  _BYTE v48[8]; // [rsp+A0h] [rbp+17h] BYREF
  volatile signed __int32 *v49; // [rsp+A8h] [rbp+1Fh]
  unsigned int v50; // [rsp+100h] [rbp+77h] BYREF
  void *v51; // [rsp+108h] [rbp+7Fh]

  v2 = 0;
  v50 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareMacAddress::ReadSystemMacAddressFromAcpi",
             a1);
      if ( v7 )
        v4 = v7;
    }
  }
  v50 = 0;
  v8 = 0LL;
  v51 = 0LL;
  v9 = sub_140047748(a1, &v50);
  if ( v9 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = &unk_1400D44E0;
      v11 = &unk_1400D44E0;
      v12 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v40)
                     + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v38);
      LOBYTE(v14) = 2;
      v15 = *(void **)(*(_QWORD *)v13 + 16LL);
      if ( v15 )
        v10 = v15;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v14,
        14,
        20,
        (__int64)&unk_1400D72A0,
        (__int64)v10,
        (__int64)v11,
        (__int64)L"GetDsdtTableSize(dsdtSize)",
        v9);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v16 = v39;
      v2 &= ~2u;
      if ( v39 )
      {
        if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v17 = v41;
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_1400084DC(a1, (__int64)L"GetDsdtTableSize(dsdtSize)", 228, 158, v9);
    goto LABEL_67;
  }
  v18 = v50;
  if ( !v50 )
    goto LABEL_28;
  v19 = 2LL * v50;
  if ( v19 )
  {
    v8 = (void *)ExAllocatePool2(64LL, v19, 1802921315LL);
    if ( v8 )
    {
      v18 = v50;
LABEL_28:
      v9 = sub_140048FB8((int)v8, v18, (__int64)&v50);
      if ( v9 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v20 = &unk_1400D44E0;
          v21 = &unk_1400D44E0;
          v22 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                        a1 + 56,
                                        v48)
                         + 16LL);
          if ( v22 )
            v21 = v22;
          v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v46);
          LOBYTE(v24) = 2;
          v25 = *(void **)(*(_QWORD *)v23 + 16LL);
          if ( v25 )
            v20 = v25;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            v24,
            14,
            22,
            (__int64)&unk_1400D72A0,
            (__int64)v20,
            (__int64)v21,
            (__int64)L"OsalGetDsdtFirmwareTable(dsdt.data(), dsdtSize, &dsdtSize)",
            v9);
          v2 = 48;
        }
        if ( (v2 & 0x20) != 0 )
        {
          v26 = v47;
          v2 &= ~0x20u;
          if ( v47 )
          {
            if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
              if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
            }
          }
        }
        if ( (v2 & 0x10) != 0 )
        {
          v27 = v49;
          if ( v49 )
          {
            if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
              if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
            }
          }
        }
        sub_140028E54(a1, (__int64)L"OsalGetDsdtFirmwareTable(dsdt.data(), dsdtSize, &dsdtSize)", 230, 158, v9);
      }
      else
      {
        v9 = sub_140046608(a1, (__int64)v8, v50, a2);
        if ( v9 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            LOBYTE(v36) = 4;
            sub_1400A1CFC(
              *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
              v36,
              14,
              23,
              (__int64)&unk_1400D72A0,
              (__int64)L"ExtractSystemMacAddressFromDsdt(dsdt.data(), dsdtSize, macAddress)",
              v9);
          }
        }
        else
        {
          v9 = 0;
        }
      }
      goto LABEL_67;
    }
  }
  v9 = -1073741801;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v28 = &unk_1400D44E0;
    v29 = &unk_1400D44E0;
    v30 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                  a1 + 56,
                                  v44)
                   + 16LL);
    if ( v30 )
      v29 = v30;
    v31 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v42);
    LOBYTE(v32) = 2;
    v33 = *(void **)(*(_QWORD *)v31 + 16LL);
    if ( v33 )
      v28 = v33;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      v32,
      14,
      21,
      (__int64)&unk_1400D72A0,
      (__int64)v28,
      (__int64)v29,
      (__int64)L"ResizeVector(dsdt, dsdtSize)",
      23);
    v2 = 12;
  }
  if ( (v2 & 8) != 0 )
  {
    v34 = v43;
    v2 &= ~8u;
    if ( v43 )
    {
      if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v34 + 8LL))(v34, v19);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
      }
    }
  }
  if ( (v2 & 4) != 0 )
  {
    v35 = v45;
    if ( v45 )
    {
      if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v35 + 8LL))(v35, v19);
        if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
      }
    }
  }
  sub_140008774(a1, (__int64)L"ResizeVector(dsdt, dsdtSize)", 229, 158, 0xC0000017);
  v8 = v51;
LABEL_67:
  if ( v8 )
    ExFreePool(v8);
  if ( v4 )
  {
    sub_140005840(v4);
    ExFreePool(v4);
  }
  return v9;
}
