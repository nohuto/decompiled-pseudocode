/*
 * XREFs of EtwDeleteProcessor @ 0x1409DEFB8
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     EtwpCCSwapDeleteProcessor @ 0x140601E2C (EtwpCCSwapDeleteProcessor.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwDeleteProcessor(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v1 = *(_QWORD **)(a1 + 34472);
  if ( v1 )
  {
    v3 = (void *)v1[41];
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    v4 = (void *)v1[40];
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    v5 = (void *)v1[42];
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    EtwpCCSwapDeleteProcessor((__int64)v1);
    ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 34472) = 0LL;
  }
}
