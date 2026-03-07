void __fastcall sub_14011B240(__int64 a1)
{
  char v2; // si
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  char v6; // di
  volatile signed __int32 *v7; // rbx
  const wchar_t *v8; // r12
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  const wchar_t *v14; // r12
  const wchar_t *v15; // rdi
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  __int64 v20; // [rsp+48h] [rbp-89h] BYREF
  volatile signed __int32 *v21; // [rsp+50h] [rbp-81h]
  int v22; // [rsp+58h] [rbp-79h]
  __int64 (__fastcall **v23)(PVOID); // [rsp+60h] [rbp-71h] BYREF
  __int16 v24; // [rsp+68h] [rbp-69h]
  PVOID P; // [rsp+70h] [rbp-61h]
  __int64 v26; // [rsp+78h] [rbp-59h]
  __int64 v27; // [rsp+80h] [rbp-51h]
  _BYTE v28[8]; // [rsp+88h] [rbp-49h] BYREF
  volatile signed __int32 *v29; // [rsp+90h] [rbp-41h]
  _BYTE v30[8]; // [rsp+98h] [rbp-39h] BYREF
  volatile signed __int32 *v31; // [rsp+A0h] [rbp-31h]
  _BYTE v32[8]; // [rsp+A8h] [rbp-29h] BYREF
  volatile signed __int32 *v33; // [rsp+B0h] [rbp-21h]
  _BYTE v34[8]; // [rsp+B8h] [rbp-19h] BYREF
  volatile signed __int32 *v35; // [rsp+C0h] [rbp-11h]
  _DWORD v36[12]; // [rsp+C8h] [rbp-9h] BYREF

  v2 = 0;
  v22 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400736C0(Pool2, (__int64)L"framework::DeviceContext::InitializeSurpriseRemoval", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  if ( !*(_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 424) + 8LL))(*(_QWORD *)(a1 + 424)) )
    goto LABEL_8;
  v24 = 0;
  v23 = &off_1400D41D0;
  P = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  sub_1400011A8(&v23, (__int64)L"SurpriseRemovalSupport", 0x16uLL);
  sub_1400A27D4(&v20, (__int64 *)(a1 + 112));
  v2 = 3;
  v6 = 1;
  if ( !sub_14003E2F0(v20, (__int64)&v23, v20 + 16) )
LABEL_8:
    v6 = 0;
  if ( (v2 & 2) != 0 )
  {
    v2 &= ~2u;
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        v7 = v21;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v2 &= ~1u;
    if ( P )
      ExFreePool(P);
  }
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v2 |= 0xCu;
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v30)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v28)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        8u,
        0x4Eu,
        (__int64)&unk_1400D91A8,
        v8,
        v9,
        (const wchar_t *)qword_14014EC70);
    }
    if ( (v2 & 8) != 0 )
    {
      v12 = v29;
      v2 &= ~8u;
      if ( v29 )
      {
        if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v13 = v31;
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( byte_1400DF688 )
    {
      if ( (unsigned int)dword_1400DF0C0 <= 0xC )
        v36[0] = -1;
      else
        v36[0] = stru_1400DF410.Queue.ListEntry.Flink[6].Flink;
    }
    else
    {
      v36[0] = 48;
    }
    v36[10] = -1;
    v36[1] = 2;
    v36[2] = 2;
    v36[4] = 2;
    v36[5] = 2;
    v36[6] = 2;
    v36[8] = 2;
    v36[9] = 2;
    v36[3] = 1;
    v36[7] = 1;
    v36[11] = -1;
    (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(qword_1400DF678 + 664))(
      qword_1400DF6A8,
      *(_QWORD *)(a1 + 384),
      v36);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v2 |= 0x30u;
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = (const wchar_t *)&unk_1400D44E0;
      v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v34)
                              + 16LL);
      if ( v16 )
        v15 = v16;
      v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v32)
                              + 16LL);
      if ( v17 )
        v14 = v17;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        8u,
        0x4Fu,
        (__int64)&unk_1400D91A8,
        v14,
        v15,
        (const wchar_t *)qword_14014EC70);
    }
    if ( (v2 & 0x20) != 0 )
    {
      v18 = v33;
      v2 &= ~0x20u;
      if ( v33 )
      {
        if ( !_InterlockedDecrement(v33 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( !_InterlockedDecrement(v18 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      v19 = v35;
      if ( v35 )
      {
        if ( !_InterlockedDecrement(v35 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( !_InterlockedDecrement(v19 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
  }
  if ( v3 )
  {
    sub_140073F78(v3);
    ExFreePool(v3);
  }
}
