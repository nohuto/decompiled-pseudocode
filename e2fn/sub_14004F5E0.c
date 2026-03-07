__int64 __fastcall sub_14004F5E0(__int64 a1, unsigned int a2)
{
  char v2; // di
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // r15
  void *v12; // rsi
  void *v13; // rdi
  void *v14; // rax
  __int64 v15; // rax
  int v16; // edx
  void *v17; // rax
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rdi
  __int64 v20; // rax
  void *v21; // r15
  void *v22; // rsi
  void *v23; // rdi
  void *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  void *v27; // rax
  volatile signed __int32 *v28; // rsi
  signed __int32 v30[8]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v31[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v32; // [rsp+58h] [rbp-50h]
  _BYTE v33[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v34; // [rsp+68h] [rbp-40h]
  _BYTE v35[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v36; // [rsp+78h] [rbp-30h]
  _BYTE v37[8]; // [rsp+80h] [rbp-28h] BYREF
  volatile signed __int32 *v38; // [rsp+88h] [rbp-20h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnInterruptCauseRegister::DisableCause", a1 - 352);
      if ( v7 )
        v4 = v7;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 36), ~(1 << a2));
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 || *(_DWORD *)(v8 + 20) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, a2);
      v21 = &unk_1400D44E0;
      v22 = &unk_1400D44E0;
      if ( *(_QWORD *)(v20 + 16) )
        v22 = *(void **)(v20 + 16);
      v23 = &unk_1400D44E0;
      v24 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v37)
                     + 16LL);
      if ( v24 )
        v23 = v24;
      v25 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v35);
      LOBYTE(v26) = 4;
      v27 = *(void **)(*(_QWORD *)v25 + 16LL);
      if ( v27 )
        v21 = v27;
      sub_1400AB1B8(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v26,
        10,
        14,
        (__int64)&unk_1400D7528,
        (__int64)v21,
        (__int64)v23,
        (__int64)qword_1400B7720,
        (__int64)v22,
        *(_DWORD *)(a1 + 36));
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v28 = v36;
      v2 &= ~8u;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v19 = v38;
      goto LABEL_38;
    }
  }
  else
  {
    *(_DWORD *)(v9 + 216) = 1 << a2;
    _InterlockedOr(v30, 0);
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, a2);
      v11 = &unk_1400D44E0;
      v12 = &unk_1400D44E0;
      if ( *(_QWORD *)(v10 + 16) )
        v12 = *(void **)(v10 + 16);
      v13 = &unk_1400D44E0;
      v14 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v33)
                     + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v31);
      LOBYTE(v16) = 4;
      v17 = *(void **)(*(_QWORD *)v15 + 16LL);
      if ( v17 )
        v11 = v17;
      sub_1400AB1B8(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v16,
        10,
        13,
        (__int64)&unk_1400D7528,
        (__int64)v11,
        (__int64)v13,
        (__int64)qword_1400B7720,
        (__int64)v12,
        *(_DWORD *)(a1 + 36));
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v18 = v32;
      v2 &= ~2u;
      if ( v32 )
      {
        if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v19 = v34;
LABEL_38:
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
  }
  if ( v4 )
  {
    sub_14000BFA4(v4);
    ExFreePool(v4);
  }
  return 0LL;
}
