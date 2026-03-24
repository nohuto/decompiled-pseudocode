/*
 * XREFs of CmpHandlePageFileOpenNotification @ 0x1407C8C58
 * Callers:
 *     NtInitializeRegistry @ 0x14078D400 (NtInitializeRegistry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     CmpRecheckHiveVolumePolicy @ 0x140361750 (CmpRecheckHiveVolumePolicy.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpGetNextActiveHive @ 0x1406EB310 (CmpGetNextActiveHive.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C8D94 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407C8E74 (CmpVolumeManagerGetContextForFilePath.c)
 */

__int64 CmpHandlePageFileOpenNotification()
{
  unsigned int v0; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  int v4; // edi
  int v5; // esi
  __int64 **v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rdx
  _DWORD *v9; // r9
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v12; // rdi
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h]

  v14 = 0LL;
  v0 = 0;
  v15 = 0LL;
  v16 = 0LL;
  if ( _InterlockedExchange(&CmpBootPageFilesCreated, 1) )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
    {
      v4 = 0;
      v5 = 0;
      if ( CmpWellKnownVolumeList )
      {
        v6 = &CmpWellKnownVolumeList;
        do
        {
          v7 = v6 + 1;
          if ( (int)CmpVolumeManagerGetContextForFilePath(
                      v2,
                      *v6,
                      v3,
                      v6 + 1,
                      v14,
                      *((_QWORD *)&v14 + 1),
                      v15,
                      *((_QWORD *)&v15 + 1),
                      v16,
                      *((_QWORD *)&v16 + 1)) >= 0
            && (int)CmpVolumeContextSendDeviceUsageNotification(*v7) >= 0 )
          {
            ++v4;
          }
          v6 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v5];
        }
        while ( *v6 );
        if ( v4 )
        {
          CmpAttachToRegistryProcess((__int64)&v14, v8, v3, v9);
          for ( i = 0LL; ; i = v12 )
          {
            NextActiveHive = CmpGetNextActiveHive(i);
            v12 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
            if ( !NextActiveHive )
              break;
            CmpRecheckHiveVolumePolicy((__int64)NextActiveHive);
          }
          KiUnstackDetachProcess((__int64)&v14, 0);
        }
      }
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    else
    {
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)-1073741431;
    }
  }
  return v0;
}
