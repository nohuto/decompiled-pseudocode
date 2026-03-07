__int64 __fastcall sub_140051320(_QWORD *a1, __int64 *a2, __int64 *a3, _QWORD *a4)
{
  char v7; // si
  __int64 *v8; // r14
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  void *v13; // r8
  void *v14; // rdx
  void *v15; // rax
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  void *v21; // rsi
  void *v22; // rdi
  void *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  volatile signed __int32 *v27; // rdi
  volatile signed __int32 *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  void *v34; // rax
  void *v35; // rcx
  void *v36; // rdx
  volatile signed __int32 *v37; // rdi
  volatile signed __int32 *v38; // rdi
  volatile signed __int32 *v39; // rdi
  volatile signed __int32 *v40; // rdi
  volatile signed __int32 *v41; // rdi
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  volatile signed __int32 *v46; // rdi
  volatile signed __int32 *v47; // rdi
  volatile signed __int32 *v48; // rdi
  __int64 v49; // [rsp+28h] [rbp-51h]
  __int64 v50; // [rsp+30h] [rbp-49h]
  _BYTE v51[8]; // [rsp+40h] [rbp-39h] BYREF
  volatile signed __int32 *v52; // [rsp+48h] [rbp-31h]
  _BYTE v53[8]; // [rsp+50h] [rbp-29h] BYREF
  volatile signed __int32 *v54; // [rsp+58h] [rbp-21h]
  _BYTE v55[8]; // [rsp+60h] [rbp-19h] BYREF
  volatile signed __int32 *v56; // [rsp+68h] [rbp-11h]
  _BYTE v57[8]; // [rsp+70h] [rbp-9h] BYREF
  volatile signed __int32 *v58; // [rsp+78h] [rbp-1h]
  _BYTE v59[8]; // [rsp+80h] [rbp+7h] BYREF
  volatile signed __int32 *v60; // [rsp+88h] [rbp+Fh]
  _BYTE v61[8]; // [rsp+90h] [rbp+17h] BYREF
  volatile signed __int32 *v62; // [rsp+98h] [rbp+1Fh]
  __int64 v63; // [rsp+E8h] [rbp+6Fh]
  _QWORD *v64; // [rsp+F8h] [rbp+7Fh]

  v64 = a4;
  v7 = 0;
  v8 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnOtherInterruptsDispatcher::Bind", (__int64)a1);
      if ( v10 )
        v8 = v10;
    }
    a4 = v64;
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v53);
      v12 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v51);
      v13 = &unk_1400D44E0;
      v14 = &unk_1400D44E0;
      v15 = *(void **)(*(_QWORD *)v12 + 16LL);
      if ( v15 )
        v14 = v15;
      if ( *(_QWORD *)(v11 + 16) )
        v13 = *(void **)(v11 + 16);
      v49 = (__int64)v14;
      LOBYTE(v14) = 2;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        (_DWORD)v14,
        10,
        11,
        (__int64)&unk_1400D7608,
        v49,
        (__int64)v13,
        (__int64)L"interruptCauseRegister");
      v7 = 3;
    }
    if ( (v7 & 2) != 0 )
    {
      v16 = v52;
      v7 &= ~2u;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v7 & 1) != 0 )
    {
      v17 = v54;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_14000B5F4((int)a1, (__int64)L"interruptCauseRegister", 70, 67);
LABEL_61:
    if ( v8 )
    {
      sub_14000BFA4(v8);
      ExFreePool(v8);
    }
    v39 = (volatile signed __int32 *)a2[1];
    if ( v39 )
    {
      if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
        if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
      }
    }
    v40 = (volatile signed __int32 *)a3[1];
    if ( v40 )
    {
      if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
        if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
      }
    }
    v41 = (volatile signed __int32 *)v64[1];
    if ( v41 && _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
      if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
    }
    return 3221225485LL;
  }
  v18 = a1[46];
  a1[46] = a2[1];
  v19 = *a2;
  a2[1] = v18;
  v20 = a1[45];
  a1[45] = v19;
  *a2 = v20;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v21 = &unk_1400D44E0;
      v22 = &unk_1400D44E0;
      v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v55) + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v57);
      LOBYTE(v25) = 2;
      v26 = *(void **)(*(_QWORD *)v24 + 16LL);
      if ( v26 )
        v21 = v26;
      v63 = (__int64)v21;
      v7 = 12;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v25,
        10,
        12,
        (__int64)&unk_1400D7608,
        (__int64)v22,
        v63,
        (__int64)L"interruptVectorAllocator");
    }
    if ( (v7 & 8) != 0 )
    {
      v27 = v56;
      v7 &= ~8u;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    if ( (v7 & 4) != 0 )
    {
      v28 = v58;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    sub_14000B6CC((int)a1, (__int64)L"interruptVectorAllocator", 73, 67);
    goto LABEL_61;
  }
  v29 = a1[48];
  a1[48] = a3[1];
  v30 = *a3;
  a3[1] = v29;
  v31 = a1[47];
  a1[47] = v30;
  *a3 = v31;
  if ( !*a4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v32 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v59);
      v33 = *(_QWORD *)(a1[22] + 16LL);
      v34 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v61) + 16LL);
      v35 = &unk_1400D44E0;
      v36 = &unk_1400D44E0;
      if ( v34 )
        v36 = v34;
      if ( *(_QWORD *)(v32 + 16) )
        v35 = *(void **)(v32 + 16);
      v50 = (__int64)v36;
      LOBYTE(v36) = 2;
      sub_1400A3320(
        v33,
        (_DWORD)v36,
        10,
        13,
        (__int64)&unk_1400D7608,
        (__int64)v35,
        v50,
        (__int64)L"interruptDispatcher");
      v7 = 48;
    }
    if ( (v7 & 0x20) != 0 )
    {
      v37 = v60;
      v7 &= ~0x20u;
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    if ( (v7 & 0x10) != 0 )
    {
      v38 = v62;
      if ( v62 )
      {
        if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    sub_14000B444((int)a1, (__int64)L"interruptDispatcher", 76, 67);
    goto LABEL_61;
  }
  v43 = a1[50];
  a1[50] = a4[1];
  v44 = *a4;
  a4[1] = v43;
  v45 = a1[49];
  a1[49] = v44;
  *a4 = v45;
  if ( v8 )
  {
    sub_14000BFA4(v8);
    ExFreePool(v8);
  }
  v46 = (volatile signed __int32 *)a2[1];
  if ( v46 )
  {
    if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
      if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
    }
  }
  v47 = (volatile signed __int32 *)a3[1];
  if ( v47 )
  {
    if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
      if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
    }
  }
  v48 = (volatile signed __int32 *)v64[1];
  if ( v48 )
  {
    if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
      if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
    }
  }
  return 0LL;
}
