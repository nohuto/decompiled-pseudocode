__int64 __fastcall sub_140138570(__int64 a1)
{
  int v1; // esi
  __int64 *v3; // r15
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // r13d
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned int v12; // r12d
  const wchar_t *v13; // rdi
  const wchar_t *v14; // rax
  __int64 v15; // rax
  const wchar_t *v16; // rdx
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  __int64 v21; // rdi
  __int64 v22; // rax
  const wchar_t *v23; // r8
  const wchar_t *v24; // rdx
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  _BYTE v28[40]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+80h] [rbp-88h]
  _BYTE v30[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v31; // [rsp+90h] [rbp-78h]
  _BYTE v32[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v33; // [rsp+A0h] [rbp-68h]
  _BYTE v34[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v35; // [rsp+B0h] [rbp-58h]
  _BYTE v36[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v37; // [rsp+C0h] [rbp-48h]
  _OWORD v38[7]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v39[7]; // [rsp+138h] [rbp+30h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterNsOffload::GetOffloadParametersFromNetAdapter", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  *(_BYTE *)(a1 + 360) = 0;
  v6 = *(_QWORD **)(a1 + 408);
  if ( v6 )
  {
    sub_1400A5BB4(v6, 3);
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  v7 = *(_QWORD *)(a1 + 376);
  v29 = 0LL;
  memset(&v28[8], 0, 32);
  *(_DWORD *)&v28[8] = 40;
  ((void (__fastcall *)(__int64, __int64, _BYTE *))qword_1400DF8D0)(qword_1400DF700, v7, &v28[8]);
  v8 = 0;
  if ( !((__int64 (__fastcall *)(__int64, _BYTE *))qword_1400DF8D8)(qword_1400DF700, &v28[8]) )
  {
LABEL_31:
    v12 = 0;
    goto LABEL_32;
  }
  v9 = 0LL;
  while ( 1 )
  {
    v10 = ((__int64 (__fastcall *)(__int64, _BYTE *, __int64))qword_1400DF8E0)(qword_1400DF700, &v28[8], v9);
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64))qword_1400DF8B8)(qword_1400DF700, v10) == 2 )
    {
      v11 = *(_QWORD *)(a1 + 416);
      if ( v11 >= (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 384) + 24LL))(*(_QWORD *)(a1 + 384)) )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v1 |= 0xCu;
          v13 = (const wchar_t *)&unk_1400D44E0;
          v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                 a1 + 56,
                                                 v32)
                                  + 16LL);
          if ( v14 )
            v13 = v14;
          v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v30);
          v16 = (const wchar_t *)&unk_1400D44E0;
          v17 = *(const wchar_t **)(*(_QWORD *)v15 + 16LL);
          if ( v17 )
            v16 = v17;
          sub_1400A3320(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            2u,
            0xBu,
            0x11u,
            (__int64)&unk_1400D9D48,
            v16,
            v13,
            (const wchar_t *)qword_14014EC70);
        }
        if ( (v1 & 8) != 0 )
        {
          v18 = v31;
          v1 &= ~8u;
          if ( v31 )
          {
            if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
              if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
            }
          }
        }
        if ( (v1 & 4) != 0 )
        {
          v19 = v33;
          v1 &= ~4u;
          if ( v33 )
          {
            if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
              if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
            }
          }
        }
        goto LABEL_30;
      }
      *(_BYTE *)(a1 + 360) = 1;
      sub_1400B6C40((char *)v39 + 4, 0, 0x6CuLL);
      LODWORD(v39[0]) = 112;
      ((void (__fastcall *)(__int64, __int64, _OWORD *))qword_1400DF8C8)(qword_1400DF700, v10, v39);
      v38[0] = v39[0];
      v38[2] = v39[2];
      v38[1] = v39[1];
      v38[4] = v39[4];
      v38[3] = v39[3];
      v38[6] = v39[6];
      v38[5] = v39[5];
      v12 = sub_140138A9C(a1, v38);
      if ( v12 )
        break;
    }
LABEL_30:
    v9 = ++v8;
    if ( v8 >= (unsigned __int64)((__int64 (__fastcall *)(__int64, _BYTE *))qword_1400DF8D8)(qword_1400DF700, &v28[8]) )
      goto LABEL_31;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    LOBYTE(v1) = v1 | 3;
    v21 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v36);
    v22 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v34);
    v23 = (const wchar_t *)&unk_1400D44E0;
    v24 = (const wchar_t *)&unk_1400D44E0;
    v25 = *(const wchar_t **)(*(_QWORD *)v22 + 16LL);
    if ( v25 )
      v24 = v25;
    if ( *(_QWORD *)(v21 + 16) )
      v23 = *(const wchar_t **)(v21 + 16);
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      2u,
      0xBu,
      0x10u,
      (__int64)&unk_1400D9D48,
      v24,
      v23,
      L"UpdateNsParameters(nsParameters)");
  }
  if ( (v1 & 2) != 0 )
  {
    v26 = v35;
    LOBYTE(v1) = v1 & 0xFD;
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v27 = v37;
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
  }
  sub_140008CA4(a1, (__int64)L"UpdateNsParameters(nsParameters)", 144, 105, v12);
LABEL_32:
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v12;
}
