/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1C008BA84
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1C008BA08 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@V-$CTypeIsolat.c)
 * Callees:
 *     ?Initialize@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008BCFC (-Initialize@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Create@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008CC5C (-Create@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA@XZ @ 0x1C00BB4FC (--1-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA@XZ.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Create(
        __int64 a1)
{
  __int64 Pool2; // rax
  char v3; // di
  void *v4; // rbx
  __int64 v5; // rax

  Pool2 = ExAllocatePool2(262LL, 40LL);
  v3 = 0;
  v4 = (void *)Pool2;
  if ( !Pool2 )
    return 0;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 36) = 0;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  if ( !(unsigned __int8)NSInstrumentation::CTypeIsolation<24576,96>::Initialize(Pool2) )
  {
    NSInstrumentation::CTypeIsolation<81920,160>::~CTypeIsolation<81920,160>(v4);
    ExFreePoolWithTag(v4, 0);
    return 0;
  }
  *(_QWORD *)(a1 + 32) = v4;
  v5 = NSInstrumentation::CTypeIsolation<28672,112>::Create();
  if ( v5 )
  {
    *(_QWORD *)(a1 + 40) = v5;
    return 1;
  }
  return v3;
}
