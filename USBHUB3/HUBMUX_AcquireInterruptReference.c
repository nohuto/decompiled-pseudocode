/*
 * XREFs of HUBMUX_AcquireInterruptReference @ 0x1C0010F3C
 * Callers:
 *     HUBPSM30_AcquiringInterruptReferenceOnHSMInEnabled @ 0x1C0011A70 (HUBPSM30_AcquiringInterruptReferenceOnHSMInEnabled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMUX_AcquireInterruptReference(volatile signed __int32 *a1)
{
  __int64 v1; // rbx
  KIRQL v3; // al
  unsigned int v4; // edi

  v1 = *(_QWORD *)a1;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)a1 + 2320LL));
  if ( (*(_DWORD *)(v1 + 2352) & 2) != 0 )
  {
    v4 = 3009;
  }
  else
  {
    _InterlockedOr(a1 + 66, 2u);
    ++*(_DWORD *)(v1 + 2340);
    v4 = 3013;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 2320), v3);
  return v4;
}
