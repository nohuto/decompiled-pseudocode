__int64 __fastcall sub_140106860(_QWORD *a1, _BYTE *a2)
{
  char v4; // di
  __int64 *v5; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  int v8; // ebx
  int v9; // ebx
  const wchar_t *v10; // rsi
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  unsigned int v16; // ebx
  int v17; // eax
  const wchar_t *v19; // [rsp+30h] [rbp-30h]
  char v20[8]; // [rsp+40h] [rbp-20h] BYREF
  volatile signed __int32 *v21; // [rsp+48h] [rbp-18h]
  char v22[8]; // [rsp+50h] [rbp-10h] BYREF
  volatile signed __int32 *v23; // [rsp+58h] [rbp-8h]
  int v24; // [rsp+A8h] [rbp+48h] BYREF
  __int16 v25; // [rsp+B0h] [rbp+50h] BYREF
  __int16 v26; // [rsp+B8h] [rbp+58h] BYREF

  v24 = 0;
  v4 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwarePhy::Is10MbpsSupported", (__int64)a1);
      if ( v7 )
        v5 = v7;
    }
  }
  *a2 = 0;
  LOWORD(v24) = 0;
  v8 = sub_140041700(a1, 1u, &v24);
  v9 = sub_140041700(a1, 1u, &v24) | v8;
  if ( (v24 & 0x20) != 0 )
  {
    v26 = 0;
    v17 = sub_140041700(a1, 4u, &v26);
    v25 = 0;
    v16 = sub_140041700(a1, 5u, &v25) | v17 | v9;
    if ( ((unsigned __int8)v26 & (unsigned __int8)v25 & 0x60) != 0 )
      *a2 = 1;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v22)
                              + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v20)
                              + 16LL);
      if ( v13 )
        v10 = v13;
      v19 = v11;
      v4 = 3;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        3u,
        0xAu,
        0x15u,
        (__int64)&unk_1400D71E0,
        v10,
        v19,
        (const wchar_t *)qword_14014EC70);
    }
    if ( (v4 & 2) != 0 )
    {
      v14 = v21;
      v4 &= ~2u;
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v15 = v23;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    v16 = 0;
  }
  if ( v5 )
  {
    sub_14000BFA4(v5);
    ExFreePool(v5);
  }
  return v16;
}
