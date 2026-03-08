/*
 * XREFs of MiBadRefCount @ 0x14064B094
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x14020E220 (MiDeleteNonPagedPoolPte.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiUnlockImageSection @ 0x140225A90 (MiUnlockImageSection.c)
 *     MiResolveProtoPteFault @ 0x140270A50 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140271760 (MiResolveTransitionFault.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiProbeUnlockPage @ 0x14027C720 (MiProbeUnlockPage.c)
 *     MiRemoveLockedPageCharge @ 0x140286E00 (MiRemoveLockedPageCharge.c)
 *     MiReadyLargePageToFree @ 0x140350860 (MiReadyLargePageToFree.c)
 *     MiFreeInitializationCode @ 0x14072A51C (MiFreeInitializationCode.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadRefCount(__int64 a1)
{
  KeBugCheckEx(
    0x4Eu,
    0x9AuLL,
    0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4),
    *(_BYTE *)(a1 + 34) & 7,
    *(unsigned __int16 *)(a1 + 32));
}
