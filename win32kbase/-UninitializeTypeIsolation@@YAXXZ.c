/*
 * XREFs of ?UninitializeTypeIsolation@@YAXXZ @ 0x1C009FE38
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C009EFD4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C009FE8C (-Destroy@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@V-$.c)
 */

void __fastcall UninitializeTypeIsolation(__int64 a1)
{
  __int64 v1; // rbx
  char *v2; // rdx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( *(_QWORD *)(v1 + 6504) )
  {
    TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<221184,864>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy();
    v2 = *(char **)(v1 + 6504);
    if ( v2 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
    *(_QWORD *)(v1 + 6504) = 0LL;
  }
}
