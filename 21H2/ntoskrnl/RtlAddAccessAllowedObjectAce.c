/*
 * XREFs of RtlAddAccessAllowedObjectAce @ 0x140912190
 * Callers:
 *     LocalGetAclForString @ 0x1407878AC (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x14065C460 (RtlpAddKnownAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409128A0 (RtlpAddKnownObjectAce.c)
 */

__int64 __fastcall RtlAddAccessAllowedObjectAce(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        PSID Src)
{
  if ( a5 || a6 )
    return RtlpAddKnownObjectAce(a1, a2, a3, a4, a5, a6, Src, 5);
  else
    return RtlpAddKnownAce(a1, a2, a3, a4, (unsigned __int8 *)Src, 0);
}
