void __fastcall sub_140111B78(__int64 a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  void *v6; // rcx
  const wchar_t *v7; // rsi
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  SIZE_T v13; // rdx
  const wchar_t *v14; // [rsp+30h] [rbp-48h]
  char v15[8]; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int32 *v16; // [rsp+48h] [rbp-30h]
  char v17[8]; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int32 *v18; // [rsp+58h] [rbp-20h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14005B310(Pool2, (__int64)L"os_resources::MemoryMappedIoAccessor::Unmap", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 352) + 8LL))(a1 + 352, 2LL);
  v6 = *(void **)(a1 + 360);
  if ( v6 )
  {
    v13 = *(unsigned int *)(a1 + 368);
    *(_QWORD *)(a1 + 360) = 0LL;
    *(_DWORD *)(a1 + 368) = 0;
    MmUnmapIoSpace(v6, v13);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = (const wchar_t *)&unk_1400D44E0;
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                            a1 + 56,
                                            v17)
                             + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v15)
                              + 16LL);
      if ( v10 )
        v7 = v10;
      v14 = v8;
      v1 = 3;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        3u,
        4u,
        0xDu,
        (__int64)&unk_1400D8BF8,
        v7,
        v14,
        (const wchar_t *)qword_14014EC70);
    }
    if ( (v1 & 2) != 0 )
    {
      v11 = v16;
      v1 &= ~2u;
      if ( v16 )
      {
        if ( !_InterlockedDecrement(v16 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( !_InterlockedDecrement(v11 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v12 = v18;
      if ( v18 )
      {
        if ( !_InterlockedDecrement(v18 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( !_InterlockedDecrement(v12 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
  }
  if ( v3 )
  {
    sub_14005B5AC(v3);
    ExFreePool(v3);
  }
}
