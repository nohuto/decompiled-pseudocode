__int64 __fastcall sub_140062698(_QWORD *a1, __int64 a2, char a3)
{
  char v3; // di
  __int64 *v5; // r14
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  unsigned int v10; // r15d
  void *v11; // rsi
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  void *v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  _BYTE v20[8]; // [rsp+50h] [rbp-39h] BYREF
  volatile signed __int32 *v21; // [rsp+58h] [rbp-31h]
  _BYTE v22[8]; // [rsp+60h] [rbp-29h] BYREF
  volatile signed __int32 *v23; // [rsp+68h] [rbp-21h]
  __int128 v24; // [rsp+70h] [rbp-19h] BYREF
  __int64 v25; // [rsp+80h] [rbp-9h]
  int Flink; // [rsp+88h] [rbp-1h] BYREF
  __int128 v27; // [rsp+8Ch] [rbp+3h]
  int v28; // [rsp+9Ch] [rbp+13h]
  int v29; // [rsp+A0h] [rbp+17h]
  int v30; // [rsp+A4h] [rbp+1Bh]
  __int64 v31; // [rsp+A8h] [rbp+1Fh]
  __int64 v32; // [rsp+B0h] [rbp+27h]
  void *v33; // [rsp+B8h] [rbp+2Fh]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14005A6E0(Pool2, (__int64)L"os_services::DeferredProcedureCall::Init", (__int64)a1);
      if ( v9 )
        v5 = v9;
    }
  }
  v25 = 0LL;
  v24 = 0LL;
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x17 )
      LODWORD(v24) = -1;
    else
      LODWORD(v24) = stru_1400DF410.Queue.ListEntry.Flink[11].Blink;
  }
  else
  {
    LODWORD(v24) = 24;
  }
  v28 = 0;
  v32 = 0LL;
  *((_QWORD *)&v24 + 1) = sub_1400625C0;
  LOBYTE(v25) = a3;
  v27 = 0LL;
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
  v33 = off_1400DF278;
  v29 = 1;
  v30 = 1;
  v31 = a2;
  v10 = (*(__int64 (__fastcall **)(__int64, __int128 *, int *, _QWORD *))(qword_1400DF678 + 888))(
          qword_1400DF6A8,
          &v24,
          &Flink,
          a1 + 46);
  if ( v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = &unk_1400D44E0;
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v22) + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v20);
      LOBYTE(v15) = 2;
      v16 = *(void **)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v11 = v16;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v15,
        5,
        10,
        (__int64)&unk_1400D8318,
        (__int64)v11,
        (__int64)v12,
        (__int64)L"WdfDpcCreate(&dpcConfig, &dpcAttributes, &m_dpcHandle)",
        v10);
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v17 = v21;
      v3 &= ~2u;
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v18 = v23;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_1400143F0((int)a1, (__int64)L"WdfDpcCreate(&dpcConfig, &dpcAttributes, &m_dpcHandle)", 63, 129, v10);
  }
  else
  {
    v10 = 0;
    *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, void *))(qword_1400DF678 + 1616))(
                 qword_1400DF6A8,
                 a1[46],
                 off_1400DF278) = a1;
  }
  if ( v5 )
  {
    sub_14005A99C(v5);
    ExFreePool(v5);
  }
  return v10;
}
