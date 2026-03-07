__int64 __fastcall sub_14005EA24(_QWORD *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  char v4; // di
  __int64 *v6; // r14
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  void *v14; // r8
  void *v15; // rdx
  void *v16; // rax
  volatile signed __int32 *v17; // rsi
  volatile signed __int32 *v18; // rdi
  __int64 v19; // rsi
  void *v20; // rdi
  void *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  void *v24; // rax
  void *v25; // rcx
  volatile signed __int32 *v26; // rsi
  volatile signed __int32 *v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  void *v31; // rsi
  void *v32; // rdi
  void *v33; // rax
  __int64 v34; // rax
  int v35; // edx
  void *v36; // rax
  volatile signed __int32 *v37; // rsi
  volatile signed __int32 *v38; // rdi
  volatile signed __int32 *v39; // rdi
  volatile signed __int32 *v40; // rdi
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  volatile signed __int32 *v45; // rdi
  volatile signed __int32 *v46; // rdi
  __int64 v47; // [rsp+30h] [rbp-41h]
  _BYTE v48[8]; // [rsp+48h] [rbp-29h] BYREF
  volatile signed __int32 *v49; // [rsp+50h] [rbp-21h]
  _BYTE v50[8]; // [rsp+58h] [rbp-19h] BYREF
  volatile signed __int32 *v51; // [rsp+60h] [rbp-11h]
  _BYTE v52[8]; // [rsp+68h] [rbp-9h] BYREF
  volatile signed __int32 *v53; // [rsp+70h] [rbp-1h]
  _BYTE v54[8]; // [rsp+78h] [rbp+7h] BYREF
  volatile signed __int32 *v55; // [rsp+80h] [rbp+Fh]
  _BYTE v56[8]; // [rsp+88h] [rbp+17h] BYREF
  volatile signed __int32 *v57; // [rsp+90h] [rbp+1Fh]
  _BYTE v58[8]; // [rsp+98h] [rbp+27h] BYREF
  volatile signed __int32 *v59; // [rsp+A0h] [rbp+2Fh]

  v4 = 0;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14005A6E0(Pool2, (__int64)L"os_services::WorkItemFactory::Bind", (__int64)a1);
      if ( v11 )
        v6 = v11;
    }
  }
  if ( !a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v50);
      v13 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v48);
      v14 = &unk_1400D44E0;
      v15 = &unk_1400D44E0;
      v16 = *(void **)(*(_QWORD *)v13 + 16LL);
      if ( v16 )
        v15 = v16;
      if ( *(_QWORD *)(v12 + 16) )
        v14 = *(void **)(v12 + 16);
      v47 = (__int64)v15;
      LOBYTE(v15) = 2;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        (_DWORD)v15,
        5,
        15,
        (__int64)&unk_1400D7DC8,
        v47,
        (__int64)v14,
        (__int64)L"device");
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v17 = v49;
      v4 &= ~2u;
      if ( v49 )
      {
        if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v18 = v51;
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_14000B00C((int)a1, (__int64)L"device", 273, 150);
LABEL_60:
    if ( v6 )
    {
      sub_14005A99C(v6);
      ExFreePool(v6);
    }
    v39 = (volatile signed __int32 *)a3[1];
    if ( v39 )
    {
      if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
        if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
      }
    }
    v40 = (volatile signed __int32 *)a4[1];
    if ( v40 && _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
      if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
    }
    return 3221225485LL;
  }
  a1[50] = a2;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v19 = *(_QWORD *)(a1[22] + 16LL);
      v20 = &unk_1400D44E0;
      v21 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v52) + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v54);
      LOBYTE(v23) = 2;
      v24 = *(void **)(*(_QWORD *)v22 + 16LL);
      v25 = &unk_1400D44E0;
      if ( v24 )
        v25 = v24;
      sub_1400A3320(v19, v23, 5, 16, (__int64)&unk_1400D7DC8, (__int64)v20, (__int64)v25, (__int64)L"dataLockFactory");
      v4 = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v26 = v53;
      v4 &= ~8u;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v27 = v55;
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    sub_14000B1BC((int)a1, (__int64)L"dataLockFactory", 276, 150);
    goto LABEL_60;
  }
  v28 = a1[47];
  a1[47] = a3[1];
  v29 = *a3;
  a3[1] = v28;
  v30 = a1[46];
  a1[46] = v29;
  *a3 = v30;
  if ( !*a4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v31 = &unk_1400D44E0;
      v32 = &unk_1400D44E0;
      v33 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v58) + 16LL);
      if ( v33 )
        v32 = v33;
      v34 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v56);
      LOBYTE(v35) = 2;
      v36 = *(void **)(*(_QWORD *)v34 + 16LL);
      if ( v36 )
        v31 = v36;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v35,
        5,
        17,
        (__int64)&unk_1400D7DC8,
        (__int64)v31,
        (__int64)v32,
        (__int64)L"executionLockFactory");
      v4 = 48;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v37 = v57;
      v4 &= ~0x20u;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v38 = v59;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    sub_14001453C((int)a1, (__int64)L"executionLockFactory", 279, 150);
    goto LABEL_60;
  }
  v42 = a1[49];
  a1[49] = a4[1];
  v43 = *a4;
  a4[1] = v42;
  v44 = a1[48];
  a1[48] = v43;
  *a4 = v44;
  if ( v6 )
  {
    sub_14005A99C(v6);
    ExFreePool(v6);
  }
  v45 = (volatile signed __int32 *)a3[1];
  if ( v45 )
  {
    if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
      if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
    }
  }
  v46 = (volatile signed __int32 *)a4[1];
  if ( v46 )
  {
    if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
      if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
    }
  }
  return 0LL;
}
