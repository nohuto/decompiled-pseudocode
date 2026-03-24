/*
 * XREFs of RIMIDEIsCompatibleDevice @ 0x1C0169B98
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C00ABF70 (RIMIDEAdoptOrphanedRimDevs.c)
 * Callees:
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C0057A7C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimInputTypeFromRimDev @ 0x1C01529EC (rimInputTypeFromRimDev.c)
 */

__int64 __fastcall RIMIDEIsCompatibleDevice(_DWORD *a1, __int64 a2)
{
  int v4; // eax

  v4 = rimInputTypeFromRimDev(a2);
  if ( (v4 & a1[21]) == 0 )
    return 0LL;
  if ( v4 != 32 || a1[216] )
    return 1LL;
  if ( !a1[22] )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2118);
  return rimIsExplicitRimUsagesMatchingUsages(
           (__int64)a1,
           *(_WORD *)(*(_QWORD *)(a2 + 472) + 16LL),
           *(_WORD *)(*(_QWORD *)(a2 + 472) + 18LL));
}
