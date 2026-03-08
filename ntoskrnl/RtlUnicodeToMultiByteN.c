/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x1407A3650
 * Callers:
 *     wcstombs @ 0x1403D6080 (wcstombs.c)
 *     _wctomb_s_l @ 0x1403D63A4 (_wctomb_s_l.c)
 *     _safecrt_wctomb_s @ 0x1403DAE28 (_safecrt_wctomb_s.c)
 *     RtlUnicodeStringToAnsiString @ 0x1407A34D0 (RtlUnicodeStringToAnsiString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x1406EA7A0 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToUTF8N @ 0x1407A3750 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  PCWCH v10; // r10
  ULONG *v11; // r8
  ULONG v12; // r9d
  PCHAR v13; // rdx
  __int128 *p_Blink; // rax
  ULONG v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 i; // rdi
  __int64 v21; // rax
  __int16 v22; // r11
  unsigned int v23; // eax
  signed __int32 v24[8]; // [rsp+0h] [rbp-38h] BYREF
  char v25; // [rsp+48h] [rbp+10h] BYREF

  if ( RtlpIsUtf8Process() )
  {
    p_Blink = &Utf8TableInfo;
    v13 = MultiByteString;
    v10 = UnicodeString;
    v11 = BytesInMultiByteString;
    v12 = MaxBytesInMultiByteString;
  }
  else
  {
    _InterlockedOr(v24, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v10 = UnicodeString;
    v11 = BytesInMultiByteString;
    v12 = MaxBytesInMultiByteString;
    v13 = MultiByteString;
    p_Blink = (__int128 *)&CurrentServerSiloGlobals[66].Blink;
    if ( !p_Blink )
    {
LABEL_14:
      if ( !BytesInMultiByteString )
        v11 = (ULONG *)&v25;
      if ( BytesInUnicodeString )
        RtlUnicodeToUTF8N(MultiByteString, MaxBytesInMultiByteString, v11, UnicodeString, BytesInUnicodeString);
      else
        *v11 = 0;
      return 0;
    }
  }
  if ( *(_WORD *)p_Blink == 0xFDE9 )
    goto LABEL_14;
  v15 = BytesInUnicodeString >> 1;
  if ( *((_WORD *)p_Blink + 6) )
  {
    for ( i = *((_QWORD *)p_Blink + 5); v15; --v15 )
    {
      if ( !v12 )
        break;
      v21 = *v10++;
      v22 = *(_WORD *)(i + 2 * v21);
      if ( HIBYTE(v22) )
      {
        v23 = v12--;
        if ( v23 < 2 )
          break;
        *v13++ = HIBYTE(v22);
      }
      *v13 = v22;
      --v12;
      ++v13;
    }
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = (_DWORD)v13 - (_DWORD)MultiByteString;
  }
  else
  {
    if ( v15 < MaxBytesInMultiByteString )
      MaxBytesInMultiByteString = BytesInUnicodeString >> 1;
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = MaxBytesInMultiByteString;
    v16 = *((_QWORD *)p_Blink + 5);
    if ( MaxBytesInMultiByteString )
    {
      v17 = MaxBytesInMultiByteString;
      do
      {
        v18 = *UnicodeString;
        ++MultiByteString;
        ++UnicodeString;
        *(MultiByteString - 1) = *(_BYTE *)(v18 + v16);
        --v17;
      }
      while ( v17 );
    }
  }
  return 0;
}
