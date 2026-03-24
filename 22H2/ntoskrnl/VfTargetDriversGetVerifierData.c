/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x1409D6E50
 * Callers:
 *     VfUtilGetDifPluginDriverData @ 0x1405A06A0 (VfUtilGetDifPluginDriverData.c)
 *     VfUtilCheckRuleEnforcement @ 0x1409C65EC (VfUtilCheckRuleEnforcement.c)
 *     VfUtilGetDriverName @ 0x1409C6780 (VfUtilGetDriverName.c)
 *     VfUtilGetSigningLevel @ 0x1409C67B0 (VfUtilGetSigningLevel.c)
 *     VfUtilIsBootDriver @ 0x1409C67D0 (VfUtilIsBootDriver.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D45E0 (VeAllocatePoolWithTagPriority.c)
 *     VfTargetDriversIsEnabled @ 0x1409D6F40 (VfTargetDriversIsEnabled.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1405A1CDC (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x1409C88D0 (VfDriverIsKernelImageAddress.c)
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
    if ( dword_140C1D068 < 2 )
      return 0LL;
  }
  else if ( !dword_140C1D068 )
  {
    return 0LL;
  }
  Node = VfTargetDriversGetNode(v1);
  if ( !Node )
    return 0LL;
  return Node[7];
}
