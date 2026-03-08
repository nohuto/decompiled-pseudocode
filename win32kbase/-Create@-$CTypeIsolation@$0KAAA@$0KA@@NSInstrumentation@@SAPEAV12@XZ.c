/*
 * XREFs of ?Create@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C002918C
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00C4D2C (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@V-$C.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1C00C833C (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTypeIsolati.c)
 * Callees:
 *     ?Initialize@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1C002B3A0 (-Initialize@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ??1?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A0628 (--1-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA@XZ.c)
 */

void *NSInstrumentation::CTypeIsolation<40960,160>::Create()
{
  __int64 Pool2; // rax
  void *v1; // rbx

  Pool2 = ExAllocatePool2(262LL, 40LL, 1869834581LL);
  v1 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 32) = 0;
    *(_BYTE *)(Pool2 + 36) = 0;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    if ( (unsigned __int8)NSInstrumentation::CTypeIsolation<40960,160>::Initialize(Pool2) )
      return v1;
    NSInstrumentation::CTypeIsolation<40960,160>::~CTypeIsolation<40960,160>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
