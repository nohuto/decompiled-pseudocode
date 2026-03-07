_QWORD *__fastcall VfPtAddStackInfoIfNotExist(
        void *Src,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v9; // rdi
  _QWORD *inserted; // rax
  _QWORD *v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD Buffer[56]; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN NewElement; // [rsp+218h] [rbp+118h] BYREF

  NewElement = 0;
  v13 = 0LL;
  memset(Buffer, 0, 0x1B8uLL);
  Buffer[4] = 0LL;
  Buffer[0] = __PAIR64__(a2, a4);
  v9 = a5;
  Buffer[3] = a5;
  memmove(&Buffer[5], Src, 0x190uLL);
  if ( !ViPoolStackInfoAvlInitialized )
    return 0LL;
  ViPtInitializeLockContext((__int64)&v13);
  ViPtRaiseIrqlSafe((__int64)&v13);
  ViPtAcquireTreeLockAtDpcLevelSafe((__int64)&ViPoolStackInfoAvl, (__int64)&v13);
  inserted = RtlInsertElementGenericTableAvl(&ViPoolStackInfoAvl, Buffer, 0x1B8u, &NewElement);
  v12 = inserted;
  if ( inserted )
  {
    if ( NewElement )
    {
      if ( !(unsigned int)MmDeterminePoolType(a3) )
        *((_DWORD *)v12 + 2) |= 0x10u;
      *((_DWORD *)v12 + 2) |= 1u;
      ++ViPoolStackInfoAllocCount;
      *((_DWORD *)v12 + 3) = 1;
    }
    else
    {
      inserted[3] += v9;
      ++*((_DWORD *)inserted + 3);
    }
  }
  else
  {
    ++ViPoolStackInfoFailureCount;
  }
  ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolStackInfoAvl, (__int64)&v13);
  ViPtCleanupLockContext((__int64)&v13);
  return v12;
}
