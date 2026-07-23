/*
 * XREFs of RtlOemToUnicodeN @ 0x140761000
 * Callers:
 *     FsRtlNotifyUpdateBuffer @ 0x1405F12D4 (FsRtlNotifyUpdateBuffer.c)
 *     RtlOemStringToUnicodeString @ 0x140760F10 (RtlOemStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14090FC90 (RtlOemStringToCountedUnicodeString.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x140615810 (RtlUTF8ToUnicodeN.c)
 *     RtlpIsUtf8Process @ 0x1406DDCE0 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlOemToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  NTSTATUS v9; // ebx
  ULONG v10; // edx
  ULONG v11; // esi
  ULONG v12; // ecx
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rax
  ULONG *v17; // r8
  NTSTATUS v18; // eax
  __int64 v19; // r10
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r9
  char v24; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0;
  if ( RtlpIsUtf8Process(1) )
  {
    v17 = (ULONG *)&v24;
    if ( BytesInUnicodeString )
      v17 = BytesInUnicodeString;
    if ( BytesInOemString )
    {
      v18 = RtlUTF8ToUnicodeN(UnicodeString, MaxBytesInUnicodeString, v17, OemString, BytesInOemString);
    }
    else
    {
      *v17 = 0;
      v18 = 0;
    }
    if ( v18 == -1073741789 )
      return -2147483643;
    return v9;
  }
  else
  {
    v10 = BytesInOemString;
    v11 = MaxBytesInUnicodeString >> 1;
    if ( (_BYTE)NlsMbOemCodePageTag )
    {
      v19 = NlsMbOemCodePageTables;
      v20 = (int)UnicodeString;
      if ( v11 )
      {
        v21 = (int)UnicodeString;
        while ( v10 )
        {
          v22 = *(unsigned __int8 *)OemString;
          --v11;
          --v10;
          v23 = (unsigned __int16)NlsOemLeadByteInfoTable[v22];
          if ( (_WORD)v23 )
          {
            if ( !v10 )
            {
              *UnicodeString = 0;
              LODWORD(UnicodeString) = v21 + 2;
              break;
            }
            *UnicodeString++ = *(_WORD *)(v19 + 2 * (v23 + *(unsigned __int8 *)++OemString));
            --v10;
          }
          else
          {
            *UnicodeString++ = *(_WORD *)(NlsOemToUnicodeData + 2 * v22);
          }
          ++OemString;
          v21 = (int)UnicodeString;
          if ( !v11 )
            break;
        }
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (_DWORD)UnicodeString - v20;
    }
    else
    {
      v12 = BytesInOemString;
      if ( v11 < BytesInOemString )
        v12 = v11;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v12;
      v13 = NlsOemToUnicodeData;
      if ( v12 )
      {
        v14 = v12;
        do
        {
          v15 = *(unsigned __int8 *)OemString++;
          *UnicodeString++ = *(_WORD *)(v13 + 2 * v15);
          --v14;
        }
        while ( v14 );
      }
    }
    return v11 < v10 ? 0x80000005 : 0;
  }
}
