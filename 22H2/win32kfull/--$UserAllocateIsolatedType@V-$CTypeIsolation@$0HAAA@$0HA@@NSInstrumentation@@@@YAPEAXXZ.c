/*
 * XREFs of ??$UserAllocateIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0169764
 * Callers:
 *     xxxSBTrackInit @ 0x1C0245640 (xxxSBTrackInit.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0243A1C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 UserAllocateIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>()
{
  if ( gpUserTypeIsolation[5] )
    return NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  else
    return 0LL;
}
