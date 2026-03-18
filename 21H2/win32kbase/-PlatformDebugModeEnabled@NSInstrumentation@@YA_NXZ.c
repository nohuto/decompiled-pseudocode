/*
 * XREFs of ?PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ @ 0x1C008DB3C
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008BBFC (-Initialize@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008BC7C (-Initialize@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008BCFC (-Initialize@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ @ 0x1C008BD7C (-Initialize@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008BE4C (-Initialize@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008BED0 (-Initialize@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008BF54 (-Initialize@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008CCC4 (-Initialize@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008CD44 (-Initialize@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008CDC4 (-Initialize@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00DB55C (-Initialize@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall NSInstrumentation::PlatformDebugModeEnabled(NSInstrumentation *this)
{
  return MmIsDriverVerifyingByAddress(&unk_1C02503C8) != 0;
}
