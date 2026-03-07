__int64 __fastcall sub_140087364(_QWORD *a1, _QWORD *a2)
{
  char v2; // bl
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // r13
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // edx
  void *v14; // rax
  volatile signed __int32 *v15; // rdi
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int64 v19; // rdi
  __int64 v20; // rax
  void *v21; // r13
  void *v22; // rdx
  void *v23; // rax
  volatile signed __int32 *v24; // rdi
  volatile signed __int32 *v25; // rbx
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  volatile signed __int32 *v32; // rdi
  void *v33; // r13
  void *v34; // rdi
  void *v35; // rax
  __int64 v36; // rax
  int v37; // edx
  void *v38; // rax
  volatile signed __int32 *v39; // rdi
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  volatile signed __int32 *v42; // rbx
  volatile signed __int32 *v43; // rbx
  volatile signed __int32 *v44; // rbx
  __int64 v45; // [rsp+38h] [rbp-59h]
  __int64 v46; // [rsp+48h] [rbp-49h] BYREF
  volatile signed __int32 *v47; // [rsp+50h] [rbp-41h]
  _BYTE v48[8]; // [rsp+58h] [rbp-39h] BYREF
  volatile signed __int32 *v49; // [rsp+60h] [rbp-31h]
  _BYTE v50[8]; // [rsp+68h] [rbp-29h] BYREF
  volatile signed __int32 *v51; // [rsp+70h] [rbp-21h]
  _BYTE v52[8]; // [rsp+78h] [rbp-19h] BYREF
  volatile signed __int32 *v53; // [rsp+80h] [rbp-11h]
  _BYTE v54[8]; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v55; // [rsp+90h] [rbp-1h]
  _BYTE v56[8]; // [rsp+98h] [rbp+7h] BYREF
  volatile signed __int32 *v57; // [rsp+A0h] [rbp+Fh]
  _BYTE v58[8]; // [rsp+A8h] [rbp+17h] BYREF
  volatile signed __int32 *v59; // [rsp+B0h] [rbp+1Fh]
  _BYTE v60[8]; // [rsp+B8h] [rbp+27h] BYREF
  volatile signed __int32 *v61; // [rsp+C0h] [rbp+2Fh]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareTrafficGate::Bind", (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  if ( *a2 )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a2 + 8LL))(*a2, &v46);
    if ( v46 )
    {
      v28 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v46 + 8LL))(v46, v56);
      v29 = a1[47];
      a1[47] = v28[1];
      v30 = *v28;
      v28[1] = v29;
      v31 = a1[46];
      a1[46] = v30;
      *v28 = v31;
      v32 = v57;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
          if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
      if ( a1[46] )
      {
        v43 = v47;
        if ( v47 )
        {
          if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
            if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
          }
        }
        if ( v4 )
        {
          sub_14000BFA4(v4);
          ExFreePool(v4);
        }
        v44 = (volatile signed __int32 *)a2[1];
        if ( v44 )
        {
          if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
            if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
          }
        }
        return 0LL;
      }
      else
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v33 = &unk_1400D44E0;
          v34 = &unk_1400D44E0;
          v35 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v60) + 16LL);
          if ( v35 )
            v34 = v35;
          v36 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v58);
          LOBYTE(v37) = 2;
          v38 = *(void **)(*(_QWORD *)v36 + 16LL);
          if ( v38 )
            v33 = v38;
          sub_1400A3320(
            *(_QWORD *)(a1[22] + 16LL),
            v37,
            10,
            12,
            (__int64)&unk_1400D9918,
            (__int64)v33,
            (__int64)v34,
            (__int64)L"m_requestsLock");
          v2 = 48;
        }
        if ( (v2 & 0x20) != 0 )
        {
          v39 = v59;
          v2 &= ~0x20u;
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
        if ( (v2 & 0x10) != 0 )
        {
          v40 = v61;
          if ( v61 )
          {
            if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
              if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
            }
          }
        }
        sub_140022208((int)a1, (__int64)L"m_requestsLock", 62, 91);
        v41 = v47;
        if ( v47 )
        {
          if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
            if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
          }
        }
        if ( v4 )
        {
          sub_14000BFA4(v4);
          ExFreePool(v4);
        }
        v42 = (volatile signed __int32 *)a2[1];
        if ( v42 )
        {
          if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
            if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
          }
        }
        return 3221225495LL;
      }
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v19 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v52);
        v20 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v54);
        v21 = &unk_1400D44E0;
        v22 = &unk_1400D44E0;
        v23 = *(void **)(*(_QWORD *)v20 + 16LL);
        if ( v23 )
          v22 = v23;
        v45 = (__int64)v22;
        LOBYTE(v22) = 2;
        if ( *(_QWORD *)(v19 + 16) )
          v21 = *(void **)(v19 + 16);
        sub_1400A3320(
          *(_QWORD *)(a1[22] + 16LL),
          (_DWORD)v22,
          10,
          11,
          (__int64)&unk_1400D9918,
          (__int64)v21,
          v45,
          (__int64)L"locksFactory");
        v2 = 12;
      }
      if ( (v2 & 8) != 0 )
      {
        v24 = v53;
        v2 &= ~8u;
        if ( v53 )
        {
          if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
            if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v25 = v55;
        if ( v55 )
        {
          if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
            if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
          }
        }
      }
      sub_14000BA2C((int)a1, (__int64)L"locksFactory", 59, 91);
      v26 = v47;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
      if ( v4 )
      {
        sub_14000BFA4(v4);
        ExFreePool(v4);
      }
      v27 = (volatile signed __int32 *)a2[1];
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
      return 3221225635LL;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v48) + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(_QWORD *)(a1[22] + 16LL);
      v12 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v50);
      LOBYTE(v13) = 2;
      v14 = *(void **)(*(_QWORD *)v12 + 16LL);
      if ( v14 )
        v8 = v14;
      sub_1400A3320(v11, v13, 10, 10, (__int64)&unk_1400D9918, (__int64)v9, (__int64)v8, (__int64)L"osServices");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v15 = v49;
      v2 &= ~2u;
      if ( v49 )
      {
        if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v16 = v51;
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    sub_14000B87C((int)a1, (__int64)L"osServices", 55, 91);
    if ( v4 )
    {
      sub_14000BFA4(v4);
      ExFreePool(v4);
    }
    v17 = (volatile signed __int32 *)a2[1];
    if ( v17 && _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return 3221225485LL;
  }
}
