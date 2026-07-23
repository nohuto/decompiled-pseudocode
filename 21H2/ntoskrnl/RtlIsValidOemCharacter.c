/*
 * XREFs of RtlIsValidOemCharacter @ 0x140916630
 * Callers:
 *     GetNextWchar @ 0x1405EB828 (GetNextWchar.c)
 * Callees:
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 *     RtlpIsUtf8Process @ 0x1406DDCE0 (RtlpIsUtf8Process.c)
 */

BOOLEAN __stdcall RtlIsValidOemCharacter(PWCHAR Char)
{
  char IsUtf8Process; // al
  __int64 v3; // rcx
  WCHAR v4; // r10
  __int64 v5; // r9
  __int16 v6; // ax
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r9

  IsUtf8Process = RtlpIsUtf8Process(1);
  v3 = *Char;
  if ( IsUtf8Process != 1 )
  {
    if ( (_BYTE)NlsMbOemCodePageTag )
    {
      v7 = *(unsigned __int16 *)(NlsUnicodeToMbOemData + 2 * v3);
      v8 = (unsigned __int8)v7;
      v9 = (unsigned __int16)NlsOemLeadByteInfoTable[v7 >> 8];
      if ( (_WORD)v9 )
      {
        v10 = NlsMbOemCodePageTables;
        v8 += v9;
      }
      else
      {
        v10 = NlsOemToUnicodeData;
      }
      v4 = NLS_UPCASE(*(_WORD *)(v10 + 2 * v8));
      v6 = *(_WORD *)(v11 + 2LL * v4);
    }
    else
    {
      v4 = NLS_UPCASE(*(_WORD *)(NlsOemToUnicodeData + 2LL * *(unsigned __int8 *)(v3 + NlsUnicodeToOemData)));
      v6 = *(char *)(v4 + v5);
    }
    if ( v6 != OemDefaultChar )
    {
      *Char = v4;
      return 1;
    }
    return 0;
  }
  if ( (unsigned int)v3 > 0x7F )
    return 0;
  *Char = NLS_UPCASE(v3);
  return 1;
}
