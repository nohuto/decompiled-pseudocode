__int64 __fastcall sub_1400F5384(_QWORD *a1)
{
  char v1; // bp
  __int64 *v3; // rsi
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rdi
  _QWORD *v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rcx
  const wchar_t *v16; // rdi
  const wchar_t *v17; // rbx
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  unsigned int v22; // ebx
  _BYTE v24[8]; // [rsp+40h] [rbp-88h] BYREF
  volatile signed __int32 *v25; // [rsp+48h] [rbp-80h]
  _BYTE v26[8]; // [rsp+50h] [rbp-78h] BYREF
  volatile signed __int32 *v27; // [rsp+58h] [rbp-70h]
  _BYTE v28[8]; // [rsp+60h] [rbp-68h] BYREF
  volatile signed __int32 *v29; // [rsp+68h] [rbp-60h]
  __int64 (__fastcall **v30)(PVOID); // [rsp+70h] [rbp-58h] BYREF
  PVOID P; // [rsp+80h] [rbp-48h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareTxQueue::AllocateHeadWriteBackCommonBuffer",
             (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = (__int64 *)a1[47];
  v7 = a1 + 7;
  v8 = *v6;
  v9 = (*(__int64 (__fastcall **)(_QWORD *))(a1[7] + 8LL))(a1 + 7);
  sub_140010F38((__int64)&v30, v9, (__int64)L" Head Write back");
  v10 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int64))(v8 + 16))(v6, v24, 16LL);
  v11 = a1[81];
  a1[81] = v10[1];
  v12 = *v10;
  v10[1] = v11;
  v13 = a1[80];
  a1[80] = v12;
  *v10 = v13;
  v14 = v25;
  if ( v25 )
  {
    if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  v30 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v15 = a1[80];
  if ( v15 )
  {
    v22 = 0;
    *(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15) = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v16 = (const wchar_t *)&unk_1400D44E0;
      v17 = (const wchar_t *)&unk_1400D44E0;
      v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v7 + 16LL))(a1 + 7, v28)
                              + 16LL);
      if ( v18 )
        v17 = v18;
      v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v7 + 24LL))(a1 + 7, v26)
                              + 16LL);
      if ( v19 )
        v16 = v19;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xAu,
        0x20u,
        (__int64)&unk_1400D52E0,
        v16,
        v17,
        L"m_headWriteBackCommonBuffer");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v20 = v27;
      v1 &= ~2u;
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v21 = v29;
      if ( v29 )
      {
        if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    sub_14000B7A4((int)a1, (__int64)L"m_headWriteBackCommonBuffer", 483, 58);
    v22 = -1073741801;
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v22;
}
