/*
 * XREFs of ??1CLockedInputSpace@@QEAA@XZ @ 0x1C0072004
 * Callers:
 *     NtInputSpaceRegionFromPoint @ 0x1C01290C0 (NtInputSpaceRegionFromPoint.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockedInputSpace::~CLockedInputSpace(PERESOURCE **this)
{
  ExReleaseResourceLite(*this[1]);
  KeLeaveCriticalRegion();
}
