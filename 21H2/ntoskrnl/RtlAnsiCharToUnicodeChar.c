/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x1406DDC10
 * Callers:
 *     _safecrt_mbtowc @ 0x1403D2AC0 (_safecrt_mbtowc.c)
 *     toupper @ 0x1403D3EA0 (toupper.c)
 *     _mbstrlen @ 0x1403D5EB8 (_mbstrlen.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x140615810 (RtlUTF8ToUnicodeN.c)
 *     RtlpIsUtf8Process @ 0x1406DDCE0 (RtlpIsUtf8Process.c)
 */

WCHAR __cdecl RtlAnsiCharToUnicodeChar(PUCHAR *SourceCharacter)
{
  char IsUtf8Process; // al
  const CHAR *v3; // rdi
  __int64 v4; // rcx
  int v5; // ebp
  ULONG UTF8StringByteCount; // ebx
  WCHAR *p_UnicodeStringDestination; // r14
  ULONG v8; // r15d
  __int64 v9; // r9
  WCHAR *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  WCHAR UnicodeStringDestination; // [rsp+70h] [rbp+8h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+78h] [rbp+10h] BYREF

  UnicodeStringDestination = 32;
  IsUtf8Process = RtlpIsUtf8Process(0LL);
  v3 = (const CHAR *)*SourceCharacter;
  v4 = **SourceCharacter;
  v5 = 1;
  if ( IsUtf8Process )
  {
    if ( (unsigned __int8)v4 >= 0xC0u )
    {
      if ( (unsigned __int8)v4 >= 0xE0u )
      {
        if ( (unsigned __int8)v4 >= 0xF0u )
        {
          UTF8StringByteCount = 1;
          if ( (unsigned __int8)v4 < 0xF8u )
            UTF8StringByteCount = 4;
        }
        else
        {
          UTF8StringByteCount = 3;
        }
      }
      else
      {
        UTF8StringByteCount = 2;
      }
    }
    else
    {
      UTF8StringByteCount = 1;
    }
  }
  else
  {
    UTF8StringByteCount = 1;
    if ( NlsLeadByteInfoTable[v4] )
      UTF8StringByteCount = 2;
  }
  p_UnicodeStringDestination = &UnicodeStringDestination;
  v8 = UTF8StringByteCount;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    RtlUTF8ToUnicodeN(&UnicodeStringDestination, 2u, &UnicodeStringActualByteCount, v3, UTF8StringByteCount);
  }
  else if ( (_BYTE)NlsMbCodePageTag )
  {
    v14 = NlsMbAnsiCodePageTables;
    while ( v8 )
    {
      --v5;
      --v8;
      v15 = *(unsigned __int8 *)v3;
      v16 = NlsLeadByteInfoTable[v15];
      if ( (_WORD)v16 )
      {
        if ( !v8 )
        {
          *p_UnicodeStringDestination = 0;
          break;
        }
        v17 = *(unsigned __int8 *)++v3;
        *p_UnicodeStringDestination++ = *(_WORD *)(v14 + 2 * (v16 + v17));
        --v8;
      }
      else
      {
        *p_UnicodeStringDestination++ = *(_WORD *)(v15 * 2 + NlsAnsiToUnicodeData);
      }
      ++v3;
      if ( !v5 )
        break;
    }
  }
  else
  {
    v9 = NlsAnsiToUnicodeData;
    v10 = &UnicodeStringDestination;
    v11 = UTF8StringByteCount;
    if ( UTF8StringByteCount > 1 )
      v11 = 1LL;
    do
    {
      v12 = *(unsigned __int8 *)v3;
      ++v10;
      ++v3;
      *(v10 - 1) = *(_WORD *)(v9 + 2 * v12);
      --v11;
    }
    while ( v11 );
  }
  *SourceCharacter += UTF8StringByteCount;
  return UnicodeStringDestination;
}
