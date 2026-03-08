/*
 * XREFs of ?Destroy@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C009FE8C
 * Callers:
 *     ?UninitializeTypeIsolation@@YAXXZ @ 0x1C009FE38 (-UninitializeTypeIsolation@@YAXXZ.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAA@XZ @ 0x1C009FF58 (--1-$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAA@XZ.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C00A0420 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V-$CTypeIsolat.c)
 */

__int64 __fastcall TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<221184,864>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(
        __int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 48));
    NSInstrumentation::CTypeIsolation<221184,864>::~CTypeIsolation<221184,864>(v1);
    ExFreePoolWithTag((PVOID)v1, 0);
  }
  return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(a1);
}
