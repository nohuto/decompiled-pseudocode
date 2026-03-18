/*
 * XREFs of ?Create@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008E14C
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008D924 (-Initialize@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C008DDF8 (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008E1AC (-Initialize@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0091344 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void *NSInstrumentation::CSectionEntry<36864,144>::Create()
{
  _QWORD *Pool2; // rax
  void *v1; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(262LL, 40LL, 1869834581LL);
  v1 = Pool2;
  if ( Pool2 )
  {
    Pool2[2] = 0LL;
    Pool2[3] = 0LL;
    Pool2[4] = 0LL;
    if ( (unsigned __int8)NSInstrumentation::CSectionEntry<36864,144>::Initialize(Pool2) )
      return v1;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
