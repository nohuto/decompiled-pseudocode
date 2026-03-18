/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00AE584
 * Callers:
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0003658 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00AE4F8 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     FreeHidTLCInfo @ 0x1C0103208 (FreeHidTLCInfo.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1C0103268 (AllocateAndLinkHidTLCInfo.c)
 *     SearchHidTLCInfo @ 0x1C0103318 (SearchHidTLCInfo.c)
 *     AllocateProcessHidTable @ 0x1C0121408 (AllocateProcessHidTable.c)
 *     CleanupHidRequestList @ 0x1C01D1030 (CleanupHidRequestList.c)
 * Callees:
 *     <none>
 */

void __fastcall RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded(RIMLOCKExclusiveIfNeeded *this)
{
  if ( *(_QWORD *)this )
  {
    RIMUnlockExclusive();
    *(_QWORD *)this = 0LL;
  }
}
