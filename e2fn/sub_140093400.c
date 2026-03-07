__int64 __fastcall sub_140093400(__int64 a1, _QWORD *a2)
{
  char v2; // di
  __int64 *v4; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // rsi
  void *v9; // rdi
  void *v10; // rax
  void *v11; // rax
  int v12; // edx
  volatile signed __int32 *v13; // rsi
  volatile signed __int32 *v14; // rdi
  unsigned int v15; // r14d
  __int64 v16; // rdi
  __int64 v17; // rax
  void *v18; // rsi
  void *v19; // rdx
  void *v20; // rax
  volatile signed __int32 *v21; // rsi
  volatile signed __int32 *v22; // rdi
  void *v23; // rsi
  void *v24; // rdi
  void *v25; // rax
  __int64 v26; // rax
  int v27; // edx
  void *v28; // rax
  volatile signed __int32 *v29; // rsi
  volatile signed __int32 *v30; // rdi
  __int64 v32; // [rsp+30h] [rbp-69h]
  __int64 v33; // [rsp+30h] [rbp-69h]
  _BYTE v34[8]; // [rsp+50h] [rbp-49h] BYREF
  volatile signed __int32 *v35; // [rsp+58h] [rbp-41h]
  _BYTE v36[8]; // [rsp+60h] [rbp-39h] BYREF
  volatile signed __int32 *v37; // [rsp+68h] [rbp-31h]
  _BYTE v38[8]; // [rsp+70h] [rbp-29h] BYREF
  volatile signed __int32 *v39; // [rsp+78h] [rbp-21h]
  _BYTE v40[8]; // [rsp+80h] [rbp-19h] BYREF
  volatile signed __int32 *v41; // [rsp+88h] [rbp-11h]
  _BYTE v42[8]; // [rsp+90h] [rbp-9h] BYREF
  volatile signed __int32 *v43; // [rsp+98h] [rbp-1h]
  _BYTE v44[8]; // [rsp+A0h] [rbp+7h] BYREF
  volatile signed __int32 *v45; // [rsp+A8h] [rbp+Fh]
  __int64 (__fastcall **v46)(PVOID); // [rsp+B0h] [rbp+17h] BYREF
  PVOID P; // [rsp+B8h] [rbp+1Fh]
  __int64 v48; // [rsp+C0h] [rbp+27h]
  __int64 v49; // [rsp+C8h] [rbp+2Fh]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterReceiveScaling::SetIndirectionEntries", a1);
      if ( v7 )
        v4 = v7;
    }
  }
  if ( *(_BYTE *)(a1 + 384) )
  {
    P = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    v46 = off_1400D4D58;
    v15 = sub_140092694(a1, a2, (__int64)&v46);
    if ( v15 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v16 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v38);
        v17 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v40);
        v18 = &unk_1400D44E0;
        v19 = &unk_1400D44E0;
        v20 = *(void **)(*(_QWORD *)v17 + 16LL);
        if ( v20 )
          v19 = v20;
        if ( *(_QWORD *)(v16 + 16) )
          v18 = *(void **)(v16 + 16);
        v33 = (__int64)v19;
        LOBYTE(v19) = 2;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          (_DWORD)v19,
          13,
          27,
          (__int64)&unk_1400D9F78,
          (__int64)v18,
          v33,
          (__int64)L"PrepareHardwareIndireactionTable(indirectionEntries, indirectionTable)",
          v15);
        v2 = 12;
      }
      if ( (v2 & 8) != 0 )
      {
        v21 = v39;
        v2 &= ~8u;
        if ( v39 )
        {
          if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v22 = v41;
        if ( v41 )
        {
          if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
      }
      sub_14000F510(
        a1,
        (__int64)L"PrepareHardwareIndireactionTable(indirectionEntries, indirectionTable)",
        218,
        107,
        v15);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(PVOID)))(**(_QWORD **)(a1 + 368) + 72LL))(
              *(_QWORD *)(a1 + 368),
              &v46);
      if ( v15 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v23 = &unk_1400D44E0;
          v24 = &unk_1400D44E0;
          v25 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                        a1 + 56,
                                        v44)
                         + 16LL);
          if ( v25 )
            v24 = v25;
          v26 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v42);
          LOBYTE(v27) = 2;
          v28 = *(void **)(*(_QWORD *)v26 + 16LL);
          if ( v28 )
            v23 = v28;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            v27,
            13,
            28,
            (__int64)&unk_1400D9F78,
            (__int64)v23,
            (__int64)v24,
            (__int64)L"m_hardwareReceiveScaling->SetIndirectionTable(indirectionTable)",
            v15);
          v2 = 48;
        }
        if ( (v2 & 0x20) != 0 )
        {
          v29 = v43;
          v2 &= ~0x20u;
          if ( v43 )
          {
            if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
              if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
            }
          }
        }
        if ( (v2 & 0x10) != 0 )
        {
          v30 = v45;
          if ( v45 )
          {
            if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
              if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
            }
          }
        }
        sub_14000A018(a1, (__int64)L"m_hardwareReceiveScaling->SetIndirectionTable(indirectionTable)", 225, 107, v15);
      }
      else
      {
        sub_140093948(a1, &v46, a2);
        v15 = 0;
      }
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
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v36)
                     + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                    a1 + 56,
                                    v34)
                     + 16LL);
      if ( v11 )
        v8 = v11;
      v32 = (__int64)v9;
      v2 = 3;
      LOBYTE(v12) = 3;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v12,
        13,
        26,
        (__int64)&unk_1400D9F78,
        (__int64)v8,
        v32,
        (__int64)qword_1400B7720);
    }
    if ( (v2 & 2) != 0 )
    {
      v13 = v35;
      v2 &= ~2u;
      if ( v35 )
      {
        if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v14 = v37;
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    v15 = -1073741637;
  }
  if ( v4 )
  {
    sub_140091BA8(v4);
    ExFreePool(v4);
  }
  return v15;
}
