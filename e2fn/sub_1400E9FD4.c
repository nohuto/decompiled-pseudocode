__int64 __fastcall sub_1400E9FD4(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  char v3; // bl
  __int64 *v5; // r14
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // rcx
  unsigned int v14; // esi
  const wchar_t *v15; // rdi
  const wchar_t *v16; // rax
  __int64 v17; // rax
  const wchar_t *v18; // rdx
  const wchar_t *v19; // rax
  volatile signed __int32 *v20; // rsi
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  const wchar_t *v30; // rdi
  const wchar_t *v31; // rax
  __int64 v32; // rsi
  const wchar_t *v33; // rax
  const wchar_t *v34; // rcx
  volatile signed __int32 *v35; // rsi
  volatile signed __int32 *v36; // rbx
  const wchar_t *v37; // rdi
  const wchar_t *v38; // rax
  __int64 v39; // rax
  const wchar_t *v40; // rdx
  const wchar_t *v41; // rax
  volatile signed __int32 *v42; // rsi
  volatile signed __int32 *v43; // rbx
  __int64 v44; // rbx
  _QWORD *v45; // rax
  volatile signed __int32 *v46; // rbx
  volatile signed __int32 *v47; // rbx
  volatile signed __int32 *v48; // rbx
  const wchar_t *v49; // rsi
  const wchar_t *v50; // rdi
  const wchar_t *v51; // rax
  const wchar_t *v52; // rax
  volatile signed __int32 *v53; // rsi
  volatile signed __int32 *v54; // rbx
  volatile signed __int32 *v55; // rbx
  volatile signed __int32 *v56; // rbx
  _QWORD *v57; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v58; // [rsp+60h] [rbp-A8h]
  _QWORD v59[2]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v60[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v61[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v62; // [rsp+90h] [rbp-78h]
  _BYTE v63[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v64; // [rsp+A0h] [rbp-68h]
  _BYTE v65[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v66; // [rsp+B0h] [rbp-58h]
  _BYTE v67[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v68; // [rsp+C0h] [rbp-48h]
  _BYTE v69[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v70; // [rsp+D0h] [rbp-38h]
  _BYTE v71[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v72; // [rsp+E0h] [rbp-28h]
  _BYTE v73[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v74; // [rsp+F0h] [rbp-18h]
  _BYTE v75[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v76; // [rsp+100h] [rbp-8h]
  __int64 v77; // [rsp+108h] [rbp+0h] BYREF
  __int64 v78; // [rsp+118h] [rbp+10h] BYREF
  unsigned int v79; // [rsp+170h] [rbp+68h]
  unsigned int v80; // [rsp+170h] [rbp+68h]
  unsigned int v81; // [rsp+170h] [rbp+68h]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareAbstraction::CreateMsixInterruptsFactory",
             (__int64)a1);
      if ( v9 )
        v5 = v9;
    }
  }
  v10 = ExAllocatePool2(64LL, 32LL, 808465464LL);
  if ( v10 && (v11 = sub_1400A4F20(v10, (int)a1)) != 0 && (v12 = *(_QWORD **)(v11 + 16)) != 0LL )
  {
    v13 = *(_QWORD **)(v11 + 16);
    v58 = (volatile signed __int32 *)v11;
    v57 = v12;
    v79 = sub_140019B00(v13);
    v14 = v79;
    if ( v79 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v15 = (const wchar_t *)&unk_1400D44E0;
        v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v63)
                                + 16LL);
        if ( v16 )
          v15 = v16;
        v17 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v61);
        v18 = (const wchar_t *)&unk_1400D44E0;
        v19 = *(const wchar_t **)(*(_QWORD *)v17 + 16LL);
        if ( v19 )
          v18 = v19;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          2u,
          0xAu,
          0x68u,
          (__int64)&unk_1400D49F8,
          v18,
          v15,
          L"interruptsFactory->AllocateComponents()");
        v3 = 12;
      }
      if ( (v3 & 8) != 0 )
      {
        v20 = v62;
        v3 &= ~8u;
        if ( v62 )
        {
          if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
        v14 = v79;
      }
      if ( (v3 & 4) != 0 )
      {
        v21 = v64;
        if ( v64 )
        {
          if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
          }
        }
      }
      sub_1400091D4((int)a1, (__int64)L"interruptsFactory->AllocateComponents()", 741, 46, v14);
LABEL_28:
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
          if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
        }
      }
      if ( v5 )
      {
        sub_14000BFA4(v5);
        ExFreePool(v5);
      }
      v22 = (volatile signed __int32 *)a2[1];
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
      v23 = (volatile signed __int32 *)a3[1];
      if ( v23 && _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
      }
      return v14;
    }
    v25 = a2[1];
    a2[1] = 0LL;
    v60[1] = v25;
    v26 = *a2;
    *a2 = 0LL;
    v60[0] = v26;
    v27 = a3[1];
    a3[1] = 0LL;
    v59[1] = v27;
    v28 = *a3;
    *a3 = 0LL;
    v59[0] = v28;
    v29 = sub_1400A27D4(&v77, a1 + 46);
    v80 = sub_14001C7BC(v12, (__int64)v60, (__int64)v59, (__int64)v29);
    if ( v80 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v30 = (const wchar_t *)&unk_1400D44E0;
        v31 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v65)
                                + 16LL);
        if ( v31 )
          v30 = v31;
        v32 = *(_QWORD *)(a1[22] + 16LL);
        v33 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v67)
                                + 16LL);
        v34 = (const wchar_t *)&unk_1400D44E0;
        if ( v33 )
          v34 = v33;
        sub_1400A5E80(
          v32,
          2u,
          0xAu,
          0x69u,
          (__int64)&unk_1400D49F8,
          v30,
          v34,
          L"interruptsFactory->Bind(move(mmioAccessor), move(interruptsPool), m_osServices)");
        v3 = 48;
      }
      if ( (v3 & 0x20) != 0 )
      {
        v35 = v66;
        v3 &= ~0x20u;
        if ( v66 )
        {
          if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
            if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
          }
        }
      }
      if ( (v3 & 0x10) != 0 )
      {
        v36 = v68;
        if ( v68 )
        {
          if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
            if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
          }
        }
      }
      v14 = v80;
      sub_14000A92C(
        (int)a1,
        (__int64)L"interruptsFactory->Bind(move(mmioAccessor), move(interruptsPool), m_osServices)",
        742,
        46,
        v80);
      goto LABEL_28;
    }
    v81 = sub_14001E748(v12);
    v14 = v81;
    if ( v81 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v37 = (const wchar_t *)&unk_1400D44E0;
        v38 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v71)
                                + 16LL);
        if ( v38 )
          v37 = v38;
        v39 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v69);
        v40 = (const wchar_t *)&unk_1400D44E0;
        v41 = *(const wchar_t **)(*(_QWORD *)v39 + 16LL);
        if ( v41 )
          v40 = v41;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          2u,
          0xAu,
          0x6Au,
          (__int64)&unk_1400D49F8,
          v40,
          v37,
          L"interruptsFactory->Initialize()");
        v3 = -64;
      }
      if ( v3 < 0 )
      {
        v42 = v70;
        v3 &= ~0x80u;
        if ( v70 )
        {
          if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
            if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
          }
        }
        v14 = v81;
      }
      if ( (v3 & 0x40) != 0 )
      {
        v43 = v72;
        if ( v72 )
        {
          if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
            if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
          }
        }
      }
      sub_140008B58((int)a1, (__int64)L"interruptsFactory->Initialize()", 743, 46, v14);
      goto LABEL_28;
    }
    v44 = a1[70];
    v45 = sub_1400A27D4(&v78, (__int64 *)&v57);
    sub_140102CB4(v44, v45);
    if ( v58 )
    {
      if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
      {
        v46 = v58;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
        if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
      }
    }
    if ( v5 )
    {
      sub_14000BFA4(v5);
      ExFreePool(v5);
    }
    v47 = (volatile signed __int32 *)a2[1];
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
        if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
      }
    }
    v48 = (volatile signed __int32 *)a3[1];
    if ( v48 )
    {
      if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
        if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
      }
    }
    return 0LL;
  }
  else
  {
    v58 = 0LL;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v49 = (const wchar_t *)&unk_1400D44E0;
      v50 = (const wchar_t *)&unk_1400D44E0;
      v51 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v75)
                              + 16LL);
      if ( v51 )
        v50 = v51;
      v52 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v73)
                              + 16LL);
      if ( v52 )
        v49 = v52;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xAu,
        0x67u,
        (__int64)&unk_1400D49F8,
        v49,
        v50,
        L"interruptsFactory");
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v53 = v74;
      v3 &= ~2u;
      if ( v74 )
      {
        if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
          if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v54 = v76;
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
          if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
        }
      }
    }
    sub_14000B36C((int)a1, (__int64)L"interruptsFactory", 739, 46);
    if ( v5 )
    {
      sub_14000BFA4(v5);
      ExFreePool(v5);
    }
    v55 = (volatile signed __int32 *)a2[1];
    if ( v55 )
    {
      if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
        if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
      }
    }
    v56 = (volatile signed __int32 *)a3[1];
    if ( v56 )
    {
      if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
        if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 16LL))(v56);
      }
    }
    return 3221225495LL;
  }
}
