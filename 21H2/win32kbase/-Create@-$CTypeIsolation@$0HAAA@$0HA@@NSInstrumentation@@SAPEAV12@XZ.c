/*
 * XREFs of ?Create@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008CC5C
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1C008BA84 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@V-$CTypeIsolati.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00DB490 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@V-$CTypeIsola.c)
 * Callees:
 *     ?Initialize@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008CDC4 (-Initialize@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ??1?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA@XZ @ 0x1C00BB4FC (--1-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA@XZ.c)
 */

void *NSInstrumentation::CTypeIsolation<28672,112>::Create()
{
  __int64 Pool2; // rax
  void *v1; // rbx

  Pool2 = ExAllocatePool2(262LL, 40LL);
  v1 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 32) = 0;
    *(_BYTE *)(Pool2 + 36) = 0;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    if ( (unsigned __int8)NSInstrumentation::CTypeIsolation<28672,112>::Initialize(Pool2) )
      return v1;
    NSInstrumentation::CTypeIsolation<81920,160>::~CTypeIsolation<81920,160>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
