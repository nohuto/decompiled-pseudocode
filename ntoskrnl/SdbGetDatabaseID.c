/*
 * XREFs of SdbGetDatabaseID @ 0x14079F0D0
 * Callers:
 *     SdbpValidateAndApplyCompatFlags @ 0x14079D0F4 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbReadEntryInformation @ 0x140A4C714 (SdbReadEntryInformation.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x14079D160 (SdbReadBinaryTag.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbGetDatabaseID(__int64 a1, void *a2)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned int FirstTag; // eax
  unsigned int v7; // eax
  const void *v8; // rsi

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( (v2 & 2) != 0 )
  {
    v8 = (const void *)(a1 + 28);
  }
  else
  {
    FirstTag = SdbFindFirstTag(a1, 0LL, 28673LL);
    if ( !FirstTag
      || (v7 = SdbFindFirstTag(a1, FirstTag, 36871LL)) == 0
      || (v8 = (const void *)(a1 + 28), !(unsigned int)SdbReadBinaryTag(a1, v7, a1 + 28, 0x10u)) )
    {
      AslLogCallPrintf(1LL);
      return v3;
    }
    *(_DWORD *)(a1 + 24) |= 2u;
    v2 = *(_DWORD *)(a1 + 24);
  }
  if ( (v2 & 2) != 0 )
  {
    memmove(a2, v8, 0x10uLL);
    return 1;
  }
  return v3;
}
