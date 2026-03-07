__int64 __fastcall sub_140054164(char *a1)
{
  int v1; // esi
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // r13d
  unsigned int *v7; // r14
  signed __int64 v8; // r12
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  void *v12; // rdx
  void *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r14d
  void *v22; // rax
  __int64 v23; // rax
  void *v24; // rdx
  void *v25; // rax
  __int64 v26; // rcx
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  signed __int32 v30[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+28h] [rbp-90h]
  __int64 v32; // [rsp+30h] [rbp-88h]
  const wchar_t *v33; // [rsp+38h] [rbp-80h]
  unsigned int v34; // [rsp+40h] [rbp-78h]
  unsigned int v35; // [rsp+48h] [rbp-70h]
  char v36[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v37; // [rsp+58h] [rbp-60h]
  char v38[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v39; // [rsp+68h] [rbp-50h]
  char v40[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v41; // [rsp+78h] [rbp-40h]
  char v42[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v43; // [rsp+88h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnInterruptVectorAllocator::EvtD0Entry", (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = 0;
  v7 = dword_1400D76E0;
  v8 = a1 - (char *)dword_1400D76E0;
  v9 = &unk_1400D44E0;
  while ( 1 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v1 |= 3u;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*((_QWORD *)a1 + 7) + 16LL))(
                                    (_QWORD *)a1 + 7,
                                    v38)
                     + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*((_QWORD *)a1 + 7) + 24LL))((_QWORD *)a1 + 7, v36);
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      v14 = *((_QWORD *)a1 + 22);
      if ( v13 )
        v12 = v13;
      v35 = *v7;
      v15 = *(_QWORD *)(v14 + 16);
      v34 = *(unsigned int *)((char *)v7 + v8 + 536);
      v31 = (__int64)v12;
      LOBYTE(v12) = 4;
      sub_1400A6AA8(
        v15,
        (_DWORD)v12,
        10,
        13,
        (__int64)&unk_1400D76D0,
        v31,
        (__int64)v9,
        (__int64)qword_1400B7720,
        v34,
        v35);
      v9 = &unk_1400D44E0;
    }
    if ( (v1 & 2) != 0 )
    {
      v16 = v37;
      v1 &= ~2u;
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v17 = v39;
      v1 &= ~1u;
      if ( v39 )
      {
        if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    v18 = *(unsigned int *)((char *)v7 + v8 + 536);
    v19 = *((_QWORD *)a1 + 63);
    v20 = *(_QWORD *)(v19 + 8);
    if ( !v20 || *(_DWORD *)(v19 + 20) )
      break;
    *(_DWORD *)(*v7 + v20) = v18;
    _InterlockedOr(v30, 0);
    ++v6;
    ++v7;
    if ( v6 >= 3 )
    {
      v21 = 0;
      goto LABEL_46;
    }
  }
  v21 = -1073741130;
  if ( *(_DWORD *)(v19 + 20) != 3 )
    v21 = -1073741661;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    LOBYTE(v1) = v1 | 0xC;
    v22 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*((_QWORD *)a1 + 7) + 16LL))(
                                  (_QWORD *)a1 + 7,
                                  v42)
                   + 16LL);
    if ( v22 )
      v9 = v22;
    v23 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*((_QWORD *)a1 + 7) + 24LL))((_QWORD *)a1 + 7, v40);
    v34 = v21;
    v24 = &unk_1400D44E0;
    v33 = L"m_mmioAccessor->WriteRegisterSafe(sc_ivarRegisterAddressLookupTable[i], m_ivarRegistersShadows[i])";
    v32 = (__int64)v9;
    v25 = *(void **)(*(_QWORD *)v23 + 16LL);
    v26 = *((_QWORD *)a1 + 22);
    if ( v25 )
      v24 = v25;
    v31 = (__int64)v24;
    LOBYTE(v24) = 2;
    sub_1400A5E80(*(_QWORD *)(v26 + 16), (_DWORD)v24, 10, 14, (__int64)&unk_1400D76D0, v31, v32, (__int64)v33, v34);
  }
  if ( (v1 & 8) != 0 )
  {
    v27 = v41;
    LOBYTE(v1) = v1 & 0xF7;
    if ( v41 )
    {
      if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v27 + 8LL))(v27, v18);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
  }
  if ( (v1 & 4) != 0 )
  {
    v28 = v43;
    if ( v43 )
    {
      if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v28 + 8LL))(v28, v18);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
      }
    }
  }
  sub_140017A30(
    (int)a1,
    (__int64)L"m_mmioAccessor->WriteRegisterSafe(sc_ivarRegisterAddressLookupTable[i], m_ivarRegistersShadows[i])",
    99,
    62,
    v21);
LABEL_46:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v21;
}
