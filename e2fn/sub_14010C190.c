__int64 __fastcall sub_14010C190(__int64 a1, void *Buffer, ULONG Length, union _LARGE_INTEGER a4, ULONG_PTR *a5)
{
  char v5; // si
  void *v7; // rcx
  const wchar_t *v8; // r12
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rdi
  volatile signed __int32 *v13; // rdi
  unsigned int v15; // r15d
  const wchar_t *v16; // r12
  const wchar_t *v17; // rdi
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rdi
  ULONG_PTR Information; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v24[8]; // [rsp+68h] [rbp-11h] BYREF
  volatile signed __int32 *v25; // [rsp+70h] [rbp-9h]
  _BYTE v26[8]; // [rsp+78h] [rbp-1h] BYREF
  volatile signed __int32 *v27; // [rsp+80h] [rbp+7h]
  _BYTE v28[8]; // [rsp+88h] [rbp+Fh] BYREF
  volatile signed __int32 *v29; // [rsp+90h] [rbp+17h]
  _BYTE v30[8]; // [rsp+98h] [rbp+1Fh] BYREF
  volatile signed __int32 *v31; // [rsp+A0h] [rbp+27h]
  union _LARGE_INTEGER ByteOffset; // [rsp+D8h] [rbp+5Fh] BYREF

  v5 = 0;
  ByteOffset.LowPart = 0;
  v7 = *(void **)(a1 - 168);
  if ( v7 )
  {
    ByteOffset = a4;
    IoStatusBlock = 0LL;
    v15 = ZwReadFile(v7, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    if ( v15 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v16 = (const wchar_t *)&unk_1400D44E0;
        v17 = (const wchar_t *)&unk_1400D44E0;
        v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 472) + 16LL))(
                                               a1 - 472,
                                               v30)
                                + 16LL);
        if ( v18 )
          v17 = v18;
        v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 472) + 24LL))(
                                               a1 - 472,
                                               v28)
                                + 16LL);
        if ( v19 )
          v16 = v19;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 352) + 16LL),
          2u,
          5u,
          0xDu,
          (__int64)&unk_1400D80C0,
          v16,
          v17,
          L"ZwReadFile(m_fileHandle, nullptr, nullptr, nullptr, &iosb, buffer, static_cast<ULONG>(length), &readOffset, nullptr)");
        v5 = 12;
      }
      if ( (v5 & 8) != 0 )
      {
        v20 = v29;
        v5 &= ~8u;
        if ( v29 )
        {
          if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
      }
      if ( (v5 & 4) != 0 )
      {
        v21 = v31;
        if ( v31 )
        {
          if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
          }
        }
      }
      sub_140060ED8(
        a1 - 528,
        (__int64)L"ZwReadFile(m_fileHandle, nullptr, nullptr, nullptr, &iosb, buffer, static_cast<ULONG>(length), &readOffset, nullptr)",
        153,
        131,
        v15);
      return v15;
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
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 472) + 16LL))(
                                             a1 - 472,
                                             v26)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 472) + 24LL))(
                                             a1 - 472,
                                             v24)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 352) + 16LL),
        2u,
        5u,
        0xCu,
        (__int64)&unk_1400D80C0,
        v8,
        v9,
        (const wchar_t *)qword_14014EC70);
      v5 = 3;
    }
    if ( (v5 & 2) != 0 )
    {
      v12 = v25;
      v5 &= ~2u;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v5 & 1) != 0 )
    {
      v13 = v27;
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    return 3221225768LL;
  }
}
