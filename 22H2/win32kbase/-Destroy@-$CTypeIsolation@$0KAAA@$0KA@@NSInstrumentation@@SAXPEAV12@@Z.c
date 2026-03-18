/*
 * XREFs of ?Destroy@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00918A4
 * Callers:
 *     ?Destroy@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0OAAAA@$0OAA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C00D3838 (-Destroy@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@V-$.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA@XZ @ 0x1C00918D0 (--1-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<40960,160>::Destroy(PVOID P)
{
  NSInstrumentation::CTypeIsolation<40960,160>::~CTypeIsolation<40960,160>(P);
  ExFreePoolWithTag(P, 0);
}
