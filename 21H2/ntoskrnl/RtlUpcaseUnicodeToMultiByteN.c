/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x140759990
 * Callers:
 *     toupper @ 0x1403E30E0 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1409B58B0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1402D7D00 (UpcaseUnicodeToSingleByteNHelper.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14045EDD4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1405E4598 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlpIsUtf8Process @ 0x1407CDA20 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // ebx
  _QWORD *CurrentServerSiloGlobals; // rax
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF

  v6 = BytesInUnicodeString >> 1;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
    return UpcaseUnicodeToUTF8NHelper(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (__int64)UnicodeString,
             v6);
  _InterlockedOr(v12, 0);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( *((_WORD *)CurrentServerSiloGlobals + 538) )
    return UpcaseUnicodeToMultiByteNHelper(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (unsigned __int16 *)UnicodeString,
             v6);
  else
    return UpcaseUnicodeToSingleByteNHelper(
             (__int64)MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (unsigned __int16 *)UnicodeString,
             v6,
             CurrentServerSiloGlobals[138],
             CurrentServerSiloGlobals[137]);
}
