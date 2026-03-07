__int64 __fastcall sub_14003924C(__int64 a1)
{
  __int16 v1; // r14
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  void *v6; // rdi
  void *v7; // rsi
  void *v8; // rax
  void *v9; // rax
  __int64 v10; // rbx
  char v11; // al
  int v12; // edx
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  unsigned int v15; // r15d
  void *v16; // rax
  __int64 *v17; // rax
  void *v18; // rdx
  __int64 v19; // rcx
  void *v20; // rax
  __int64 v21; // rcx
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rcx
  void *v28; // rax
  __int64 v29; // rax
  void *v30; // rdx
  void *v31; // rax
  __int64 v32; // rcx
  volatile signed __int32 *v33; // rbx
  volatile signed __int32 *v34; // rbx
  void *v35; // rdi
  void *v36; // rax
  __int64 v37; // rax
  void *v38; // rdx
  void *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  volatile signed __int32 *v42; // rbx
  volatile signed __int32 *v43; // rbx
  void *v44; // rax
  __int64 *v45; // rax
  void *v46; // rdx
  __int64 v47; // rcx
  void *v48; // rax
  __int64 v49; // rcx
  volatile signed __int32 *v50; // rbx
  volatile signed __int32 *v51; // rbx
  signed __int32 v52[8]; // [rsp+8h] [rbp-B9h] BYREF
  __int64 v53; // [rsp+30h] [rbp-91h]
  __int64 v54; // [rsp+38h] [rbp-89h]
  const wchar_t *v55; // [rsp+40h] [rbp-81h]
  unsigned int v56; // [rsp+48h] [rbp-79h]
  char v57[8]; // [rsp+58h] [rbp-69h] BYREF
  volatile signed __int32 *v58; // [rsp+60h] [rbp-61h]
  char v59[8]; // [rsp+68h] [rbp-59h] BYREF
  volatile signed __int32 *v60; // [rsp+70h] [rbp-51h]
  char v61[8]; // [rsp+78h] [rbp-49h] BYREF
  volatile signed __int32 *v62; // [rsp+80h] [rbp-41h]
  char v63[8]; // [rsp+88h] [rbp-39h] BYREF
  volatile signed __int32 *v64; // [rsp+90h] [rbp-31h]
  char v65[8]; // [rsp+98h] [rbp-29h] BYREF
  volatile signed __int32 *v66; // [rsp+A0h] [rbp-21h]
  char v67[8]; // [rsp+A8h] [rbp-19h] BYREF
  volatile signed __int32 *v68; // [rsp+B0h] [rbp-11h]
  char v69[8]; // [rsp+B8h] [rbp-9h] BYREF
  volatile signed __int32 *v70; // [rsp+C0h] [rbp-1h]
  char v71[8]; // [rsp+C8h] [rbp+7h] BYREF
  volatile signed __int32 *v72; // [rsp+D0h] [rbp+Fh]
  char v73[8]; // [rsp+D8h] [rbp+17h] BYREF
  volatile signed __int32 *v74; // [rsp+E0h] [rbp+1Fh]
  char v75[8]; // [rsp+E8h] [rbp+27h] BYREF
  volatile signed __int32 *v76; // [rsp+F0h] [rbp+2Fh]
  __int64 *P; // [rsp+128h] [rbp+67h]

  v1 = 0;
  v2 = 0LL;
  P = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareMtu::EvtD0Entry", a1);
      if ( v5 )
        v2 = v5;
      P = v2;
    }
  }
  if ( *(_DWORD *)(a1 + 368) <= 0x5EAu )
  {
    v35 = &unk_1400D44E0;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v36 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                    a1 + 56,
                                    v69)
                     + 16LL);
      if ( v36 )
        v35 = v36;
      v37 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v71);
      v38 = &unk_1400D44E0;
      v39 = *(void **)(*(_QWORD *)v37 + 16LL);
      v40 = *(_QWORD *)(a1 + 176);
      if ( v39 )
        v38 = v39;
      v55 = (const wchar_t *)qword_1400B7720;
      v41 = *(_QWORD *)(v40 + 16);
      v54 = (__int64)v38;
      LOBYTE(v38) = 4;
      sub_1400A3320(v41, (_DWORD)v38, 10, 15, (__int64)&unk_1400D6D98, (__int64)v35, v54, (__int64)qword_1400B7720);
      v1 = 192;
      v35 = &unk_1400D44E0;
    }
    if ( (v1 & 0x80u) != 0 )
    {
      v42 = v70;
      v1 &= ~0x80u;
      if ( v70 )
      {
        if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    if ( (v1 & 0x40) != 0 )
    {
      v43 = v72;
      v1 &= ~0x40u;
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
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 384) + 96LL))(*(_QWORD *)(a1 + 384));
    if ( !v15 )
      goto LABEL_45;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v1 |= 0x300u;
      v44 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v75)
                     + 16LL);
      if ( v44 )
        v35 = v44;
      v45 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v73);
      v56 = v15;
      v46 = &unk_1400D44E0;
      v55 = L"m_receiveControlRegister->DiscardLongPackets()";
      v47 = *v45;
      v54 = (__int64)v35;
      v48 = *(void **)(v47 + 16);
      v49 = *(_QWORD *)(a1 + 176);
      if ( v48 )
        v46 = v48;
      v53 = (__int64)v46;
      LOBYTE(v46) = 2;
      sub_1400A5E80(*(_QWORD *)(v49 + 16), (_DWORD)v46, 10, 16, (__int64)&unk_1400D6D98, v53, v54, (__int64)v55, v56);
    }
    if ( (v1 & 0x200) != 0 )
    {
      v50 = v74;
      v1 &= ~0x200u;
      if ( v74 )
      {
        if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
          if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
        }
      }
    }
    if ( (v1 & 0x100) != 0 )
    {
      v51 = v76;
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
          if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
        }
      }
    }
    sub_140009704(a1, (__int64)L"m_receiveControlRegister->DiscardLongPackets()", 86, 51, v15);
  }
  else
  {
    v6 = &unk_1400D44E0;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = &unk_1400D44E0;
      v8 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                   a1 + 56,
                                   v59)
                    + 16LL);
      if ( v8 )
        v7 = v8;
      v9 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                   a1 + 56,
                                   v57)
                    + 16LL);
      if ( v9 )
        v6 = v9;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v11 = sub_14008AA24(a1);
      LOBYTE(v12) = 4;
      sub_1400A5E80(v10, v12, 10, 12, (__int64)&unk_1400D6D98, (__int64)v6, (__int64)v7, (__int64)qword_1400B7720, v11);
      LOBYTE(v1) = 3;
      v6 = &unk_1400D44E0;
    }
    if ( (v1 & 2) != 0 )
    {
      v13 = v58;
      LOBYTE(v1) = v1 & 0xFD;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v14 = v60;
      LOBYTE(v1) = v1 & 0xFE;
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 384) + 88LL))(*(_QWORD *)(a1 + 384));
    if ( v15 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        LOBYTE(v1) = v1 | 0xC;
        v16 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v63)
                       + 16LL);
        if ( v16 )
          v6 = v16;
        v17 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v61);
        v56 = v15;
        v18 = &unk_1400D44E0;
        v55 = L"m_receiveControlRegister->AcceptLongPackets()";
        v19 = *v17;
        v54 = (__int64)v6;
        v20 = *(void **)(v19 + 16);
        v21 = *(_QWORD *)(a1 + 176);
        if ( v20 )
          v18 = v20;
        v53 = (__int64)v18;
        LOBYTE(v18) = 2;
        sub_1400A5E80(*(_QWORD *)(v21 + 16), (_DWORD)v18, 10, 13, (__int64)&unk_1400D6D98, v53, v54, (__int64)v55, v56);
      }
      if ( (v1 & 8) != 0 )
      {
        v22 = v62;
        LOBYTE(v1) = v1 & 0xF7;
        if ( v62 )
        {
          if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v23 = v64;
        if ( v64 )
        {
          if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
            if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
          }
        }
      }
      sub_1400190D0(a1, (__int64)L"m_receiveControlRegister->AcceptLongPackets()", 77, 51, v15);
      goto LABEL_46;
    }
    v24 = *(_QWORD *)(a1 + 400);
    v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 352) + 8LL))(a1 + 352);
    v26 = *(_QWORD *)(v24 + 8);
    if ( v26 && !*(_DWORD *)(v24 + 20) )
    {
      *(_DWORD *)(v26 + 20484) = v25;
      _InterlockedOr(v52, 0);
LABEL_45:
      v15 = 0;
      goto LABEL_46;
    }
    v15 = -1073741130;
    if ( *(_DWORD *)(v24 + 20) != 3 )
      v15 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOBYTE(v1) = v1 | 0x30;
      v28 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                    a1 + 56,
                                    v65)
                     + 16LL);
      if ( v28 )
        v6 = v28;
      v29 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v67);
      v56 = v15;
      v30 = &unk_1400D44E0;
      v55 = L"m_mmioAccessor->WriteRegisterSafe(0x05004, GetMaxRxPacketSize())";
      v31 = *(void **)(*(_QWORD *)v29 + 16LL);
      v32 = *(_QWORD *)(a1 + 176);
      if ( v31 )
        v30 = v31;
      v54 = (__int64)v30;
      LOBYTE(v30) = 2;
      sub_1400A5E80(
        *(_QWORD *)(v32 + 16),
        (_DWORD)v30,
        10,
        14,
        (__int64)&unk_1400D6D98,
        (__int64)v6,
        v54,
        (__int64)v55,
        v56);
    }
    if ( (v1 & 0x20) != 0 )
    {
      v33 = v66;
      LOBYTE(v1) = v1 & 0xDF;
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
          if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
        }
      }
    }
    if ( (v1 & 0x10) != 0 )
    {
      v34 = v68;
      if ( v68 )
      {
        if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
    sub_14000A164(a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x05004, GetMaxRxPacketSize())", 81, 51, v15);
  }
LABEL_46:
  if ( P )
  {
    sub_14000BFA4(P);
    ExFreePool(P);
  }
  return v15;
}
