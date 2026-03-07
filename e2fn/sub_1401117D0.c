__int64 __fastcall sub_1401117D0(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // si
  __int64 v4; // r15
  __int64 *v6; // rbp
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  const wchar_t *v10; // r12
  const wchar_t *v11; // rsi
  const wchar_t *v12; // rax
  __int64 v13; // rax
  const wchar_t *v14; // rdx
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v17; // rdi
  __int64 v18; // rax
  const wchar_t *v19; // rdi
  const wchar_t *v20; // rax
  const wchar_t *v21; // rax
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  unsigned int v24; // ebx
  _BYTE v26[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v27; // [rsp+58h] [rbp-60h]
  _BYTE v28[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v29; // [rsp+68h] [rbp-50h]
  _BYTE v30[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v31; // [rsp+78h] [rbp-40h]
  _BYTE v32[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v33; // [rsp+88h] [rbp-30h]

  v3 = 0;
  v4 = a3;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14005B310(Pool2, (__int64)L"os_resources::MemoryMappedIoAccessor::Map", a1);
      if ( v9 )
        v6 = v9;
    }
  }
  v10 = (const wchar_t *)&unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v11 = (const wchar_t *)&unk_1400D44E0;
    v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v28)
                            + 16LL);
    if ( v12 )
      v11 = v12;
    v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v26);
    v14 = (const wchar_t *)&unk_1400D44E0;
    v15 = *(const wchar_t **)(*(_QWORD *)v13 + 16LL);
    if ( v15 )
      v14 = v15;
    sub_1400A6D50(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      4u,
      0xBu,
      (__int64)&unk_1400D8BF8,
      v14,
      v11,
      (const wchar_t *)qword_14014EC70);
    v3 = 3;
  }
  if ( (v3 & 2) != 0 )
  {
    v16 = v27;
    v3 &= ~2u;
    if ( v27 )
    {
      if ( !_InterlockedDecrement(v27 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( !_InterlockedDecrement(v16 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  if ( (v3 & 1) != 0 )
  {
    v17 = v29;
    v3 &= ~1u;
    if ( v29 )
    {
      if ( !_InterlockedDecrement(v29 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( !_InterlockedDecrement(v17 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  v18 = MmMapIoSpaceEx(a2, v4, 516LL);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 360) = v18;
    *(_DWORD *)(a1 + 368) = v4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 352) + 8LL))(a1 + 352, 1LL);
    v24 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v3 |= 0xCu;
      v19 = (const wchar_t *)&unk_1400D44E0;
      v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v32)
                              + 16LL);
      if ( v20 )
        v19 = v20;
      v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v30)
                              + 16LL);
      if ( v21 )
        v10 = v21;
      sub_1400A3320(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL), 2u, 4u, 0xCu, (__int64)&unk_1400D8BF8, v10, v19, L"map");
    }
    if ( (v3 & 8) != 0 )
    {
      v22 = v31;
      v3 &= ~8u;
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v23 = v33;
      if ( v33 )
      {
        if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    sub_14000DA44(a1, (__int64)L"map", 71, 135);
    v24 = -1073741801;
  }
  if ( v6 )
  {
    sub_14005B5AC(v6);
    ExFreePool(v6);
  }
  return v24;
}
