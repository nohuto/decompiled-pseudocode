__int64 __fastcall sub_14010B600(__int64 a1)
{
  char v1; // di
  void **v2; // rbx
  __int64 v4; // rbx
  const wchar_t *v5; // rsi
  const wchar_t *v6; // rdi
  const wchar_t *v7; // rax
  const wchar_t *v8; // rax
  volatile signed __int32 *v9; // rsi
  volatile signed __int32 *v10; // rdi
  const wchar_t *v12; // rsi
  const WCHAR *v13; // rdx
  unsigned int v14; // r15d
  const wchar_t *v15; // rdi
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rdi
  _BYTE v20[8]; // [rsp+50h] [rbp-59h] BYREF
  volatile signed __int32 *v21; // [rsp+58h] [rbp-51h]
  _BYTE v22[8]; // [rsp+60h] [rbp-49h] BYREF
  volatile signed __int32 *v23; // [rsp+68h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v25[8]; // [rsp+80h] [rbp-29h] BYREF
  volatile signed __int32 *v26; // [rsp+88h] [rbp-21h]
  _BYTE v27[8]; // [rsp+90h] [rbp-19h] BYREF
  volatile signed __int32 *v28; // [rsp+98h] [rbp-11h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp+27h] BYREF

  v1 = 0;
  v2 = (void **)(a1 - 168);
  if ( *(_QWORD *)(a1 - 168) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v4 = a1 - 472;
      v5 = (const wchar_t *)&unk_1400D44E0;
      v6 = (const wchar_t *)&unk_1400D44E0;
      v7 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 472) + 16LL))(
                                            a1 - 472,
                                            v22)
                             + 16LL);
      if ( v7 )
        v6 = v7;
      v8 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 24LL))(v4, v20)
                             + 16LL);
      if ( v8 )
        v5 = v8;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 352) + 16LL),
        2u,
        5u,
        0xAu,
        (__int64)&unk_1400D80C0,
        v5,
        v6,
        (const wchar_t *)qword_14014EC70);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v9 = v21;
      v1 &= ~2u;
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
          if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v10 = v23;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
    }
    return 3221225860LL;
  }
  else
  {
    v12 = (const wchar_t *)&unk_1400D44E0;
    v13 = (const WCHAR *)&unk_1400D44E0;
    if ( *(_QWORD *)(a1 - 24) )
      v13 = *(const WCHAR **)(a1 - 24);
    RtlInitUnicodeString(&DestinationString, v13);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v14 = ZwOpenFile(v2, 0x80000000, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
    if ( v14 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v15 = (const wchar_t *)&unk_1400D44E0;
        v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 472) + 16LL))(
                                               a1 - 472,
                                               v27)
                                + 16LL);
        if ( v16 )
          v15 = v16;
        v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 472) + 24LL))(
                                               a1 - 472,
                                               v25)
                                + 16LL);
        if ( v17 )
          v12 = v17;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 352) + 16LL),
          2u,
          5u,
          0xBu,
          (__int64)&unk_1400D80C0,
          v12,
          v15,
          L"ZwOpenFile(&m_fileHandle, (0x80000000L), &objectAttributes, &iosb, 0x00000001, 0x00000020)");
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v18 = v26;
        v1 &= ~8u;
        if ( v26 )
        {
          if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v19 = v28;
        if ( v28 )
        {
          if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      sub_140060D8C(
        a1 - 528,
        (__int64)L"ZwOpenFile(&m_fileHandle, (0x80000000L), &objectAttributes, &iosb, 0x00000001, 0x00000020)",
        111,
        131,
        v14);
      return v14;
    }
    else
    {
      return 0LL;
    }
  }
}
