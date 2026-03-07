__int64 __fastcall sub_140061D70(__int64 a1, ULONG a2)
{
  char v2; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  ULONG ActiveProcessorCount; // r14d
  void *v9; // rsi
  void *v10; // rdi
  void *v11; // rax
  __int64 v12; // rax
  int v13; // edx
  void *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  unsigned int v17; // ebx
  _BYTE v19[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v20; // [rsp+58h] [rbp-40h]
  _BYTE v21[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v22; // [rsp+68h] [rbp-30h]

  v2 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005A6E0(Pool2, (__int64)L"os_services::DeferredProcedureCall::CheckTargetCpu", a1);
      if ( v7 )
        v3 = v7;
    }
  }
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount > a2 )
  {
    v17 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v9 = &unk_1400D44E0;
      v10 = &unk_1400D44E0;
      v11 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v21)
                     + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v19);
      LOBYTE(v13) = 2;
      v14 = *(void **)(*(_QWORD *)v12 + 16LL);
      if ( v14 )
        v9 = v14;
      sub_1400A6AA8(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v13,
        5,
        14,
        (__int64)&unk_1400D8318,
        (__int64)v9,
        (__int64)v10,
        (__int64)qword_1400B7720,
        a2,
        ActiveProcessorCount);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v15 = v20;
      v2 &= ~2u;
      if ( v20 )
      {
        if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v16 = v22;
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    v17 = -1073741811;
  }
  if ( v3 )
  {
    sub_14005A99C(v3);
    ExFreePool(v3);
  }
  return v17;
}
