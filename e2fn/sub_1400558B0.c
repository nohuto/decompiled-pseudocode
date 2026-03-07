__int64 __fastcall sub_1400558B0(__int64 a1, __int64 *a2, __int64 *a3)
{
  char v6; // di
  __int64 *v7; // rsi
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  void *v10; // r14
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  int v14; // edx
  void *v15; // rax
  volatile signed __int32 *v16; // r14
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v19; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // r8d
  __int64 v27; // rcx
  unsigned int v28; // r13d
  void *v29; // r14
  void *v30; // rdi
  void *v31; // rax
  __int64 v32; // rax
  int v33; // edx
  void *v34; // rax
  volatile signed __int32 *v35; // r14
  volatile signed __int32 *v36; // rdi
  volatile signed __int32 *v37; // rdi
  volatile signed __int32 *v38; // rdi
  volatile signed __int32 *v39; // rdi
  volatile signed __int32 *v40; // rdi
  __int64 v41[2]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v42[8]; // [rsp+60h] [rbp-68h] BYREF
  volatile signed __int32 *v43; // [rsp+68h] [rbp-60h]
  _BYTE v44[8]; // [rsp+70h] [rbp-58h] BYREF
  volatile signed __int32 *v45; // [rsp+78h] [rbp-50h]
  _BYTE v46[8]; // [rsp+80h] [rbp-48h] BYREF
  volatile signed __int32 *v47; // [rsp+88h] [rbp-40h]
  _BYTE v48[8]; // [rsp+90h] [rbp-38h] BYREF
  volatile signed __int32 *v49; // [rsp+98h] [rbp-30h]

  v6 = 0;
  v7 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnOtherInterruptControl::Bind", a1);
      if ( v9 )
        v7 = v9;
    }
  }
  if ( *a2 )
  {
    v21 = *(_QWORD *)(a1 + 392);
    *(_QWORD *)(a1 + 392) = a2[1];
    v22 = *a2;
    a2[1] = v21;
    v23 = *(_QWORD *)(a1 + 384);
    *(_QWORD *)(a1 + 384) = v22;
    *a2 = v23;
    v24 = a3[1];
    a3[1] = 0LL;
    v41[1] = v24;
    v25 = *a3;
    *a3 = 0LL;
    v26 = *(_DWORD *)(a1 + 416);
    v27 = *(_QWORD *)(a1 + 384);
    v41[0] = v25;
    v28 = sub_140051EF8(v27, v41, v26);
    if ( v28 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v29 = &unk_1400D44E0;
        v30 = &unk_1400D44E0;
        v31 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v48)
                       + 16LL);
        if ( v31 )
          v30 = v31;
        v32 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v46);
        LOBYTE(v33) = 2;
        v34 = *(void **)(*(_QWORD *)v32 + 16LL);
        if ( v34 )
          v29 = v34;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v33,
          10,
          11,
          (__int64)&unk_1400D77C8,
          (__int64)v29,
          (__int64)v30,
          (__int64)L"m_interruptDispatcher->RegisterInterrupt(move(interruptAssertedCallback), m_cause)",
          v28);
        v6 = 12;
      }
      if ( (v6 & 8) != 0 )
      {
        v35 = v47;
        v6 &= ~8u;
        if ( v47 )
        {
          if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
            if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
          }
        }
      }
      if ( (v6 & 4) != 0 )
      {
        v36 = v49;
        if ( v49 )
        {
          if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
            if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
          }
        }
      }
      sub_140011538(
        a1,
        (__int64)L"m_interruptDispatcher->RegisterInterrupt(move(interruptAssertedCallback), m_cause)",
        70,
        66,
        v28);
      if ( v7 )
      {
        sub_14000BFA4(v7);
        ExFreePool(v7);
      }
      v37 = (volatile signed __int32 *)a2[1];
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
      v38 = (volatile signed __int32 *)a3[1];
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
      return v28;
    }
    else
    {
      if ( v7 )
      {
        sub_14000BFA4(v7);
        ExFreePool(v7);
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
      return 0LL;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = &unk_1400D44E0;
      v11 = &unk_1400D44E0;
      v12 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v44)
                     + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v42);
      LOBYTE(v14) = 2;
      v15 = *(void **)(*(_QWORD *)v13 + 16LL);
      if ( v15 )
        v10 = v15;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v14,
        10,
        10,
        (__int64)&unk_1400D77C8,
        (__int64)v10,
        (__int64)v11,
        (__int64)L"interruptDispatcher");
      v6 = 3;
    }
    if ( (v6 & 2) != 0 )
    {
      v16 = v43;
      v6 &= ~2u;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v6 & 1) != 0 )
    {
      v17 = v45;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_14000B444(a1, (__int64)L"interruptDispatcher", 67, 66);
    if ( v7 )
    {
      sub_14000BFA4(v7);
      ExFreePool(v7);
    }
    v18 = (volatile signed __int32 *)a2[1];
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
    v19 = (volatile signed __int32 *)a3[1];
    if ( v19 && _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return 3221225485LL;
  }
}
