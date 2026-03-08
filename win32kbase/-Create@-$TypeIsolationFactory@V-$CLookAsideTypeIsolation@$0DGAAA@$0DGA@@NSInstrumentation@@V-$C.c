/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00C4D2C
 * Callers:
 *     ?InitializeTypeIsolation@@YA_NXZ @ 0x1C00C4C8C (-InitializeTypeIsolation@@YA_NXZ.c)
 * Callees:
 *     ?Create@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C002918C (-Create@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAA@XZ @ 0x1C009FF58 (--1-$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAA@XZ.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00C4DD4 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V-$CLookAsideTy.c)
 *     ?Initialize@?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@QEAA_NXZ @ 0x1C00C54B4 (-Initialize@-$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@QEAA_NXZ.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<221184,864>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(
        _QWORD *a1)
{
  __int64 Pool2; // rax
  char v3; // di
  char *v4; // rbx
  void *v5; // rax

  Pool2 = ExAllocatePool2(66LL, 144LL, 1869834581LL);
  v3 = 0;
  v4 = (char *)Pool2;
  if ( !Pool2 )
    return 0;
  memset((void *)(Pool2 + 37), 0, 0x6BuLL);
  *((_QWORD *)v4 + 2) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_DWORD *)v4 + 8) = 0;
  v4[36] = 0;
  *((_QWORD *)v4 + 1) = v4;
  *(_QWORD *)v4 = v4;
  if ( !(unsigned __int8)NSInstrumentation::CLookAsideTypeIsolation<221184,864>::Initialize(v4) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(v4 + 48));
    NSInstrumentation::CTypeIsolation<221184,864>::~CTypeIsolation<221184,864>((__int64)v4);
    ExFreePoolWithTag(v4, 0);
    return 0;
  }
  *a1 = v4;
  v5 = NSInstrumentation::CTypeIsolation<40960,160>::Create();
  if ( v5 )
  {
    a1[2] = v5;
    return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(a1);
  }
  return v3;
}
