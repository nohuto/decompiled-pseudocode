/*
 * XREFs of HalpMceRecoveryNotRequiredAmd @ 0x140516E54
 * Callers:
 *     HalpMceRecovery @ 0x1405169E0 (HalpMceRecovery.c)
 * Callees:
 *     HalpMemoryErrorDeferredRecovery @ 0x1405174A4 (HalpMemoryErrorDeferredRecovery.c)
 */

void __fastcall HalpMceRecoveryNotRequiredAmd(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  if ( ((v1 & 0x4000000000000000LL) == 0 || HalpMcaOverflowRecoverySupported) && (v1 & 0x400000000000000LL) != 0 )
  {
    v2 = 0;
    v3 = *(_QWORD *)(a1 + 48);
    if ( HalpMcaScalableRasSupported )
      v2 = (v1 & 0x100000000000LL) != 0;
    HalpMemoryErrorDeferredRecovery(v3, 0, 0, 0, v1, 0, 1, v2);
  }
}
