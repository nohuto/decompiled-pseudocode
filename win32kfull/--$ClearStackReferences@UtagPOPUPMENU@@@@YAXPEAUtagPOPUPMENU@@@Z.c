/*
 * XREFs of ??$ClearStackReferences@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x1C012EE4C
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     NullifyLookasideRef @ 0x1C0201B70 (NullifyLookasideRef.c)
 */

__int64 __fastcall ClearStackReferences<tagPOPUPMENU>(__int64 a1)
{
  return NullifyLookasideRef(*(_QWORD *)(a1 + 88));
}
