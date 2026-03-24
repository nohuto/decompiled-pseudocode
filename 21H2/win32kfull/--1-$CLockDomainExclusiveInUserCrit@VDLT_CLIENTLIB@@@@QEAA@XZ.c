/*
 * XREFs of ??1?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C02431C4
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C002067C (xxxLoadHmodIndex.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(
        tagDomLock **a1)
{
  tagDomLock::UnLockExclusive(*a1);
}
