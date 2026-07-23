/*
 * XREFs of SepIsSiblingTokenByPointer @ 0x1406C515C
 * Callers:
 *     SeIsTokenAssignableToProcess @ 0x1406C4F9C (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     SepReleaseOrderedReadLocks @ 0x1402A4F54 (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x1402A4F88 (SepAcquireOrderedReadLocks.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall SepIsSiblingTokenByPointer(unsigned __int64 a1, _BYTE *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KPROCESS *Process; // rdi
  struct _DMA_ADAPTER *v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  _DMA_OPERATIONS *DmaOperations; // rsi
  _DMA_OPERATIONS *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = CurrentThread->ApcState.Process;
  v6 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
  v7 = (unsigned __int64)v6;
  if ( !v6 )
    return 3221225473LL;
  v8 = *(_QWORD *)&v6[2].Version;
  DmaOperations = v6[1].DmaOperations;
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], v6);
  v10 = *(_DMA_OPERATIONS **)(a1 + 24);
  if ( *(_QWORD *)(a1 + 32) == v8 )
  {
    if ( v10 == DmaOperations )
    {
      *a2 = 1;
    }
    else
    {
      SepAcquireOrderedReadLocks(v7, a1);
      if ( (*(_DWORD *)(v7 + 200) & 0x20) == 0 && (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
      {
        v11 = *(_QWORD *)(a1 + 216);
        v12 = *(_QWORD *)(v7 + 216);
        if ( (*(_BYTE *)(v12 + 32) & *(_BYTE *)(v11 + 32) & 0x40) != 0
          && DmaOperations == *(_DMA_OPERATIONS **)(v11 + 168)
          && v10 == *(_DMA_OPERATIONS **)(v12 + 168) )
        {
          *a2 = 1;
        }
      }
      SepReleaseOrderedReadLocks(v7, a1);
    }
  }
  return 0LL;
}
