__int64 __fastcall sub_1400ED130(__int64 a1)
{
  const wchar_t *v1; // rdi
  __int64 *v3; // r13
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // r14d
  const wchar_t *v7; // r12
  const wchar_t *v8; // rax
  const wchar_t *v9; // rax
  volatile signed __int32 *v10; // rsi
  volatile signed __int32 *v11; // rdi
  int v12; // r8d
  const wchar_t *v13; // r12
  const wchar_t *v14; // rax
  __int64 v15; // rsi
  const wchar_t *v16; // rax
  volatile signed __int32 *v17; // rsi
  volatile signed __int32 *v18; // rdi
  const wchar_t *v19; // r12
  const wchar_t *v20; // rax
  const wchar_t *v21; // rax
  volatile signed __int32 *v22; // rsi
  volatile signed __int32 *v23; // rdi
  const wchar_t *v24; // r12
  const wchar_t *v25; // rax
  __int64 v26; // rsi
  const wchar_t *v27; // rax
  volatile signed __int32 *v28; // rsi
  volatile signed __int32 *v29; // rdi
  __int64 v30; // rsi
  const wchar_t *v31; // r12
  const wchar_t *v32; // rax
  const wchar_t *v33; // rax
  volatile signed __int32 *v34; // rsi
  volatile signed __int32 *v35; // rdi
  int v36; // r8d
  const wchar_t *v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rax
  const wchar_t *v40; // r12
  const wchar_t *v41; // rdx
  const wchar_t *v42; // rax
  volatile signed __int32 *v43; // rsi
  volatile signed __int32 *v44; // rdi
  const wchar_t *v45; // r12
  const wchar_t *v46; // rax
  __int64 v47; // rsi
  const wchar_t *v48; // rax
  volatile signed __int32 *v49; // rsi
  volatile signed __int32 *v50; // rdi
  __int64 v52; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v53; // [rsp+60h] [rbp-A8h]
  __int64 v54; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v55; // [rsp+70h] [rbp-98h]
  __int64 v56; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v57; // [rsp+80h] [rbp-88h]
  _BYTE v58[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v59; // [rsp+90h] [rbp-78h]
  _BYTE v60[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v61; // [rsp+A0h] [rbp-68h]
  _BYTE v62[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v63; // [rsp+B0h] [rbp-58h]
  _BYTE v64[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v65; // [rsp+C0h] [rbp-48h]
  _BYTE v66[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v67; // [rsp+D0h] [rbp-38h]
  _BYTE v68[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v69; // [rsp+E0h] [rbp-28h]
  _BYTE v70[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v71; // [rsp+F0h] [rbp-18h]
  _BYTE v72[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v73; // [rsp+100h] [rbp-8h]
  _BYTE v74[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v75; // [rsp+110h] [rbp+8h]
  _BYTE v76[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v77; // [rsp+120h] [rbp+18h]
  _BYTE v78[8]; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v79; // [rsp+130h] [rbp+28h]
  const wchar_t *v80; // [rsp+170h] [rbp+68h]

  LOWORD(v1) = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareAbstraction::EvtD0Entry", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = sub_1400E9734((_QWORD *)a1);
  if ( v6 )
  {
    v80 = L"CheckIfHardwareAvailable()";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = (const wchar_t *)&unk_1400D44E0;
      v1 = (const wchar_t *)&unk_1400D44E0;
      v8 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                            a1 + 56,
                                            &v54)
                             + 16LL);
      if ( v8 )
        v1 = v8;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                            a1 + 56,
                                            &v52)
                             + 16LL);
      if ( v9 )
        v7 = v9;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0x4Cu,
        (__int64)&unk_1400D49F8,
        v7,
        v1,
        L"CheckIfHardwareAvailable()");
      LOBYTE(v1) = 3;
    }
    if ( ((unsigned __int8)v1 & 2) != 0 )
    {
      v10 = v53;
      LOBYTE(v1) = (unsigned __int8)v1 & 0xFD;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
    }
    if ( ((unsigned __int8)v1 & 1) != 0 )
    {
      v11 = v55;
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    v12 = 409;
LABEL_42:
    sub_1400084DC(a1, (__int64)v80, v12, 46, v6);
    goto LABEL_135;
  }
  v6 = sub_1400460DC(*(_QWORD **)(a1 + 496));
  if ( v6 )
  {
    v80 = L"m_macAddress->EvtD0Entry()";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = (const wchar_t *)&unk_1400D44E0;
      v1 = (const wchar_t *)&unk_1400D44E0;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v58)
                              + 16LL);
      if ( v14 )
        v1 = v14;
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             &v56)
                              + 16LL);
      if ( v16 )
        v13 = v16;
      sub_1400A5E80(v15, 2u, 0xAu, 0x4Du, (__int64)&unk_1400D49F8, v13, v1, L"m_macAddress->EvtD0Entry()");
      LOBYTE(v1) = 12;
    }
    if ( ((unsigned __int8)v1 & 8) != 0 )
    {
      v17 = v57;
      LOBYTE(v1) = (unsigned __int8)v1 & 0xF7;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( ((unsigned __int8)v1 & 4) != 0 )
    {
      v18 = v59;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    v12 = 411;
    goto LABEL_42;
  }
  v6 = sub_140033850(*(_QWORD **)(a1 + 752));
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v19 = (const wchar_t *)&unk_1400D44E0;
      v1 = (const wchar_t *)&unk_1400D44E0;
      v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v62)
                              + 16LL);
      if ( v20 )
        v1 = v20;
      v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v60)
                              + 16LL);
      if ( v21 )
        v19 = v21;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0x4Fu,
        (__int64)&unk_1400D49F8,
        v19,
        v1,
        L"m_rxFilter->EvtD0Entry()");
      LOBYTE(v1) = 48;
    }
    if ( ((unsigned __int8)v1 & 0x20) != 0 )
    {
      v22 = v61;
      LOBYTE(v1) = (unsigned __int8)v1 & 0xDF;
      if ( v61 )
      {
        if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    if ( ((unsigned __int8)v1 & 0x10) != 0 )
    {
      v23 = v63;
      if ( v63 )
      {
        if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    sub_140008244(a1, (__int64)L"m_rxFilter->EvtD0Entry()", 421, 46, v6);
    goto LABEL_135;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 560) + 48LL))(*(_QWORD *)(a1 + 560));
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v24 = (const wchar_t *)&unk_1400D44E0;
      v1 = (const wchar_t *)&unk_1400D44E0;
      v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v64)
                              + 16LL);
      if ( v25 )
        v1 = v25;
      v26 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v66)
                              + 16LL);
      if ( v27 )
        v24 = v27;
      sub_1400A5E80(v26, 2u, 0xAu, 0x50u, (__int64)&unk_1400D49F8, v1, v24, L"m_interruptsFactory->EvtD0Entry()");
      LOBYTE(v1) = -64;
    }
    if ( (char)v1 < 0 )
    {
      v28 = v65;
      LOBYTE(v1) = (unsigned __int8)v1 & 0x7F;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( ((unsigned __int8)v1 & 0x40) != 0 )
    {
      v29 = v67;
      if ( v67 )
      {
        if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    sub_140008DF0(a1, (__int64)L"m_interruptsFactory->EvtD0Entry()", 423, 46, v6);
    goto LABEL_135;
  }
  v6 = sub_140104830(*(_QWORD *)(a1 + 800));
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v30 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v31 = (const wchar_t *)&unk_1400D44E0;
      v1 = (const wchar_t *)&unk_1400D44E0;
      v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v68)
                              + 16LL);
      if ( v32 )
        v1 = v32;
      v33 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v70)
                              + 16LL);
      if ( v33 )
        v31 = v33;
      sub_1400A5E80(v30, 2u, 0xAu, 0x51u, (__int64)&unk_1400D49F8, v1, v31, L"m_lpi->EvtD0Entry()");
      LOWORD(v1) = 768;
    }
    if ( ((unsigned __int16)v1 & 0x200) != 0 )
    {
      v34 = v69;
      LOWORD(v1) = (unsigned __int16)v1 & 0xFDFF;
      if ( v69 )
      {
        if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
    if ( ((unsigned __int16)v1 & 0x100) != 0 )
    {
      v35 = v71;
      if ( v71 )
      {
        if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
          if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
        }
      }
    }
    v36 = 426;
    v37 = L"m_lpi->EvtD0Entry()";
LABEL_115:
    sub_140007E60(a1, (__int64)v37, v36, 46, v6);
    goto LABEL_135;
  }
  v6 = sub_14003924C(*(_QWORD *)(a1 + 784));
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v38 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v72);
      v39 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v74);
      v40 = (const wchar_t *)&unk_1400D44E0;
      v41 = (const wchar_t *)&unk_1400D44E0;
      v42 = *(const wchar_t **)(*(_QWORD *)v39 + 16LL);
      if ( v42 )
        v41 = v42;
      if ( *(_QWORD *)(v38 + 16) )
        v40 = *(const wchar_t **)(v38 + 16);
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0x52u,
        (__int64)&unk_1400D49F8,
        v40,
        v41,
        L"m_mtu->EvtD0Entry()");
      LOWORD(v1) = 3072;
    }
    if ( ((unsigned __int16)v1 & 0x800) != 0 )
    {
      v43 = v73;
      LOWORD(v1) = (unsigned __int16)v1 & 0xF7FF;
      if ( v73 )
      {
        if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
      }
    }
    if ( ((unsigned __int16)v1 & 0x400) != 0 )
    {
      v44 = v75;
      if ( v75 )
      {
        if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
          if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
        }
      }
    }
    v36 = 430;
    v37 = L"m_mtu->EvtD0Entry()";
    goto LABEL_115;
  }
  sub_1400F7D8C(*(_QWORD *)(a1 + 880));
  sub_140103CAC(*(_QWORD *)(a1 + 768));
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 640) + 40LL))(*(_QWORD *)(a1 + 640));
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v45 = (const wchar_t *)&unk_1400D44E0;
      v1 = (const wchar_t *)&unk_1400D44E0;
      v46 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v76)
                              + 16LL);
      if ( v46 )
        v1 = v46;
      v47 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v48 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v78)
                              + 16LL);
      if ( v48 )
        v45 = v48;
      sub_1400A5E80(v47, 2u, 0xAu, 0x53u, (__int64)&unk_1400D49F8, v1, v45, L"m_link->EvtD0Entry()");
      LOWORD(v1) = 12288;
    }
    if ( ((unsigned __int16)v1 & 0x2000) != 0 )
    {
      v49 = v77;
      LOWORD(v1) = (unsigned __int16)v1 & 0xDFFF;
      if ( v77 )
      {
        if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
          if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
        }
      }
    }
    if ( ((unsigned __int16)v1 & 0x1000) != 0 )
    {
      v50 = v79;
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
    sub_140007FAC(a1, (__int64)L"m_link->EvtD0Entry()", 436, 46, v6);
  }
  else
  {
    v6 = 0;
  }
LABEL_135:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v6;
}
