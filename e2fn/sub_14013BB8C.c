__int64 __fastcall sub_14013BB8C(__int64 a1)
{
  __int16 v1; // r14
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  const wchar_t *v6; // rdi
  const wchar_t *v7; // rax
  __int64 v8; // rax
  const wchar_t *v9; // rdx
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  int v13; // ebx
  unsigned int v14; // r15d
  const wchar_t *v15; // rax
  __int64 v16; // rax
  const wchar_t *v17; // rdx
  const wchar_t *v18; // rax
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  const wchar_t *v21; // rax
  __int64 v22; // rax
  const wchar_t *v23; // rdx
  const wchar_t *v24; // r12
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  int v28; // r8d
  const wchar_t *v29; // rax
  __int64 v30; // rax
  const wchar_t *v31; // rdx
  const wchar_t *v32; // rax
  volatile signed __int32 *v33; // rbx
  volatile signed __int32 *v34; // rbx
  const wchar_t *v35; // rsi
  const wchar_t *v36; // rdi
  const wchar_t *v37; // rax
  const wchar_t *v38; // rax
  volatile signed __int32 *v39; // rbx
  volatile signed __int32 *v40; // rbx
  char v42[8]; // [rsp+58h] [rbp-69h] BYREF
  volatile signed __int32 *v43; // [rsp+60h] [rbp-61h]
  char v44[8]; // [rsp+68h] [rbp-59h] BYREF
  volatile signed __int32 *v45; // [rsp+70h] [rbp-51h]
  char v46[8]; // [rsp+78h] [rbp-49h] BYREF
  volatile signed __int32 *v47; // [rsp+80h] [rbp-41h]
  char v48[8]; // [rsp+88h] [rbp-39h] BYREF
  volatile signed __int32 *v49; // [rsp+90h] [rbp-31h]
  char v50[8]; // [rsp+98h] [rbp-29h] BYREF
  volatile signed __int32 *v51; // [rsp+A0h] [rbp-21h]
  char v52[8]; // [rsp+A8h] [rbp-19h] BYREF
  volatile signed __int32 *v53; // [rsp+B0h] [rbp-11h]
  char v54[8]; // [rsp+B8h] [rbp-9h] BYREF
  volatile signed __int32 *v55; // [rsp+C0h] [rbp-1h]
  char v56[8]; // [rsp+C8h] [rbp+7h] BYREF
  volatile signed __int32 *v57; // [rsp+D0h] [rbp+Fh]
  char v58[8]; // [rsp+D8h] [rbp+17h] BYREF
  volatile signed __int32 *v59; // [rsp+E0h] [rbp+1Fh]
  char v60[8]; // [rsp+E8h] [rbp+27h] BYREF
  volatile signed __int32 *v61; // [rsp+F0h] [rbp+2Fh]
  __int64 *P; // [rsp+128h] [rbp+67h]

  v1 = 0;
  v2 = 0LL;
  P = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::ArmWakeFromPacketFilter", a1);
      if ( v5 )
        v2 = v5;
      P = v2;
    }
  }
  if ( !*(_BYTE *)(a1 + 363) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v35 = (const wchar_t *)&unk_1400D44E0;
      v36 = (const wchar_t *)&unk_1400D44E0;
      v37 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v60)
                              + 16LL);
      if ( v37 )
        v36 = v37;
      v38 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v58)
                              + 16LL);
      if ( v38 )
        v35 = v38;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xBu,
        0x2Bu,
        (__int64)&unk_1400D9E10,
        v35,
        v36,
        (const wchar_t *)qword_14014EC70);
      v1 = 768;
    }
    if ( (v1 & 0x200) != 0 )
    {
      v39 = v59;
      v1 &= ~0x200u;
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
    if ( (v1 & 0x100) != 0 )
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
    goto LABEL_100;
  }
  v6 = (const wchar_t *)&unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v7 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                          a1 + 56,
                                          v44)
                           + 16LL);
    if ( v7 )
      v6 = v7;
    v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v42);
    v9 = (const wchar_t *)&unk_1400D44E0;
    v10 = *(const wchar_t **)(*(_QWORD *)v8 + 16LL);
    if ( v10 )
      v9 = v10;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x27u,
      (__int64)&unk_1400D9E10,
      v9,
      v6,
      (const wchar_t *)qword_14014EC70);
    LOBYTE(v1) = 3;
    v6 = (const wchar_t *)&unk_1400D44E0;
  }
  if ( (v1 & 2) != 0 )
  {
    v11 = v43;
    LOBYTE(v1) = v1 & 0xFD;
    if ( v43 )
    {
      if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v12 = v45;
    LOBYTE(v1) = v1 & 0xFE;
    if ( v45 )
    {
      if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  v13 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 32LL))(*(_QWORD *)(a1 + 552));
  if ( (v13 & 1) == 0
    || (v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 40LL))(*(_QWORD *)(a1 + 520))) == 0 )
  {
    if ( (v13 & 2) != 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 56LL))(*(_QWORD *)(a1 + 520));
      if ( v14 )
      {
        if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
        {
          v24 = L"m_hardwareWolPatterns->EnableWakeFromMulticastPacket()";
        }
        else
        {
          LOBYTE(v1) = v1 | 0x30;
          v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                 a1 + 56,
                                                 v52)
                                  + 16LL);
          if ( v21 )
            v6 = v21;
          v22 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v50);
          v23 = (const wchar_t *)&unk_1400D44E0;
          v24 = L"m_hardwareWolPatterns->EnableWakeFromMulticastPacket()";
          v25 = *(const wchar_t **)(*(_QWORD *)v22 + 16LL);
          if ( v25 )
            v23 = v25;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            2u,
            0xBu,
            0x29u,
            (__int64)&unk_1400D9E10,
            v23,
            v6,
            L"m_hardwareWolPatterns->EnableWakeFromMulticastPacket()");
        }
        if ( (v1 & 0x20) != 0 )
        {
          v26 = v51;
          LOBYTE(v1) = v1 & 0xDF;
          if ( v51 )
          {
            if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
              if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
            }
          }
        }
        if ( (v1 & 0x10) != 0 )
        {
          v27 = v53;
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
        v28 = 370;
LABEL_83:
        sub_1400143F0(a1, (__int64)v24, v28, 113, v14);
        goto LABEL_101;
      }
    }
    if ( (v13 & 8) != 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 72LL))(*(_QWORD *)(a1 + 520));
      if ( v14 )
      {
        if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
        {
          v24 = L"m_hardwareWolPatterns->EnableWakeFromBroadcastPacket()";
        }
        else
        {
          LOBYTE(v1) = v1 | 0xC0;
          v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                 a1 + 56,
                                                 v56)
                                  + 16LL);
          if ( v29 )
            v6 = v29;
          v30 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v54);
          v31 = (const wchar_t *)&unk_1400D44E0;
          v24 = L"m_hardwareWolPatterns->EnableWakeFromBroadcastPacket()";
          v32 = *(const wchar_t **)(*(_QWORD *)v30 + 16LL);
          if ( v32 )
            v31 = v32;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            2u,
            0xBu,
            0x2Au,
            (__int64)&unk_1400D9E10,
            v31,
            v6,
            L"m_hardwareWolPatterns->EnableWakeFromBroadcastPacket()");
        }
        if ( (v1 & 0x80u) != 0 )
        {
          v33 = v55;
          LOBYTE(v1) = v1 & 0x7F;
          if ( v55 )
          {
            if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
              if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
            }
          }
        }
        if ( (v1 & 0x40) != 0 )
        {
          v34 = v57;
          if ( v57 )
          {
            if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
              if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
            }
          }
        }
        v28 = 375;
        goto LABEL_83;
      }
    }
LABEL_100:
    v14 = 0;
    goto LABEL_101;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    LOBYTE(v1) = v1 | 0xC;
    v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v48)
                            + 16LL);
    if ( v15 )
      v6 = v15;
    v16 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v46);
    v17 = (const wchar_t *)&unk_1400D44E0;
    v18 = *(const wchar_t **)(*(_QWORD *)v16 + 16LL);
    if ( v18 )
      v17 = v18;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      2u,
      0xBu,
      0x28u,
      (__int64)&unk_1400D9E10,
      v17,
      v6,
      L"m_hardwareWolPatterns->EnableWakeFromUnicastPacket()");
  }
  if ( (v1 & 8) != 0 )
  {
    v19 = v47;
    LOBYTE(v1) = v1 & 0xF7;
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
  }
  if ( (v1 & 4) != 0 )
  {
    v20 = v49;
    if ( v49 )
    {
      if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
  }
  sub_14000D660(a1, (__int64)L"m_hardwareWolPatterns->EnableWakeFromUnicastPacket()", 365, 113, v14);
LABEL_101:
  if ( P )
  {
    sub_140075108(P);
    ExFreePool(P);
  }
  return v14;
}
