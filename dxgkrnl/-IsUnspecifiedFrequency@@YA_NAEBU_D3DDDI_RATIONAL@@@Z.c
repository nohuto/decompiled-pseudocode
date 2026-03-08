/*
 * XREFs of ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x1C00021C8
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C016E538 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C017116C (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1C03B89AC (BmlCompareTargetModeWithVirtualRefreshRate.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C03BB460 (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsUnspecifiedFrequency(const struct _D3DDDI_RATIONAL *a1)
{
  return *a1 == 0xFFFFFFFEFFFFFFFEuLL || a1->Numerator == -1 && a1->Denominator == -1;
}
