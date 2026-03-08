/*
 * XREFs of MiFreeInPageSupportBlock @ 0x140287B5C
 * Callers:
 *     MiResolveTransitionFault @ 0x140271760 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x1402720E0 (MiHandleTransitionFault.c)
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiAllocateInPageSupport @ 0x14028A6A0 (MiAllocateInPageSupport.c)
 *     MiResolveMappedFileFault @ 0x14028A780 (MiResolveMappedFileFault.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402A2D3C (MiWaitForCollidedFaultComplete.c)
 *     MiFaultGetFileExtents @ 0x1406438D0 (MiFaultGetFileExtents.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 *     MmPrefetchPagesEx @ 0x1406A387C (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x14075A230 (MiPfAllocateMdls.c)
 *     MiFreeRotateVadEvent @ 0x140A2E600 (MiFreeRotateVadEvent.c)
 *     MiGetReadyInPageBlock @ 0x140A2E670 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiDereferenceInPageAutoBoostLock @ 0x14020CA70 (MiDereferenceInPageAutoBoostLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiInsertInPageBlock @ 0x140287BF8 (MiInsertInPageBlock.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeInPageSupportBlock(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *v2; // rcx
  struct _SLIST_ENTRY *Next; // rcx
  volatile signed __int64 *v4; // rcx

  v2 = (struct _SLIST_ENTRY *)*((_QWORD *)&ListEntry[13].Next + 1);
  if ( v2 == ListEntry && *((struct _KTHREAD **)&ListEntry[9].Next + 1) == KeGetCurrentThread() )
    KeAbPostRelease((ULONG_PTR)v2);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&ListEntry[11], 0xFFFFFFFF) == 1 )
  {
    Next = ListEntry[16].Next;
    if ( Next && Next != &ListEntry[17] )
      ExFreePoolWithTag(Next, 0);
    v4 = (volatile signed __int64 *)*((_QWORD *)&ListEntry[13].Next + 1);
    if ( v4 && v4 != (volatile signed __int64 *)ListEntry )
      MiDereferenceInPageAutoBoostLock(v4);
    if ( !(unsigned int)MiInsertInPageBlock(ListEntry) )
      ExFreePoolWithTag(ListEntry, 0);
  }
}
