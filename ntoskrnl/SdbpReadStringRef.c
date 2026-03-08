/*
 * XREFs of SdbpReadStringRef @ 0x1407A2AA4
 * Callers:
 *     SdbGetStringTagPtr @ 0x1407A20E8 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x1407A21B8 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1407A2A70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x6000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, a2, (__int64)&v5, 4u) )
      return v5;
    AslLogCallPrintf(1LL);
  }
  else
  {
    SdbGetTagFromTagID(a1, a2);
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
