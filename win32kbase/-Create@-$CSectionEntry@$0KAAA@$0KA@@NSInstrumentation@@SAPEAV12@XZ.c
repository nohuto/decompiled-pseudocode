/*
 * XREFs of ?Create@?$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C002B420
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1C002B3A0 (-Initialize@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00ACBC4 (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00291F4 (-Initialize@-$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C009FFD0 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void *NSInstrumentation::CSectionEntry<40960,160>::Create()
{
  _QWORD *Pool2; // rax
  unsigned int v1; // edx
  void *v2; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(262LL, 40LL, 1869834581LL);
  v2 = Pool2;
  if ( Pool2 )
  {
    Pool2[2] = 0LL;
    Pool2[3] = 0LL;
    Pool2[4] = 0LL;
    if ( NSInstrumentation::CSectionEntry<40960,160>::Initialize(Pool2, v1) )
      return v2;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v2);
    ExFreePoolWithTag(v2, 0);
  }
  return 0LL;
}
