/*
 * XREFs of RtlNtPathNameToDosPathName @ 0x1800CC350
 * Callers:
 *     <none>
 * Callees:
 *     RtlPrefixUnicodeString @ 0x180015F60 (RtlPrefixUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001C1AC (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlpEnsureBufferSize @ 0x18006ED00 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

NTSTATUS __cdecl RtlNtPathNameToDosPathName(
        ULONG Flags,
        PRTL_UNICODE_STRING_BUFFER Path,
        PULONG Disposition,
        PWSTR *FilePart)
{
  NTSTATUS v4; // ebx
  unsigned __int64 v8; // rbp
  const _UNICODE_STRING *v9; // r14
  unsigned __int16 *v10; // r15
  unsigned __int16 v11; // si
  unsigned __int64 v12; // r8
  wchar_t *Buffer; // rcx
  __int64 Length; // r8
  unsigned __int16 v15; // si
  int v16; // eax

  v4 = 0;
  v8 = 0LL;
  if ( Disposition )
    *Disposition = 0;
  if ( !Path )
    return -1073741811;
  if ( Flags )
    return -1073741811;
  if ( FilePart )
  {
    if ( *FilePart )
    {
      v8 = *FilePart - Path->String.Buffer;
      if ( v8 >= (unsigned __int64)Path->String.Length >> 1 )
        return -1073741811;
    }
  }
  v9 = &RtlpDosDevicesUncPrefix;
  if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpDosDevicesUncPrefix, &Path->String, 1u) )
  {
    v9 = &RtlpDosDevicesPrefix;
    if ( RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpDosDevicesPrefix, &Path->String, 1u) )
    {
      v10 = (unsigned __int16 *)&RtlpEmptyString;
      if ( Disposition )
        *Disposition = 3;
      goto LABEL_14;
    }
    if ( !Disposition )
      return v4;
    v16 = RtlDetermineDosPathNameType_Ustr(&Path->String.Length);
    if ( v16 )
    {
      if ( v16 <= 0 )
        return v4;
      if ( v16 <= 2 )
      {
LABEL_30:
        *Disposition = 4;
        return v4;
      }
      if ( v16 != 3 && v16 != 4 && v16 != 5 )
      {
        if ( v16 > 7 )
          return v4;
        goto LABEL_30;
      }
    }
    *Disposition = 1;
    return v4;
  }
  v10 = (unsigned __int16 *)&unk_18011E300;
  if ( Disposition )
    *Disposition = 2;
LABEL_14:
  v11 = (*v10 >> 1) + (Path->String.Length >> 1) - (v9->Length >> 1);
  v12 = 2LL * v11 + 2;
  if ( v12 > 0xFFFE )
    return -1073741562;
  if ( (Path == (PRTL_UNICODE_STRING_BUFFER)-16LL || v12 > Path->ByteBuffer.Size)
    && (int)RtlpEnsureBufferSize(0, (__int64)&Path->ByteBuffer, v12) < 0 )
  {
    return -1073741801;
  }
  Buffer = (wchar_t *)Path->ByteBuffer.Buffer;
  Length = Path->String.Length;
  Path->String.MaximumLength = Path->ByteBuffer.Size;
  Path->String.Buffer = Buffer;
  memmove(&Buffer[(unsigned __int64)*v10 >> 1], &Buffer[(unsigned __int64)v9->Length >> 1], Length - v9->Length);
  memmove(Path->String.Buffer, *((const void **)v10 + 1), *v10);
  v15 = 2 * v11;
  Path->String.Length = v15;
  Path->String.Buffer[(unsigned __int64)v15 >> 1] = 0;
  if ( v8 )
    *FilePart = &Path->String.Buffer[v8 + ((unsigned __int64)*v10 >> 1) - ((unsigned __int64)v9->Length >> 1)];
  return v4;
}
