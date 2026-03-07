__int64 __fastcall MiEmptyWorkingSetPrivatePagesByVa(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rbp
  unsigned int v6; // edi
  _QWORD *v7; // rax
  unsigned __int64 i; // rbx
  _QWORD **v9; // rax
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
  {
    v6 = -1073741558;
  }
  else
  {
    v7 = *(_QWORD **)(Process + 2008);
    v6 = 0;
    i = 0LL;
    while ( v7 )
    {
      i = (unsigned __int64)v7;
      v7 = (_QWORD *)*v7;
    }
    while ( i )
    {
      MiLockVad((__int64)CurrentThread, i);
      if ( (*(_DWORD *)(i + 48) & 4) == 0 && MiVadSupportsPrivateCommit(i) && !(unsigned int)MiVadMapsLargeImage(i) )
        MiEmptyWorkingSetInitiate(
          a1,
          a2 | 2,
          (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12,
          ((*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) << 12) | 0xFFF);
      MiUnlockVad((__int64)CurrentThread, i);
      v9 = *(_QWORD ***)(i + 8);
      v10 = i;
      if ( v9 )
      {
        v11 = *v9;
        for ( i = *(_QWORD *)(i + 8); v11; v11 = (_QWORD *)*v11 )
          i = (unsigned __int64)v11;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v10 )
            break;
          v10 = i;
        }
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  return v6;
}
