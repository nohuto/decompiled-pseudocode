/*
 * XREFs of AMLIGetFirstChild @ 0x1C00482EC
 * Callers:
 *     ACPIBuildMissingChildren @ 0x1C000D8BC (ACPIBuildMissingChildren.c)
 *     EnableDisableCMOSRegions @ 0x1C0019E94 (EnableDisableCMOSRegions.c)
 *     ACPIGpeBuildEventMasks @ 0x1C002BE44 (ACPIGpeBuildEventMasks.c)
 *     EnableDisableIPMIRegions @ 0x1C008879C (EnableDisableIPMIRegions.c)
 *     EnableDisableRegions @ 0x1C008A57C (EnableDisableRegions.c)
 * Callees:
 *     <none>
 */

volatile signed __int32 *__fastcall AMLIGetFirstChild(_QWORD *a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  volatile signed __int32 *v5; // rbx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = (_QWORD *)(*a1 + 24LL);
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 == v3 )
  {
    v5 = 0LL;
  }
  else
  {
    dword_1C006F938 = 0;
    v5 = (volatile signed __int32 *)(v4 + 15);
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement(v5 + 2);
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return v5;
}
