/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x1409D6E40
 * Callers:
 *     VfUtilGetDifPluginDriverData @ 0x1405A0760 (VfUtilGetDifPluginDriverData.c)
 *     VfUtilCheckRuleEnforcement @ 0x1409C65DC (VfUtilCheckRuleEnforcement.c)
 *     VfUtilGetDriverName @ 0x1409C6770 (VfUtilGetDriverName.c)
 *     VfUtilGetSigningLevel @ 0x1409C67A0 (VfUtilGetSigningLevel.c)
 *     VfUtilIsBootDriver @ 0x1409C67C0 (VfUtilIsBootDriver.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D45D0 (VeAllocatePoolWithTagPriority.c)
 *     VfTargetDriversIsEnabled @ 0x1409D6F30 (VfTargetDriversIsEnabled.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1405A1D9C (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x1409C88C0 (VfDriverIsKernelImageAddress.c)
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
    if ( dword_140C1D0A8 < 2 )
      return 0LL;
  }
  else if ( !dword_140C1D0A8 )
  {
    return 0LL;
  }
  Node = VfTargetDriversGetNode(v1);
  if ( !Node )
    return 0LL;
  return Node[7];
}
