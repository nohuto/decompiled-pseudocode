/*
 * XREFs of CcDereferenceVacbArray @ 0x140535B1C
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x140535FC0 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CcRemoveVacbArray @ 0x140535D48 (CcRemoveVacbArray.c)
 *     CcFreeVacbArray @ 0x140933C04 (CcFreeVacbArray.c)
 */

void __fastcall CcDereferenceVacbArray(__int64 a1, char a2)
{
  KIRQL v2; // di
  int v5; // eax
  int v6; // eax

  v2 = 0;
  if ( !a2 )
    v2 = KeAcquireQueuedSpinLock(4uLL);
  v5 = *(_DWORD *)(a1 + 4);
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x16EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = v5 - 1;
  *(_DWORD *)(a1 + 4) = v6;
  if ( !a2 )
  {
    if ( v6 )
    {
      KeReleaseQueuedSpinLock(4uLL, v2);
    }
    else
    {
      CcRemoveVacbArray(a1);
      KeReleaseQueuedSpinLock(4uLL, v2);
      CcFreeVacbArray(a1);
    }
  }
}
