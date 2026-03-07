__int64 __fastcall sub_1401015C4(__int64 a1)
{
  char v1; // si
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // r14d
  const wchar_t *v7; // r13
  const wchar_t *v8; // r13
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rdi
  volatile signed __int32 *v13; // rdi
  int v14; // r8d
  const wchar_t *v15; // r13
  const wchar_t *v16; // rdi
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  volatile signed __int32 *v19; // rdi
  volatile signed __int32 *v20; // rdi
  const wchar_t *v21; // r13
  const wchar_t *v22; // rdi
  const wchar_t *v23; // rax
  __int64 v24; // rsi
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // rdi
  volatile signed __int32 *v27; // rdi
  __int64 v28; // rbx
  int v29; // eax
  __int64 (__fastcall ***v30)(PVOID); // rax
  __int64 v31; // rax
  __int64 *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rax
  const wchar_t *v35; // r13
  const wchar_t *v36; // rbx
  const wchar_t *v37; // rax
  const wchar_t *v38; // rax
  volatile signed __int32 *v39; // rdi
  volatile signed __int32 *v40; // rdi
  __int64 (__fastcall **v42)(PVOID); // [rsp+58h] [rbp-B0h] BYREF
  PVOID P; // [rsp+68h] [rbp-A0h]
  __int64 v44; // [rsp+70h] [rbp-98h]
  __int64 v45; // [rsp+78h] [rbp-90h]
  _BYTE v46[8]; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 *v47; // [rsp+88h] [rbp-80h]
  _BYTE v48[8]; // [rsp+90h] [rbp-78h] BYREF
  volatile signed __int32 *v49; // [rsp+98h] [rbp-70h]
  _BYTE v50[8]; // [rsp+A0h] [rbp-68h] BYREF
  volatile signed __int32 *v51; // [rsp+A8h] [rbp-60h]
  _BYTE v52[8]; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v53; // [rsp+B8h] [rbp-50h]
  _BYTE v54[8]; // [rsp+C0h] [rbp-48h] BYREF
  volatile signed __int32 *v55; // [rsp+C8h] [rbp-40h]
  _BYTE v56[8]; // [rsp+D0h] [rbp-38h] BYREF
  volatile signed __int32 *v57; // [rsp+D8h] [rbp-30h]
  _BYTE v58[8]; // [rsp+E0h] [rbp-28h] BYREF
  volatile signed __int32 *v59; // [rsp+E8h] [rbp-20h]
  _BYTE v60[8]; // [rsp+F0h] [rbp-18h] BYREF
  volatile signed __int32 *v61; // [rsp+F8h] [rbp-10h]
  __int64 (__fastcall **v62)(PVOID); // [rsp+100h] [rbp-8h] BYREF
  PVOID v63; // [rsp+110h] [rbp+8h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareWolPatterns::EvtD0Entry", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 448) + 112LL))(*(_QWORD *)(a1 + 448));
  v6 = sub_140102598(a1);
  if ( v6 )
  {
    v7 = L"UpdateWakeStatus()";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v48)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v46)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0xFu,
        (__int64)&unk_1400D64E8,
        v8,
        v9,
        L"UpdateWakeStatus()");
      v1 = 3;
      v7 = L"UpdateWakeStatus()";
    }
    if ( (v1 & 2) != 0 )
    {
      v12 = v47;
      v1 &= ~2u;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v13 = v49;
      if ( v49 )
      {
        if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    v14 = 130;
LABEL_60:
    sub_14002D6E8(a1, (__int64)v7, v14, 59, v6);
    goto LABEL_84;
  }
  v6 = sub_1401022F4(a1);
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v15 = (const wchar_t *)&unk_1400D44E0;
      v16 = (const wchar_t *)&unk_1400D44E0;
      v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v52)
                              + 16LL);
      if ( v17 )
        v16 = v17;
      v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v50)
                              + 16LL);
      if ( v18 )
        v15 = v18;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0x10u,
        (__int64)&unk_1400D64E8,
        v15,
        v16,
        L"UpdateWakePacketSize()");
      v1 = 12;
    }
    if ( (v1 & 8) != 0 )
    {
      v19 = v51;
      v1 &= ~8u;
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v20 = v53;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    sub_1400080F8(a1, (__int64)L"UpdateWakePacketSize()", 133, 59, v6);
  }
  else
  {
    v6 = sub_14002F684(a1);
    if ( v6 )
    {
      v7 = L"UpdateWakePacket()";
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v21 = (const wchar_t *)&unk_1400D44E0;
        v22 = (const wchar_t *)&unk_1400D44E0;
        v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v54)
                                + 16LL);
        if ( v23 )
          v22 = v23;
        v24 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
        v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v56)
                                + 16LL);
        if ( v25 )
          v21 = v25;
        sub_1400A5E80(v24, 2u, 0xAu, 0x11u, (__int64)&unk_1400D64E8, v22, v21, L"UpdateWakePacket()");
        v1 = 48;
        v7 = L"UpdateWakePacket()";
      }
      if ( (v1 & 0x20) != 0 )
      {
        v26 = v55;
        v1 &= ~0x20u;
        if ( v55 )
        {
          if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
            if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
      }
      if ( (v1 & 0x10) != 0 )
      {
        v27 = v57;
        if ( v57 )
        {
          if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
      }
      v14 = 136;
      goto LABEL_60;
    }
    v28 = *(_QWORD *)(a1 + 416);
    v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 352) + 104LL))(a1 + 352);
    v30 = (__int64 (__fastcall ***)(PVOID))sub_14002FE14((__int64)&v62, v29);
    v31 = sub_14002CE84((__int64)&v42, (__int64)L"D0 Entry, wake by ", v30);
    sub_14006FED0(v28, v31);
    v42 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
    P = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    v62 = &off_1400D41D0;
    if ( v63 )
      ExFreePool(v63);
    v32 = *(__int64 **)(a1 + 480);
    v33 = *v32;
    v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 56) + 8LL))(a1 + 56);
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v33 + 16))(v32, v34);
    if ( v6 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v35 = (const wchar_t *)&unk_1400D44E0;
        v36 = (const wchar_t *)&unk_1400D44E0;
        v37 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v60)
                                + 16LL);
        if ( v37 )
          v36 = v37;
        v38 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v58)
                                + 16LL);
        if ( v38 )
          v35 = v38;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          0xAu,
          0x12u,
          (__int64)&unk_1400D64E8,
          v35,
          v36,
          L"m_receiveGate->Disable(GetName())");
        v1 = -64;
      }
      if ( v1 < 0 )
      {
        v39 = v59;
        v1 &= ~0x80u;
        if ( v59 )
        {
          if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
            if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
          }
        }
      }
      if ( (v1 & 0x40) != 0 )
      {
        v40 = v61;
        if ( v61 )
        {
          if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
            if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
          }
        }
      }
      sub_140008DF0(a1, (__int64)L"m_receiveGate->Disable(GetName())", 140, 59, v6);
    }
    else
    {
      v6 = 0;
    }
  }
LABEL_84:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v6;
}
