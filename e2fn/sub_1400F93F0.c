__int64 __fastcall sub_1400F93F0(__int64 a1)
{
  const wchar_t *v1; // rdi
  __int64 *v3; // r13
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned int v8; // r14d
  const wchar_t *v9; // r12
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rsi
  volatile signed __int32 *v13; // rdi
  const wchar_t *v14; // r12
  __int64 v15; // rbx
  __int64 *v16; // rax
  const wchar_t *v17; // r12
  const wchar_t *v18; // rdx
  __int64 v19; // rax
  volatile signed __int32 *v20; // rsi
  volatile signed __int32 *v21; // rdi
  int v22; // r8d
  const wchar_t *v23; // r12
  const wchar_t *v24; // rax
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // rsi
  volatile signed __int32 *v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  const wchar_t *v30; // r12
  __int64 v31; // rcx
  const wchar_t *v32; // rax
  __int64 v33; // rsi
  const wchar_t *v34; // rax
  volatile signed __int32 *v35; // rsi
  volatile signed __int32 *v36; // rdi
  const wchar_t *v37; // r12
  const wchar_t *v38; // rax
  const wchar_t *v39; // rax
  volatile signed __int32 *v40; // rsi
  volatile signed __int32 *v41; // rdi
  const wchar_t *v42; // r12
  const wchar_t *v43; // rax
  const wchar_t *v44; // rax
  volatile signed __int32 *v45; // rsi
  volatile signed __int32 *v46; // rdi
  const wchar_t *v47; // r12
  const wchar_t *v48; // rax
  const wchar_t *v49; // rax
  volatile signed __int32 *v50; // rsi
  volatile signed __int32 *v51; // rdi
  unsigned __int64 v52; // rax
  __int64 v54; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v55; // [rsp+60h] [rbp-A8h]
  __int64 v56; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v57; // [rsp+70h] [rbp-98h]
  __int64 v58; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v59; // [rsp+80h] [rbp-88h]
  _BYTE v60[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v61; // [rsp+90h] [rbp-78h]
  _BYTE v62[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v63; // [rsp+A0h] [rbp-68h]
  _BYTE v64[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v65; // [rsp+B0h] [rbp-58h]
  _BYTE v66[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v67; // [rsp+C0h] [rbp-48h]
  _BYTE v68[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v69; // [rsp+D0h] [rbp-38h]
  _BYTE v70[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v71; // [rsp+E0h] [rbp-28h]
  _BYTE v72[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v73; // [rsp+F0h] [rbp-18h]
  _BYTE v74[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v75; // [rsp+100h] [rbp-8h]
  _BYTE v76[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v77; // [rsp+110h] [rbp+8h]
  _BYTE v78[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v79; // [rsp+120h] [rbp+18h]
  _BYTE v80[8]; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v81; // [rsp+130h] [rbp+28h]

  LOWORD(v1) = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareRxQueue::Start", a1 - 496);
      if ( v5 )
        v3 = v5;
    }
  }
  *(_DWORD *)(a1 - 16) = 0;
  v6 = a1 - 496;
  v7 = *(_QWORD *)(a1 - 496);
  *(_DWORD *)(a1 - 12) = 0;
  *(_DWORD *)(a1 - 8) = 0;
  v8 = (*(__int64 (__fastcall **)(__int64))(v7 + 64))(a1 - 496);
  if ( v8 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = (const wchar_t *)&unk_1400D44E0;
      v1 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                             a1 - 440,
                                             &v56)
                              + 16LL);
      if ( v10 )
        v1 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 440) + 24LL))(
                                             a1 - 440,
                                             &v54)
                              + 16LL);
      if ( v11 )
        v9 = v11;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        2u,
        0xAu,
        0xDu,
        (__int64)&unk_1400D56F8,
        v9,
        v1,
        L"WriteToHwDescriptorBaseAddress()");
      LOBYTE(v1) = 3;
    }
    if ( ((unsigned __int8)v1 & 2) != 0 )
    {
      v12 = v55;
      LOBYTE(v1) = (unsigned __int8)v1 & 0xFD;
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( ((unsigned __int8)v1 & 1) != 0 )
    {
      v13 = v57;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_140008CA4(v6, (__int64)L"WriteToHwDescriptorBaseAddress()", 89, 57, v8);
    goto LABEL_134;
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 72LL))(a1 - 496);
  if ( v8 )
  {
    v14 = L"WriteToHwDescriptorLength()";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v15 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(a1 - 440, v60);
      v16 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, &v58);
      v17 = (const wchar_t *)&unk_1400D44E0;
      v18 = (const wchar_t *)&unk_1400D44E0;
      v19 = *v16;
      if ( *(_QWORD *)(v15 + 16) )
        v18 = *(const wchar_t **)(v15 + 16);
      if ( *(_QWORD *)(v19 + 16) )
        v17 = *(const wchar_t **)(v19 + 16);
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        2u,
        0xAu,
        0xEu,
        (__int64)&unk_1400D56F8,
        v17,
        v18,
        L"WriteToHwDescriptorLength()");
      LOBYTE(v1) = 12;
      v14 = L"WriteToHwDescriptorLength()";
    }
    if ( ((unsigned __int8)v1 & 8) != 0 )
    {
      v20 = v59;
      LOBYTE(v1) = (unsigned __int8)v1 & 0xF7;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    if ( ((unsigned __int8)v1 & 4) != 0 )
    {
      v21 = v61;
      if ( v61 )
      {
        if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    v22 = 90;
LABEL_78:
    sub_140008628(v6, (__int64)v14, v22, 57, v8);
    goto LABEL_134;
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(a1 - 496);
  if ( v8 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v23 = (const wchar_t *)&unk_1400D44E0;
      v1 = (const wchar_t *)&unk_1400D44E0;
      v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                             a1 - 440,
                                             v64)
                              + 16LL);
      if ( v24 )
        v1 = v24;
      v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(
                                             a1 - 440,
                                             v62)
                              + 16LL);
      if ( v25 )
        v23 = v25;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        2u,
        0xAu,
        0xFu,
        (__int64)&unk_1400D56F8,
        v23,
        v1,
        L"UseAdvancedDescriptors()");
      LOBYTE(v1) = 48;
    }
    if ( ((unsigned __int8)v1 & 0x20) != 0 )
    {
      v26 = v63;
      LOBYTE(v1) = (unsigned __int8)v1 & 0xDF;
      if ( v63 )
      {
        if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    if ( ((unsigned __int8)v1 & 0x10) != 0 )
    {
      v27 = v65;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    sub_140008244(v6, (__int64)L"UseAdvancedDescriptors()", 91, 57, v8);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 88LL))(a1 - 496);
    if ( v8 )
    {
      v14 = L"SetQueueReceiveBufferSize()";
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v28 = a1 - 440;
        v29 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v66);
        v30 = (const wchar_t *)&unk_1400D44E0;
        v31 = a1 - 440;
        v1 = (const wchar_t *)&unk_1400D44E0;
        v32 = *(const wchar_t **)(*(_QWORD *)v29 + 16LL);
        if ( v32 )
          v1 = v32;
        v33 = *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL);
        v34 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v28 + 16LL))(
                                               v31,
                                               v68)
                                + 16LL);
        if ( v34 )
          v30 = v34;
        sub_1400A5E80(v33, 2u, 0xAu, 0x10u, (__int64)&unk_1400D56F8, v1, v30, L"SetQueueReceiveBufferSize()");
        LOBYTE(v1) = -64;
        v14 = L"SetQueueReceiveBufferSize()";
      }
      if ( (char)v1 < 0 )
      {
        v35 = v67;
        LOBYTE(v1) = (unsigned __int8)v1 & 0x7F;
        if ( v67 )
        {
          if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
            if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
          }
        }
      }
      if ( ((unsigned __int8)v1 & 0x40) != 0 )
      {
        v36 = v69;
        if ( v69 )
        {
          if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
            if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
          }
        }
      }
      v22 = 92;
      goto LABEL_78;
    }
    v8 = sub_14012E524(a1 - 496, *(unsigned int *)(a1 - 12));
    if ( v8 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v37 = (const wchar_t *)&unk_1400D44E0;
        v1 = (const wchar_t *)&unk_1400D44E0;
        v38 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                               a1 - 440,
                                               v72)
                                + 16LL);
        if ( v38 )
          v1 = v38;
        v39 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(
                                               a1 - 440,
                                               v70)
                                + 16LL);
        if ( v39 )
          v37 = v39;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
          2u,
          0xAu,
          0x11u,
          (__int64)&unk_1400D56F8,
          v37,
          v1,
          L"WriteToHwDescriptorHead(m_HwHead)");
        LOWORD(v1) = 768;
      }
      if ( ((unsigned __int16)v1 & 0x200) != 0 )
      {
        v40 = v71;
        LOWORD(v1) = (unsigned __int16)v1 & 0xFDFF;
        if ( v71 )
        {
          if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
            if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
          }
        }
      }
      if ( ((unsigned __int16)v1 & 0x100) != 0 )
      {
        v41 = v73;
        if ( v73 )
        {
          if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
            if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
          }
        }
      }
      sub_140008DF0(v6, (__int64)L"WriteToHwDescriptorHead(m_HwHead)", 95, 57, v8);
    }
    else
    {
      sub_14007C1CC(a1 - 496, *(_DWORD *)(a1 - 8));
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(a1 - 496);
      if ( v8 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v42 = (const wchar_t *)&unk_1400D44E0;
          v1 = (const wchar_t *)&unk_1400D44E0;
          v43 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                                 a1 - 440,
                                                 v76)
                                  + 16LL);
          if ( v43 )
            v1 = v43;
          v44 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(
                                                 a1 - 440,
                                                 v74)
                                  + 16LL);
          if ( v44 )
            v42 = v44;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
            2u,
            0xAu,
            0x12u,
            (__int64)&unk_1400D56F8,
            v42,
            v1,
            L"EnableQueue()");
          LOWORD(v1) = 3072;
        }
        if ( ((unsigned __int16)v1 & 0x800) != 0 )
        {
          v45 = v75;
          LOWORD(v1) = (unsigned __int16)v1 & 0xF7FF;
          if ( v75 )
          {
            if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
              if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
            }
          }
        }
        if ( ((unsigned __int16)v1 & 0x400) != 0 )
        {
          v46 = v77;
          if ( v77 )
          {
            if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
              if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
            }
          }
        }
        sub_140011E4C(v6, (__int64)L"EnableQueue()", 98, 57, v8);
      }
      else
      {
        v8 = sub_14007B39C((_QWORD *)(a1 - 496));
        if ( v8 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v47 = (const wchar_t *)&unk_1400D44E0;
            v1 = (const wchar_t *)&unk_1400D44E0;
            v48 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440)
                                                                                             + 16LL))(
                                                   a1 - 440,
                                                   v80)
                                    + 16LL);
            if ( v48 )
              v1 = v48;
            v49 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440)
                                                                                             + 24LL))(
                                                   a1 - 440,
                                                   v78)
                                    + 16LL);
            if ( v49 )
              v47 = v49;
            sub_1400A5E80(
              *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
              2u,
              0xAu,
              0x13u,
              (__int64)&unk_1400D56F8,
              v47,
              v1,
              L"EnableTraffic()");
            LOWORD(v1) = 12288;
          }
          if ( ((unsigned __int16)v1 & 0x2000) != 0 )
          {
            v50 = v79;
            LOWORD(v1) = (unsigned __int16)v1 & 0xDFFF;
            if ( v79 )
            {
              if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
                if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
              }
            }
          }
          if ( ((unsigned __int16)v1 & 0x1000) != 0 )
          {
            v51 = v81;
            if ( v81 )
            {
              if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
                if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
              }
            }
          }
          sub_140011154(v6, (__int64)L"EnableTraffic()", 99, 57, v8);
        }
        else
        {
          v52 = sub_1400187FC();
          *(_DWORD *)(a1 + 104) = 0;
          v8 = 0;
          *(_QWORD *)(a1 + 96) = v52;
        }
      }
    }
  }
LABEL_134:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v8;
}
