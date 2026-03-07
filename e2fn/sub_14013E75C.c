__int64 __fastcall sub_14013E75C(__int64 a1)
{
  char v2; // r14
  __int64 *v3; // r13
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  char v6; // di
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  const wchar_t *v10; // r8
  const wchar_t *v11; // rdx
  const wchar_t *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  unsigned int v15; // r12d
  __int64 v16; // rsi
  __int64 v17; // rdi
  const wchar_t *v18; // rax
  const wchar_t *v19; // rcx
  const wchar_t *v20; // r10
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  const wchar_t *v23; // rdi
  const wchar_t *v24; // rax
  __int64 v25; // rax
  const wchar_t *v26; // rdx
  const wchar_t *v27; // rax
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  __int64 v30; // rbx
  __int64 *v31; // rax
  const wchar_t *v32; // r8
  const wchar_t *v33; // rdx
  __int64 v34; // rax
  volatile signed __int32 *v35; // rbx
  volatile signed __int32 *v36; // rbx
  __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v39; // [rsp+60h] [rbp-A8h]
  __int64 (__fastcall **v40)(PVOID); // [rsp+68h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-98h]
  PVOID P; // [rsp+78h] [rbp-90h]
  __int64 v43; // [rsp+80h] [rbp-88h]
  __int64 v44; // [rsp+88h] [rbp-80h]
  _BYTE v45[8]; // [rsp+90h] [rbp-78h] BYREF
  volatile signed __int32 *v46; // [rsp+98h] [rbp-70h]
  _BYTE v47[8]; // [rsp+A0h] [rbp-68h] BYREF
  volatile signed __int32 *v48; // [rsp+A8h] [rbp-60h]
  _BYTE v49[8]; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v50; // [rsp+B8h] [rbp-50h]
  _BYTE v51[8]; // [rsp+C0h] [rbp-48h] BYREF
  volatile signed __int32 *v52; // [rsp+C8h] [rbp-40h]
  _BYTE v53[8]; // [rsp+D0h] [rbp-38h] BYREF
  volatile signed __int32 *v54; // [rsp+D8h] [rbp-30h]
  _BYTE v55[8]; // [rsp+E0h] [rbp-28h] BYREF
  volatile signed __int32 *v56; // [rsp+E8h] [rbp-20h]
  _BYTE v57[8]; // [rsp+F0h] [rbp-18h] BYREF
  volatile signed __int32 *v58; // [rsp+F8h] [rbp-10h]
  _BYTE v59[8]; // [rsp+100h] [rbp-8h] BYREF
  volatile signed __int32 *v60; // [rsp+108h] [rbp+0h]
  int v61; // [rsp+148h] [rbp+40h] BYREF

  v61 = 0;
  v2 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::EvtDeviceArmWakeFromS5", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  LOWORD(v41) = 0;
  v40 = &off_1400D41D0;
  P = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  sub_1400011A8(&v40, (__int64)L"WakeOnMagicPacketFromS5", 0x17uLL);
  sub_1400A27D4(&v38, (__int64 *)(a1 + 112));
  v6 = sub_14003E2F0(v38, (__int64)&v40, v38 + 16);
  if ( v39 )
  {
    if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
    {
      v7 = v39;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
    }
  }
  if ( P )
    ExFreePool(P);
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v47);
      v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v45);
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)v9 + 16LL);
      if ( v12 )
        v10 = v12;
      if ( *(_QWORD *)(v8 + 16) )
        v11 = *(const wchar_t **)(v8 + 16);
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xBu,
        0x1Du,
        (__int64)&unk_1400D9E10,
        v10,
        v11,
        (const wchar_t *)qword_14014EC70);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v13 = v46;
      v2 &= ~2u;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v14 = v48;
      v2 &= ~1u;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 8LL))(*(_QWORD *)(a1 + 520));
    if ( v15 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v2 |= 0xCu;
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
        v17 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v49);
        v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v51)
                                + 16LL);
        v19 = (const wchar_t *)&unk_1400D44E0;
        v20 = (const wchar_t *)&unk_1400D44E0;
        if ( v18 )
          v20 = v18;
        if ( *(_QWORD *)(v17 + 16) )
          v19 = *(const wchar_t **)(v17 + 16);
        sub_1400A5E80(
          v16,
          2u,
          0xBu,
          0x1Eu,
          (__int64)&unk_1400D9E10,
          v19,
          v20,
          L"m_hardwareWolPatterns->EnableWakeFromMagicPacket()");
      }
      if ( (v2 & 8) != 0 )
      {
        v21 = v50;
        v2 &= ~8u;
        if ( v50 )
        {
          if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v22 = v52;
        if ( v52 )
        {
          if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
      }
      sub_14000F3C4(a1, (__int64)L"m_hardwareWolPatterns->EnableWakeFromMagicPacket()", 290, 113, v15);
      goto LABEL_83;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v23 = (const wchar_t *)&unk_1400D44E0;
      v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v55)
                              + 16LL);
      if ( v24 )
        v23 = v24;
      v25 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v53);
      v26 = (const wchar_t *)&unk_1400D44E0;
      v27 = *(const wchar_t **)(*(_QWORD *)v25 + 16LL);
      if ( v27 )
        v26 = v27;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xBu,
        0x1Fu,
        (__int64)&unk_1400D9E10,
        v26,
        v23,
        (const wchar_t *)qword_14014EC70);
      v2 = 48;
    }
    if ( (v2 & 0x20) != 0 )
    {
      v28 = v54;
      v2 &= ~0x20u;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      v29 = v56;
      v2 &= ~0x10u;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 16LL))(*(_QWORD *)(a1 + 520));
  }
  v61 = 0;
  v15 = sub_14013FB80(a1, &v61);
  if ( v15 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v2 |= 0xC0u;
      v30 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v59);
      v31 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v57);
      v32 = (const wchar_t *)&unk_1400D44E0;
      v33 = (const wchar_t *)&unk_1400D44E0;
      v34 = *v31;
      if ( *(_QWORD *)(v30 + 16) )
        v33 = *(const wchar_t **)(v30 + 16);
      if ( *(_QWORD *)(v34 + 16) )
        v32 = *(const wchar_t **)(v34 + 16);
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x20u,
        (__int64)&unk_1400D9E10,
        v32,
        v33,
        L"GetArmedWakes(armedWakes)");
    }
    if ( v2 < 0 )
    {
      v35 = v58;
      v2 &= ~0x80u;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
          if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
        }
      }
    }
    if ( (v2 & 0x40) != 0 )
    {
      v36 = v60;
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
          if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
        }
      }
    }
    sub_140008390(a1, (__int64)L"GetArmedWakes(armedWakes)", 299, 113, v15);
  }
  else
  {
    sub_14014C534(*(_QWORD *)(a1 + 568), &v61);
    v15 = 0;
  }
LABEL_83:
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v15;
}
