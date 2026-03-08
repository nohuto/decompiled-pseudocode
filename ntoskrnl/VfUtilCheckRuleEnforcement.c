/*
 * XREFs of VfUtilCheckRuleEnforcement @ 0x140ABF634
 * Callers:
 *     VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140ADD240 (VfMiscMmBuildMdlForNonPagedPool_Exit.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140ADD2B0 (VfMiscMmUnmapLockedPages_Entry.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140AC8528 (VfTargetDriversGetVerifierData.c)
 */

_BOOL8 __fastcall VfUtilCheckRuleEnforcement(__int64 a1)
{
  __int64 VerifierData; // rax
  _BOOL8 result; // rax

  result = 1;
  if ( VerifierTipDisable == 1 )
  {
    VerifierData = VfTargetDriversGetVerifierData(a1);
    if ( !VerifierData || ((*(_BYTE *)(VerifierData + 48) - 8) & 0xFB) == 0 )
      return 0;
  }
  return result;
}
