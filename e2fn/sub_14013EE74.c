__int64 __fastcall sub_14013EE74(__int64 a1)
{
  const wchar_t *v1; // rdi
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // r14d
  const wchar_t *v7; // r13
  const wchar_t *v8; // rax
  const wchar_t *v9; // rax
  volatile signed __int32 *v10; // rsi
  volatile signed __int32 *v11; // rdi
  const wchar_t *v12; // r13
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rsi
  volatile signed __int32 *v16; // rdi
  const wchar_t *v17; // r13
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  volatile signed __int32 *v20; // rsi
  volatile signed __int32 *v21; // rdi
  const wchar_t *v22; // rsi
  const wchar_t *v23; // r13
  const wchar_t *v24; // rax
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // rsi
  volatile signed __int32 *v27; // rdi
  int v28; // r8d
  const wchar_t *v29; // r13
  const wchar_t *v30; // rax
  __int64 v31; // rsi
  const wchar_t *v32; // rax
  volatile signed __int32 *v33; // rsi
  volatile signed __int32 *v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rax
  const wchar_t *v37; // r13
  const wchar_t *v38; // rdx
  const wchar_t *v39; // rax
  volatile signed __int32 *v40; // rsi
  volatile signed __int32 *v41; // rdi
  __int64 v43; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v44; // [rsp+60h] [rbp-A8h]
  __int64 v45; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v46; // [rsp+70h] [rbp-98h]
  __int64 v47; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v48; // [rsp+80h] [rbp-88h]
  _BYTE v49[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v50; // [rsp+90h] [rbp-78h]
  _BYTE v51[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v52; // [rsp+A0h] [rbp-68h]
  _BYTE v53[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v54; // [rsp+B0h] [rbp-58h]
  _BYTE v55[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v56; // [rsp+C0h] [rbp-48h]
  _BYTE v57[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v58; // [rsp+D0h] [rbp-38h]
  _BYTE v59[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v60; // [rsp+E0h] [rbp-28h]
  _BYTE v61[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v62; // [rsp+F0h] [rbp-18h]
  _BYTE v63[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v64; // [rsp+100h] [rbp-8h]
  _BYTE v65[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v66; // [rsp+110h] [rbp+8h]
  int v67; // [rsp+148h] [rbp+40h] BYREF

  LOWORD(v1) = 0;
  v67 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::EvtDeviceArmWakeFromSx", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 536) + 40LL))(*(_QWORD *)(a1 + 536), a1 + 584);
  v6 = sub_14013FD04(a1);
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = (const wchar_t *)&unk_1400D44E0;
      v1 = (const wchar_t *)&unk_1400D44E0;
      v8 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                            a1 + 56,
                                            &v45)
                             + 16LL);
      if ( v8 )
        v1 = v8;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                            a1 + 56,
                                            &v43)
                             + 16LL);
      if ( v9 )
        v7 = v9;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x17u,
        (__int64)&unk_1400D9E10,
        v7,
        v1,
        L"GetWolParametersFromNetAdapter()");
      LOBYTE(v1) = 3;
    }
    if ( ((unsigned __int8)v1 & 2) != 0 )
    {
      v10 = v44;
      LOBYTE(v1) = (unsigned __int8)v1 & 0xFD;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
    }
    if ( ((unsigned __int8)v1 & 1) != 0 )
    {
      v11 = v46;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    sub_140008CA4(a1, (__int64)L"GetWolParametersFromNetAdapter()", 258, 113, v6);
    goto LABEL_118;
  }
  v6 = sub_14013B6C8(a1);
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = (const wchar_t *)&unk_1400D44E0;
      v1 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             &v47)
                              + 16LL);
      if ( v13 )
        v1 = v13;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v49)
                              + 16LL);
      if ( v14 )
        v12 = v14;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x18u,
        (__int64)&unk_1400D9E10,
        v1,
        v12,
        L"ArmWakeFromMagicPacket()");
      LOBYTE(v1) = 12;
    }
    if ( ((unsigned __int8)v1 & 8) != 0 )
    {
      v15 = v48;
      LOBYTE(v1) = (unsigned __int8)v1 & 0xF7;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( ((unsigned __int8)v1 & 4) != 0 )
    {
      v16 = v50;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    sub_140008244(a1, (__int64)L"ArmWakeFromMagicPacket()", 261, 113, v6);
    goto LABEL_118;
  }
  v6 = sub_14013B1CC(a1);
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v17 = (const wchar_t *)&unk_1400D44E0;
      v1 = (const wchar_t *)&unk_1400D44E0;
      v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v53)
                              + 16LL);
      if ( v18 )
        v1 = v18;
      v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v51)
                              + 16LL);
      if ( v19 )
        v17 = v19;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x19u,
        (__int64)&unk_1400D9E10,
        v17,
        v1,
        L"ArmWakeFromLinkStatusChange()");
      LOBYTE(v1) = 48;
    }
    if ( ((unsigned __int8)v1 & 0x20) != 0 )
    {
      v20 = v52;
      LOBYTE(v1) = (unsigned __int8)v1 & 0xDF;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    if ( ((unsigned __int8)v1 & 0x10) != 0 )
    {
      v21 = v54;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    sub_1400088C0(a1, (__int64)L"ArmWakeFromLinkStatusChange()", 263, 113, v6);
    goto LABEL_118;
  }
  v6 = sub_14013BB8C(a1);
  if ( v6 )
  {
    v22 = L"ArmWakeFromPacketFilter()";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v23 = (const wchar_t *)&unk_1400D44E0;
      v1 = (const wchar_t *)&unk_1400D44E0;
      v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v57)
                              + 16LL);
      if ( v24 )
        v1 = v24;
      v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v55)
                              + 16LL);
      if ( v25 )
        v23 = v25;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x1Au,
        (__int64)&unk_1400D9E10,
        v23,
        v1,
        L"ArmWakeFromPacketFilter()");
      LOBYTE(v1) = -64;
    }
    if ( (char)v1 < 0 )
    {
      v26 = v56;
      LOBYTE(v1) = (unsigned __int8)v1 & 0x7F;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
      v22 = L"ArmWakeFromPacketFilter()";
    }
    if ( ((unsigned __int8)v1 & 0x40) != 0 )
    {
      v27 = v58;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    v28 = 265;
    goto LABEL_116;
  }
  v6 = sub_14013ACF4(a1);
  if ( !v6 )
  {
    sub_140091144((_QWORD *)a1);
    v67 = 0;
    v6 = sub_14013FB80(a1, &v67);
    if ( !v6 )
    {
      sub_14014C69C(*(_QWORD *)(a1 + 568), &v67);
      v6 = 0;
      goto LABEL_118;
    }
    v22 = L"GetArmedWakes(armedWakes)";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v35 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v65);
      v36 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v63);
      v37 = (const wchar_t *)&unk_1400D44E0;
      v38 = (const wchar_t *)&unk_1400D44E0;
      v39 = *(const wchar_t **)(*(_QWORD *)v36 + 16LL);
      if ( v39 )
        v38 = v39;
      if ( *(_QWORD *)(v35 + 16) )
        v37 = *(const wchar_t **)(v35 + 16);
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x1Cu,
        (__int64)&unk_1400D9E10,
        v38,
        v37,
        L"GetArmedWakes(armedWakes)");
      LOWORD(v1) = 3072;
    }
    if ( ((unsigned __int16)v1 & 0x800) != 0 )
    {
      v40 = v64;
      LOWORD(v1) = (unsigned __int16)v1 & 0xF7FF;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
      v22 = L"GetArmedWakes(armedWakes)";
    }
    if ( ((unsigned __int16)v1 & 0x400) != 0 )
    {
      v41 = v66;
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    v28 = 272;
LABEL_116:
    sub_140008390(a1, (__int64)v22, v28, 113, v6);
    goto LABEL_118;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v29 = (const wchar_t *)&unk_1400D44E0;
    v1 = (const wchar_t *)&unk_1400D44E0;
    v30 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                           a1 + 56,
                                           v59)
                            + 16LL);
    if ( v30 )
      v1 = v30;
    v31 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
    v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v61)
                            + 16LL);
    if ( v32 )
      v29 = v32;
    sub_1400A5E80(v31, 2u, 0xBu, 0x1Bu, (__int64)&unk_1400D9E10, v1, v29, L"ArmWakeFromBitmapPatterns()");
    LOWORD(v1) = 768;
  }
  if ( ((unsigned __int16)v1 & 0x200) != 0 )
  {
    v33 = v60;
    LOWORD(v1) = (unsigned __int16)v1 & 0xFDFF;
    if ( v60 )
    {
      if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
      }
    }
  }
  if ( ((unsigned __int16)v1 & 0x100) != 0 )
  {
    v34 = v62;
    if ( v62 )
    {
      if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
      }
    }
  }
  sub_140008628(a1, (__int64)L"ArmWakeFromBitmapPatterns()", 267, 113, v6);
LABEL_118:
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v6;
}
