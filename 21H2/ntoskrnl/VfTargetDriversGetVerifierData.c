/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x140A8ABF8
 * Callers:
 *     CarGetDriverInfoFromViolationStack @ 0x140602CF4 (CarGetDriverInfoFromViolationStack.c)
 *     DifGetPluginPerDriverData @ 0x140604400 (DifGetPluginPerDriverData.c)
 *     VfUtilCheckRuleEnforcement @ 0x140A81CBC (VfUtilCheckRuleEnforcement.c)
 *     VfUtilGetDriverName @ 0x140A81D40 (VfUtilGetDriverName.c)
 *     VfUtilGetSigningLevel @ 0x140A81D70 (VfUtilGetSigningLevel.c)
 *     VfUtilIsBootDriver @ 0x140A81D90 (VfUtilIsBootDriver.c)
 *     VfTargetDriversIsEnabled @ 0x140A8ACE8 (VfTargetDriversIsEnabled.c)
 *     VfHandlePoolAlloc @ 0x140A90660 (VfHandlePoolAlloc.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1402D86CC (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x140A89D2C (VfDriverIsKernelImageAddress.c)
 */

__int64 __fastcall VfTargetDriversGetVerifierData(unsigned __int64 a1)
{
  unsigned __int64 v1; // rcx
  _QWORD *Node; // rax

  if ( VfDriverIsKernelImageAddress(a1) )
  {
    if ( !KernelVerifier )
      return 0LL;
  }
  else if ( KernelVerifier )
  {
    if ( dword_140C1B248 < 2 )
      return 0LL;
  }
  else if ( !dword_140C1B248 )
  {
    return 0LL;
  }
  Node = VfTargetDriversGetNode(v1);
  if ( !Node )
    return 0LL;
  return Node[7];
}
