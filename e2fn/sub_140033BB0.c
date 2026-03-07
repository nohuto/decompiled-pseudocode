void __fastcall sub_140033BB0(__int64 a1, _DWORD *a2)
{
  char v2; // di
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  int v8; // edx
  void *v9; // rsi
  void *v10; // rdi
  void *v11; // rax
  __int64 v12; // rax
  int v13; // edx
  void *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  unsigned int v17; // edx
  __int64 v18; // rdx
  void (*v19)(void); // rax
  __int64 v20; // rdx
  void (*v21)(void); // rax
  __int64 *v22; // rcx
  __int64 v23; // rdx
  signed __int32 v24[8]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v25[8]; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int32 *v26; // [rsp+48h] [rbp-30h]
  _BYTE v27[8]; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int32 *v28; // [rsp+58h] [rbp-20h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareRxFilter::SetFilters", a1 - 352);
      if ( v7 )
        v4 = v7;
    }
  }
  sub_140089B84(a1 - 352, a1 + 36, L"Configuring Rx filters to:");
  *(_DWORD *)(a1 + 36) = *a2;
  v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL) + 21508LL);
  if ( v8 == -1 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = &unk_1400D44E0;
      v10 = &unk_1400D44E0;
      v11 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v27)
                     + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v25);
      LOBYTE(v13) = 2;
      v14 = *(void **)(*(_QWORD *)v12 + 16LL);
      if ( v14 )
        v9 = v14;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v13,
        10,
        15,
        (__int64)&unk_1400D69D8,
        (__int64)v9,
        (__int64)v10,
        (__int64)qword_1400B7720);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v15 = v26;
      v2 &= ~2u;
      if ( v26 )
      {
        if ( !_InterlockedDecrement(v26 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( !_InterlockedDecrement(v15 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v16 = v28;
      if ( v28 )
      {
        if ( !_InterlockedDecrement(v28 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( !_InterlockedDecrement(v16 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
  }
  else
  {
    v17 = v8 | 0x80000000;
    if ( (*(_BYTE *)a2 & 1) == 0 )
      v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL) + 21508LL) & 0x7FFFFFFF;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL) + 21508LL) = v17;
    _InterlockedOr(v24, 0);
    if ( (*a2 & 2) != 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 104) + 104LL))(*(_QWORD *)(a1 + 104), 0LL);
    else
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 - 352) + 56LL))(a1 - 352);
    v18 = **(_QWORD **)(a1 + 104);
    if ( (*a2 & 0x10) != 0 )
      v19 = *(void (**)(void))(v18 + 24);
    else
      v19 = *(void (**)(void))(v18 + 32);
    v19();
    v20 = **(_QWORD **)(a1 + 104);
    if ( (*a2 & 0x14) != 0 )
      v21 = *(void (**)(void))(v20 + 40);
    else
      v21 = *(void (**)(void))(v20 + 48);
    v21();
    v22 = *(__int64 **)(a1 + 104);
    v23 = *v22;
    if ( (*a2 & 0x18) != 0 )
      (*(void (__fastcall **)(__int64 *))(v23 + 56))(v22);
    else
      (*(void (__fastcall **)(__int64 *))(v23 + 64))(v22);
  }
  if ( v4 )
  {
    sub_14000BFA4(v4);
    ExFreePool(v4);
  }
}
