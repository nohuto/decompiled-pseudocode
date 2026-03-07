void __fastcall sub_140140584(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // eax
  const wchar_t *v7; // r12
  const wchar_t *v8; // r12
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rsi
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // eax
  const wchar_t *v17; // r12
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rax
  const wchar_t *v20; // rax
  volatile signed __int32 *v21; // rsi
  volatile signed __int32 *v22; // rdi
  __int64 v23; // rsi
  const wchar_t *v24; // rdi
  const wchar_t *v25; // rax
  const wchar_t *v26; // rax
  volatile signed __int32 *v27; // rsi
  volatile signed __int32 *v28; // rdi
  __int64 v29; // rsi
  const wchar_t *v30; // rdi
  const wchar_t *v31; // rax
  const wchar_t *v32; // rax
  volatile signed __int32 *v33; // rsi
  __int64 v34; // rdx
  int v35; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+54h] [rbp-ACh]
  int v37; // [rsp+58h] [rbp-A8h]
  int v38; // [rsp+5Ch] [rbp-A4h]
  __int64 v39; // [rsp+60h] [rbp-A0h]
  __int128 v40; // [rsp+68h] [rbp-98h] BYREF
  __int128 v41; // [rsp+78h] [rbp-88h]
  __int128 v42; // [rsp+88h] [rbp-78h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  _BYTE v44[8]; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v45; // [rsp+A8h] [rbp-58h]
  _BYTE v46[8]; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v47; // [rsp+B8h] [rbp-48h]
  _BYTE v48[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v49; // [rsp+C8h] [rbp-38h]
  _BYTE v50[8]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v51; // [rsp+D8h] [rbp-28h]
  _BYTE v52[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v53; // [rsp+E8h] [rbp-18h]
  _BYTE v54[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v55; // [rsp+F8h] [rbp-8h]
  _BYTE v56[8]; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v57; // [rsp+108h] [rbp+8h]
  _BYTE v58[8]; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v59; // [rsp+118h] [rbp+18h]
  __int64 v60; // [rsp+120h] [rbp+20h] BYREF
  PVOID P; // [rsp+128h] [rbp+28h]
  unsigned int v62; // [rsp+180h] [rbp+80h]
  __int64 v63; // [rsp+188h] [rbp+88h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::ReportAndIndicateWakePacket", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 144LL))(*(_QWORD *)(a1 + 520));
  v7 = (const wchar_t *)v6;
  v62 = v6;
  if ( !v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v46)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v44)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x43u,
        (__int64)&unk_1400D9E10,
        v8,
        v9,
        (const wchar_t *)qword_14014EC70);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v12 = v45;
      v1 &= ~2u;
      if ( v45 )
      {
        if ( !_InterlockedDecrement(v45 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( !_InterlockedDecrement(v12 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v13 = v47;
      if ( v47 )
      {
        if ( !_InterlockedDecrement(v47 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( !_InterlockedDecrement(v13 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    goto LABEL_79;
  }
  v40 = 0LL;
  v43 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x26 )
      LODWORD(v40) = -1;
    else
      LODWORD(v40) = stru_1400DF410.Queue.ListEntry.Flink[19].Flink;
  }
  else
  {
    LODWORD(v40) = 56;
  }
  v14 = *(_QWORD *)(a1 + 520);
  *((_QWORD *)&v41 + 1) = 0x100000001LL;
  v15 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 136LL))(v14);
  sub_14008FE98(&v60, v15);
  v63 = 0LL;
  (*(void (__fastcall **)(__int64, __int128 *, PVOID, const wchar_t *, __int64 *))(qword_1400DF678 + 1544))(
    qword_1400DF6A8,
    &v40,
    P,
    v7,
    &v63);
  v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 104LL))(*(_QWORD *)(a1 + 520));
  if ( v16 == 3 )
  {
    v38 = 0;
    v35 = 24;
    v36 = 65534;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v29 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v7 = (const wchar_t *)&unk_1400D44E0;
      v30 = (const wchar_t *)&unk_1400D44E0;
      v31 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v58)
                              + 16LL);
      if ( v31 )
        v30 = v31;
      v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v56)
                              + 16LL);
      if ( v32 )
        v7 = v32;
      sub_1400A3320(v29, 4u, 0xBu, 0x44u, (__int64)&unk_1400D9E10, v7, v30, (const wchar_t *)qword_14014EC70);
      LODWORD(v7) = v62;
      v1 = 12;
    }
    if ( (v1 & 8) != 0 )
    {
      v33 = v57;
      v1 &= ~8u;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
          if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
        }
      }
    }
    if ( (v1 & 4) == 0 )
      goto LABEL_76;
    v28 = v59;
    goto LABEL_72;
  }
  if ( v16 != 5 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v17 = (const wchar_t *)&unk_1400D44E0;
      v18 = (const wchar_t *)&unk_1400D44E0;
      v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v50)
                              + 16LL);
      if ( v19 )
        v18 = v19;
      v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v48)
                              + 16LL);
      if ( v20 )
        v17 = v20;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x46u,
        (__int64)&unk_1400D9E10,
        v17,
        v18,
        (const wchar_t *)qword_14014EC70);
      v1 = -64;
    }
    if ( v1 < 0 )
    {
      v21 = v49;
      v1 &= ~0x80u;
      if ( v49 )
      {
        if ( !_InterlockedDecrement(v49 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( !_InterlockedDecrement(v21 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    if ( (v1 & 0x40) != 0 )
    {
      v22 = v51;
      if ( v51 )
      {
        if ( !_InterlockedDecrement(v51 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( !_InterlockedDecrement(v22 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    goto LABEL_77;
  }
  v38 = 0;
  v35 = 24;
  v36 = sub_14013FC3C(a1);
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
    v7 = (const wchar_t *)&unk_1400D44E0;
    v24 = (const wchar_t *)&unk_1400D44E0;
    v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v54)
                            + 16LL);
    if ( v25 )
      v24 = v25;
    v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                           a1 + 56,
                                           v52)
                            + 16LL);
    if ( v26 )
      v7 = v26;
    sub_1400A5E80(v23, 4u, 0xBu, 0x45u, (__int64)&unk_1400D9E10, v7, v24, (const wchar_t *)qword_14014EC70);
    LODWORD(v7) = v62;
    v1 = 48;
  }
  if ( (v1 & 0x20) != 0 )
  {
    v27 = v53;
    v1 &= ~0x20u;
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
  }
  if ( (v1 & 0x10) != 0 )
  {
    v28 = v55;
LABEL_72:
    if ( v28 )
    {
      if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
      }
    }
  }
LABEL_76:
  v34 = *(_QWORD *)(a1 + 504);
  v39 = v63;
  v37 = (int)v7;
  ((void (__fastcall *)(__int64, __int64, int *))qword_1400DF7E0)(qword_1400DF700, v34, &v35);
LABEL_77:
  if ( P )
    ExFreePool(P);
LABEL_79:
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
}
