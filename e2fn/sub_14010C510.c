__int64 __fastcall sub_14010C510(__int64 a1, void *Buffer, ULONG Length, union _LARGE_INTEGER a4, ULONG_PTR *a5)
{
  char v5; // di
  void *v7; // rcx
  unsigned int v9; // r14d
  const wchar_t *v10; // rsi
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  ULONG_PTR Information; // rax
  _BYTE v17[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v18; // [rsp+58h] [rbp-40h]
  _BYTE v19[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v20; // [rsp+68h] [rbp-30h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-28h] BYREF
  union _LARGE_INTEGER ByteOffset; // [rsp+A0h] [rbp+8h] BYREF

  v5 = 0;
  ByteOffset.LowPart = 0;
  v7 = *(void **)(a1 - 168);
  if ( !v7 )
    return 3221225768LL;
  ByteOffset = a4;
  v9 = ZwWriteFile(v7, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
  if ( v9 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 472) + 16LL))(
                                             a1 - 472,
                                             v19)
                              + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 472) + 24LL))(
                                             a1 - 472,
                                             v17)
                              + 16LL);
      if ( v13 )
        v10 = v13;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 352) + 16LL),
        2u,
        5u,
        0x13u,
        (__int64)&unk_1400D80C0,
        v10,
        v11,
        L"ZwWriteFile(m_fileHandle, nullptr, nullptr, nullptr, &iosb, const_cast<void *>(buffer), static_cast<ULONG>(lengt"
         "h), &writeOffset, nullptr)");
      v5 = 3;
    }
    if ( (v5 & 2) != 0 )
    {
      v14 = v18;
      v5 &= ~2u;
      if ( v18 )
      {
        if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v5 & 1) != 0 )
    {
      v15 = v20;
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
    sub_140061170(
      a1 - 528,
      (__int64)L"ZwWriteFile(m_fileHandle, nullptr, nullptr, nullptr, &iosb, const_cast<void *>(buffer), static_cast<ULONG"
                ">(length), &writeOffset, nullptr)",
      290,
      131,
      v9);
    return v9;
  }
  else
  {
    Information = IoStatusBlock.Information;
    if ( a5 )
      *a5 = IoStatusBlock.Information;
    *(_QWORD *)(a1 + 16) += Information;
    return 0LL;
  }
}
