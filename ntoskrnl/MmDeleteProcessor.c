/*
 * XREFs of MmDeleteProcessor @ 0x14061578C
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 *     MmInitializeProcessor @ 0x140A86740 (MmInitializeProcessor.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiDeleteUltraThreadContext @ 0x14035137C (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MmDeleteProcessor(__int64 a1)
{
  __int64 **v1; // rbx

  v1 = *(__int64 ***)(a1 + 33592);
  if ( v1 )
  {
    MiReleasePtes((__int64)&qword_140C695C0, v1[1578], 1u);
    MiDeleteUltraThreadContext((__int64)(v1 + 1544));
    ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 33592) = 0LL;
  }
}
