__int64 __fastcall sub_14004C518(_QWORD *a1, __int64 *a2, __int64 *a3, _QWORD *a4)
{
  char v4; // bl
  __int64 *v6; // r14
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  void *v11; // rsi
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  void *v16; // rax
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  void *v24; // r8
  void *v25; // rdx
  void *v26; // rax
  volatile signed __int32 *v27; // rdi
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  volatile signed __int32 *v40; // rdi
  void *v41; // rdi
  void *v42; // rax
  __int64 v43; // rax
  void *v44; // rdx
  void *v45; // rax
  volatile signed __int32 *v46; // rdi
  volatile signed __int32 *v47; // rbx
  volatile signed __int32 *v48; // rbx
  volatile signed __int32 *v49; // rbx
  volatile signed __int32 *v50; // rbx
  volatile signed __int32 *v51; // rbx
  volatile signed __int32 *v52; // rbx
  volatile signed __int32 *v53; // rbx
  volatile signed __int32 *v54; // rbx
  volatile signed __int32 *v55; // rbx
  __int64 v56; // [rsp+28h] [rbp-71h]
  __int64 v57; // [rsp+28h] [rbp-71h]
  __int64 v58; // [rsp+40h] [rbp-59h] BYREF
  volatile signed __int32 *v59; // [rsp+48h] [rbp-51h]
  _BYTE v60[8]; // [rsp+50h] [rbp-49h] BYREF
  volatile signed __int32 *v61; // [rsp+58h] [rbp-41h]
  _BYTE v62[8]; // [rsp+60h] [rbp-39h] BYREF
  volatile signed __int32 *v63; // [rsp+68h] [rbp-31h]
  _BYTE v64[8]; // [rsp+70h] [rbp-29h] BYREF
  volatile signed __int32 *v65; // [rsp+78h] [rbp-21h]
  _BYTE v66[8]; // [rsp+80h] [rbp-19h] BYREF
  volatile signed __int32 *v67; // [rsp+88h] [rbp-11h]
  _BYTE v68[8]; // [rsp+90h] [rbp-9h] BYREF
  volatile signed __int32 *v69; // [rsp+98h] [rbp-1h]
  _BYTE v70[8]; // [rsp+A0h] [rbp+7h] BYREF
  volatile signed __int32 *v71; // [rsp+A8h] [rbp+Fh]
  _BYTE v72[8]; // [rsp+B0h] [rbp+17h] BYREF
  volatile signed __int32 *v73; // [rsp+B8h] [rbp+1Fh]
  _QWORD *v74; // [rsp+118h] [rbp+7Fh]

  v74 = a4;
  v4 = 0;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnMsixInterruptDispatcher::Bind", (__int64)a1);
      if ( v10 )
        v6 = v10;
    }
    a4 = v74;
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = &unk_1400D44E0;
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v62) + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v60);
      LOBYTE(v15) = 2;
      v16 = *(void **)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v11 = v16;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v15,
        10,
        10,
        (__int64)&unk_1400D7418,
        (__int64)v11,
        (__int64)v12,
        (__int64)L"mmioAccessor");
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v17 = v61;
      v4 &= ~2u;
      if ( v61 )
      {
        if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v18 = v63;
      if ( v63 )
      {
        if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_14000BA2C((int)a1, (__int64)L"mmioAccessor", 72, 64);
LABEL_43:
    if ( v6 )
    {
      sub_14000BFA4(v6);
      ExFreePool(v6);
    }
    v29 = (volatile signed __int32 *)a2[1];
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
        if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
    v30 = (volatile signed __int32 *)a3[1];
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
      }
    }
    v31 = (volatile signed __int32 *)v74[1];
    if ( v31 && _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
      if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
    }
    return 3221225485LL;
  }
  v19 = a1[47];
  a1[47] = a2[1];
  v20 = *a2;
  a2[1] = v19;
  v21 = a1[46];
  a1[46] = v20;
  *a2 = v21;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v22 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v66);
      v23 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v64);
      v24 = &unk_1400D44E0;
      v25 = &unk_1400D44E0;
      v26 = *(void **)(*(_QWORD *)v23 + 16LL);
      if ( v26 )
        v25 = v26;
      if ( *(_QWORD *)(v22 + 16) )
        v24 = *(void **)(v22 + 16);
      v56 = (__int64)v25;
      LOBYTE(v25) = 2;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        (_DWORD)v25,
        10,
        11,
        (__int64)&unk_1400D7418,
        v56,
        (__int64)v24,
        (__int64)L"osInterruptsPool");
      v4 = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v27 = v65;
      v4 &= ~8u;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v28 = v67;
      if ( v67 )
      {
        if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    sub_14000B294((int)a1, (__int64)L"osInterruptsPool", 75, 64);
    goto LABEL_43;
  }
  v33 = a1[49];
  a1[49] = a3[1];
  v34 = *a3;
  a3[1] = v33;
  v35 = a1[48];
  a1[48] = v34;
  *a3 = v35;
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a4 + 8LL))(*a4, &v58);
  v36 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v58 + 8LL))(v58, v68);
  v37 = a1[55];
  a1[55] = v36[1];
  v38 = *v36;
  v36[1] = v37;
  v39 = a1[54];
  a1[54] = v38;
  *v36 = v39;
  v40 = v69;
  if ( v69 )
  {
    if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
      if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
    }
  }
  if ( a1[54] )
  {
    v52 = v59;
    if ( v59 )
    {
      if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
        if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
      }
    }
    if ( v6 )
    {
      sub_14000BFA4(v6);
      ExFreePool(v6);
    }
    v53 = (volatile signed __int32 *)a2[1];
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
        if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
      }
    }
    v54 = (volatile signed __int32 *)a3[1];
    if ( v54 )
    {
      if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
        if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
      }
    }
    v55 = (volatile signed __int32 *)v74[1];
    if ( v55 )
    {
      if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
        if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
      }
    }
    return 0LL;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v41 = &unk_1400D44E0;
      v42 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v72) + 16LL);
      if ( v42 )
        v41 = v42;
      v43 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v70);
      v44 = &unk_1400D44E0;
      v45 = *(void **)(*(_QWORD *)v43 + 16LL);
      if ( v45 )
        v44 = v45;
      v57 = (__int64)v44;
      LOBYTE(v44) = 2;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        (_DWORD)v44,
        10,
        12,
        (__int64)&unk_1400D7418,
        v57,
        (__int64)v41,
        (__int64)L"m_interruptCallbacksLock");
      v4 = 48;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v46 = v71;
      v4 &= ~0x20u;
      if ( v71 )
      {
        if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
          if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
        }
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v47 = v73;
      if ( v73 )
      {
        if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
          if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
        }
      }
    }
    sub_14000B6CC((int)a1, (__int64)L"m_interruptCallbacksLock", 83, 64);
    v48 = v59;
    if ( v59 )
    {
      if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
        if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
      }
    }
    if ( v6 )
    {
      sub_14000BFA4(v6);
      ExFreePool(v6);
    }
    v49 = (volatile signed __int32 *)a2[1];
    if ( v49 )
    {
      if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
        if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
      }
    }
    v50 = (volatile signed __int32 *)a3[1];
    if ( v50 )
    {
      if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
        if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
      }
    }
    v51 = (volatile signed __int32 *)v74[1];
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
        if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
      }
    }
    return 3221225495LL;
  }
}
