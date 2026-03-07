__int64 __fastcall sub_140107700(__int64 a1, __int64 a2)
{
  __int16 v2; // si
  __int64 *v4; // r13
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // r14d
  const wchar_t *v10; // r12
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rdi
  int v16; // r8d
  const wchar_t *v17; // r12
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rax
  const wchar_t *v20; // rax
  volatile signed __int32 *v21; // rdi
  volatile signed __int32 *v22; // rdi
  const wchar_t *v23; // rdx
  int v24; // ecx
  _QWORD *v25; // rdi
  __int64 *v26; // rbx
  __int64 *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  const wchar_t *v30; // r12
  const wchar_t *v31; // rdx
  const wchar_t *v32; // rax
  volatile signed __int32 *v33; // rdi
  volatile signed __int32 *v34; // rdi
  const wchar_t *v35; // r12
  const wchar_t *v36; // rdi
  const wchar_t *v37; // rax
  const wchar_t *v38; // rax
  volatile signed __int32 *v39; // rdi
  volatile signed __int32 *v40; // rdi
  __int64 v41; // rax
  const wchar_t *v42; // r12
  const wchar_t *v43; // rdi
  __int64 v44; // rsi
  const wchar_t *v45; // rax
  volatile signed __int32 *v46; // rdi
  volatile signed __int32 *v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rax
  const wchar_t *v50; // r12
  const wchar_t *v51; // rdx
  const wchar_t *v52; // rax
  volatile signed __int32 *v53; // rdi
  volatile signed __int32 *v54; // rdi
  __int64 v56; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v57; // [rsp+60h] [rbp-A8h]
  __int64 v58; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v59; // [rsp+70h] [rbp-98h]
  __int64 v60; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v61; // [rsp+80h] [rbp-88h]
  _BYTE v62[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v63; // [rsp+90h] [rbp-78h]
  _BYTE v64[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v65; // [rsp+A0h] [rbp-68h]
  _BYTE v66[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v67; // [rsp+B0h] [rbp-58h]
  _BYTE v68[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v69; // [rsp+C0h] [rbp-48h]
  _BYTE v70[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v71; // [rsp+D0h] [rbp-38h]
  _BYTE v72[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v73; // [rsp+E0h] [rbp-28h]
  _BYTE v74[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v75; // [rsp+F0h] [rbp-18h]
  _BYTE v76[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v77; // [rsp+100h] [rbp-8h]
  _BYTE v78[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v79; // [rsp+110h] [rbp+8h]
  __int64 v80; // [rsp+118h] [rbp+10h] BYREF
  __int64 v81; // [rsp+128h] [rbp+20h] BYREF
  const wchar_t *v82; // [rsp+168h] [rbp+60h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005A6E0(Pool2, (__int64)L"os_services::OsServices::Bind", a1 - 352);
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = a2;
  v9 = sub_140106C20(v8, a2);
  if ( v9 )
  {
    v82 = L"m_spinLockFactory->Bind(device)";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             &v58)
                              + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                             a1 - 296,
                                             &v56)
                              + 16LL);
      if ( v13 )
        v10 = v13;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        5u,
        0x13u,
        (__int64)&unk_1400D7980,
        v10,
        v11,
        L"m_spinLockFactory->Bind(device)");
      LOBYTE(v2) = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v57;
      LOBYTE(v2) = v2 & 0xFD;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v15 = v59;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    v16 = 120;
LABEL_42:
    v23 = v82;
    v24 = a1 - 352;
LABEL_115:
    sub_140008B58(v24, (__int64)v23, v16, 143, v9);
    goto LABEL_117;
  }
  v9 = sub_14010AB48(*(_QWORD *)(a1 + 40), a2);
  if ( v9 )
  {
    v82 = L"m_waitLockFactory->Bind(device)";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v17 = (const wchar_t *)&unk_1400D44E0;
      v18 = (const wchar_t *)&unk_1400D44E0;
      v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             v62)
                              + 16LL);
      if ( v19 )
        v18 = v19;
      v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                             a1 - 296,
                                             &v60)
                              + 16LL);
      if ( v20 )
        v17 = v20;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        5u,
        0x14u,
        (__int64)&unk_1400D7980,
        v17,
        v18,
        L"m_waitLockFactory->Bind(device)");
      LOBYTE(v2) = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v21 = v61;
      LOBYTE(v2) = v2 & 0xF7;
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
    if ( (v2 & 4) != 0 )
    {
      v22 = v63;
      if ( v63 )
      {
        if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    v16 = 121;
    goto LABEL_42;
  }
  v25 = *(_QWORD **)(a1 + 72);
  v26 = sub_1400A27D4(&v80, (__int64 *)(a1 + 40));
  v27 = sub_1400A27D4(&v81, (__int64 *)(a1 + 24));
  v9 = sub_14005EA24(v25, *(_QWORD *)(a1 + 16), v27, v26);
  if ( v9 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v28 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v64);
      v29 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(a1 - 296, v66);
      v30 = (const wchar_t *)&unk_1400D44E0;
      v31 = (const wchar_t *)&unk_1400D44E0;
      v32 = *(const wchar_t **)(*(_QWORD *)v29 + 16LL);
      if ( v32 )
        v31 = v32;
      if ( *(_QWORD *)(v28 + 16) )
        v30 = *(const wchar_t **)(v28 + 16);
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        5u,
        0x15u,
        (__int64)&unk_1400D7980,
        v30,
        v31,
        L"m_workItemFactory->Bind(m_device, m_spinLockFactory, m_waitLockFactory)");
      LOBYTE(v2) = 48;
    }
    if ( (v2 & 0x20) != 0 )
    {
      v33 = v65;
      LOBYTE(v2) = v2 & 0xDF;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
          if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
        }
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      v34 = v67;
      if ( v67 )
      {
        if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
    sub_14000F65C(
      a1 - 352,
      (__int64)L"m_workItemFactory->Bind(m_device, m_spinLockFactory, m_waitLockFactory)",
      122,
      143,
      v9);
  }
  else
  {
    v9 = sub_14010C738(*(_QWORD *)(a1 + 104), a2);
    if ( v9 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v35 = (const wchar_t *)&unk_1400D44E0;
        v36 = (const wchar_t *)&unk_1400D44E0;
        v37 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v70)
                                + 16LL);
        if ( v37 )
          v36 = v37;
        v38 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               v68)
                                + 16LL);
        if ( v38 )
          v35 = v38;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          2u,
          5u,
          0x16u,
          (__int64)&unk_1400D7980,
          v35,
          v36,
          L"m_deferredProcedureCallFactory->Bind(device)");
        LOBYTE(v2) = -64;
      }
      if ( (v2 & 0x80u) != 0 )
      {
        v39 = v69;
        LOBYTE(v2) = v2 & 0x7F;
        if ( v69 )
        {
          if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
            if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
          }
        }
      }
      if ( (v2 & 0x40) != 0 )
      {
        v40 = v71;
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
      sub_140021FDC(a1 - 352, (__int64)L"m_deferredProcedureCallFactory->Bind(device)", 123, 143, v9);
    }
    else
    {
      v9 = sub_14010C944(*(_QWORD *)(a1 + 120), a2);
      if ( v9 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v41 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(a1 - 296, v74);
          v42 = (const wchar_t *)&unk_1400D44E0;
          v43 = (const wchar_t *)&unk_1400D44E0;
          v44 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
          if ( *(_QWORD *)(*(_QWORD *)v41 + 16LL) )
            v43 = *(const wchar_t **)(*(_QWORD *)v41 + 16LL);
          v45 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                                 a1 - 296,
                                                 v72)
                                  + 16LL);
          if ( v45 )
            v42 = v45;
          sub_1400A5E80(v44, 2u, 5u, 0x17u, (__int64)&unk_1400D7980, v42, v43, L"m_osTimerFactory->Bind(device)");
          v2 = 768;
        }
        if ( (v2 & 0x200) != 0 )
        {
          v46 = v73;
          v2 &= ~0x200u;
          if ( v73 )
          {
            if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
              if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
            }
          }
        }
        if ( (v2 & 0x100) != 0 )
        {
          v47 = v75;
          if ( v75 )
          {
            if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
              if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
            }
          }
        }
        sub_140008A0C(a1 - 352, (__int64)L"m_osTimerFactory->Bind(device)", 124, 143, v9);
      }
      else
      {
        v9 = sub_140064834(*(_QWORD **)(a1 + 136), a2);
        if ( v9 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v48 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(a1 - 296, v78);
            v49 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v76);
            v50 = (const wchar_t *)&unk_1400D44E0;
            v51 = (const wchar_t *)&unk_1400D44E0;
            v52 = *(const wchar_t **)(*(_QWORD *)v49 + 16LL);
            if ( v52 )
              v51 = v52;
            if ( *(_QWORD *)(v48 + 16) )
              v50 = *(const wchar_t **)(v48 + 16);
            sub_1400A5E80(
              *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
              2u,
              5u,
              0x18u,
              (__int64)&unk_1400D7980,
              v51,
              v50,
              L"m_deviceRestarter->Bind(device)");
            v2 = 3072;
          }
          if ( (v2 & 0x800) != 0 )
          {
            v53 = v77;
            v2 &= ~0x800u;
            if ( v77 )
            {
              if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
                if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
              }
            }
          }
          if ( (v2 & 0x400) != 0 )
          {
            v54 = v79;
            if ( v79 )
            {
              if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
                if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
              }
            }
          }
          v24 = a1 - 352;
          v16 = 125;
          v23 = L"m_deviceRestarter->Bind(device)";
          goto LABEL_115;
        }
        v9 = 0;
      }
    }
  }
LABEL_117:
  if ( v4 )
  {
    sub_14005A99C(v4);
    ExFreePool(v4);
  }
  return v9;
}
