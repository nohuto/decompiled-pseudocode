void __fastcall sub_14014B590(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  const wchar_t *v8; // rsi
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  _QWORD v14[2]; // [rsp+60h] [rbp-48h]
  _BYTE v15[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v16; // [rsp+78h] [rbp-30h]
  _BYTE v17[8]; // [rsp+80h] [rbp-28h] BYREF
  volatile signed __int32 *v18; // [rsp+88h] [rbp-20h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x800) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140094FB8(Pool2, (__int64)L"net_adapter::NetAdapterSegmentationOffload::ConfigOffload", a1);
      if ( v7 )
        v4 = v7;
    }
  }
  *(_BYTE *)(a1 + 448) = (unsigned __int8)((__int64 (__fastcall *)(__int64, __int64))qword_1400DFA30)(
                                            qword_1400DF700,
                                            a2) != 0;
  *(_BYTE *)(a1 + 449) = (unsigned __int8)((__int64 (__fastcall *)(__int64, __int64))qword_1400DFA38)(
                                            qword_1400DF700,
                                            a2) != 0;
  *(_BYTE *)(a1 + 450) = (unsigned __int8)((__int64 (__fastcall *)(__int64, __int64))qword_1400DFA40)(
                                            qword_1400DF700,
                                            a2) != 0;
  *(_BYTE *)(a1 + 451) = (unsigned __int8)((__int64 (__fastcall *)(__int64, __int64))qword_1400DFA48)(
                                            qword_1400DF700,
                                            a2) != 0;
  v14[0] = "Disabled";
  v14[1] = "Enabled";
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v8 = (const wchar_t *)&unk_1400D44E0;
    v9 = (const wchar_t *)&unk_1400D44E0;
    v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v17)
                            + 16LL);
    if ( v10 )
      v9 = v10;
    v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                           a1 + 56,
                                           v15)
                            + 16LL);
    if ( v11 )
      v8 = v11;
    sub_1400B56B8(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xCu,
      0x15u,
      (__int64)&unk_1400DA460,
      v8,
      v9,
      (const wchar_t *)qword_14014EC70,
      (const char *)v14[*(unsigned __int8 *)(a1 + 448)],
      (const char *)v14[*(unsigned __int8 *)(a1 + 449)],
      (const char *)v14[*(unsigned __int8 *)(a1 + 450)],
      (const char *)v14[*(unsigned __int8 *)(a1 + 451)]);
    v2 = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v12 = v16;
    v2 &= ~2u;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v13 = v18;
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  sub_14009D4E8((_QWORD *)a1);
  if ( v4 )
  {
    sub_1400953B8(v4);
    ExFreePool(v4);
  }
}
