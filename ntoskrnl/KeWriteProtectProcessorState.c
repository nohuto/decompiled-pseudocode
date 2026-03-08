/*
 * XREFs of KeWriteProtectProcessorState @ 0x140A8E420
 * Callers:
 *     MakeGdtReadOnly @ 0x1403A90CC (MakeGdtReadOnly.c)
 *     KiDynamicProcessorInitialization @ 0x140569868 (KiDynamicProcessorInitialization.c)
 * Callees:
 *     MmSetPageProtection @ 0x1403BCCE0 (MmSetPageProtection.c)
 *     KeBugCheck @ 0x140415FE0 (KeBugCheck.c)
 *     VslFinishStartSecureProcessor @ 0x140548B00 (VslFinishStartSecureProcessor.c)
 *     KiShadowProcessorAllocation @ 0x140A8666C (KiShadowProcessorAllocation.c)
 */

char __fastcall KeWriteProtectProcessorState(__int64 *a1)
{
  __int64 v1; // rsi
  bool v3; // bl
  int v4; // eax

  v1 = *a1;
  v3 = VslVsmEnabled != 0;
  LOBYTE(v4) = MmSetPageProtection(a1[7], 0x1000uLL, 2u);
  if ( v3 )
  {
    LOBYTE(v4) = MmSetPageProtection(v1 & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL, 2u);
    if ( KiKvaShadow )
      LOBYTE(v4) = MmSetPageProtection(a1[1], 0x1000uLL, 2u);
  }
  if ( !*((_DWORD *)a1 + 105) )
  {
    v4 = KiShadowProcessorAllocation((__int64)(a1 + 48), v1 - 12208);
    if ( !v4 )
      KeBugCheck(0x7Du);
  }
  if ( VslVsmEnabled )
    LOBYTE(v4) = VslFinishStartSecureProcessor((__int64)(a1 + 48), (struct _MDL *)a1[4456]);
  return v4;
}
