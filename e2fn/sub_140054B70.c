__int64 __fastcall sub_140054B70(__int64 a1, unsigned int a2)
{
  char v2; // r14
  __int64 v3; // rsi
  __int64 *v5; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // r14
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // edx
  void *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  unsigned int v17; // ebx
  __int64 v18; // rdi
  void *v19; // rdi
  void *v20; // rax
  __int64 v21; // rax
  void *v22; // r8
  void *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // eax
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  void *v29; // r13
  void *v30; // rdi
  void *v31; // rax
  __int64 v32; // rax
  int v33; // edx
  void *v34; // rax
  volatile signed __int32 *v35; // rbx
  volatile signed __int32 *v36; // rbx
  signed __int32 v38[8]; // [rsp+0h] [rbp-99h] BYREF
  int v39; // [rsp+50h] [rbp-49h]
  _BYTE v40[8]; // [rsp+60h] [rbp-39h] BYREF
  volatile signed __int32 *v41; // [rsp+68h] [rbp-31h]
  _BYTE v42[8]; // [rsp+70h] [rbp-29h] BYREF
  volatile signed __int32 *v43; // [rsp+78h] [rbp-21h]
  _BYTE v44[8]; // [rsp+80h] [rbp-19h] BYREF
  volatile signed __int32 *v45; // [rsp+88h] [rbp-11h]
  _BYTE v46[8]; // [rsp+90h] [rbp-9h] BYREF
  volatile signed __int32 *v47; // [rsp+98h] [rbp-1h]
  _BYTE v48[8]; // [rsp+A0h] [rbp+7h] BYREF
  volatile signed __int32 *v49; // [rsp+A8h] [rbp+Fh]
  _BYTE v50[8]; // [rsp+B0h] [rbp+17h] BYREF
  volatile signed __int32 *v51; // [rsp+B8h] [rbp+1Fh]
  char v52; // [rsp+108h] [rbp+6Fh]

  v52 = a2;
  v2 = 0;
  v3 = a2;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnInterruptVectorAllocator::ReleaseInterruptVector",
             a1 - 352);
      if ( v7 )
        v5 = v7;
    }
  }
  if ( (unsigned int)v3 < 0xA )
  {
    _mm_lfence();
    v18 = 3 * v3;
    _InterlockedAnd(
      (volatile signed __int32 *)(a1 + 4LL * *(unsigned int *)(a1 + 12 * v3 + 20) + 184),
      ~(255 << *(_DWORD *)(a1 + 12 * v3 + 24)));
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v19 = &unk_1400D44E0;
      v20 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v46)
                     + 16LL);
      if ( v20 )
        v19 = v20;
      v21 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v44);
      v22 = &unk_1400D44E0;
      v23 = *(void **)(*(_QWORD *)v21 + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = *(unsigned int *)(a1 + 12 * v3 + 20);
      v25 = *(_QWORD *)(a1 - 176);
      v39 = *(_DWORD *)(a1 + 4 * v24 + 184);
      v26 = dword_1400D76E0[v24];
      LOBYTE(v24) = 4;
      sub_1400AB5B8(
        *(_QWORD *)(v25 + 16),
        v24,
        10,
        20,
        (__int64)&unk_1400D76D0,
        (__int64)v22,
        (__int64)v19,
        (__int64)qword_1400B7720,
        v3,
        v26,
        v39);
      v18 = 3 * v3;
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v27 = v45;
      v2 &= ~8u;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v28 = v47;
      v2 &= ~4u;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 20LL) )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        _mm_lfence();
        v2 |= 0x30u;
        v29 = &unk_1400D44E0;
        v30 = &unk_1400D44E0;
        v31 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                      a1 - 296,
                                      v50)
                       + 16LL);
        if ( v31 )
          v30 = v31;
        v32 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v48);
        LOBYTE(v33) = 4;
        v34 = *(void **)(*(_QWORD *)v32 + 16LL);
        if ( v34 )
          v29 = v34;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          v33,
          10,
          21,
          (__int64)&unk_1400D76D0,
          (__int64)v29,
          (__int64)v30,
          (__int64)qword_1400B7720,
          v52);
      }
      if ( (v2 & 0x20) != 0 )
      {
        v35 = v49;
        v2 &= ~0x20u;
        if ( v49 )
        {
          if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
            if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
          }
        }
      }
      if ( (v2 & 0x10) != 0 )
      {
        v36 = v51;
        if ( v51 )
        {
          if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
            if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
          }
        }
      }
    }
    else
    {
      _mm_lfence();
      *(_DWORD *)(dword_1400D76E0[*(unsigned int *)(a1 + 4 * v18 + 20)] + *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8LL)) = *(_DWORD *)(a1 + 4LL * *(unsigned int *)(a1 + 4 * v18 + 20) + 184);
      _InterlockedOr(v38, 0);
    }
    v17 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                    a1 - 296,
                                    v40)
                     + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
      v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(a1 - 296, v42);
      LOBYTE(v13) = 2;
      v14 = *(void **)(*(_QWORD *)v12 + 16LL);
      if ( v14 )
        v8 = v14;
      sub_1400A5E80(v11, v13, 10, 19, (__int64)&unk_1400D76D0, (__int64)v9, (__int64)v8, (__int64)qword_1400B7720, v52);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v15 = v41;
      v2 &= ~2u;
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v16 = v43;
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
    v17 = -1073741811;
  }
  if ( v5 )
  {
    sub_14000BFA4(v5);
    ExFreePool(v5);
  }
  return v17;
}
