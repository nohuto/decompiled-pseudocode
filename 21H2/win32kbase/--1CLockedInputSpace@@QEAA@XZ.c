/*
 * XREFs of ??1CLockedInputSpace@@QEAA@XZ @ 0x1C0071554
 * Callers:
 *     NtInputSpaceRegionFromPoint @ 0x1C0128DF0 (NtInputSpaceRegionFromPoint.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockedInputSpace::~CLockedInputSpace(PERESOURCE **this)
{
  ExReleaseResourceLite(*this[1]);
  KeLeaveCriticalRegion();
}
