/*
 * XREFs of ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008BFD8
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008BCFC (-Initialize@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008C038 (-Initialize@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00BB54C (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void *NSInstrumentation::CSectionEntry<24576,96>::Create()
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
    if ( (unsigned __int8)NSInstrumentation::CSectionEntry<24576,96>::Initialize(Pool2) )
      return v1;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
