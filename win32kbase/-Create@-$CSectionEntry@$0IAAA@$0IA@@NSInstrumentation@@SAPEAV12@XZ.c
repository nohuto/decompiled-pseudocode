/*
 * XREFs of ?Create@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0029CB8
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00299D0 (-Allocate@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAA_NXZ @ 0x1C002C6E4 (-Initialize@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAA_NXZ.c)
 *     GreCreateRectRgnIndirect @ 0x1C0050B70 (GreCreateRectRgnIndirect.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0053290 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0056850 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@AEAA_NXZ @ 0x1C0029D18 (-Initialize@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C009FFD0 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void *NSInstrumentation::CSectionEntry<32768,128>::Create()
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
    if ( (unsigned __int8)NSInstrumentation::CSectionEntry<32768,128>::Initialize(Pool2) )
      return v1;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
