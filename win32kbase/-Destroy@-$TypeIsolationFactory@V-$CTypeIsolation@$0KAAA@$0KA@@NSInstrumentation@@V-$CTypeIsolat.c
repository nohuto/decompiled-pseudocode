/*
 * XREFs of ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C00A0420
 * Callers:
 *     ?Destroy@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C009FE8C (-Destroy@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@V-$.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A05B0 (--1-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ.c)
 *     ??1?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A0628 (--1-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA@XZ.c)
 *     ??1?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A0800 (--1-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA@XZ.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C00A0878 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V-$CTypeIsol.c)
 */

__int64 __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(
        _QWORD *a1)
{
  void *v1; // rdi
  void *v3; // rdi
  __int64 v4; // rdi

  v1 = (void *)a1[2];
  if ( v1 )
  {
    NSInstrumentation::CTypeIsolation<40960,160>::~CTypeIsolation<40960,160>(a1[2]);
    ExFreePoolWithTag(v1, 0);
  }
  v3 = (void *)a1[3];
  if ( v3 )
  {
    NSInstrumentation::CTypeIsolation<49152,192>::~CTypeIsolation<49152,192>(a1[3]);
    ExFreePoolWithTag(v3, 0);
  }
  v4 = a1[1];
  if ( v4 )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(v4 + 48));
    NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>(v4);
    ExFreePoolWithTag((PVOID)v4, 0);
  }
  return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(a1);
}
