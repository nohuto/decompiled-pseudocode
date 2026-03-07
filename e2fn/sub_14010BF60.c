__int64 __fastcall sub_14010BF60(__int64 a1, ULONG a2)
{
  const wchar_t *v2; // r15
  char v4; // di
  const WCHAR *v6; // rdx
  unsigned int v7; // esi
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v15[8]; // [rsp+70h] [rbp-29h] BYREF
  volatile signed __int32 *v16; // [rsp+78h] [rbp-21h]
  _BYTE v17[8]; // [rsp+80h] [rbp-19h] BYREF
  volatile signed __int32 *v18; // [rsp+88h] [rbp-11h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp+7h] BYREF

  v2 = (const wchar_t *)&unk_1400D44E0;
  v4 = 0;
  v6 = (const WCHAR *)&unk_1400D44E0;
  if ( *(_QWORD *)(a1 + 504) )
    v6 = *(const WCHAR **)(a1 + 504);
  RtlInitUnicodeString(&DestinationString, v6);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwCreateFile(
         (PHANDLE)(a1 + 360),
         0x40000000u,
         &ObjectAttributes,
         &IoStatusBlock,
         0LL,
         0x80u,
         0,
         a2,
         0x20u,
         0LL,
         0);
  if ( !v7 )
    return 0LL;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v8 = (const wchar_t *)&unk_1400D44E0;
    v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                          a1 + 56,
                                          v17)
                           + 16LL);
    if ( v9 )
      v8 = v9;
    v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                           a1 + 56,
                                           v15)
                            + 16LL);
    if ( v10 )
      v2 = v10;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      2u,
      5u,
      0x12u,
      (__int64)&unk_1400D80C0,
      v2,
      v8,
      L"ZwCreateFile(&m_fileHandle, (0x40000000L), &objectAttributes, &iosb, nullptr, 0x00000080, 0, createDisposition, 0x"
       "00000020, nullptr, 0)");
    v4 = 3;
  }
  if ( (v4 & 2) != 0 )
  {
    v11 = v16;
    v4 &= ~2u;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v12 = v18;
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  sub_140061024(
    a1,
    (__int64)L"ZwCreateFile(&m_fileHandle, (0x40000000L), &objectAttributes, &iosb, nullptr, 0x00000080, 0, createDisposit"
              "ion, 0x00000020, nullptr, 0)",
    248,
    131,
    v7);
  return v7;
}
