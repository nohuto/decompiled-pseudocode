/*
 * XREFs of ?Create@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00C872C
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00C86A8 (-Initialize@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ @ 0x1C002CB48 (-Initialize@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C009FFD0 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

_QWORD *NSInstrumentation::CSectionEntry<28672,112>::Create()
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
    if ( NSInstrumentation::CSectionEntry<28672,112>::Initialize((__int64)Pool2) )
      return v1;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
