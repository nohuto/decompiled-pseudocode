/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@SA_NPEAPEAE@Z @ 0x1C008CA20
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1C008C9A4 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@V-$CTypeIsolati.c)
 * Callees:
 *     ?Initialize@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008CF2C (-Initialize@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ??1?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA@XZ @ 0x1C0091594 (--1-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA@XZ.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<28672,112>>::Create(__int64 a1)
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
    if ( (unsigned __int8)NSInstrumentation::CTypeIsolation<28672,112>::Initialize(Pool2) )
    {
      *(_QWORD *)(a1 + 40) = v3;
      return 1;
    }
    NSInstrumentation::CTypeIsolation<28672,112>::~CTypeIsolation<28672,112>(v3);
    ExFreePoolWithTag(v3, 0);
  }
  return 0;
}
