/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x140AC8528
 * Callers:
 *     CarGetDriverInfoFromViolationStack @ 0x1405D0C78 (CarGetDriverInfoFromViolationStack.c)
 *     DifGetPluginPerDriverData @ 0x1405D2630 (DifGetPluginPerDriverData.c)
 *     VfUtilCheckRuleEnforcement @ 0x140ABF634 (VfUtilCheckRuleEnforcement.c)
 *     VfUtilGetDriverName @ 0x140ABF6B0 (VfUtilGetDriverName.c)
 *     VfUtilGetSigningLevel @ 0x140ABF6E0 (VfUtilGetSigningLevel.c)
 *     VfUtilIsBootDriver @ 0x140ABF700 (VfUtilIsBootDriver.c)
 *     VfTargetDriversIsEnabled @ 0x140AC8614 (VfTargetDriversIsEnabled.c)
 *     VfHandlePoolAlloc @ 0x140ACDFB0 (VfHandlePoolAlloc.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x140303628 (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x140AC7714 (VfDriverIsKernelImageAddress.c)
 */

__int64 __fastcall VfTargetDriversGetVerifierData(unsigned __int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  bool v3; // zf
  __int64 Node; // rax

  LOBYTE(v1) = VfDriverIsKernelImageAddress(a1);
  if ( v1 )
  {
    v3 = KernelVerifier == 0;
  }
  else
  {
    if ( KernelVerifier )
    {
      if ( dword_140C36F48 >= 2 )
        goto LABEL_8;
      return 0LL;
    }
    v3 = dword_140C36F48 == 0;
  }
  if ( v3 )
    return 0LL;
LABEL_8:
  Node = VfTargetDriversGetNode(v2);
  if ( !Node )
    return 0LL;
  return *(_QWORD *)(Node + 56);
}
