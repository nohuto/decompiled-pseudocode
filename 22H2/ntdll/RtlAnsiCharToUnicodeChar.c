/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x180062970
 * Callers:
 *     toupper @ 0x180092310 (toupper.c)
 *     _mbstrlen @ 0x180095918 (_mbstrlen.c)
 *     mbtowc @ 0x1800967C4 (mbtowc.c)
 *     _safecrt_mbtowc @ 0x180098EB8 (_safecrt_mbtowc.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18005A9B0 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlAnsiCharToUnicodeChar(char **a1)
{
  char *v2; // rdx
  __int64 v3; // rax
  int v4; // ebx
  unsigned int v5; // ebx
  unsigned __int16 *v6; // r8
  __int64 v7; // r9
  int v8; // r10d
  __int64 v9; // r10
  unsigned __int16 *v10; // r8
  __int64 v11; // rax
  __int64 v13; // rsi
  __int64 v14; // r11
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+68h] [rbp+10h] BYREF

  v18 = 32;
  v2 = *a1;
  v3 = (unsigned __int8)**a1;
  if ( !NlsActiveCodePageIsUTF8 )
  {
    v4 = NlsLeadByteInfoTable[v3] != 0;
LABEL_3:
    v5 = v4 + 1;
    goto LABEL_4;
  }
  if ( (unsigned __int8)v3 >= 0xC0u )
  {
    if ( (unsigned __int8)v3 >= 0xE0u )
    {
      v5 = 3;
      if ( (unsigned __int8)v3 >= 0xF0u )
      {
        v4 = (unsigned __int8)v3 < 0xF8u ? 3 : 0;
        goto LABEL_3;
      }
    }
    else
    {
      v5 = 2;
    }
  }
  else
  {
    v5 = 1;
  }
LABEL_4:
  v6 = &v18;
  v7 = v5;
  if ( NlsActiveCodePageIsUTF8 )
  {
    RtlUTF8ToUnicodeN(&v18, 2u, &v19, *a1, v5);
  }
  else
  {
    v8 = 1;
    if ( NlsMbCodePageTag )
    {
      v13 = NlsMbAnsiCodePageTables;
      v14 = NlsAnsiToUnicodeData;
      while ( (_DWORD)v7 )
      {
        v15 = (unsigned __int8)*v2;
        --v8;
        LODWORD(v7) = v7 - 1;
        v16 = (unsigned __int16)NlsLeadByteInfoTable[v15];
        if ( (_WORD)v16 )
        {
          if ( !(_DWORD)v7 )
          {
            *v6 = 0;
            break;
          }
          ++v2;
          LODWORD(v7) = v7 - 1;
          v17 = *(_WORD *)(v13 + 2 * ((unsigned __int8)*v2 + v16));
        }
        else
        {
          v17 = *(_WORD *)(v14 + 2 * v15);
        }
        *v6 = v17;
        ++v2;
        ++v6;
        if ( !v8 )
          break;
      }
    }
    else
    {
      v9 = NlsAnsiToUnicodeData;
      v10 = &v18;
      if ( v5 > 1 )
        v7 = 1LL;
      do
      {
        v11 = (unsigned __int8)*v2++;
        *v10++ = *(_WORD *)(v9 + 2 * v11);
        --v7;
      }
      while ( v7 );
    }
  }
  *a1 += v5;
  return v18;
}
