__int64 __fastcall sub_1400545E4(_QWORD *a1, _QWORD *a2)
{
  char v2; // bl
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // r13
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  volatile signed __int32 *v22; // rdi
  void *v23; // r13
  void *v24; // rdi
  void *v25; // rax
  __int64 v26; // rax
  int v27; // edx
  void *v28; // rax
  volatile signed __int32 *v29; // rdi
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  volatile signed __int32 *v32; // rbx
  volatile signed __int32 *v33; // rbx
  volatile signed __int32 *v34; // rbx
  __int64 v35; // [rsp+48h] [rbp-29h] BYREF
  volatile signed __int32 *v36; // [rsp+50h] [rbp-21h]
  _BYTE v37[8]; // [rsp+58h] [rbp-19h] BYREF
  volatile signed __int32 *v38; // [rsp+60h] [rbp-11h]
  _BYTE v39[8]; // [rsp+68h] [rbp-9h] BYREF
  volatile signed __int32 *v40; // [rsp+70h] [rbp-1h]
  _BYTE v41[8]; // [rsp+78h] [rbp+7h] BYREF
  volatile signed __int32 *v42; // [rsp+80h] [rbp+Fh]
  _BYTE v43[8]; // [rsp+88h] [rbp+17h] BYREF
  volatile signed __int32 *v44; // [rsp+90h] [rbp+1Fh]
  _BYTE v45[8]; // [rsp+98h] [rbp+27h] BYREF
  volatile signed __int32 *v46; // [rsp+A0h] [rbp+2Fh]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnInterruptVectorAllocator::Initialize", (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  if ( *a2 )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a2 + 8LL))(*a2, &v35);
    v18 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v35 + 8LL))(v35, v41);
    v19 = a1[66];
    a1[66] = v18[1];
    v20 = *v18;
    v18[1] = v19;
    v21 = a1[65];
    a1[65] = v20;
    *v18 = v21;
    v22 = v42;
    if ( v42 )
    {
      if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
    if ( a1[65] )
    {
      v33 = v36;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
          if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
        }
      }
      if ( v4 )
      {
        sub_14000BFA4(v4);
        ExFreePool(v4);
      }
      v34 = (volatile signed __int32 *)a2[1];
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
      return 0LL;
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v23 = &unk_1400D44E0;
        v24 = &unk_1400D44E0;
        v25 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v45) + 16LL);
        if ( v25 )
          v24 = v25;
        v26 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v43);
        LOBYTE(v27) = 2;
        v28 = *(void **)(*(_QWORD *)v26 + 16LL);
        if ( v28 )
          v23 = v28;
        sub_1400A3320(
          *(_QWORD *)(a1[22] + 16LL),
          v27,
          10,
          11,
          (__int64)&unk_1400D76D0,
          (__int64)v23,
          (__int64)v24,
          (__int64)L"m_ivarLock");
        v2 = 12;
      }
      if ( (v2 & 8) != 0 )
      {
        v29 = v44;
        v2 &= ~8u;
        if ( v44 )
        {
          if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
            if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v30 = v46;
        if ( v46 )
        {
          if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
            if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
          }
        }
      }
      sub_14000B87C((int)a1, (__int64)L"m_ivarLock", 74, 62);
      v31 = v36;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
      if ( v4 )
      {
        sub_14000BFA4(v4);
        ExFreePool(v4);
      }
      v32 = (volatile signed __int32 *)a2[1];
      if ( v32 )
      {
        if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
          if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
      return 3221225495LL;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v39) + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v37);
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v12,
        10,
        10,
        (__int64)&unk_1400D76D0,
        (__int64)v8,
        (__int64)v9,
        (__int64)L"osServices");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v38;
      v2 &= ~2u;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v15 = v40;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_14000B87C((int)a1, (__int64)L"osServices", 69, 62);
    if ( v4 )
    {
      sub_14000BFA4(v4);
      ExFreePool(v4);
    }
    v16 = (volatile signed __int32 *)a2[1];
    if ( v16 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return 3221225485LL;
  }
}
