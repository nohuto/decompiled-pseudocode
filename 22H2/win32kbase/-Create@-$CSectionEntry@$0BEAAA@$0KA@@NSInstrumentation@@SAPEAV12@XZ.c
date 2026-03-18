/*
 * XREFs of ?Create@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008CDE8
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008CD64 (-Initialize@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0099E70 (-Allocate@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008D340 (-Initialize@-$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0091344 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void *NSInstrumentation::CSectionEntry<81920,160>::Create()
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
    if ( (unsigned __int8)NSInstrumentation::CSectionEntry<81920,160>::Initialize(Pool2) )
      return v1;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
