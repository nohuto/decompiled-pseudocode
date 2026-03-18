/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x1407598D0
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406E7B60 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1407596C0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1402D7D00 (UpcaseUnicodeToSingleByteNHelper.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14045EDD4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1405E4598 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlpIsUtf8Process @ 0x1407CDA20 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  CHAR *v5; // r14
  ULONG v6; // ebx
  _QWORD *CurrentServerSiloGlobals; // rax
  __int16 v12; // r8
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF

  v5 = OemString;
  LOBYTE(OemString) = 1;
  v6 = BytesInUnicodeString >> 1;
  if ( (unsigned __int8)RtlpIsUtf8Process(OemString) )
    return UpcaseUnicodeToUTF8NHelper(v5, MaxBytesInOemString, BytesInOemString, (__int64)UnicodeString, v6);
  _InterlockedOr(v13, 0);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( *((_WORD *)CurrentServerSiloGlobals + 570) == v12 )
    return UpcaseUnicodeToSingleByteNHelper(
             (__int64)v5,
             MaxBytesInOemString,
             BytesInOemString,
             (unsigned __int16 *)UnicodeString,
             v6,
             CurrentServerSiloGlobals[146],
             CurrentServerSiloGlobals[145]);
  else
    return UpcaseUnicodeToMultiByteNHelper(
             v5,
             MaxBytesInOemString,
             BytesInOemString,
             (unsigned __int16 *)UnicodeString,
             v6);
}
