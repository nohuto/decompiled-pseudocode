/*
 * XREFs of ?Destroy@?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00915E4
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0OAAAA@$0OAA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00D3550 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@V-$C.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0OAAAA@$0OAA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C00D3838 (-Destroy@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@V-$.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAA@XZ @ 0x1C0091970 (--1-$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CLookAsideTypeIsolation<221184,864>::Destroy(char *P)
{
  ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(P + 48));
  NSInstrumentation::CTypeIsolation<221184,864>::~CTypeIsolation<221184,864>(P);
  ExFreePoolWithTag(P, 0);
}
