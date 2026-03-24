/*
 * XREFs of ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0039C3C
 * Callers:
 *     ??0?$CLockDomainExclusiveAllowRecursionInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00A1B90 (--0-$CLockDomainExclusiveAllowRecursionInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagDomLock::IsLockedExclusive(PERESOURCE *this)
{
  return ExIsResourceAcquiredExclusiveLite(*this) == 1;
}
