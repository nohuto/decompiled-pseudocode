/*
 * XREFs of NtInitializeRegistry @ 0x140799FB0
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ZwInitializeRegistry @ 0x1404143F0 (ZwInitializeRegistry.c)
 *     CmpAcceptBoot @ 0x14079A058 (CmpAcceptBoot.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     CmCompleteRegistryInitialization @ 0x1408174BC (CmCompleteRegistryInitialization.c)
 *     CmpHandlePageFileOpenNotification @ 0x140851670 (CmpHandlePageFileOpenNotification.c)
 *     CmpSyncNextBackupHive @ 0x140A18168 (CmpSyncNextBackupHive.c)
 */

__int64 NtInitializeRegistry()
{
  unsigned __int16 v0; // r9
  __int64 v1; // rdx
  unsigned int v2; // r8d
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  CmpInitializeThreadInfo((__int64)v4);
  LOBYTE(v1) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)v1 )
  {
    if ( v0 == 5096 )
    {
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, v1) )
        CmpSyncNextBackupHive();
    }
    else
    {
      ZwInitializeRegistry(v0, v1);
    }
  }
  else if ( (unsigned __int16)(v0 - 4096) > 0x3E7u )
  {
    if ( v0 == 2 )
    {
      CmpHandlePageFileOpenNotification();
    }
    else if ( v0 < 2u )
    {
      CmCompleteRegistryInitialization(v0);
    }
  }
  else
  {
    CmpAcceptBoot(v0);
  }
  CmCleanupThreadInfo(v4);
  return v2;
}
