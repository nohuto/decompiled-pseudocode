/*
 * XREFs of ??$UserFreeIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01BDFA0
 * Callers:
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C001FF28 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     InternalRegisterClassEx @ 0x1C00CB7A0 (InternalRegisterClassEx.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C01BE108 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00991C4 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(void *a1)
{
  if ( *gpUserTypeIsolation )
    NSInstrumentation::CTypeIsolation<36864,144>::Free((__int64)*gpUserTypeIsolation, a1);
}
