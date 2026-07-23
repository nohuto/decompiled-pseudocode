/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x1409D7E40
 * Callers:
 *     VfUtilGetDifPluginDriverData @ 0x1405A0990 (VfUtilGetDifPluginDriverData.c)
 *     VfUtilCheckRuleEnforcement @ 0x1409C75DC (VfUtilCheckRuleEnforcement.c)
 *     VfUtilGetDriverName @ 0x1409C7770 (VfUtilGetDriverName.c)
 *     VfUtilGetSigningLevel @ 0x1409C77A0 (VfUtilGetSigningLevel.c)
 *     VfUtilIsBootDriver @ 0x1409C77C0 (VfUtilIsBootDriver.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D55D0 (VeAllocatePoolWithTagPriority.c)
 *     VfTargetDriversIsEnabled @ 0x1409D7F30 (VfTargetDriversIsEnabled.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1405A1FCC (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x1409C98C0 (VfDriverIsKernelImageAddress.c)
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
    if ( dword_140C1D308 < 2 )
      return 0LL;
  }
  else if ( !dword_140C1D308 )
  {
    return 0LL;
  }
  Node = VfTargetDriversGetNode(v1);
  if ( !Node )
    return 0LL;
  return Node[7];
}
