/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x1406DD600
 * Callers:
 *     wcstombs @ 0x1403D4370 (wcstombs.c)
 *     _wctomb_s_l @ 0x1403D46A4 (_wctomb_s_l.c)
 *     _safecrt_wctomb_s @ 0x1403D8FD0 (_safecrt_wctomb_s.c)
 *     RtlUnicodeStringToAnsiString @ 0x1406DD260 (RtlUnicodeStringToAnsiString.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x1406188F0 (RtlUnicodeToUTF8N.c)
 *     RtlpIsUtf8Process @ 0x1406DDCE0 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v9; // edx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  ULONG *v14; // r8
  int v15; // r10d
  int v16; // r8d
  PCHAR v17; // r9
  __int64 v18; // rcx
  __int16 v19; // r11
  ULONG v20; // eax
  char v21; // [rsp+30h] [rbp-18h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    v14 = (ULONG *)&v21;
    if ( BytesInMultiByteString )
      v14 = BytesInMultiByteString;
    if ( BytesInUnicodeString )
      RtlUnicodeToUTF8N(MultiByteString, MaxBytesInMultiByteString, v14, UnicodeString, BytesInUnicodeString);
    else
      *v14 = 0;
  }
  else
  {
    v9 = BytesInUnicodeString >> 1;
    if ( (_BYTE)NlsMbCodePageTag )
    {
      v15 = (int)MultiByteString;
      v16 = (int)MultiByteString;
      if ( v9 )
      {
        v17 = MultiByteString;
        do
        {
          v16 = (int)v17;
          if ( !MaxBytesInMultiByteString )
            break;
          v18 = *UnicodeString++;
          v19 = *(_WORD *)(NlsUnicodeToMbAnsiData + 2 * v18);
          if ( HIBYTE(v19) )
          {
            v20 = MaxBytesInMultiByteString--;
            if ( v20 < 2 )
              break;
            *MultiByteString = HIBYTE(v19);
            MultiByteString = ++v17;
          }
          *MultiByteString = v19;
          --MaxBytesInMultiByteString;
          MultiByteString = v17 + 1;
          v17 = MultiByteString;
          v16 = (int)MultiByteString;
          --v9;
        }
        while ( v9 );
      }
      if ( BytesInMultiByteString )
        *BytesInMultiByteString = v16 - v15;
    }
    else
    {
      if ( v9 < MaxBytesInMultiByteString )
        MaxBytesInMultiByteString = BytesInUnicodeString >> 1;
      if ( BytesInMultiByteString )
        *BytesInMultiByteString = MaxBytesInMultiByteString;
      v10 = NlsUnicodeToAnsiData;
      if ( MaxBytesInMultiByteString )
      {
        v11 = MaxBytesInMultiByteString;
        do
        {
          v12 = *UnicodeString;
          ++MultiByteString;
          ++UnicodeString;
          *(MultiByteString - 1) = *(_BYTE *)(v12 + v10);
          --v11;
        }
        while ( v11 );
      }
    }
  }
  return 0;
}
