/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x1407A35C0
 * Callers:
 *     wcstombs @ 0x1403D6080 (wcstombs.c)
 *     RtlxUnicodeStringToOemSize @ 0x1407A0310 (RtlxUnicodeStringToOemSize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x1406EA7A0 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToUTF8N @ 0x1407A3750 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  ULONG v7; // edx
  ULONG v8; // ebx
  struct _LIST_ENTRY *Flink; // r8
  __int16 v10; // r9
  __int64 v12; // rax
  signed __int32 v13[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( RtlpIsUtf8Process() )
  {
    if ( BytesInUnicodeString )
      RtlUnicodeToUTF8N(0LL, 0, BytesInMultiByteString, UnicodeString, BytesInUnicodeString);
    else
      *BytesInMultiByteString = 0;
  }
  else
  {
    _InterlockedOr(v13, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v8 = BytesInUnicodeString >> 1;
    Flink = CurrentServerSiloGlobals[69].Flink;
    if ( WORD2(CurrentServerSiloGlobals[67].Flink) == v10 )
    {
      v7 = v8;
    }
    else
    {
      for ( ; v8; --v8 )
      {
        v12 = *UnicodeString++;
        v7 += (HIBYTE(*((_WORD *)&Flink->Flink + v12)) != 0) + 1;
      }
    }
    *BytesInMultiByteString = v7;
  }
  return 0;
}
