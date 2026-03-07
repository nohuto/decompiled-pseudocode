char __fastcall EtwpApplyContainerFilter(__int64 a1, _WORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbp
  char v5; // bl
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // r14
  __int64 v8; // rdx
  const CHAR *v9; // r9
  unsigned __int16 v10; // si
  unsigned int v11; // r15d
  ULONG UTF8StringByteCount; // [rsp+20h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  DestinationString = 0LL;
  v4 = *(_QWORD *)(v2 + 392);
  if ( !a2 )
    return 1;
  v5 = 1;
  if ( v4 != EtwpHostSiloState )
  {
    v8 = *(unsigned __int16 *)(v4 + 4224);
    UnicodeStringActualByteCount = 0;
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(64LL, 2 * v8 + 2, 1182233669LL);
    Buffer = DestinationString.Buffer;
    if ( DestinationString.Buffer )
    {
      v9 = *(const CHAR **)(v4 + 4216);
      UTF8StringByteCount = *(unsigned __int16 *)(v4 + 4224);
      DestinationString.MaximumLength = 2 * (UTF8StringByteCount + 1);
      RtlUTF8ToUnicodeN(
        DestinationString.Buffer,
        DestinationString.MaximumLength,
        &UnicodeStringActualByteCount,
        v9,
        UTF8StringByteCount);
      Length = UnicodeStringActualByteCount;
      DestinationString.Length = UnicodeStringActualByteCount;
      goto LABEL_6;
    }
    return 1;
  }
  RtlInitUnicodeString(&DestinationString, L"Host");
  Length = DestinationString.Length;
  Buffer = DestinationString.Buffer;
LABEL_6:
  v10 = 0;
  v11 = Length >> 1;
  if ( *a2 )
  {
    while ( (unsigned __int16)a2[8 * v10 + 4] != v11 || wcsnicmp(*(const wchar_t **)&a2[8 * v10 + 8], Buffer, v11) )
    {
      if ( ++v10 >= *a2 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v5 = 0;
  }
  if ( v4 != EtwpHostSiloState )
    RtlFreeUnicodeString(&DestinationString);
  return v5;
}
