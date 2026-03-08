/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x1407A00A0
 * Callers:
 *     toupper @ 0x1403D5BB0 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1409B5BB0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140303D00 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x14039FDA4 (UpcaseUnicodeToUTF8NHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14045B5C4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     RtlpIsUtf8Process @ 0x1406EA7A0 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF

  v6 = BytesInUnicodeString >> 1;
  if ( RtlpIsUtf8Process() )
    return UpcaseUnicodeToUTF8NHelper(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (__int64)UnicodeString,
             v6);
  _InterlockedOr(v12, 0);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( WORD2(CurrentServerSiloGlobals[67].Flink) )
    return UpcaseUnicodeToMultiByteNHelper(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (unsigned __int16 *)UnicodeString,
             v6);
  else
    return UpcaseUnicodeToSingleByteNHelper(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (unsigned __int16 *)UnicodeString,
             v6,
             (__int64)CurrentServerSiloGlobals[69].Flink,
             (__int64)CurrentServerSiloGlobals[68].Blink);
}
