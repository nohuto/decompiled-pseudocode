/*
 * XREFs of MiFreeInPageSupportBlock @ 0x14027CF5C
 * Callers:
 *     MiResolveTransitionFault @ 0x140216750 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140217410 (MiHandleTransitionFault.c)
 *     MiFinishHardFault @ 0x140239200 (MiFinishHardFault.c)
 *     MiPfPutPagesInTransition @ 0x14027BCA0 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x140299B10 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x14029A230 (MiAllocateInPageSupport.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402E2190 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MiFaultGetFileExtents @ 0x140548330 (MiFaultGetFileExtents.c)
 *     MmPrefetchPagesEx @ 0x14061C774 (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x1406363C0 (MiPfAllocateMdls.c)
 *     MiFreeRotateVadEvent @ 0x1406A4400 (MiFreeRotateVadEvent.c)
 *     MiGetReadyInPageBlock @ 0x1408C8604 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiInsertInPageBlock @ 0x14027CFDC (MiInsertInPageBlock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeInPageSupportBlock(PSLIST_ENTRY ListEntry)
{
  _SLIST_ENTRY *Next; // rcx

  if ( *((struct _KTHREAD **)&ListEntry[9].Next + 1) == KeGetCurrentThread() && *((_QWORD *)&ListEntry[13].Next + 1) )
    KeAbPostRelease((ULONG_PTR)ListEntry);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&ListEntry[11], 0xFFFFFFFF) == 1 )
  {
    Next = ListEntry[16].Next;
    if ( Next && Next != &ListEntry[17] )
      ExFreePoolWithTag(Next, 0);
    if ( !(unsigned int)MiInsertInPageBlock(ListEntry) )
      ExFreePoolWithTag(ListEntry, 0);
  }
}
