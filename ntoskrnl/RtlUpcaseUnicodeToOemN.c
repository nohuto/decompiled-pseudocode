/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x14079FFE0
 * Callers:
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1407A0140 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1408716E0 (RtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140303D00 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x14039FDA4 (UpcaseUnicodeToUTF8NHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14045B5C4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     RtlpIsUtf8Process @ 0x1406EA7A0 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int16 v11; // r8
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF

  v6 = BytesInUnicodeString >> 1;
  if ( RtlpIsUtf8Process() )
    return UpcaseUnicodeToUTF8NHelper(OemString, MaxBytesInOemString, BytesInOemString, (__int64)UnicodeString, v6);
  _InterlockedOr(v13, 0);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( WORD2(CurrentServerSiloGlobals[71].Flink) == v11 )
    return UpcaseUnicodeToSingleByteNHelper(
             OemString,
             MaxBytesInOemString,
             BytesInOemString,
             (unsigned __int16 *)UnicodeString,
             v6,
             (__int64)CurrentServerSiloGlobals[73].Flink,
             (__int64)CurrentServerSiloGlobals[72].Blink);
  else
    return UpcaseUnicodeToMultiByteNHelper(
             OemString,
             MaxBytesInOemString,
             BytesInOemString,
             (unsigned __int16 *)UnicodeString,
             v6);
}
