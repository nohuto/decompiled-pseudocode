/*
 * XREFs of ?PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ @ 0x1C002B480
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ @ 0x1C0029254 (-Initialize@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1C002B3A0 (-Initialize@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAA_NXZ @ 0x1C002C6E4 (-Initialize@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAA_NXZ @ 0x1C002C764 (-Initialize@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00C4E50 (-Initialize@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00C50A4 (-Initialize@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00C5200 (-Initialize@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00C53D4 (-Initialize@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@QEAA_NXZ @ 0x1C00C54B4 (-Initialize@-$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@QEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00C84D0 (-Initialize@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00C86A8 (-Initialize@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00C878C (-Initialize@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall NSInstrumentation::PlatformDebugModeEnabled(NSInstrumentation *this)
{
  return MmIsDriverVerifyingByAddress(&unk_1C0286534) != 0;
}
