/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00C4F30
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00C4DD4 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V-$CLookAsideTy.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A05B0 (--1-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ.c)
 *     ?Initialize@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ @ 0x1C00C4FBC (-Initialize@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00C5028 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V-$CTypeIsola.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(
        __int64 a1)
{
  __int64 Pool2; // rax
  char *v3; // rbx

  Pool2 = ExAllocatePool2(66LL, 144LL, 1869834581LL);
  v3 = (char *)Pool2;
  if ( Pool2 )
  {
    memset((void *)(Pool2 + 37), 0, 0x6BuLL);
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_DWORD *)v3 + 8) = 0;
    v3[36] = 0;
    *((_QWORD *)v3 + 1) = v3;
    *(_QWORD *)v3 = v3;
    if ( (unsigned __int8)NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Initialize(v3) )
    {
      *(_QWORD *)(a1 + 8) = v3;
      return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(a1);
    }
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(v3 + 48));
    NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>((__int64)v3);
    ExFreePoolWithTag(v3, 0);
  }
  return 0;
}
