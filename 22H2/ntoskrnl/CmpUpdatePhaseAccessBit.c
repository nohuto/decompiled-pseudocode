/*
 * XREFs of CmpUpdatePhaseAccessBit @ 0x1407CEE5C
 * Callers:
 *     CmpAcceptBoot @ 0x14078D470 (CmpAcceptBoot.c)
 * Callees:
 *     CmpGetNextActiveHive @ 0x1406EB310 (CmpGetNextActiveHive.c)
 *     CmpTrimHive @ 0x14071C6E0 (CmpTrimHive.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CEEAC (CmpUpdateReorganizeRegistryValues.c)
 */

void CmpUpdatePhaseAccessBit()
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v2; // rbx

  if ( CmpAccessBitForPhase != 2 )
  {
    CmpAccessBitForPhase = 2;
    for ( i = 0LL; ; i = v2 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v2 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( (NextActiveHive[20] & 0x10) == 0 )
        CmpTrimHive((__int64)NextActiveHive);
    }
    CmpUpdateReorganizeRegistryValues();
  }
}
