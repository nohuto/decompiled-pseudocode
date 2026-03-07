__int64 __fastcall sub_1400180D4(_QWORD *a1, __int64 a2, __int64 *a3)
{
  char v3; // r14
  __int64 *v5; // rsi
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  unsigned int v10; // r13d
  void *v11; // r14
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  void *v16; // rax
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v19; // rdi
  void *v21; // r14
  void *v22; // rdi
  void *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  volatile signed __int32 *v27; // rdi
  volatile signed __int32 *v28; // rdi
  void *v29; // r13
  void *v30; // rdi
  void *v31; // rax
  __int64 v32; // rax
  int v33; // edx
  void *v34; // rax
  volatile signed __int32 *v35; // rdi
  volatile signed __int32 *v36; // rdi
  volatile signed __int32 *v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  volatile signed __int32 *v41; // rdi
  _BYTE v42[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v43; // [rsp+60h] [rbp-21h]
  _BYTE v44[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v45; // [rsp+70h] [rbp-11h]
  _BYTE v46[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v47; // [rsp+80h] [rbp-1h]
  _BYTE v48[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v49; // [rsp+90h] [rbp+Fh]
  _BYTE v50[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v51; // [rsp+A0h] [rbp+1Fh]
  _BYTE v52[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v53; // [rsp+B0h] [rbp+2Fh]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareRxQueue::Bind", (__int64)a1);
      if ( v9 )
        v5 = v9;
    }
  }
  v10 = sub_14007A948(a1, a2);
  if ( v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = &unk_1400D44E0;
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v44) + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v42);
      LOBYTE(v15) = 2;
      v16 = *(void **)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v11 = v16;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v15,
        10,
        10,
        (__int64)&unk_1400D56F8,
        (__int64)v11,
        (__int64)v12,
        (__int64)L"__super::Bind(resources)",
        v10);
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v17 = v43;
      v3 &= ~2u;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v18 = v45;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_140008244((int)a1, (__int64)L"__super::Bind(resources)", 67, 57, v10);
    if ( v5 )
    {
      sub_14000BFA4(v5);
      ExFreePool(v5);
    }
    v19 = (volatile signed __int32 *)a3[1];
    if ( v19 && _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return v10;
  }
  if ( !*(_QWORD *)(a2 + 96) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v21 = &unk_1400D44E0;
      v22 = &unk_1400D44E0;
      v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v46) + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v48);
      LOBYTE(v25) = 2;
      v26 = *(void **)(*(_QWORD *)v24 + 16LL);
      if ( v26 )
        v21 = v26;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v25,
        10,
        11,
        (__int64)&unk_1400D56F8,
        (__int64)v22,
        (__int64)v21,
        (__int64)L"resources.hardwareMtu");
      v3 = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v27 = v47;
      v3 &= ~8u;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v28 = v49;
      if ( v49 )
      {
        if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    sub_14000B51C((int)a1, (__int64)L"resources.hardwareMtu", 69, 57);
LABEL_66:
    if ( v5 )
    {
      sub_14000BFA4(v5);
      ExFreePool(v5);
    }
    v37 = (volatile signed __int32 *)a3[1];
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
      }
    }
    return 3221225485LL;
  }
  sub_1400A5B28(a1 + 78, a2 + 96);
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v29 = &unk_1400D44E0;
      v30 = &unk_1400D44E0;
      v31 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v52) + 16LL);
      if ( v31 )
        v30 = v31;
      v32 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v50);
      LOBYTE(v33) = 2;
      v34 = *(void **)(*(_QWORD *)v32 + 16LL);
      if ( v34 )
        v29 = v34;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v33,
        10,
        12,
        (__int64)&unk_1400D56F8,
        (__int64)v29,
        (__int64)v30,
        (__int64)L"latencyToleranceReporting");
      v3 = 48;
    }
    if ( (v3 & 0x20) != 0 )
    {
      v35 = v51;
      v3 &= ~0x20u;
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
          if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
        }
      }
    }
    if ( (v3 & 0x10) != 0 )
    {
      v36 = v53;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
          if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
        }
      }
    }
    sub_140017CC8((int)a1, (__int64)L"latencyToleranceReporting", 72, 57);
    goto LABEL_66;
  }
  v38 = a1[81];
  a1[81] = a3[1];
  v39 = *a3;
  a3[1] = v38;
  v40 = a1[80];
  a1[80] = v39;
  *a3 = v40;
  if ( v5 )
  {
    sub_14000BFA4(v5);
    ExFreePool(v5);
  }
  v41 = (volatile signed __int32 *)a3[1];
  if ( v41 )
  {
    if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
      if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
    }
  }
  return 0LL;
}
