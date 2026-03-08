/*
 * XREFs of MiForceAgeWorkingSet @ 0x140632480
 * Callers:
 *     MiForcedTrim @ 0x1406324C0 (MiForcedTrim.c)
 *     MiSelfTrim @ 0x14064DCAC (MiSelfTrim.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x1402248A0 (MiAgeWorkingSet.c)
 */

__int64 __fastcall MiForceAgeWorkingSet(__int64 a1, __int8 a2)
{
  return MiAgeWorkingSet(
           a1,
           a2,
           1u,
           *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174))
                                           + 16920LL)
                               + 2346LL));
}
