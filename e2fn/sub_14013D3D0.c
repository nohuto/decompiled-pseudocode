__int64 __fastcall sub_14013D3D0(__int64 a1, int a2, __int64 a3)
{
  const wchar_t *v3; // rdi
  __int64 *v5; // r12
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  const wchar_t *v10; // r13
  const wchar_t *v11; // rax
  const wchar_t *v12; // rax
  volatile signed __int32 *v13; // rsi
  volatile signed __int32 *v14; // rdi
  unsigned int v15; // r14d
  const wchar_t *v17; // r13
  const wchar_t *v18; // rax
  __int64 v19; // rsi
  const wchar_t *v20; // rax
  volatile signed __int32 *v21; // rsi
  volatile signed __int32 *v22; // rdi
  const wchar_t *v23; // r13
  const wchar_t *v24; // rax
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // rsi
  volatile signed __int32 *v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rax
  const wchar_t *v30; // r13
  const wchar_t *v31; // rdx
  const wchar_t *v32; // rax
  volatile signed __int32 *v33; // rsi
  volatile signed __int32 *v34; // rdi
  const wchar_t *v35; // r13
  const wchar_t *v36; // rax
  const wchar_t *v37; // rax
  volatile signed __int32 *v38; // rsi
  volatile signed __int32 *v39; // rdi
  _BYTE v40[8]; // [rsp+58h] [rbp-69h] BYREF
  volatile signed __int32 *v41; // [rsp+60h] [rbp-61h]
  _BYTE v42[8]; // [rsp+68h] [rbp-59h] BYREF
  volatile signed __int32 *v43; // [rsp+70h] [rbp-51h]
  _BYTE v44[8]; // [rsp+78h] [rbp-49h] BYREF
  volatile signed __int32 *v45; // [rsp+80h] [rbp-41h]
  _BYTE v46[8]; // [rsp+88h] [rbp-39h] BYREF
  volatile signed __int32 *v47; // [rsp+90h] [rbp-31h]
  _BYTE v48[8]; // [rsp+98h] [rbp-29h] BYREF
  volatile signed __int32 *v49; // [rsp+A0h] [rbp-21h]
  _BYTE v50[8]; // [rsp+A8h] [rbp-19h] BYREF
  volatile signed __int32 *v51; // [rsp+B0h] [rbp-11h]
  _BYTE v52[8]; // [rsp+B8h] [rbp-9h] BYREF
  volatile signed __int32 *v53; // [rsp+C0h] [rbp-1h]
  _BYTE v54[8]; // [rsp+C8h] [rbp+7h] BYREF
  volatile signed __int32 *v55; // [rsp+D0h] [rbp+Fh]
  _BYTE v56[8]; // [rsp+D8h] [rbp+17h] BYREF
  volatile signed __int32 *v57; // [rsp+E0h] [rbp+1Fh]
  _BYTE v58[8]; // [rsp+E8h] [rbp+27h] BYREF
  volatile signed __int32 *v59; // [rsp+F0h] [rbp+2Fh]

  LOWORD(v3) = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::ConfigureWakeByType", a1);
      if ( v9 )
        v5 = v9;
    }
  }
  switch ( a2 )
  {
    case 1:
      v15 = sub_14013D09C(a1, a3);
      if ( !v15 )
        goto LABEL_26;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v35 = (const wchar_t *)&unk_1400D44E0;
        v3 = (const wchar_t *)&unk_1400D44E0;
        v36 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v58)
                                + 16LL);
        if ( v36 )
          v3 = v36;
        v37 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v56)
                                + 16LL);
        if ( v37 )
          v35 = v37;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          0xBu,
          0x33u,
          (__int64)&unk_1400D9E10,
          v35,
          v3,
          L"ConfigureWakeByBitmapPattern(wakeSource)");
        LOBYTE(v3) = -64;
      }
      if ( (char)v3 < 0 )
      {
        v38 = v57;
        LOBYTE(v3) = (unsigned __int8)v3 & 0x7F;
        if ( v57 )
        {
          if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
            if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
          }
        }
      }
      if ( ((unsigned __int8)v3 & 0x40) != 0 )
      {
        v39 = v59;
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
      sub_140009320(a1, (__int64)L"ConfigureWakeByBitmapPattern(wakeSource)", 471, 113, v15);
      break;
    case 2:
      v15 = sub_14013DBDC(a1);
      if ( !v15 )
        goto LABEL_26;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v28 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v54);
        v29 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v52);
        v30 = (const wchar_t *)&unk_1400D44E0;
        v31 = (const wchar_t *)&unk_1400D44E0;
        v32 = *(const wchar_t **)(*(_QWORD *)v29 + 16LL);
        if ( v32 )
          v31 = v32;
        if ( *(_QWORD *)(v28 + 16) )
          v30 = *(const wchar_t **)(v28 + 16);
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          0xBu,
          0x30u,
          (__int64)&unk_1400D9E10,
          v31,
          v30,
          L"ConfigureWakebyMagicPacket()");
        LOBYTE(v3) = 3;
      }
      if ( ((unsigned __int8)v3 & 2) != 0 )
      {
        v33 = v53;
        LOBYTE(v3) = (unsigned __int8)v3 & 0xFD;
        if ( v53 )
        {
          if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
            if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
          }
        }
      }
      if ( ((unsigned __int8)v3 & 1) != 0 )
      {
        v34 = v55;
        if ( v55 )
        {
          if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
            if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
          }
        }
      }
      sub_140008774(a1, (__int64)L"ConfigureWakebyMagicPacket()", 456, 113, v15);
      break;
    case 3:
      v15 = sub_14013D300(a1, a3);
      if ( !v15 )
        goto LABEL_26;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v23 = (const wchar_t *)&unk_1400D44E0;
        v3 = (const wchar_t *)&unk_1400D44E0;
        v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v50)
                                + 16LL);
        if ( v24 )
          v3 = v24;
        v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v48)
                                + 16LL);
        if ( v25 )
          v23 = v25;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          0xBu,
          0x31u,
          (__int64)&unk_1400D9E10,
          v23,
          v3,
          L"ConfigureWakeByLinkStatusChange(wakeSource)");
        LOBYTE(v3) = 12;
      }
      if ( ((unsigned __int8)v3 & 8) != 0 )
      {
        v26 = v49;
        LOBYTE(v3) = (unsigned __int8)v3 & 0xF7;
        if ( v49 )
        {
          if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
            if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
      }
      if ( ((unsigned __int8)v3 & 4) != 0 )
      {
        v27 = v51;
        if ( v51 )
        {
          if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
      }
      sub_1400095B8(a1, (__int64)L"ConfigureWakeByLinkStatusChange(wakeSource)", 461, 113, v15);
      break;
    case 4:
      v15 = sub_14013DC5C(a1);
      if ( v15 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v17 = (const wchar_t *)&unk_1400D44E0;
          v3 = (const wchar_t *)&unk_1400D44E0;
          v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                                 a1 + 56,
                                                 v44)
                                  + 16LL);
          if ( v18 )
            v3 = v18;
          v19 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
          v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                 a1 + 56,
                                                 v46)
                                  + 16LL);
          if ( v20 )
            v17 = v20;
          sub_1400A5E80(v19, 2u, 0xBu, 0x32u, (__int64)&unk_1400D9E10, v3, v17, L"ConfigureWakebyPacketFilter()");
          LOBYTE(v3) = 48;
        }
        if ( ((unsigned __int8)v3 & 0x20) != 0 )
        {
          v21 = v45;
          LOBYTE(v3) = (unsigned __int8)v3 & 0xDF;
          if ( v45 )
          {
            if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
              if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
            }
          }
        }
        if ( ((unsigned __int8)v3 & 0x10) != 0 )
        {
          v22 = v47;
          if ( v47 )
          {
            if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
              if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
            }
          }
        }
        sub_1400088C0(a1, (__int64)L"ConfigureWakebyPacketFilter()", 466, 113, v15);
        break;
      }
LABEL_26:
      v15 = 0;
      break;
    default:
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v10 = (const wchar_t *)&unk_1400D44E0;
        v3 = (const wchar_t *)&unk_1400D44E0;
        v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v42)
                                + 16LL);
        if ( v11 )
          v3 = v11;
        v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v40)
                                + 16LL);
        if ( v12 )
          v10 = v12;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          3u,
          0xBu,
          0x34u,
          (__int64)&unk_1400D9E10,
          v10,
          v3,
          (const wchar_t *)qword_14014EC70);
        LOWORD(v3) = 768;
      }
      if ( ((unsigned __int16)v3 & 0x200) != 0 )
      {
        v13 = v41;
        LOWORD(v3) = (unsigned __int16)v3 & 0xFDFF;
        if ( v41 )
        {
          if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
            if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
          }
        }
      }
      if ( ((unsigned __int16)v3 & 0x100) != 0 )
      {
        v14 = v43;
        if ( v43 )
        {
          if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
            if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
          }
        }
      }
      goto LABEL_26;
  }
  if ( v5 )
  {
    sub_140075108(v5);
    ExFreePool(v5);
  }
  return v15;
}
