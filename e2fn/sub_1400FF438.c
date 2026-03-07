void __fastcall sub_1400FF438(_QWORD *a1)
{
  char v1; // di
  __int64 *v2; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // edx
  const wchar_t *v9; // rsi
  const wchar_t *v10; // rdi
  const wchar_t *v11; // rax
  const wchar_t *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  signed __int32 v15[8]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int32 *v17; // [rsp+48h] [rbp-30h]
  _BYTE v18[8]; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int32 *v19; // [rsp+58h] [rbp-20h]

  v1 = 0;
  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareWolPatterns::DisableAdvancedPowerManagement",
             (__int64)a1);
      if ( v5 )
        v2 = v5;
    }
  }
  v6 = a1[54];
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 && !*(_DWORD *)(v6 + 20) )
  {
    v8 = *(_DWORD *)(v7 + 22528);
    if ( v8 != -1 || *(_DWORD *)(*(_QWORD *)(v6 + 8) + 8LL) != -1 )
    {
      *(_DWORD *)(*(_QWORD *)(v6 + 8) + 22528LL) = v8 & 0xFFFFFFF6;
      _InterlockedOr(v15, 0);
      goto LABEL_27;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 3LL);
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v9 = (const wchar_t *)&unk_1400D44E0;
    v10 = (const wchar_t *)&unk_1400D44E0;
    v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v18)
                            + 16LL);
    if ( v11 )
      v10 = v11;
    v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v16)
                            + 16LL);
    if ( v12 )
      v9 = v12;
    sub_1400A3320(
      *(_QWORD *)(a1[22] + 16LL),
      2u,
      0xAu,
      0x1Cu,
      (__int64)&unk_1400D64E8,
      v9,
      v10,
      (const wchar_t *)qword_14014EC70);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v13 = v17;
    v1 &= ~2u;
    if ( v17 )
    {
      if ( !_InterlockedDecrement(v17 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        if ( !_InterlockedDecrement(v13 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v14 = v19;
    if ( v19 )
    {
      if ( !_InterlockedDecrement(v19 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( !_InterlockedDecrement(v14 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
LABEL_27:
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
}
