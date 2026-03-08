/*
 * XREFs of RIMIDEIsCompatibleDevice @ 0x1C01C4D48
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C00345C8 (RIMIDEAdoptOrphanedRimDevs.c)
 * Callees:
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C00350D4 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimInputTypeFromRimDev @ 0x1C01A10C0 (rimInputTypeFromRimDev.c)
 */

__int64 __fastcall RIMIDEIsCompatibleDevice(_DWORD *a1, __int64 a2)
{
  int v4; // eax

  v4 = rimInputTypeFromRimDev(a2);
  if ( (v4 & a1[21]) == 0 )
    return 0LL;
  if ( v4 != 32 || a1[264] )
    return 1LL;
  if ( !a1[22] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2119);
  return rimIsExplicitRimUsagesMatchingUsages(
           (__int64)a1,
           *(_WORD *)(*(_QWORD *)(a2 + 464) + 16LL),
           *(_WORD *)(*(_QWORD *)(a2 + 464) + 18LL));
}
