/*
 * XREFs of ??$UserAllocateIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0109744
 * Callers:
 *     InternalRegisterClassEx @ 0x1C0030830 (InternalRegisterClassEx.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C01096CC (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00DC9D0 (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

PVOID UserAllocateIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>()
{
  if ( *gpUserTypeIsolation )
    return NSInstrumentation::CTypeIsolation<36864,144>::Allocate((__int64)*gpUserTypeIsolation);
  else
    return 0LL;
}
