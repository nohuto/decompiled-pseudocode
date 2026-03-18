/*
 * XREFs of RtlDowncaseUnicodeString @ 0x1406B4AE0
 * Callers:
 *     DifRtlDowncaseUnicodeStringWrapper @ 0x14061B2D0 (DifRtlDowncaseUnicodeStringWrapper.c)
 *     ExpKdPullRemoteFileForUser @ 0x1408536D4 (ExpKdPullRemoteFileForUser.c)
 * Callees:
 *     NLS_DOWNCASE @ 0x140239F60 (NLS_DOWNCASE.c)
 *     AllocateOrValidateCharStringBuffer @ 0x1402D7DE0 (AllocateOrValidateCharStringBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  unsigned __int16 *v7; // rdx
  char v8; // r10
  NTSTATUS result; // eax
  unsigned int v10; // r10d

  v5 = 0LL;
  if ( AllocateDestinationString || SourceString->Length )
  {
    v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 155);
    result = AllocateOrValidateCharStringBuffer(
               v8,
               *v7,
               (__int64 *)&DestinationString->Buffer,
               &DestinationString->MaximumLength);
    if ( result < 0 )
      return result;
    v10 = SourceString->Length >> 1;
    while ( (unsigned int)v5 < v10 )
    {
      DestinationString->Buffer[v5] = NLS_DOWNCASE(v6, SourceString->Buffer[v5]);
      v5 = (unsigned int)(v5 + 1);
    }
    DestinationString->Length = SourceString->Length;
  }
  else
  {
    DestinationString->Length = 0;
  }
  return 0;
}
