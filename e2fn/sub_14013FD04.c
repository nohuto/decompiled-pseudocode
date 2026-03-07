__int64 __fastcall sub_14013FD04(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // esi
  unsigned int v8; // r12d
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // r15d
  const wchar_t *v13; // rsi
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  _BYTE v19[8]; // [rsp+50h] [rbp-78h] BYREF
  volatile signed __int32 *v20; // [rsp+58h] [rbp-70h]
  _BYTE v21[8]; // [rsp+60h] [rbp-68h] BYREF
  volatile signed __int32 *v22; // [rsp+68h] [rbp-60h]
  _OWORD v23[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v24; // [rsp+90h] [rbp-38h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(
             Pool2,
             (__int64)L"net_adapter::NetAdapterWolPatterns::GetWolParametersFromNetAdapter",
             (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  sub_14009037C(a1);
  v6 = a1[64];
  v24 = 0LL;
  memset(v23, 0, sizeof(v23));
  LODWORD(v23[0]) = 40;
  ((void (__fastcall *)(__int64, __int64, _OWORD *))qword_1400DF960)(qword_1400DF700, v6, v23);
  v7 = 0;
  v8 = ((__int64 (__fastcall *)(__int64, _OWORD *))qword_1400DF968)(qword_1400DF700, v23);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = ((__int64 (__fastcall *)(__int64, _OWORD *, _QWORD))qword_1400DF970)(qword_1400DF700, v23, v7);
      v10 = ((__int64 (__fastcall *)(__int64, __int64))qword_1400DF940)(qword_1400DF700, v9);
      v11 = sub_14013D3D0((__int64)a1, v10, v9);
      if ( v11 )
        break;
      if ( ++v7 >= v8 )
        goto LABEL_9;
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v21)
                              + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v19)
                              + 16LL);
      if ( v16 )
        v13 = v16;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xBu,
        0x2Fu,
        (__int64)&unk_1400D9E10,
        v13,
        v14,
        L"ConfigureWakeByType(wakeSourceType, wakeSource)");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v17 = v20;
      v1 &= ~2u;
      if ( v20 )
      {
        if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v18 = v22;
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_14000F278((int)a1, (__int64)L"ConfigureWakeByType(wakeSourceType, wakeSource)", 428, 113, v11);
  }
  else
  {
LABEL_9:
    v11 = 0;
  }
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v11;
}
