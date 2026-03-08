/*
 * XREFs of ?Create@?$CSectionEntry@$0NPAAA@$0NPA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00C5280
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00C5200 (-Initialize@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00C7DB0 (-Allocate@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0NPAAA@$0NPA@@NSInstrumentation@@AEAA_NXZ @ 0x1C002C8C0 (-Initialize@-$CSectionEntry@$0NPAAA@$0NPA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C009FFD0 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

_QWORD *NSInstrumentation::CSectionEntry<913408,3568>::Create()
{
  _QWORD *Pool2; // rax
  _QWORD *v1; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(262LL, 40LL, 1869834581LL);
  v1 = Pool2;
  if ( Pool2 )
  {
    Pool2[2] = 0LL;
    Pool2[3] = 0LL;
    Pool2[4] = 0LL;
    if ( NSInstrumentation::CSectionEntry<913408,3568>::Initialize((__int64)Pool2) )
      return v1;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
