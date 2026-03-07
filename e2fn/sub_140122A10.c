__int64 __fastcall sub_140122A10(_QWORD *a1)
{
  const wchar_t *v1; // rdi
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  int v6; // r15d
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
  const wchar_t *v18; // r13
  const wchar_t *v19; // rax
  const wchar_t *v20; // rax
  volatile signed __int32 *v21; // rsi
  volatile signed __int32 *v22; // rdi
  __int64 v23; // rbx
  __int64 *v24; // rax
  const wchar_t *v25; // r13
  const wchar_t *v26; // rdx
  __int64 v27; // rax
  volatile signed __int32 *v28; // rsi
  volatile signed __int32 *v29; // rdi
  const wchar_t *v30; // r13
  const wchar_t *v31; // rax
  const wchar_t *v32; // rax
  volatile signed __int32 *v33; // rsi
  volatile signed __int32 *v34; // rdi
  _QWORD *v35; // rbx
  __int64 v36; // rax
  const wchar_t *v37; // r13
  _QWORD *v38; // rcx
  const wchar_t *v39; // rax
  __int64 v40; // rsi
  const wchar_t *v41; // rax
  volatile signed __int32 *v42; // rsi
  volatile signed __int32 *v43; // rdi
  __int64 v45; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v46; // [rsp+60h] [rbp-A8h]
  __int64 v47; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v48; // [rsp+70h] [rbp-98h]
  __int64 v49; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v50; // [rsp+80h] [rbp-88h]
  _BYTE v51[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v52; // [rsp+90h] [rbp-78h]
  _BYTE v53[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v54; // [rsp+A0h] [rbp-68h]
  _BYTE v55[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v56; // [rsp+B0h] [rbp-58h]
  _BYTE v57[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v58; // [rsp+C0h] [rbp-48h]
  _BYTE v59[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v60; // [rsp+D0h] [rbp-38h]
  _BYTE v61[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v62; // [rsp+E0h] [rbp-28h]
  _BYTE v63[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v64; // [rsp+F0h] [rbp-18h]
  _BYTE v65[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v66; // [rsp+100h] [rbp-8h]
  _BYTE v67[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v68; // [rsp+110h] [rbp+8h]

  LOWORD(v1) = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapter::EvtD0EntryInitial", (__int64)(a1 - 44));
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = (_DWORD)a1 - 352;
  sub_14011DF8C((__int64)(a1 - 44));
  v7 = sub_14011D1A8(a1 - 44);
  if ( v7 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v1 = (const wchar_t *)&unk_1400D44E0;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*(a1 - 37) + 16LL))(
                                            a1 - 37,
                                            &v47)
                             + 16LL);
      if ( v9 )
        v1 = v9;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*(a1 - 37) + 24LL))(
                                             a1 - 37,
                                             &v45)
                              + 16LL);
      if ( v10 )
        v8 = v10;
      sub_1400A5E80(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        2u,
        0xBu,
        0x25u,
        (__int64)&unk_1400D9408,
        v8,
        v1,
        L"AdvertiseMacAddresses()");
      LOBYTE(v1) = 3;
    }
    if ( ((unsigned __int8)v1 & 2) != 0 )
    {
      v11 = v46;
      LOBYTE(v1) = (unsigned __int8)v1 & 0xFD;
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
    if ( ((unsigned __int8)v1 & 1) != 0 )
    {
      v12 = v48;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    sub_1400112A0(v6, (__int64)L"AdvertiseMacAddresses()", 190, 100, v7);
  }
  else
  {
    v7 = sub_14011CF44((__int64)(a1 - 44));
    if ( v7 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v13 = (const wchar_t *)&unk_1400D44E0;
        v1 = (const wchar_t *)&unk_1400D44E0;
        v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                               a1 - 37,
                                               v51)
                                + 16LL);
        if ( v14 )
          v1 = v14;
        v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*(a1 - 37) + 24LL))(
                                               a1 - 37,
                                               &v49)
                                + 16LL);
        if ( v15 )
          v13 = v15;
        sub_1400A5E80(
          *(_QWORD *)(*(a1 - 22) + 16LL),
          2u,
          0xBu,
          0x26u,
          (__int64)&unk_1400D9408,
          v13,
          v1,
          L"AdvertiseLinkLayerCapabilities()");
        LOBYTE(v1) = 12;
      }
      if ( ((unsigned __int8)v1 & 8) != 0 )
      {
        v16 = v50;
        LOBYTE(v1) = (unsigned __int8)v1 & 0xF7;
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
      if ( ((unsigned __int8)v1 & 4) != 0 )
      {
        v17 = v52;
        if ( v52 )
        {
          if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
            if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
          }
        }
      }
      sub_140008CA4(v6, (__int64)L"AdvertiseLinkLayerCapabilities()", 191, 100, v7);
    }
    else
    {
      v7 = sub_14011D974((__int64)(a1 - 44));
      if ( v7 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v18 = (const wchar_t *)&unk_1400D44E0;
          v1 = (const wchar_t *)&unk_1400D44E0;
          v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                                 a1 - 37,
                                                 v55)
                                  + 16LL);
          if ( v19 )
            v1 = v19;
          v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                                 a1 - 37,
                                                 v53)
                                  + 16LL);
          if ( v20 )
            v18 = v20;
          sub_1400A5E80(
            *(_QWORD *)(*(a1 - 22) + 16LL),
            2u,
            0xBu,
            0x27u,
            (__int64)&unk_1400D9408,
            v18,
            v1,
            L"AdvertiseMtuSize()");
          LOBYTE(v1) = 48;
        }
        if ( ((unsigned __int8)v1 & 0x20) != 0 )
        {
          v21 = v54;
          LOBYTE(v1) = (unsigned __int8)v1 & 0xDF;
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
        if ( ((unsigned __int8)v1 & 0x10) != 0 )
        {
          v22 = v56;
          if ( v56 )
          {
            if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
              if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
            }
          }
        }
        sub_14002D6E8(v6, (__int64)L"AdvertiseMtuSize()", 192, 100, v7);
      }
      else
      {
        v7 = sub_14011C9D0(a1 - 44);
        if ( v7 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v23 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(a1 - 37, v57);
            v24 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(a1 - 37, v59);
            v25 = (const wchar_t *)&unk_1400D44E0;
            v26 = (const wchar_t *)&unk_1400D44E0;
            v27 = *v24;
            if ( *(_QWORD *)(v23 + 16) )
              v26 = *(const wchar_t **)(v23 + 16);
            if ( *(_QWORD *)(v27 + 16) )
              v25 = *(const wchar_t **)(v27 + 16);
            sub_1400A5E80(
              *(_QWORD *)(*(a1 - 22) + 16LL),
              2u,
              0xBu,
              0x28u,
              (__int64)&unk_1400D9408,
              v26,
              v25,
              L"AdvertiseDataPathCapabilities()");
            LOBYTE(v1) = -64;
          }
          if ( (char)v1 < 0 )
          {
            v28 = v58;
            LOBYTE(v1) = (unsigned __int8)v1 & 0x7F;
            if ( v58 )
            {
              if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
                if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
              }
            }
          }
          if ( ((unsigned __int8)v1 & 0x40) != 0 )
          {
            v29 = v60;
            if ( v60 )
            {
              if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
                if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
              }
            }
          }
          sub_140008B58(v6, (__int64)L"AdvertiseDataPathCapabilities()", 193, 100, v7);
        }
        else
        {
          v7 = sub_14011DD54(a1 - 44);
          if ( v7 )
          {
            if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            {
              v30 = (const wchar_t *)&unk_1400D44E0;
              v1 = (const wchar_t *)&unk_1400D44E0;
              v31 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                                     a1 - 37,
                                                     v63)
                                      + 16LL);
              if ( v31 )
                v1 = v31;
              v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                                     a1 - 37,
                                                     v61)
                                      + 16LL);
              if ( v32 )
                v30 = v32;
              sub_1400A5E80(
                *(_QWORD *)(*(a1 - 22) + 16LL),
                2u,
                0xBu,
                0x29u,
                (__int64)&unk_1400D9408,
                v30,
                v1,
                L"AdvertiseReceiveScalingCapabilities()");
              LOWORD(v1) = 768;
            }
            if ( ((unsigned __int16)v1 & 0x200) != 0 )
            {
              v33 = v62;
              LOWORD(v1) = (unsigned __int16)v1 & 0xFDFF;
              if ( v62 )
              {
                if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
                  if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
                }
              }
            }
            if ( ((unsigned __int16)v1 & 0x100) != 0 )
            {
              v34 = v64;
              if ( v64 )
              {
                if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
                  if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
                }
              }
            }
            sub_140008F3C(v6, (__int64)L"AdvertiseReceiveScalingCapabilities()", 194, 100, v7);
          }
          else
          {
            sub_1401360F0(a1[12]);
            sub_140137950(a1[14]);
            sub_14011C978((__int64)(a1 - 44));
            sub_14011E01C(a1 - 44);
            sub_14013A970(a1[16]);
            sub_14011CEF8((__int64)(a1 - 44));
            v7 = ((__int64 (__fastcall *)(__int64, _QWORD))qword_1400DF740)(qword_1400DF700, a1[2]);
            if ( v7 )
            {
              if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
              {
                v35 = a1 - 37;
                v36 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(a1 - 37, v65);
                v37 = (const wchar_t *)&unk_1400D44E0;
                v38 = a1 - 37;
                v1 = (const wchar_t *)&unk_1400D44E0;
                v39 = *(const wchar_t **)(*(_QWORD *)v36 + 16LL);
                if ( v39 )
                  v1 = v39;
                v40 = *(_QWORD *)(*(a1 - 22) + 16LL);
                v41 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v35 + 16LL))(
                                                       v38,
                                                       v67)
                                        + 16LL);
                if ( v41 )
                  v37 = v41;
                sub_1400A5E80(v40, 2u, 0xBu, 0x2Au, (__int64)&unk_1400D9408, v1, v37, L"NetAdapterStart(m_netAdapter)");
                LOWORD(v1) = 3072;
              }
              if ( ((unsigned __int16)v1 & 0x800) != 0 )
              {
                v42 = v66;
                LOWORD(v1) = (unsigned __int16)v1 & 0xF7FF;
                if ( v66 )
                {
                  if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
                    if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
                  }
                }
              }
              if ( ((unsigned __int16)v1 & 0x400) != 0 )
              {
                v43 = v68;
                if ( v68 )
                {
                  if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
                    if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
                  }
                }
              }
              sub_1400088C0(v6, (__int64)L"NetAdapterStart(m_netAdapter)", 206, 100, v7);
            }
            else
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1[10] + 352LL) + 8LL))(a1[10] + 352LL);
              v7 = 0;
            }
          }
        }
      }
    }
  }
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v7;
}
