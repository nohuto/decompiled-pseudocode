__int64 __fastcall sub_140120680(__int64 a1, __int64 a2)
{
  char v4; // di
  __int64 *v5; // r15
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  const wchar_t *v10; // rsi
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rsi
  volatile signed __int32 *v15; // rdi
  unsigned int v16; // r12d
  struct _DEVICE_OBJECT *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  const wchar_t *v20; // rsi
  const wchar_t *v21; // rdx
  const wchar_t *v22; // rax
  volatile signed __int32 *v23; // rsi
  volatile signed __int32 *v24; // rdi
  const wchar_t *v25; // rsi
  const wchar_t *v26; // rdi
  const wchar_t *v27; // rax
  const wchar_t *v28; // rax
  volatile signed __int32 *v29; // rsi
  const wchar_t *v30; // rsi
  const wchar_t *v31; // rdi
  const wchar_t *v32; // rax
  const wchar_t *v33; // rax
  volatile signed __int32 *v34; // rsi
  _QWORD v36[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v37; // [rsp+70h] [rbp-98h] BYREF
  __int128 v38; // [rsp+80h] [rbp-88h]
  __int128 v39; // [rsp+90h] [rbp-78h]
  void *v40; // [rsp+A0h] [rbp-68h]
  _BYTE v41[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v42; // [rsp+B0h] [rbp-58h]
  _BYTE v43[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v44; // [rsp+C0h] [rbp-48h]
  _BYTE v45[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v46; // [rsp+D0h] [rbp-38h]
  _BYTE v47[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v48; // [rsp+E0h] [rbp-28h]
  _BYTE v49[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v50; // [rsp+F0h] [rbp-18h]
  _BYTE v51[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v52; // [rsp+100h] [rbp-8h]
  _BYTE v53[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v54; // [rsp+110h] [rbp+8h]
  _BYTE v55[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v56; // [rsp+120h] [rbp+18h]
  int NodeNumber; // [rsp+168h] [rbp+60h] BYREF

  NodeNumber = 0;
  v4 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapter::CreateNetAdapter", a1 - 352);
      if ( v7 )
        v5 = v7;
    }
  }
  v8 = ((__int64 (__fastcall *)(__int64, __int64))qword_1400DF720)(qword_1400DF700, a2);
  v9 = v8;
  if ( !v8 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             v43)
                              + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                             a1 - 296,
                                             v41)
                              + 16LL);
      if ( v13 )
        v10 = v13;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        0xBu,
        0x34u,
        (__int64)&unk_1400D9408,
        v10,
        v11,
        L"netAdapterInit");
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v14 = v42;
      v4 &= ~2u;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v15 = v44;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_140022208(a1 - 352, (__int64)L"netAdapterInit", 349, 100);
    v16 = -1073741801;
    goto LABEL_74;
  }
  v36[1] = sub_140122790;
  v36[0] = 24LL;
  v36[2] = sub_140121A40;
  ((void (__fastcall *)(__int64, __int64, _QWORD *))qword_1400DF730)(qword_1400DF700, v8, v36);
  v37 = 0LL;
  v40 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x26 )
      LODWORD(v37) = -1;
    else
      LODWORD(v37) = stru_1400DF410.Queue.ListEntry.Flink[19].Flink;
  }
  else
  {
    LODWORD(v37) = 56;
  }
  v40 = off_1400DF148;
  *((_QWORD *)&v38 + 1) = 0x100000001LL;
  v16 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, __int64))qword_1400DF738)(
          qword_1400DF700,
          v9,
          &v37,
          a1 + 16);
  ((void (__fastcall *)(__int64, __int64))qword_1400DF728)(qword_1400DF700, v9);
  if ( v16 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v30 = (const wchar_t *)&unk_1400D44E0;
      v31 = (const wchar_t *)&unk_1400D44E0;
      v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             v55)
                              + 16LL);
      if ( v32 )
        v31 = v32;
      v33 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                             a1 - 296,
                                             v53)
                              + 16LL);
      if ( v33 )
        v30 = v33;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        0xBu,
        0x37u,
        (__int64)&unk_1400D9408,
        v30,
        v31,
        (const wchar_t *)qword_14014EC70);
      v4 = -64;
    }
    if ( v4 < 0 )
    {
      v34 = v54;
      v4 &= ~0x80u;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
    if ( (v4 & 0x40) != 0 )
    {
      v24 = v56;
      goto LABEL_70;
    }
  }
  else
  {
    *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, void *))(qword_1400DF678 + 1616))(
                 qword_1400DF6A8,
                 *(_QWORD *)(a1 + 16),
                 off_1400DF148) = a1 - 352;
    LOWORD(NodeNumber) = 0;
    v17 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(__int64, __int64))(qword_1400DF678 + 264))(
                                     qword_1400DF6A8,
                                     a2);
    if ( IoGetDeviceNumaNode(v17, (PUSHORT)&NodeNumber) )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v25 = (const wchar_t *)&unk_1400D44E0;
        v26 = (const wchar_t *)&unk_1400D44E0;
        v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               v49)
                                + 16LL);
        if ( v27 )
          v26 = v27;
        v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v51)
                                + 16LL);
        if ( v28 )
          v25 = v28;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          4u,
          0xBu,
          0x36u,
          (__int64)&unk_1400D9408,
          v26,
          v25,
          (const wchar_t *)qword_14014EC70);
        v4 = 48;
      }
      if ( (v4 & 0x20) != 0 )
      {
        v29 = v50;
        v4 &= ~0x20u;
        if ( v50 )
        {
          if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
            if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
          }
        }
      }
      if ( (v4 & 0x10) != 0 )
      {
        v24 = v52;
        goto LABEL_70;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 24) = (unsigned __int16)NodeNumber;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v18 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(a1 - 296, v47);
        v19 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v45);
        v20 = (const wchar_t *)&unk_1400D44E0;
        v21 = (const wchar_t *)&unk_1400D44E0;
        v22 = *(const wchar_t **)(*(_QWORD *)v19 + 16LL);
        if ( v22 )
          v21 = v22;
        if ( *(_QWORD *)(v18 + 16) )
          v20 = *(const wchar_t **)(v18 + 16);
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          4u,
          0xBu,
          0x35u,
          (__int64)&unk_1400D9408,
          v21,
          v20,
          (const wchar_t *)qword_14014EC70);
        v4 = 12;
      }
      if ( (v4 & 8) != 0 )
      {
        v23 = v46;
        v4 &= ~8u;
        if ( v46 )
        {
          if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
            if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
          }
        }
      }
      if ( (v4 & 4) != 0 )
      {
        v24 = v48;
LABEL_70:
        if ( v24 )
        {
          if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
            if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
          }
        }
      }
    }
  }
LABEL_74:
  if ( v5 )
  {
    sub_140075108(v5);
    ExFreePool(v5);
  }
  return v16;
}
