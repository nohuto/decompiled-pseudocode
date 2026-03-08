/*
 * XREFs of VrpBuildKeyPath @ 0x1406C286C
 * Callers:
 *     VrpPreOpenOrCreate @ 0x1406C1A34 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x1406C1EF8 (VrpTranslatePath.c)
 *     VrpPostOpenOrCreate @ 0x1406C2968 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x140735EB4 (VrpPreLoadKey.c)
 *     VrpPostEnumerateKey @ 0x140736428 (VrpPostEnumerateKey.c)
 *     VrpCreateNamespaceNode @ 0x140737348 (VrpCreateNamespaceNode.c)
 * Callees:
 *     RtlUShortAdd @ 0x140202574 (RtlUShortAdd.c)
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall VrpBuildKeyPath(PCUNICODE_STRING SourceString, PCUNICODE_STRING Source, PUNICODE_STRING Destination)
{
  PCUNICODE_STRING v3; // rsi
  unsigned __int16 *p_MaximumLength; // r8
  USHORT Length; // cx
  USHORT *v8; // r8
  NTSTATUS v9; // ebx
  unsigned __int16 *v10; // r8
  wchar_t *Pool2; // rax
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
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, *v10, 1734693462LL);
    Destination->Buffer = Pool2;
    if ( Pool2 )
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
