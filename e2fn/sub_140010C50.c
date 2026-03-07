__int64 __fastcall sub_140010C50(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // rax
  void *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned int v14; // r15d
  void *v16; // rsi
  void *v17; // rdi
  void *v18; // rax
  __int64 v19; // rax
  int v20; // edx
  void *v21; // rax
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  signed __int32 v24[8]; // [rsp+0h] [rbp-59h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-19h]
  _BYTE v26[8]; // [rsp+50h] [rbp-9h] BYREF
  volatile signed __int32 *v27; // [rsp+58h] [rbp-1h]
  _BYTE v28[8]; // [rsp+60h] [rbp+7h] BYREF
  volatile signed __int32 *v29; // [rsp+68h] [rbp+Fh]
  __int64 (__fastcall **v30)(PVOID); // [rsp+70h] [rbp+17h] BYREF
  PVOID P; // [rsp+78h] [rbp+1Fh]
  unsigned __int64 v32; // [rsp+80h] [rbp+27h]
  __int64 v33; // [rsp+88h] [rbp+2Fh]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareReceiveScaling::SetIndirectionTable",
             a1 - 352);
      if ( v7 )
        v4 = v7;
    }
  }
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v30 = off_1400D4D58;
  v8 = (void *)ExAllocatePool2(64LL, 256LL, 1802921315LL);
  v9 = v8;
  if ( v8 )
  {
    v33 = 64LL;
    P = v8;
    v32 = 32LL;
  }
  sub_14001065C(a1 - 352, a2, (__int64)&v30);
  sub_14008148C(a1 - 352, a2);
  v11 = 0LL;
  if ( (-(__int64)(v9 != 0LL) & 0x20) != 0 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(a1 + 120);
      v13 = *(_QWORD *)(v12 + 8);
      if ( !v13 || *(_DWORD *)(v12 + 20) )
        break;
      v10 = *((unsigned int *)P + v11);
      *(_DWORD *)((unsigned int)(4 * v11 + 23552) + v13) = v10;
      _InterlockedOr(v24, 0);
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= v32 )
        goto LABEL_12;
    }
    v14 = -1073741130;
    if ( *(_DWORD *)(v12 + 20) != 3 )
      v14 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v16 = &unk_1400D44E0;
      v17 = &unk_1400D44E0;
      v18 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v28,
                                    v11)
                     + 16LL);
      if ( v18 )
        v17 = v18;
      v19 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v26);
      v25 = v14;
      LOBYTE(v20) = 2;
      v21 = *(void **)(*(_QWORD *)v19 + 16LL);
      if ( v21 )
        v16 = v21;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v20,
        10,
        25,
        (__int64)&unk_1400D5028,
        (__int64)v16,
        (__int64)v17,
        (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x05C00 + ((i) * 4)), retaRegistersShadow[i])",
        v25);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v22 = v27;
      v2 &= ~2u;
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v22 + 8LL))(v22, v10, v11);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v23 = v29;
      if ( v29 )
      {
        if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v23 + 8LL))(v23, v10, v11);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    sub_14000F8F4(
      a1 - 352,
      (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x05C00 + ((i) * 4)), retaRegistersShadow[i])",
      258,
      54,
      v14);
  }
  else
  {
LABEL_12:
    v14 = 0;
  }
  if ( P )
    ExFreePool(P);
  if ( v4 )
  {
    sub_14000BFA4(v4);
    ExFreePool(v4);
  }
  return v14;
}
