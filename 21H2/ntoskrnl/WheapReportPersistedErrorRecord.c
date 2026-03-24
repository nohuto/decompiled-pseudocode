/*
 * XREFs of WheapReportPersistedErrorRecord @ 0x1405BAF98
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403BAB88 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 * Callees:
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     WheapWorkQueueAddItem @ 0x1405BD7A8 (WheapWorkQueueAddItem.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

char __fastcall WheapReportPersistedErrorRecord(_DWORD *Src)
{
  _QWORD *WheaInfo; // rdi
  unsigned int v3; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rbx

  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  if ( !WheaInfo )
    return 0;
  v3 = Src[5] + 40;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x61656857u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, v3);
  v5[4] = v3;
  v5[6] = 2;
  memmove(v5 + 10, Src, (unsigned int)Src[5]);
  WheapWorkQueueAddItem(WheaInfo[2], v5);
  return 1;
}
