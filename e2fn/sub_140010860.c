__int64 __fastcall sub_140010860(__int64 a1, __int64 a2)
{
  char v2; // si
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // rsi
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rdi
  unsigned int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r11
  unsigned __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r10
  void *v24; // rsi
  void *v25; // rdi
  void *v26; // rax
  __int64 v27; // rax
  int v28; // edx
  void *v29; // rax
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v31; // rdi
  signed __int32 v32[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+30h] [rbp-88h]
  const wchar_t *v34; // [rsp+38h] [rbp-80h]
  __int64 v35; // [rsp+40h] [rbp-78h]
  int v36; // [rsp+48h] [rbp-70h]
  char v37[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v38; // [rsp+58h] [rbp-60h]
  char v39[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v40; // [rsp+68h] [rbp-50h]
  char v41[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v42; // [rsp+78h] [rbp-40h]
  char v43[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v44; // [rsp+88h] [rbp-30h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareReceiveScaling::SetHashSecretKey", a1 - 352);
      if ( v7 )
        v4 = v7;
    }
  }
  if ( *(_QWORD *)(a2 + 16) <= 0x28uLL )
  {
    sub_1400813BC(a1 - 352, a2);
    v18 = 0LL;
    v19 = *(_QWORD *)(a2 + 8);
    v20 = *(_QWORD *)(a2 + 16) >> 2;
    if ( v20 )
    {
      while ( 1 )
      {
        v21 = *(_QWORD *)(a1 + 120);
        v22 = *(_QWORD *)(v21 + 8);
        if ( !v22 || *(_DWORD *)(v21 + 20) )
          break;
        v17 = *(unsigned int *)(v19 + 4 * v18);
        *(_DWORD *)((unsigned int)(4 * v18 + 23680) + v22) = v17;
        _InterlockedOr(v32, 0);
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= v20 )
          goto LABEL_28;
      }
      v16 = -1073741130;
      if ( *(_DWORD *)(v21 + 20) != 3 )
        v16 = -1073741661;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v24 = &unk_1400D44E0;
        v25 = &unk_1400D44E0;
        v26 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)(a1 - 296) + 16LL))(
                                      a1 - 296,
                                      v43,
                                      v18)
                       + 16LL);
        if ( v26 )
          v25 = v26;
        v27 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v41);
        LODWORD(v35) = v16;
        v34 = L"m_mmioAccessor->WriteRegisterSafe((0x05C80 + ((i) * 4)), hashSecretKeyData[i])";
        LOBYTE(v28) = 2;
        v33 = (__int64)v25;
        v29 = *(void **)(*(_QWORD *)v27 + 16LL);
        if ( v29 )
          v24 = v29;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          v28,
          10,
          24,
          (__int64)&unk_1400D5028,
          (__int64)v24,
          v33,
          (__int64)v34,
          v35);
        v2 = 12;
      }
      if ( (v2 & 8) != 0 )
      {
        v30 = v42;
        v2 &= ~8u;
        if ( v42 )
        {
          if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v30 + 8LL))(v30, v17, v18);
            if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v31 = v44;
        if ( v44 )
        {
          if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v31 + 8LL))(v31, v17, v18);
            if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
      }
      sub_14000F7A8(
        a1 - 352,
        (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x05C80 + ((i) * 4)), hashSecretKeyData[i])",
        235,
        54,
        v16);
    }
    else
    {
LABEL_28:
      v16 = 0;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v39)
                     + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v37);
      v36 = 40;
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A6D50(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v12,
        10,
        23,
        (__int64)&unk_1400D5028,
        (__int64)v8,
        (__int64)v9,
        (__int64)qword_1400B7720,
        *(_QWORD *)(a2 + 16),
        v36);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v38;
      v2 &= ~2u;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v15 = v40;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
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
    sub_14000BFA4(v4);
    ExFreePool(v4);
  }
  return v16;
}
