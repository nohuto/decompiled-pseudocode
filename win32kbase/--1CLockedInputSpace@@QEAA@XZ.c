/*
 * XREFs of ??1CLockedInputSpace@@QEAA@XZ @ 0x1C00DDEF8
 * Callers:
 *     NtInputSpaceRegionFromPoint @ 0x1C0169950 (NtInputSpaceRegionFromPoint.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockedInputSpace::~CLockedInputSpace(PERESOURCE **this)
{
  ExReleaseResourceLite(*this[1]);
  KeLeaveCriticalRegion();
}
