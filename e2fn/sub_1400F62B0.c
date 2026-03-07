__int64 __fastcall sub_1400F62B0(__int64 a1)
{
  const wchar_t *v1; // rdi
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // r15
  unsigned int v7; // r14d
  const wchar_t *v8; // r13
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rsi
  volatile signed __int32 *v12; // rdi
  const wchar_t *v13; // r13
  const wchar_t *v14; // rax
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rsi
  volatile signed __int32 *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  const wchar_t *v20; // r13
  __int64 v21; // rcx
  const wchar_t *v22; // rax
  __int64 v23; // rsi
  const wchar_t *v24; // rax
  volatile signed __int32 *v25; // rsi
  volatile signed __int32 *v26; // rdi
  const wchar_t *v27; // r13
  const wchar_t *v28; // rax
  const wchar_t *v29; // rax
  volatile signed __int32 *v30; // rsi
  volatile signed __int32 *v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rax
  const wchar_t *v34; // r13
  __int64 v35; // rcx
  const wchar_t *v36; // rax
  __int64 v37; // rsi
  const wchar_t *v38; // rax
  volatile signed __int32 *v39; // rsi
  volatile signed __int32 *v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rax
  const wchar_t *v43; // r13
  const wchar_t *v44; // rdx
  const wchar_t *v45; // rax
  volatile signed __int32 *v46; // rsi
  volatile signed __int32 *v47; // rdi
  __int64 v49; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v50; // [rsp+60h] [rbp-A8h]
  __int64 v51; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v52; // [rsp+70h] [rbp-98h]
  __int64 v53; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v54; // [rsp+80h] [rbp-88h]
  _BYTE v55[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v56; // [rsp+90h] [rbp-78h]
  _BYTE v57[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v58; // [rsp+A0h] [rbp-68h]
  _BYTE v59[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v60; // [rsp+B0h] [rbp-58h]
  _BYTE v61[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v62; // [rsp+C0h] [rbp-48h]
  _BYTE v63[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v64; // [rsp+D0h] [rbp-38h]
  _BYTE v65[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v66; // [rsp+E0h] [rbp-28h]
  _BYTE v67[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v68; // [rsp+F0h] [rbp-18h]
  _BYTE v69[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v70; // [rsp+100h] [rbp-8h]
  _BYTE v71[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v72; // [rsp+110h] [rbp+8h]

  LOWORD(v1) = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareTxQueue::Start", a1 - 496);
      if ( v5 )
        v3 = v5;
    }
  }
  *(_DWORD *)(a1 - 16) = 0;
  v6 = a1 - 496;
  *(_DWORD *)(a1 - 12) = 0;
  *(_DWORD *)(a1 - 8) = 0;
  v7 = sub_1400F6D40(a1 - 496);
  if ( v7 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v1 = (const wchar_t *)&unk_1400D44E0;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                            a1 - 440,
                                            &v51)
                             + 16LL);
      if ( v9 )
        v1 = v9;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 440) + 24LL))(
                                             a1 - 440,
                                             &v49)
                              + 16LL);
      if ( v10 )
        v8 = v10;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        2u,
        0xAu,
        0xDu,
        (__int64)&unk_1400D52E0,
        v8,
        v1,
        L"WriteToHwDescriptorBaseAddress()");
      LOBYTE(v1) = 3;
    }
    if ( ((unsigned __int8)v1 & 2) != 0 )
    {
      v11 = v50;
      LOBYTE(v1) = (unsigned __int8)v1 & 0xFD;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    if ( ((unsigned __int8)v1 & 1) != 0 )
    {
      v12 = v52;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    sub_140008CA4(v6, (__int64)L"WriteToHwDescriptorBaseAddress()", 104, 58, v7);
  }
  else
  {
    v7 = sub_1400F714C(a1 - 496);
    if ( v7 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v13 = (const wchar_t *)&unk_1400D44E0;
        v1 = (const wchar_t *)&unk_1400D44E0;
        v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                               a1 - 440,
                                               v55)
                                + 16LL);
        if ( v14 )
          v1 = v14;
        v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 440) + 24LL))(
                                               a1 - 440,
                                               &v53)
                                + 16LL);
        if ( v15 )
          v13 = v15;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
          2u,
          0xAu,
          0xEu,
          (__int64)&unk_1400D52E0,
          v13,
          v1,
          L"WriteToHwDescriptorLength()");
        LOBYTE(v1) = 12;
      }
      if ( ((unsigned __int8)v1 & 8) != 0 )
      {
        v16 = v54;
        LOBYTE(v1) = (unsigned __int8)v1 & 0xF7;
        if ( v54 )
        {
          if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
            if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
          }
        }
      }
      if ( ((unsigned __int8)v1 & 4) != 0 )
      {
        v17 = v56;
        if ( v56 )
        {
          if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
            if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
          }
        }
      }
      sub_140008628(v6, (__int64)L"WriteToHwDescriptorLength()", 105, 58, v7);
    }
    else
    {
      v7 = sub_1400F5EF8(a1 - 496);
      if ( v7 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v18 = a1 - 440;
          v19 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(a1 - 440, v59);
          v20 = (const wchar_t *)&unk_1400D44E0;
          v21 = a1 - 440;
          v1 = (const wchar_t *)&unk_1400D44E0;
          v22 = *(const wchar_t **)(*(_QWORD *)v19 + 16LL);
          if ( v22 )
            v1 = v22;
          v23 = *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL);
          v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 24LL))(
                                                 v21,
                                                 v57)
                                  + 16LL);
          if ( v24 )
            v20 = v24;
          sub_1400A5E80(v23, 2u, 0xAu, 0xFu, (__int64)&unk_1400D52E0, v20, v1, L"SetWriteBackThreshold()");
          LOBYTE(v1) = 48;
        }
        if ( ((unsigned __int8)v1 & 0x20) != 0 )
        {
          v25 = v58;
          LOBYTE(v1) = (unsigned __int8)v1 & 0xDF;
          if ( v58 )
          {
            if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
              if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
            }
          }
        }
        if ( ((unsigned __int8)v1 & 0x10) != 0 )
        {
          v26 = v60;
          if ( v60 )
          {
            if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
              if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
            }
          }
        }
        sub_1400112A0(v6, (__int64)L"SetWriteBackThreshold()", 106, 58, v7);
      }
      else
      {
        v7 = sub_14012E524(a1 - 496, 0LL);
        if ( v7 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v27 = (const wchar_t *)&unk_1400D44E0;
            v1 = (const wchar_t *)&unk_1400D44E0;
            v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440)
                                                                                             + 16LL))(
                                                   a1 - 440,
                                                   v63)
                                    + 16LL);
            if ( v28 )
              v1 = v28;
            v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440)
                                                                                             + 24LL))(
                                                   a1 - 440,
                                                   v61)
                                    + 16LL);
            if ( v29 )
              v27 = v29;
            sub_1400A5E80(
              *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
              2u,
              0xAu,
              0x10u,
              (__int64)&unk_1400D52E0,
              v27,
              v1,
              L"WriteToHwDescriptorHead(0)");
            LOBYTE(v1) = -64;
          }
          if ( (char)v1 < 0 )
          {
            v30 = v62;
            LOBYTE(v1) = (unsigned __int8)v1 & 0x7F;
            if ( v62 )
            {
              if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
                if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
              }
            }
          }
          if ( ((unsigned __int8)v1 & 0x40) != 0 )
          {
            v31 = v64;
            if ( v64 )
            {
              if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
                if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
              }
            }
          }
          sub_1400084DC(v6, (__int64)L"WriteToHwDescriptorHead(0)", 107, 58, v7);
        }
        else
        {
          sub_14007C1CC(a1 - 496, 0);
          v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(a1 - 496);
          if ( v7 )
          {
            if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            {
              v32 = a1 - 440;
              v33 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v65);
              v34 = (const wchar_t *)&unk_1400D44E0;
              v35 = a1 - 440;
              v1 = (const wchar_t *)&unk_1400D44E0;
              v36 = *(const wchar_t **)(*(_QWORD *)v33 + 16LL);
              if ( v36 )
                v1 = v36;
              v37 = *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL);
              v38 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v32 + 16LL))(
                                                     v35,
                                                     v67)
                                      + 16LL);
              if ( v38 )
                v34 = v38;
              sub_1400A5E80(v37, 2u, 0xAu, 0x11u, (__int64)&unk_1400D52E0, v1, v34, L"EnableQueue()");
              LOWORD(v1) = 768;
            }
            if ( ((unsigned __int16)v1 & 0x200) != 0 )
            {
              v39 = v66;
              LOWORD(v1) = (unsigned __int16)v1 & 0xFDFF;
              if ( v66 )
              {
                if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
                  if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
                }
              }
            }
            if ( ((unsigned __int16)v1 & 0x100) != 0 )
            {
              v40 = v68;
              if ( v68 )
              {
                if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
                  if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
                }
              }
            }
            sub_140011E4C(v6, (__int64)L"EnableQueue()", 109, 58, v7);
          }
          else
          {
            v7 = sub_14007B39C((_QWORD *)(a1 - 496));
            if ( v7 )
            {
              if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
              {
                v41 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                   a1 - 440,
                                   v71);
                v42 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v69);
                v43 = (const wchar_t *)&unk_1400D44E0;
                v44 = (const wchar_t *)&unk_1400D44E0;
                v45 = *(const wchar_t **)(*(_QWORD *)v42 + 16LL);
                if ( v45 )
                  v44 = v45;
                if ( *(_QWORD *)(v41 + 16) )
                  v43 = *(const wchar_t **)(v41 + 16);
                sub_1400A5E80(
                  *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
                  2u,
                  0xAu,
                  0x12u,
                  (__int64)&unk_1400D52E0,
                  v44,
                  v43,
                  L"EnableTraffic()");
                LOWORD(v1) = 3072;
              }
              if ( ((unsigned __int16)v1 & 0x800) != 0 )
              {
                v46 = v70;
                LOWORD(v1) = (unsigned __int16)v1 & 0xF7FF;
                if ( v70 )
                {
                  if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
                    if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
                  }
                }
              }
              if ( ((unsigned __int16)v1 & 0x400) != 0 )
              {
                v47 = v72;
                if ( v72 )
                {
                  if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
                    if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
                  }
                }
              }
              sub_140011154(v6, (__int64)L"EnableTraffic()", 110, 58, v7);
            }
            else
            {
              v7 = 0;
            }
          }
        }
      }
    }
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v7;
}
