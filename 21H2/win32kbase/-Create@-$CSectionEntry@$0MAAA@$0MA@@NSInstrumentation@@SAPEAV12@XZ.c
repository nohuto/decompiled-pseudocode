/*
 * XREFs of ?Create@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008C654
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008BE4C (-Initialize@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C009BB2C (-Allocate@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008C6B4 (-Initialize@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00BB54C (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void *NSInstrumentation::CSectionEntry<49152,192>::Create()
{
  _QWORD *Pool2; // rax
  void *v1; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(262LL, 40LL);
  v1 = Pool2;
  if ( Pool2 )
  {
    Pool2[2] = 0LL;
    Pool2[3] = 0LL;
    Pool2[4] = 0LL;
    if ( (unsigned __int8)NSInstrumentation::CSectionEntry<49152,192>::Initialize(Pool2) )
      return v1;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
