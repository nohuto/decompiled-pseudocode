__int64 __fastcall sub_140063C30(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __int64 *v5; // r14
  int v7; // r15d
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  void *v12; // rsi
  void *v13; // rdi
  void *v14; // rax
  __int64 v15; // rax
  int v16; // edx
  void *v17; // rax
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v19; // rdi
  unsigned int v20; // r15d
  void *v21; // rsi
  void *v22; // rdi
  void *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  volatile signed __int32 *v27; // rdi
  volatile signed __int32 *v28; // rdi
  __int128 v30; // [rsp+50h] [rbp-69h] BYREF
  __int128 v31; // [rsp+60h] [rbp-59h]
  __int64 v32; // [rsp+70h] [rbp-49h]
  int Flink; // [rsp+78h] [rbp-41h] BYREF
  __int128 v34; // [rsp+7Ch] [rbp-3Dh]
  int v35; // [rsp+8Ch] [rbp-2Dh]
  int v36; // [rsp+90h] [rbp-29h]
  int v37; // [rsp+94h] [rbp-25h]
  __int64 v38; // [rsp+98h] [rbp-21h]
  __int64 v39; // [rsp+A0h] [rbp-19h]
  void *v40; // [rsp+A8h] [rbp-11h]
  _BYTE v41[8]; // [rsp+B0h] [rbp-9h] BYREF
  volatile signed __int32 *v42; // [rsp+B8h] [rbp-1h]
  _BYTE v43[8]; // [rsp+C0h] [rbp+7h] BYREF
  volatile signed __int32 *v44; // [rsp+C8h] [rbp+Fh]
  _BYTE v45[8]; // [rsp+D0h] [rbp+17h] BYREF
  volatile signed __int32 *v46; // [rsp+D8h] [rbp+1Fh]
  _BYTE v47[8]; // [rsp+E0h] [rbp+27h] BYREF
  volatile signed __int32 *v48; // [rsp+E8h] [rbp+2Fh]

  v3 = 0;
  v5 = 0LL;
  v7 = a2;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14005A6E0(Pool2, (__int64)L"os_services::OsTimer::Initialize", (__int64)a1);
      if ( v9 )
        v5 = v9;
    }
  }
  v35 = 0;
  v10 = 0xFFFFFFFFLL;
  v39 = 0LL;
  LOBYTE(a2) = byte_1400DF688;
  v34 = 0LL;
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x26 )
      Flink = -1;
    else
      Flink = (int)stru_1400DF410.Queue.ListEntry.Flink[19].Flink;
  }
  else
  {
    Flink = 56;
  }
  v11 = 1LL;
  v36 = 1;
  v37 = 1;
  v40 = off_1400DF2A0;
  v38 = a3;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v12 = &unk_1400D44E0;
        v13 = &unk_1400D44E0;
        v14 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *, __int64, __int64))(a1[7] + 16LL))(
                                      a1 + 7,
                                      v43,
                                      1LL,
                                      0xFFFFFFFFLL)
                       + 16LL);
        if ( v14 )
          v13 = v14;
        v15 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v41);
        LOBYTE(v16) = 2;
        v17 = *(void **)(*(_QWORD *)v15 + 16LL);
        if ( v17 )
          v12 = v17;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          v16,
          5,
          10,
          (__int64)&unk_1400D83F8,
          (__int64)v12,
          (__int64)v13,
          (__int64)qword_1400B7720,
          v7);
        v3 = 3;
      }
      if ( (v3 & 2) != 0 )
      {
        v18 = v42;
        v3 &= ~2u;
        if ( v42 )
        {
          if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)v18 + 8LL))(
              v18,
              a2,
              v11,
              v10);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
          }
        }
      }
      if ( (v3 & 1) != 0 )
      {
        v19 = v44;
        if ( v44 )
        {
          if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)v19 + 8LL))(
              v19,
              a2,
              v11,
              v10);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      v20 = -1073741811;
      goto LABEL_56;
    }
    v36 = 3;
  }
  else
  {
    v36 = 2;
  }
  v32 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x37 )
      LODWORD(v30) = -1;
    else
      LODWORD(v30) = stru_1400DF410.Queue.ListEntry.Flink[27].Blink;
  }
  else
  {
    LODWORD(v30) = 40;
  }
  LODWORD(v31) = 0;
  DWORD2(v31) = 0;
  *((_QWORD *)&v30 + 1) = sub_1400640C0;
  BYTE4(v31) = 1;
  v20 = (*(__int64 (__fastcall **)(__int64, __int128 *, int *, _QWORD *))(qword_1400DF678 + 2544))(
          qword_1400DF6A8,
          &v30,
          &Flink,
          a1 + 46);
  if ( v20 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v21 = &unk_1400D44E0;
      v22 = &unk_1400D44E0;
      v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v47) + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v45);
      LOBYTE(v25) = 2;
      v26 = *(void **)(*(_QWORD *)v24 + 16LL);
      if ( v26 )
        v21 = v26;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v25,
        5,
        11,
        (__int64)&unk_1400D83F8,
        (__int64)v21,
        (__int64)v22,
        (__int64)L"WdfTimerCreate(&timerConfig, &attributes, &m_timer)",
        v20);
      v3 = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v27 = v46;
      v3 &= ~8u;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v28 = v48;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    sub_1400142A4((int)a1, (__int64)L"WdfTimerCreate(&timerConfig, &attributes, &m_timer)", 74, 144, v20);
  }
  else
  {
    v20 = 0;
    *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, void *))(qword_1400DF678 + 1616))(
                 qword_1400DF6A8,
                 a1[46],
                 off_1400DF2A0) = a1;
  }
LABEL_56:
  if ( v5 )
  {
    sub_14005A99C(v5);
    ExFreePool(v5);
  }
  return v20;
}
