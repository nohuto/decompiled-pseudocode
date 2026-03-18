/*
 * XREFs of ?Destroy@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00BB4D0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C008F7E4 (MultiUserNtGreCleanup.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00DB390 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V-$CTypeIsola.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00DB410 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V-$CLookAsideTy.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA@XZ @ 0x1C00BB4FC (--1-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<233472,912>::Destroy(PVOID P)
{
  NSInstrumentation::CTypeIsolation<81920,160>::~CTypeIsolation<81920,160>(P);
  ExFreePoolWithTag(P, 0);
}
