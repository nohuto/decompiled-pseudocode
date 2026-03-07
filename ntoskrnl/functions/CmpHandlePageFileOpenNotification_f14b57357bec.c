__int64 __fastcall CmpHandlePageFileOpenNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edi
  int v8; // esi
  __int64 **v9; // rax
  _QWORD *v10; // r14
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v13; // rdi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v3 = 0;
  if ( _InterlockedExchange(&CmpBootPageFilesCreated, 1) )
  {
    return (unsigned int)-1073741790;
  }
  else if ( (unsigned __int8)CmpAcquireShutdownRundown(a1, a2, a3) )
  {
    v7 = 0;
    v8 = 0;
    if ( CmpWellKnownVolumeList )
    {
      v9 = &CmpWellKnownVolumeList;
      do
      {
        v10 = v9 + 1;
        if ( (int)CmpVolumeManagerGetContextForFilePath(
                    v5,
                    *v9,
                    v6,
                    v9 + 1,
                    ApcState.ApcListHead[0].Flink,
                    ApcState.ApcListHead[0].Blink,
                    ApcState.ApcListHead[1].Flink,
                    ApcState.ApcListHead[1].Blink,
                    ApcState.Process,
                    *(_QWORD *)&ApcState.InProgressFlags) >= 0
          && (int)CmpVolumeContextSendDeviceUsageNotification(*v10) >= 0 )
        {
          ++v7;
        }
        v9 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v8];
      }
      while ( *v9 );
      if ( v7 )
      {
        CmpAttachToRegistryProcess(&ApcState);
        for ( i = 0LL; ; i = v13 )
        {
          NextActiveHive = CmpGetNextActiveHive(i);
          v13 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
          if ( !NextActiveHive )
            break;
          CmpRecheckHiveVolumePolicy((__int64)NextActiveHive);
        }
        CmpDetachFromRegistryProcess(&ApcState);
      }
    }
    CmpReleaseShutdownRundown(v5, v4, v6);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v3;
}
