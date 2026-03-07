__int64 __fastcall sub_140092CFC(__int64 a1, _QWORD *a2)
{
  char v2; // di
  __int64 *v4; // r15
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  void *v11; // r12
  void *v12; // rdx
  void *v13; // rax
  volatile signed __int32 *v14; // rsi
  volatile signed __int32 *v15; // rdi
  unsigned int v16; // r14d
  __int64 v17; // rsi
  void *v18; // r12
  void *v19; // rdi
  void *v20; // rax
  void *v21; // rax
  volatile signed __int32 *v22; // rsi
  volatile signed __int32 *v23; // rdi
  __int64 v24; // rax
  void *v25; // r14
  __int64 v26; // r8
  __int64 v27; // rsi
  void *v28; // r12
  void *v29; // rdi
  void *v30; // rax
  __int64 v31; // rax
  int v32; // edx
  void *v33; // rax
  volatile signed __int32 *v34; // rsi
  volatile signed __int32 *v35; // rdi
  void *v36; // r12
  void *v37; // rdi
  void *v38; // rax
  __int64 v39; // rax
  int v40; // edx
  void *v41; // rax
  volatile signed __int32 *v42; // rsi
  volatile signed __int32 *v43; // rdi
  __int64 v45; // [rsp+30h] [rbp-91h]
  __int64 (__fastcall **v46)(PVOID); // [rsp+58h] [rbp-69h] BYREF
  PVOID P; // [rsp+60h] [rbp-61h]
  __int64 v48; // [rsp+68h] [rbp-59h]
  __int64 v49; // [rsp+70h] [rbp-51h]
  _BYTE v50[8]; // [rsp+78h] [rbp-49h] BYREF
  volatile signed __int32 *v51; // [rsp+80h] [rbp-41h]
  _BYTE v52[8]; // [rsp+88h] [rbp-39h] BYREF
  volatile signed __int32 *v53; // [rsp+90h] [rbp-31h]
  _BYTE v54[8]; // [rsp+98h] [rbp-29h] BYREF
  volatile signed __int32 *v55; // [rsp+A0h] [rbp-21h]
  _BYTE v56[8]; // [rsp+A8h] [rbp-19h] BYREF
  volatile signed __int32 *v57; // [rsp+B0h] [rbp-11h]
  _BYTE v58[8]; // [rsp+B8h] [rbp-9h] BYREF
  volatile signed __int32 *v59; // [rsp+C0h] [rbp-1h]
  _BYTE v60[8]; // [rsp+C8h] [rbp+7h] BYREF
  volatile signed __int32 *v61; // [rsp+D0h] [rbp+Fh]
  _BYTE v62[8]; // [rsp+D8h] [rbp+17h] BYREF
  volatile signed __int32 *v63; // [rsp+E0h] [rbp+1Fh]
  _BYTE v64[8]; // [rsp+E8h] [rbp+27h] BYREF
  volatile signed __int32 *v65; // [rsp+F0h] [rbp+2Fh]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterReceiveScaling::SetHashSecretKey", a1);
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = a2[1];
  if ( v8 )
  {
    if ( *(_BYTE *)(a1 + 384) )
    {
      P = 0LL;
      v46 = off_1400D4D58;
      v24 = 0LL;
      v49 = 0LL;
      v48 = 0LL;
      if ( 2 * v8 )
      {
        v25 = (void *)ExAllocatePool2(64LL, 2 * v8, 1802921315LL);
        if ( v25 )
        {
          v49 = 2 * v8;
          v24 = v8;
          P = v25;
          v48 = v8;
        }
        else
        {
          v24 = v48;
        }
      }
      v26 = a2[1];
      if ( v26 == v24 )
      {
        sub_1400B6980(P, *a2, v26);
        v16 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(PVOID)))(**(_QWORD **)(a1 + 368) + 64LL))(
                *(_QWORD *)(a1 + 368),
                &v46);
        if ( v16 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v36 = &unk_1400D44E0;
            v37 = &unk_1400D44E0;
            v38 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                          a1 + 56,
                                          v64)
                           + 16LL);
            if ( v38 )
              v37 = v38;
            v39 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v62);
            LOBYTE(v40) = 2;
            v41 = *(void **)(*(_QWORD *)v39 + 16LL);
            if ( v41 )
              v36 = v41;
            sub_1400A5E80(
              *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
              v40,
              13,
              25,
              (__int64)&unk_1400D9F78,
              (__int64)v36,
              (__int64)v37,
              (__int64)L"m_hardwareReceiveScaling->SetHashSecretKey(hardwareHashSecretKey)",
              v16);
            v2 = -64;
          }
          if ( v2 < 0 )
          {
            v42 = v63;
            v2 &= ~0x80u;
            if ( v63 )
            {
              if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
                if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
              }
            }
          }
          if ( (v2 & 0x40) != 0 )
          {
            v43 = v65;
            if ( v65 )
            {
              if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
                if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
              }
            }
          }
          sub_14002D834(
            a1,
            (__int64)L"m_hardwareReceiveScaling->SetHashSecretKey(hardwareHashSecretKey)",
            201,
            107,
            v16);
        }
        else
        {
          v16 = 0;
        }
      }
      else
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v27 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
          v28 = &unk_1400D44E0;
          v29 = &unk_1400D44E0;
          v30 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                        a1 + 56,
                                        v60)
                         + 16LL);
          if ( v30 )
            v29 = v30;
          v31 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v58);
          LOBYTE(v32) = 2;
          v33 = *(void **)(*(_QWORD *)v31 + 16LL);
          if ( v33 )
            v28 = v33;
          sub_1400A3320(v27, v32, 11, 24, (__int64)&unk_1400D9F78, (__int64)v28, (__int64)v29, (__int64)qword_1400B7720);
          v2 = 48;
        }
        if ( (v2 & 0x20) != 0 )
        {
          v34 = v59;
          v2 &= ~0x20u;
          if ( v59 )
          {
            if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
              if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
            }
          }
        }
        if ( (v2 & 0x10) != 0 )
        {
          v35 = v61;
          if ( v61 )
          {
            if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
              if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
            }
          }
        }
        v16 = -1073741801;
      }
      v46 = off_1400D4D58;
      if ( P )
      {
        ExFreePool(P);
        P = 0LL;
      }
      v48 = 0LL;
      v49 = 0LL;
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
        v18 = &unk_1400D44E0;
        v19 = &unk_1400D44E0;
        v20 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                      a1 + 56,
                                      v54)
                       + 16LL);
        if ( v20 )
          v19 = v20;
        v21 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v56)
                       + 16LL);
        if ( v21 )
          v18 = v21;
        sub_1400A3320(v17, 3, 13, 23, (__int64)&unk_1400D9F78, (__int64)v19, (__int64)v18, (__int64)qword_1400B7720);
        v2 = 12;
      }
      if ( (v2 & 8) != 0 )
      {
        v22 = v55;
        v2 &= ~8u;
        if ( v55 )
        {
          if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v23 = v57;
        if ( v57 )
        {
          if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
            if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
          }
        }
      }
      v16 = -1073741637;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v52);
      v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v50);
      v11 = &unk_1400D44E0;
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)v10 + 16LL);
      if ( v13 )
        v12 = v13;
      if ( *(_QWORD *)(v9 + 16) )
        v11 = *(void **)(v9 + 16);
      v45 = (__int64)v12;
      LOBYTE(v12) = 2;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        (_DWORD)v12,
        11,
        22,
        (__int64)&unk_1400D9F78,
        v45,
        (__int64)v11,
        (__int64)qword_1400B7720);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v51;
      v2 &= ~2u;
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v15 = v53;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    v16 = -1073741811;
  }
  if ( v4 )
  {
    sub_140091BA8(v4);
    ExFreePool(v4);
  }
  return v16;
}
