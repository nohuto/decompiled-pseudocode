/*
 * XREFs of AMLIIterateSiblingsNext @ 0x1C00488D8
 * Callers:
 *     ACPIBuildMissingChildren @ 0x1C000D8BC (ACPIBuildMissingChildren.c)
 *     EnableDisableCMOSRegions @ 0x1C0019E94 (EnableDisableCMOSRegions.c)
 *     ACPIGpeBuildEventMasks @ 0x1C002BE44 (ACPIGpeBuildEventMasks.c)
 *     EnableDisableIPMIRegions @ 0x1C008879C (EnableDisableIPMIRegions.c)
 *     EnableDisableRegions @ 0x1C008A57C (EnableDisableRegions.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall AMLIIterateSiblingsNext(volatile signed __int32 *a1)
{
  KIRQL v2; // cl
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( !v3 || (v4 = **(_QWORD **)a1, v4 == v3 + 24) )
  {
    v5 = 0LL;
  }
  else
  {
    dword_1C006F938 = 0;
    v5 = v4 + 120;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  AMLIDereferenceHandleEx(a1, v6);
  return v5;
}
