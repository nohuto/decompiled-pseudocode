/*
 * XREFs of AMLIIterateSiblingsNext @ 0x1C0017560
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C001718C (ACPIGpeBuildEventMasks.c)
 *     ACPIBuildMissingChildren @ 0x1C00174CC (ACPIBuildMissingChildren.c)
 *     EnableDisableRegions @ 0x1C009D934 (EnableDisableRegions.c)
 *     EnableDisableIPMIRegions @ 0x1C00B0090 (EnableDisableIPMIRegions.c)
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     DereferenceObjectEx @ 0x1C0003DA4 (DereferenceObjectEx.c)
 */

__int64 __fastcall AMLIIterateSiblingsNext(volatile signed __int32 *a1)
{
  KIRQL v2; // r9
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 *v7; // rcx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( !v3 || (v4 = **(_QWORD **)a1, v4 == v3 + 24) )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = v4 + 120;
    dword_1C0082908 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 128));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
  {
    v7 = *(__int64 **)a1;
    if ( a1 == (volatile signed __int32 *)(*(_QWORD *)a1 + 120LL) )
    {
      DereferenceObjectEx((unsigned __int64)v7);
    }
    else
    {
      DereferenceObjectEx((unsigned __int64)v7);
      HeapFree(a1);
    }
  }
  return v5;
}
