__int64 __fastcall sub_1400470DC(__int64 a1, char *a2, const char **a3)
{
  char v3; // r14
  __int64 *v5; // r12
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  const char *v9; // r13
  void *v10; // rdi
  void *v11; // rax
  __int64 v12; // rax
  void *v13; // rdx
  void *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  unsigned int v17; // ebx
  void *v18; // rax
  __int64 v19; // rax
  void *v20; // rdx
  void *v21; // rax
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  void *v24; // r14
  void *v25; // rdi
  void *v26; // rax
  __int64 v27; // rax
  int v28; // edx
  void *v29; // rax
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  void *v32; // rsi
  void *v33; // rdi
  void *v34; // rax
  __int64 v35; // rax
  int v36; // edx
  void *v37; // rax
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 *v39; // rbx
  __int64 v41; // [rsp+30h] [rbp-A1h]
  __int64 v42; // [rsp+30h] [rbp-A1h]
  _BYTE v43[8]; // [rsp+78h] [rbp-59h] BYREF
  volatile signed __int32 *v44; // [rsp+80h] [rbp-51h]
  _BYTE v45[8]; // [rsp+88h] [rbp-49h] BYREF
  volatile signed __int32 *v46; // [rsp+90h] [rbp-41h]
  _BYTE v47[8]; // [rsp+98h] [rbp-39h] BYREF
  volatile signed __int32 *v48; // [rsp+A0h] [rbp-31h]
  _BYTE v49[8]; // [rsp+A8h] [rbp-29h] BYREF
  volatile signed __int32 *v50; // [rsp+B0h] [rbp-21h]
  _BYTE v51[8]; // [rsp+B8h] [rbp-19h] BYREF
  volatile signed __int32 *v52; // [rsp+C0h] [rbp-11h]
  _BYTE v53[8]; // [rsp+C8h] [rbp-9h] BYREF
  volatile signed __int32 *v54; // [rsp+D0h] [rbp-1h]
  _BYTE v55[8]; // [rsp+D8h] [rbp+7h] BYREF
  volatile signed __int32 *v56; // [rsp+E0h] [rbp+Fh]
  _BYTE v57[8]; // [rsp+E8h] [rbp+17h] BYREF
  volatile signed __int32 *v58; // [rsp+F0h] [rbp+1Fh]
  const char **v60; // [rsp+148h] [rbp+77h]

  v60 = a3;
  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareMacAddress::GetDellAuxMacString", a1);
      if ( v8 )
        v5 = v8;
    }
    a3 = v60;
  }
  if ( a2 && a3 )
  {
    if ( a2[9] == 17 && a2[10] == 26 && a2[11] == 10 && a2[12] == 23 && !a2[35] )
    {
      v9 = a2 + 13;
      v10 = &unk_1400D44E0;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v11 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v45)
                       + 16LL);
        if ( v11 )
          v10 = v11;
        v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v43);
        v13 = &unk_1400D44E0;
        v14 = *(void **)(*(_QWORD *)v12 + 16LL);
        if ( v14 )
          v13 = v14;
        v41 = (__int64)v13;
        LOBYTE(v13) = 4;
        sub_1400AA8D8(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          (_DWORD)v13,
          14,
          39,
          (__int64)&unk_1400D72A0,
          v41,
          (__int64)v10,
          (__int64)qword_1400B7720,
          (__int64)v9);
        v3 = 48;
        v10 = &unk_1400D44E0;
      }
      if ( (v3 & 0x20) != 0 )
      {
        v15 = v44;
        v3 &= ~0x20u;
        if ( v44 )
        {
          if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
            if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
          }
        }
      }
      if ( (v3 & 0x10) != 0 )
      {
        v16 = v46;
        v3 &= ~0x10u;
        if ( v46 )
        {
          if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
            if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
          }
        }
      }
      if ( a2[34] == 35 && !strncmp(v9, "_AUXMAC_#", 9uLL) )
      {
        v17 = 0;
        *v60 = v9;
      }
      else
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v3 |= 0xC0u;
          v18 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                        a1 + 56,
                                        v49)
                         + 16LL);
          if ( v18 )
            v10 = v18;
          v19 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v47);
          v20 = &unk_1400D44E0;
          v21 = *(void **)(*(_QWORD *)v19 + 16LL);
          if ( v21 )
            v20 = v21;
          v42 = (__int64)v20;
          LOBYTE(v20) = 4;
          sub_1400A3320(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            (_DWORD)v20,
            14,
            40,
            (__int64)&unk_1400D72A0,
            v42,
            (__int64)v10,
            (__int64)qword_1400B7720);
        }
        if ( v3 < 0 )
        {
          v22 = v48;
          v3 &= ~0x80u;
          if ( v48 )
          {
            if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
              if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
            }
          }
        }
        if ( (v3 & 0x40) != 0 )
        {
          v23 = v50;
          if ( v50 )
          {
            if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
              if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
            }
          }
        }
        v17 = -1072431089;
      }
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v24 = &unk_1400D44E0;
        v25 = &unk_1400D44E0;
        v26 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v53)
                       + 16LL);
        if ( v26 )
          v25 = v26;
        v27 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v51);
        v28 = (unsigned __int8)a2[11];
        v29 = *(void **)(*(_QWORD *)v27 + 16LL);
        if ( v29 )
          v24 = v29;
        LOBYTE(v28) = 4;
        sub_1400AA598(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v28,
          14,
          38,
          (__int64)&unk_1400D72A0,
          (__int64)v24,
          (__int64)v25,
          (__int64)qword_1400B7720,
          a2[9],
          a2[10],
          a2[11],
          a2[12],
          a2[35]);
        v3 = 12;
      }
      if ( (v3 & 8) != 0 )
      {
        v30 = v52;
        v3 &= ~8u;
        if ( v52 )
        {
          if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
            if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
          }
        }
      }
      if ( (v3 & 4) != 0 )
      {
        v31 = v54;
        if ( v54 )
        {
          if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
            if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
      }
      v17 = -1072431095;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v32 = &unk_1400D44E0;
      v33 = &unk_1400D44E0;
      v34 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v57)
                     + 16LL);
      if ( v34 )
        v33 = v34;
      v35 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v55);
      LOBYTE(v36) = 2;
      v37 = *(void **)(*(_QWORD *)v35 + 16LL);
      if ( v37 )
        v32 = v37;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v36,
        14,
        37,
        (__int64)&unk_1400D72A0,
        (__int64)v32,
        (__int64)v33,
        (__int64)qword_1400B7720);
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v38 = v56;
      v3 &= ~2u;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v39 = v58;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
          if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
        }
      }
    }
    v17 = -1073741811;
  }
  if ( v5 )
  {
    sub_140005840(v5);
    ExFreePool(v5);
  }
  return v17;
}
