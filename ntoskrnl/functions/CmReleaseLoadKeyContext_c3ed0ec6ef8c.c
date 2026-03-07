char __fastcall CmReleaseLoadKeyContext(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9

  if ( (int)a2 < 0 )
  {
    LOCK_HIVE_LOAD();
    CmpLockRegistry(v11, v10, v12, v13);
    if ( *(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 32) + 2944LL) == 1 )
    {
      CmpDereferenceKeyControlBlock(BugCheckParameter2);
      CmpDoQueueLateUnloadWorker(*(_QWORD *)(BugCheckParameter2 + 32));
    }
    else
    {
      CmpDereferenceKeyControlBlock(BugCheckParameter2);
    }
    CmpUnlockRegistry(v15, v14, v16, v17);
    return UNLOCK_HIVE_LOAD();
  }
  else
  {
    CmpLockRegistry(BugCheckParameter2, a2, a3, a4);
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
    return CmpUnlockRegistry(v6, v5, v7, v8);
  }
}
