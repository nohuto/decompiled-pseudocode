/*
 * XREFs of SdbGetDatabaseEdition @ 0x14079CA70
 * Callers:
 *     KsepSdbMapToMemory @ 0x14079D24C (KsepSdbMapToMemory.c)
 *     KsepSdbBootInitialize @ 0x14085E0A8 (KsepSdbBootInitialize.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x14079FC18 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbGetDatabaseEdition(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int FirstTag; // eax
  unsigned int v4; // eax

  v2 = 0;
  FirstTag = SdbFindFirstTag(a1, 0LL, 28673LL);
  if ( FirstTag )
  {
    v4 = SdbFindFirstTag(a1, FirstTag, 16469LL);
    if ( v4 )
      return (unsigned int)SdbReadDWORDTag(a1, v4, 0LL);
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v2;
}
