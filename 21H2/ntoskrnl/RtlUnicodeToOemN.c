/*
 * XREFs of RtlUnicodeToOemN @ 0x1405F4200
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x1405F3BC0 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1405F3D70 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x1406188F0 (RtlUnicodeToUTF8N.c)
 *     RtlpIsUtf8Process @ 0x1406DDCE0 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  CHAR *v5; // rdi
  NTSTATUS v9; // ebx
  ULONG v10; // edx
  ULONG v11; // eax
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rax
  ULONG *v16; // r8
  NTSTATUS v17; // eax
  int v18; // r8d
  CHAR *v19; // r9
  __int64 v20; // rcx
  __int16 v21; // r10
  ULONG v22; // eax
  char v23; // [rsp+30h] [rbp-18h] BYREF

  v5 = OemString;
  LOBYTE(OemString) = 1;
  v9 = 0;
  if ( (unsigned __int8)RtlpIsUtf8Process(OemString) )
  {
    v16 = (ULONG *)&v23;
    if ( BytesInOemString )
      v16 = BytesInOemString;
    if ( BytesInUnicodeString )
    {
      v17 = RtlUnicodeToUTF8N(v5, MaxBytesInOemString, v16, UnicodeString, BytesInUnicodeString);
    }
    else
    {
      *v16 = 0;
      v17 = 0;
    }
    if ( v17 == -1073741789 )
      return -2147483643;
    return v9;
  }
  else
  {
    v10 = BytesInUnicodeString >> 1;
    if ( (_BYTE)NlsMbOemCodePageTag )
    {
      v18 = (int)v5;
      if ( v10 )
      {
        v19 = v5;
        do
        {
          if ( !MaxBytesInOemString )
            break;
          v20 = *UnicodeString++;
          v21 = *(_WORD *)(NlsUnicodeToMbOemData + 2 * v20);
          if ( HIBYTE(v21) )
          {
            v22 = MaxBytesInOemString--;
            if ( v22 < 2 )
              break;
            *v5 = HIBYTE(v21);
            v5 = ++v19;
          }
          *v5 = v21;
          --MaxBytesInOemString;
          v5 = ++v19;
          --v10;
        }
        while ( v10 );
      }
      if ( BytesInOemString )
        *BytesInOemString = (_DWORD)v5 - v18;
    }
    else
    {
      v11 = MaxBytesInOemString;
      if ( v10 < MaxBytesInOemString )
        v11 = BytesInUnicodeString >> 1;
      if ( BytesInOemString )
        *BytesInOemString = v11;
      v12 = NlsUnicodeToOemData;
      if ( v11 )
      {
        v13 = v11;
        do
        {
          v14 = *UnicodeString++;
          *v5++ = *(_BYTE *)(v14 + v12);
          --v13;
        }
        while ( v13 );
      }
    }
    return MaxBytesInOemString < v10 ? 0x80000005 : 0;
  }
}
