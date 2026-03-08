/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1C00C85B4
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1C00C8454 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@V-$CTypeIsolat.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A06F0 (--1-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA@XZ.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@SA_NPEAPEAE@Z @ 0x1C00C8630 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@SA_NPEAPEAE@Z.c)
 *     ?Initialize@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00C878C (-Initialize@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Create(
        __int64 a1)
{
  __int64 Pool2; // rax
  void *v3; // rbx

  Pool2 = ExAllocatePool2(262LL, 40LL, 1869834581LL);
  v3 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 32) = 0;
    *(_BYTE *)(Pool2 + 36) = 0;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    if ( (unsigned __int8)NSInstrumentation::CTypeIsolation<24576,96>::Initialize(Pool2) )
    {
      *(_QWORD *)(a1 + 32) = v3;
      return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<28672,112>>::Create(a1);
    }
    NSInstrumentation::CTypeIsolation<24576,96>::~CTypeIsolation<24576,96>((__int64)v3);
    ExFreePoolWithTag(v3, 0);
  }
  return 0;
}
