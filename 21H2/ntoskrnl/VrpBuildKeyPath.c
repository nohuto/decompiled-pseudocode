/*
 * XREFs of VrpBuildKeyPath @ 0x14077FB68
 * Callers:
 *     VrpPreLoadKey @ 0x14069061C (VrpPreLoadKey.c)
 *     VrpPostEnumerateKey @ 0x140691CD8 (VrpPostEnumerateKey.c)
 *     VrpCreateNamespaceNode @ 0x140692514 (VrpCreateNamespaceNode.c)
 *     VrpPreOpenOrCreate @ 0x14077E168 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x14077E628 (VrpTranslatePath.c)
 *     VrpPostOpenOrCreate @ 0x1407806B0 (VrpPostOpenOrCreate.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     RtlUShortAdd @ 0x1402DE190 (RtlUShortAdd.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpBuildKeyPath(PCUNICODE_STRING SourceString, PCUNICODE_STRING Source, PUNICODE_STRING Destination)
{
  PCUNICODE_STRING v3; // rsi
  unsigned __int16 *p_MaximumLength; // r8
  USHORT Length; // cx
  USHORT *v8; // r8
  NTSTATUS v9; // ebx
  unsigned __int16 *v10; // r8
  wchar_t *PoolWithTag; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (PCUNICODE_STRING)v13;
  Destination->Length = 0;
  v13[0] = 0LL;
  if ( SourceString )
    v3 = SourceString;
  v13[1] = 0LL;
  p_MaximumLength = &Destination->MaximumLength;
  Length = v3->Length;
  *p_MaximumLength = v3->Length;
  if ( RtlUShortAdd(Length, Source->Length, p_MaximumLength) < 0 )
    return (unsigned int)-1073741811;
  v9 = RtlUShortAdd(*v8, 2u, v8);
  if ( v9 < 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, *v10, 0x67655256u);
    Destination->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlCopyUnicodeString(Destination, v3);
      if ( Source->Length )
      {
        if ( *Source->Buffer != 92 && v3->Buffer[((unsigned __int64)v3->Length >> 1) - 1] != 92 )
          RtlAppendUnicodeToString(Destination, L"\\");
        RtlAppendUnicodeStringToString(Destination, Source);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v9;
}
