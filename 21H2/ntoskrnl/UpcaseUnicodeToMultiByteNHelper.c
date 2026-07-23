/*
 * XREFs of UpcaseUnicodeToMultiByteNHelper @ 0x140585BF4
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x1405F4130 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1406DD6A0 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 */

__int64 __fastcall UpcaseUnicodeToMultiByteNHelper(
        int a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int v8; // r11d
  _BYTE *v9; // r10
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned __int16 v13; // dx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int16 v17; // dx
  unsigned int v18; // eax

  v5 = a5;
  v8 = a2;
  for ( LODWORD(v9) = a1; v5; --v5 )
  {
    if ( !v8 )
      break;
    v11 = *a4;
    v12 = NlsUnicodeToMbAnsiData;
    ++a4;
    v13 = *(_WORD *)(NlsUnicodeToMbAnsiData + 2 * v11);
    v14 = NlsLeadByteInfoTable[(unsigned __int64)v13 >> 8];
    if ( (_WORD)v14 )
    {
      v15 = (unsigned __int8)v13 + v14;
      v16 = NlsMbAnsiCodePageTables;
    }
    else
    {
      v16 = NlsAnsiToUnicodeData;
      v15 = (unsigned __int8)v13;
    }
    v17 = *(_WORD *)(v12 + 2LL * NLS_UPCASE(*(_WORD *)(v16 + 2 * v15)));
    if ( HIBYTE(v17) )
    {
      v18 = v8--;
      if ( v18 < 2 )
        break;
      *v9++ = HIBYTE(v17);
    }
    *v9 = v17;
    --v8;
    LODWORD(v9) = (_DWORD)v9 + 1;
  }
  if ( a3 )
    *a3 = (_DWORD)v9 - a1;
  return v8 < v5 ? 0x80000005 : 0;
}
