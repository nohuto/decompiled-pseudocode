/*
 * XREFs of ?Create@?$CSectionEntry@$0DGAAA@$0DGA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C002A658
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C002A3B0 (-Allocate@-$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Initialize@?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@QEAA_NXZ @ 0x1C00C54B4 (-Initialize@-$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@QEAA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0DGAAA@$0DGA@@NSInstrumentation@@AEAA_NXZ @ 0x1C002A6B8 (-Initialize@-$CSectionEntry@$0DGAAA@$0DGA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C009FFD0 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void *NSInstrumentation::CSectionEntry<221184,864>::Create()
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
    if ( (unsigned __int8)NSInstrumentation::CSectionEntry<221184,864>::Initialize(Pool2) )
      return v1;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
