/*
 * XREFs of SepIsSiblingTokenByPointer @ 0x140776354
 * Callers:
 *     SeIsTokenAssignableToProcess @ 0x140776104 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     SepReleaseOrderedReadLocks @ 0x1402E9D34 (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x1402E9D68 (SepAcquireOrderedReadLocks.c)
 */

__int64 __fastcall SepIsSiblingTokenByPointer(unsigned __int64 a1, _BYTE *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rdi
  ULONG_PTR v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v6 = PsReferencePrimaryTokenWithTag(Process, 0x746C6644u);
  v7 = v6;
  if ( !v6 )
    return 3221225473LL;
  v8 = *(_QWORD *)(v6 + 32);
  v9 = *(_QWORD *)(v6 + 24);
  ObFastDereferenceObject((signed __int64 *)(Process + 1208), v6, 0x746C6644u);
  v10 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 32) == v8 )
  {
    if ( v10 == v9 )
    {
      *a2 = 1;
    }
    else
    {
      SepAcquireOrderedReadLocks(v7, a1);
      if ( (*(_DWORD *)(v7 + 200) & 0x20) == 0 && (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
      {
        v12 = *(_QWORD *)(a1 + 216);
        v13 = *(_QWORD *)(v7 + 216);
        if ( (*(_BYTE *)(v13 + 32) & *(_BYTE *)(v12 + 32) & 0x40) != 0
          && v9 == *(_QWORD *)(v12 + 168)
          && v10 == *(_QWORD *)(v13 + 168) )
        {
          *a2 = 1;
        }
      }
      SepReleaseOrderedReadLocks(v7, a1);
    }
  }
  return 0LL;
}
