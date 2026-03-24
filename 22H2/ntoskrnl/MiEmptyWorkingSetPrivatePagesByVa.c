/*
 * XREFs of MiEmptyWorkingSetPrivatePagesByVa @ 0x140317C38
 * Callers:
 *     MiFlushAllPages @ 0x140382774 (MiFlushAllPages.c)
 *     MmProcessWorkingSetControl @ 0x140689770 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiVadSupportsPrivateCommit @ 0x14021B200 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x14021CBE0 (MiVadMapsLargeImage.c)
 *     MiUnlockVad @ 0x140294CD8 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1402C8E20 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     MiEmptyWorkingSetInitiate @ 0x140317DA0 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSetPrivatePagesByVa(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rbp
  _QWORD *v6; // rax
  unsigned int v7; // edi
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  unsigned __int64 v12; // rcx

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(Process + 1224, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
  {
    v7 = -1073741558;
  }
  else
  {
    v6 = *(_QWORD **)(Process + 2008);
    v7 = 0;
    v8 = 0LL;
    while ( v6 )
    {
      v8 = (unsigned __int64)v6;
      v6 = (_QWORD *)*v6;
    }
    while ( v8 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
      if ( (*(_DWORD *)(v8 + 48) & 4) == 0 && MiVadSupportsPrivateCommit(v8) && !MiVadMapsLargeImage(v10) )
        MiEmptyWorkingSetInitiate(
          a1,
          a2 | 2u,
          (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12,
          ((*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) << 12) | 0xFFF);
      MiUnlockVad((__int64)CurrentThread, v8);
      v11 = *(_QWORD **)(v8 + 8);
      v12 = v8;
      if ( v11 )
      {
        v9 = (_QWORD *)*v11;
        v8 = *(_QWORD *)(v8 + 8);
        if ( *v11 )
        {
          do
          {
            v8 = (unsigned __int64)v9;
            v9 = (_QWORD *)*v9;
          }
          while ( v9 );
        }
      }
      else
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v8 || *(_QWORD *)v8 == v12 )
            break;
          v12 = v8;
        }
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  return v7;
}
