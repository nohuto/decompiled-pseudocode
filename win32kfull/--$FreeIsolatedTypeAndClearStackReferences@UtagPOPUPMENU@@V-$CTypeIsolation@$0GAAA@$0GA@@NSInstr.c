/*
 * XREFs of ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x1C012EE68
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C020124C (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C0201B70 (NullifyLookasideRef.c)
 */

__int64 __fastcall FreeIsolatedTypeAndClearStackReferences<tagPOPUPMENU,NSInstrumentation::CTypeIsolation<24576,96>>(
        __int64 a1)
{
  NullifyLookasideRef(*(_QWORD *)(a1 + 88));
  return UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(a1);
}
