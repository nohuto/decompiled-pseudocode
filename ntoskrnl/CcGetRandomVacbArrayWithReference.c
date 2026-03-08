/*
 * XREFs of CcGetRandomVacbArrayWithReference @ 0x140535BC4
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x140535FC0 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     CcReferenceVacbArray @ 0x140335D48 (CcReferenceVacbArray.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x140535C64 (CcRecalculateVacbArrayHighwaterMark.c)
 *     RtlRandom @ 0x140797410 (RtlRandom.c)
 */

_DWORD *CcGetRandomVacbArrayWithReference()
{
  ULONG v0; // ebx
  KIRQL v1; // di
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  while ( 1 )
  {
    do
      v0 = RtlRandom(&CcRandomSeed) % (CcVacbArraysHighestUsedIndex + 1);
    while ( !*(_QWORD *)(CcVacbArrays + 8LL * v0) );
    v1 = KeAcquireQueuedSpinLock(4uLL);
    v2 = CcReferenceVacbArray(v0);
    v3 = v2;
    if ( v2 )
      break;
    KeReleaseQueuedSpinLock(4uLL, v1);
  }
  CcRecalculateVacbArrayHighwaterMark(v2);
  KeReleaseQueuedSpinLock(4uLL, v1);
  return v3;
}
