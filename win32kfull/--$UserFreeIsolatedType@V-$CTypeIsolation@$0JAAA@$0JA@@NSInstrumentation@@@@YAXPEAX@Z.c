/*
 * XREFs of ??$UserFreeIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01BF140
 * Callers:
 *     InternalRegisterClassEx @ 0x1C0030830 (InternalRegisterClassEx.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C01096CC (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C01BF2A8 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00CF5C8 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(void *a1)
{
  if ( *gpUserTypeIsolation )
    NSInstrumentation::CTypeIsolation<36864,144>::Free((__int64)*gpUserTypeIsolation, a1);
}
