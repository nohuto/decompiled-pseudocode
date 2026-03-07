__int64 __fastcall sub_14005FCC0(_QWORD *a1, __int64 a2)
{
  char v2; // di
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  unsigned int v8; // r15d
  void *v9; // rsi
  void *v10; // rdi
  void *v11; // rax
  __int64 v12; // rax
  int v13; // edx
  void *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  _BYTE v18[8]; // [rsp+50h] [rbp-39h] BYREF
  volatile signed __int32 *v19; // [rsp+58h] [rbp-31h]
  _BYTE v20[8]; // [rsp+60h] [rbp-29h] BYREF
  volatile signed __int32 *v21; // [rsp+68h] [rbp-21h]
  __int128 v22; // [rsp+70h] [rbp-19h] BYREF
  __int64 v23; // [rsp+80h] [rbp-9h]
  int Flink; // [rsp+88h] [rbp-1h] BYREF
  __int128 v25; // [rsp+8Ch] [rbp+3h]
  int v26; // [rsp+9Ch] [rbp+13h]
  int v27; // [rsp+A0h] [rbp+17h]
  int v28; // [rsp+A4h] [rbp+1Bh]
  __int64 v29; // [rsp+A8h] [rbp+1Fh]
  __int64 v30; // [rsp+B0h] [rbp+27h]
  void *v31; // [rsp+B8h] [rbp+2Fh]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005A6E0(Pool2, (__int64)L"os_services::BaseWorkItem::Init", (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  v26 = 0;
  v30 = 0LL;
  v25 = 0LL;
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
  v31 = off_1400DF2F0;
  v27 = 1;
  v28 = 1;
  v29 = a2;
  v23 = 0LL;
  v22 = 0LL;
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x43 )
      LODWORD(v22) = -1;
    else
      LODWORD(v22) = stru_1400DF410.Queue.ListEntry.Flink[33].Blink;
  }
  else
  {
    LODWORD(v22) = 24;
  }
  *((_QWORD *)&v22 + 1) = sub_14005FC80;
  LOBYTE(v23) = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, int *, _QWORD *))(qword_1400DF678 + 3032))(
         qword_1400DF6A8,
         &v22,
         &Flink,
         a1 + 45);
  if ( v8 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = &unk_1400D44E0;
      v10 = &unk_1400D44E0;
      v11 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v20) + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v18);
      LOBYTE(v13) = 2;
      v14 = *(void **)(*(_QWORD *)v12 + 16LL);
      if ( v14 )
        v9 = v14;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v13,
        5,
        10,
        (__int64)&unk_1400D7DC8,
        (__int64)v9,
        (__int64)v10,
        (__int64)L"WdfWorkItemCreate(&workItemConfig, &attributes, &m_workItem)",
        v8);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v15 = v19;
      v2 &= ~2u;
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v16 = v21;
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    sub_14005E0C8((int)a1, (__int64)L"WdfWorkItemCreate(&workItemConfig, &attributes, &m_workItem)", 66, 150, v8);
  }
  else
  {
    v8 = 0;
    *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, void *))(qword_1400DF678 + 1616))(
                 qword_1400DF6A8,
                 a1[45],
                 off_1400DF2F0) = a1;
  }
  if ( v4 )
  {
    sub_14005A99C(v4);
    ExFreePool(v4);
  }
  return v8;
}
