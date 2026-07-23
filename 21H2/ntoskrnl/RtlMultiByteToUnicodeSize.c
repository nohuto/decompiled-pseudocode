/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x140663990
 * Callers:
 *     RtlxAnsiStringToUnicodeSize @ 0x140663960 (RtlxAnsiStringToUnicodeSize.c)
 *     RtlxOemStringToUnicodeSize @ 0x1407610B0 (RtlxOemStringToUnicodeSize.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x140615810 (RtlUTF8ToUnicodeN.c)
 *     RtlpIsUtf8Process @ 0x1406DDCE0 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeSize(
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG v4; // edi
  __int64 v8; // rax

  v4 = 0;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    if ( BytesInMultiByteString )
      RtlUTF8ToUnicodeN(0LL, 0, BytesInUnicodeString, MultiByteString, BytesInMultiByteString);
    else
      *BytesInUnicodeString = 0;
  }
  else
  {
    if ( !(_BYTE)NlsMbCodePageTag )
    {
      v4 = 2 * BytesInMultiByteString;
      goto LABEL_4;
    }
    for ( ; BytesInMultiByteString; v4 += 2 )
    {
      v8 = *(unsigned __int8 *)MultiByteString;
      --BytesInMultiByteString;
      ++MultiByteString;
      if ( NlsLeadByteInfoTable[v8] )
      {
        if ( !BytesInMultiByteString )
        {
          v4 += 2;
          break;
        }
        --BytesInMultiByteString;
        ++MultiByteString;
      }
    }
LABEL_4:
    *BytesInUnicodeString = v4;
  }
  return 0;
}
