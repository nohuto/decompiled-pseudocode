__int64 __fastcall sub_14007A948(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 *v4; // r15
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // r12
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rdi
  const wchar_t *v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rax
  void *v19; // r12
  void *v20; // rdx
  void *v21; // rax
  volatile signed __int32 *v22; // rdi
  volatile signed __int32 *v23; // rdi
  int v24; // r8d
  void *v25; // r12
  void *v26; // rdi
  void *v27; // rax
  __int64 v28; // rax
  int v29; // edx
  void *v30; // rax
  volatile signed __int32 *v31; // rdi
  volatile signed __int32 *v32; // rdi
  void *v33; // r12
  void *v34; // rdi
  void *v35; // rax
  __int64 v36; // rax
  int v37; // edx
  void *v38; // rax
  volatile signed __int32 *v39; // rdi
  volatile signed __int32 *v40; // rdi
  void *v41; // r12
  void *v42; // rdi
  void *v43; // rax
  __int64 v44; // rax
  int v45; // edx
  void *v46; // rax
  volatile signed __int32 *v47; // rdi
  volatile signed __int32 *v48; // rdi
  unsigned int v49; // ebx
  __int64 v51; // [rsp+30h] [rbp-79h]
  _BYTE v52[8]; // [rsp+40h] [rbp-69h] BYREF
  volatile signed __int32 *v53; // [rsp+48h] [rbp-61h]
  _BYTE v54[8]; // [rsp+50h] [rbp-59h] BYREF
  volatile signed __int32 *v55; // [rsp+58h] [rbp-51h]
  _BYTE v56[8]; // [rsp+60h] [rbp-49h] BYREF
  volatile signed __int32 *v57; // [rsp+68h] [rbp-41h]
  _BYTE v58[8]; // [rsp+70h] [rbp-39h] BYREF
  volatile signed __int32 *v59; // [rsp+78h] [rbp-31h]
  _BYTE v60[8]; // [rsp+80h] [rbp-29h] BYREF
  volatile signed __int32 *v61; // [rsp+88h] [rbp-21h]
  _BYTE v62[8]; // [rsp+90h] [rbp-19h] BYREF
  volatile signed __int32 *v63; // [rsp+98h] [rbp-11h]
  _BYTE v64[8]; // [rsp+A0h] [rbp-9h] BYREF
  volatile signed __int32 *v65; // [rsp+A8h] [rbp-1h]
  _BYTE v66[8]; // [rsp+B0h] [rbp+7h] BYREF
  volatile signed __int32 *v67; // [rsp+B8h] [rbp+Fh]
  _BYTE v68[8]; // [rsp+C0h] [rbp+17h] BYREF
  volatile signed __int32 *v69; // [rsp+C8h] [rbp+1Fh]
  _BYTE v70[8]; // [rsp+D0h] [rbp+27h] BYREF
  volatile signed __int32 *v71; // [rsp+D8h] [rbp+2Fh]

  LOWORD(v2) = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareQueue::Bind", a1);
      if ( v7 )
        v4 = v7;
    }
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v54)
                     + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v52);
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v12,
        10,
        10,
        (__int64)&unk_1400D9878,
        (__int64)v8,
        (__int64)v9,
        (__int64)L"resources.commonBufferFactory");
      LOBYTE(v2) = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v53;
      LOBYTE(v2) = v2 & 0xFD;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v15 = v55;
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_14007A61C(a1, (__int64)L"resources.commonBufferFactory", 68, 87);
    goto LABEL_97;
  }
  sub_1400A5B28(a1 + 376, a2);
  if ( !a2[2] )
  {
    v16 = L"resources.mmioAccessor";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v17 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v56);
      v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v58);
      v19 = &unk_1400D44E0;
      v20 = &unk_1400D44E0;
      v21 = *(void **)(*(_QWORD *)v18 + 16LL);
      if ( v21 )
        v20 = v21;
      if ( *(_QWORD *)(v17 + 16) )
        v19 = *(void **)(v17 + 16);
      v51 = (__int64)v20;
      LOBYTE(v20) = 2;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        (_DWORD)v20,
        10,
        11,
        (__int64)&unk_1400D9878,
        (__int64)v19,
        v51,
        (__int64)L"resources.mmioAccessor");
      LOBYTE(v2) = 12;
      v16 = L"resources.mmioAccessor";
    }
    if ( (v2 & 8) != 0 )
    {
      v22 = v57;
      LOBYTE(v2) = v2 & 0xF7;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v23 = v59;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    v24 = 71;
LABEL_96:
    sub_14000B5F4(a1, (__int64)v16, v24, 87);
LABEL_97:
    v49 = -1073741811;
    goto LABEL_99;
  }
  sub_1400A5B28(a1 + 392, a2 + 2);
  if ( !a2[4] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v25 = &unk_1400D44E0;
      v26 = &unk_1400D44E0;
      v27 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v62)
                     + 16LL);
      if ( v27 )
        v26 = v27;
      v28 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v60);
      LOBYTE(v29) = 2;
      v30 = *(void **)(*(_QWORD *)v28 + 16LL);
      if ( v30 )
        v25 = v30;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v29,
        10,
        12,
        (__int64)&unk_1400D9878,
        (__int64)v25,
        (__int64)v26,
        (__int64)L"resources.interruptsFactory");
      LOBYTE(v2) = 48;
    }
    if ( (v2 & 0x20) != 0 )
    {
      v31 = v61;
      LOBYTE(v2) = v2 & 0xDF;
      if ( v61 )
      {
        if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      v32 = v63;
      if ( v63 )
      {
        if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
          if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
    }
    sub_14000B7A4(a1, (__int64)L"resources.interruptsFactory", 74, 87);
    goto LABEL_97;
  }
  sub_1400A5B28(a1 + 408, a2 + 4);
  if ( !a2[6] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v33 = &unk_1400D44E0;
      v34 = &unk_1400D44E0;
      v35 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v66)
                     + 16LL);
      if ( v35 )
        v34 = v35;
      v2 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v36 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v64);
      LOBYTE(v37) = 2;
      v38 = *(void **)(*(_QWORD *)v36 + 16LL);
      if ( v38 )
        v33 = v38;
      sub_1400A3320(
        v2,
        v37,
        10,
        13,
        (__int64)&unk_1400D9878,
        (__int64)v33,
        (__int64)v34,
        (__int64)L"resources.trafficGate");
      LOBYTE(v2) = -64;
    }
    if ( (v2 & 0x80u) != 0LL )
    {
      v39 = v65;
      LOBYTE(v2) = v2 & 0x7F;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
          if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
        }
      }
    }
    if ( (v2 & 0x40) != 0 )
    {
      v40 = v67;
      if ( v67 )
      {
        if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
    }
    sub_14000B51C(a1, (__int64)L"resources.trafficGate", 77, 87);
    goto LABEL_97;
  }
  sub_1400A5B28(a1 + 424, a2 + 6);
  if ( !a2[10] )
  {
    v16 = L"resources.hardwareLink";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v41 = &unk_1400D44E0;
      v42 = &unk_1400D44E0;
      v43 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v70)
                     + 16LL);
      if ( v43 )
        v42 = v43;
      v44 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v68);
      LOBYTE(v45) = 2;
      v46 = *(void **)(*(_QWORD *)v44 + 16LL);
      if ( v46 )
        v41 = v46;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v45,
        10,
        14,
        (__int64)&unk_1400D9878,
        (__int64)v41,
        (__int64)v42,
        (__int64)L"resources.hardwareLink");
      LOWORD(v2) = 768;
      v16 = L"resources.hardwareLink";
    }
    if ( (v2 & 0x200) != 0 )
    {
      v47 = v69;
      LOWORD(v2) = v2 & 0xFDFF;
      if ( v69 )
      {
        if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
          if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
        }
      }
    }
    if ( (v2 & 0x100) != 0 )
    {
      v48 = v71;
      if ( v71 )
      {
        if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
          if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
        }
      }
    }
    v24 = 80;
    goto LABEL_96;
  }
  sub_1400A5B28(a1 + 456, a2 + 10);
  sub_1400A5B28(a1 + 440, a2 + 8);
  v49 = 0;
LABEL_99:
  if ( v4 )
  {
    sub_14000BFA4(v4);
    ExFreePool(v4);
  }
  return v49;
}
