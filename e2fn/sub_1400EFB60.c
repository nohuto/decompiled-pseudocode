__int64 *__fastcall sub_1400EFB60(__int64 a1, __int64 *a2, unsigned int a3)
{
  char v3; // di
  unsigned __int64 v4; // r12
  __int64 *v6; // rbp
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  unsigned __int64 v10; // rdx
  const wchar_t *v11; // rsi
  const wchar_t *v12; // rdi
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  _BYTE v18[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v19; // [rsp+58h] [rbp-40h]
  _BYTE v20[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v21; // [rsp+68h] [rbp-30h]

  v3 = 0;
  v4 = a3;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareAbstraction::GetRxQueue", a1 - 352);
      if ( v9 )
        v6 = v9;
    }
  }
  v10 = v4;
  if ( v4 < *(_QWORD *)(a1 + 272) )
  {
    sub_1400A52C8(a2, (_QWORD *)(*(_QWORD *)(a1 + 264) + 16 * v4));
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             v20)
                              + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                             a1 - 296,
                                             v18)
                              + 16LL);
      if ( v14 )
        v11 = v14;
      sub_1400A60F4(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        0xAu,
        0x63u,
        (__int64)&unk_1400D49F8,
        v11,
        v12,
        (const wchar_t *)qword_14014EC70);
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v15 = v19;
      v3 &= ~2u;
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, unsigned __int64))(*(_QWORD *)v15 + 8LL))(v15, v10);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v16 = v21;
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, unsigned __int64))(*(_QWORD *)v16 + 8LL))(v16, v10);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  if ( v6 )
  {
    sub_14000BFA4(v6);
    ExFreePool(v6);
  }
  return a2;
}
