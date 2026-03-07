__int64 __fastcall sub_14001E748(_QWORD *a1)
{
  char v1; // r15
  __int64 *v2; // rsi
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // r12d
  void *v9; // r15
  void *v10; // rdi
  void *v11; // rax
  __int64 v12; // rax
  int v13; // edx
  void *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rbx
  volatile signed __int32 *v20; // rsi
  void *v21; // r15
  void *v22; // rdi
  void *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  void *v29; // r15
  void *v30; // rdi
  void *v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  int v34; // edx
  void *v35; // rax
  volatile signed __int32 *v36; // rbx
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rbx
  __int64 v40; // [rsp+58h] [rbp-49h] BYREF
  volatile signed __int32 *v41; // [rsp+60h] [rbp-41h]
  _BYTE v42[8]; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v43; // [rsp+70h] [rbp-31h]
  _BYTE v44[8]; // [rsp+78h] [rbp-29h] BYREF
  volatile signed __int32 *v45; // [rsp+80h] [rbp-21h]
  _BYTE v46[8]; // [rsp+88h] [rbp-19h] BYREF
  volatile signed __int32 *v47; // [rsp+90h] [rbp-11h]
  _BYTE v48[8]; // [rsp+98h] [rbp-9h] BYREF
  volatile signed __int32 *v49; // [rsp+A0h] [rbp-1h]
  _BYTE v50[8]; // [rsp+A8h] [rbp+7h] BYREF
  volatile signed __int32 *v51; // [rsp+B0h] [rbp+Fh]
  _BYTE v52[8]; // [rsp+B8h] [rbp+17h] BYREF
  volatile signed __int32 *v53; // [rsp+C0h] [rbp+1Fh]
  _BYTE v54[16]; // [rsp+C8h] [rbp+27h] BYREF
  __int64 *v55; // [rsp+108h] [rbp+67h]

  v1 = 0;
  v2 = 0LL;
  v55 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnMsixInterruptsFactory::Initialize", (__int64)a1);
      if ( v5 )
        v2 = v5;
      v55 = v2;
    }
  }
  v6 = a1[51];
  v7 = sub_1400A27D4(v54, a1 + 49);
  v8 = sub_1400545E4(v6, v7);
  if ( v8 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = &unk_1400D44E0;
      v10 = &unk_1400D44E0;
      v11 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v44) + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v42);
      LOBYTE(v13) = 2;
      v14 = *(void **)(*(_QWORD *)v12 + 16LL);
      if ( v14 )
        v9 = v14;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v13,
        10,
        22,
        (__int64)&unk_1400D5958,
        (__int64)v9,
        (__int64)v10,
        (__int64)L"m_interruptVectorAllocator->Initialize(m_osServices)",
        v8);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v15 = v43;
      v1 &= ~2u;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v16 = v45;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    sub_14000D660((int)a1, (__int64)L"m_interruptVectorAllocator->Initialize(m_osServices)", 188, 65, v8);
  }
  else
  {
    v17 = a1[57];
    v18 = a1[56];
    if ( !v17 || (v19 = v18 + 16 * v17, v18 == v19) )
    {
LABEL_34:
      v8 = sub_140051B14(a1[59]);
      if ( v8 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v21 = &unk_1400D44E0;
          v22 = &unk_1400D44E0;
          v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v52) + 16LL);
          if ( v23 )
            v22 = v23;
          v24 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v50);
          LOBYTE(v25) = 2;
          v26 = *(void **)(*(_QWORD *)v24 + 16LL);
          if ( v26 )
            v21 = v26;
          sub_1400A5E80(
            *(_QWORD *)(a1[22] + 16LL),
            v25,
            10,
            24,
            (__int64)&unk_1400D5958,
            (__int64)v21,
            (__int64)v22,
            (__int64)L"m_otherInterruptsDispatcher->Initialize()",
            v8);
          v1 = 48;
        }
        if ( (v1 & 0x20) != 0 )
        {
          v27 = v51;
          v1 &= ~0x20u;
          if ( v51 )
          {
            if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
              if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
            }
          }
        }
        if ( (v1 & 0x10) != 0 )
        {
          v28 = v53;
          if ( v53 )
          {
            if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
              if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
            }
          }
        }
        sub_14000D514((int)a1, (__int64)L"m_otherInterruptsDispatcher->Initialize()", 195, 65, v8);
      }
      else
      {
        v8 = 0;
      }
    }
    else
    {
      while ( 1 )
      {
        sub_1400A27D4(&v40, v18);
        v8 = sub_14004DBB4(v40);
        if ( v8 )
          break;
        if ( v41 )
        {
          if ( !_InterlockedDecrement(v41 + 2) )
          {
            v20 = v41;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
            if ( !_InterlockedDecrement(v20 + 3) )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
          }
        }
        v18 += 16LL;
        if ( v18 == v19 )
        {
          v2 = v55;
          goto LABEL_34;
        }
      }
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v29 = &unk_1400D44E0;
        v30 = &unk_1400D44E0;
        v31 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v46) + 16LL);
        if ( v31 )
          v30 = v31;
        v32 = *(_QWORD *)(a1[22] + 16LL);
        v33 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v48);
        LOBYTE(v34) = 2;
        v35 = *(void **)(*(_QWORD *)v33 + 16LL);
        if ( v35 )
          v29 = v35;
        sub_1400A5E80(
          v32,
          v34,
          10,
          23,
          (__int64)&unk_1400D5958,
          (__int64)v30,
          (__int64)v29,
          (__int64)L"interruptDispatcher->Initialize()",
          v8);
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v36 = v47;
        v1 &= ~8u;
        if ( v47 )
        {
          if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
            if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v37 = v49;
        if ( v49 )
        {
          if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
            if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
          }
        }
      }
      sub_140008DF0((int)a1, (__int64)L"interruptDispatcher->Initialize()", 192, 65, v8);
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          v38 = v41;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
      v2 = v55;
    }
  }
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
  return v8;
}
