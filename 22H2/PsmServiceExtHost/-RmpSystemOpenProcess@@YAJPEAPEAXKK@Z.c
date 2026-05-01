/*
 * XREFs of ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180009DA8
 * Callers:
 *     ?HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z @ 0x180008F78 (-HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z.c)
 *     ?HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z @ 0x18000977C (-HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z.c)
 *     ?RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180009AB0 (-RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBX.c)
 *     RmGameModeRSrvDisableForRegisteredProcess @ 0x18006A920 (RmGameModeRSrvDisableForRegisteredProcess.c)
 *     RmGameModeRSrvReenableForRegisteredProcess @ 0x18006A980 (RmGameModeRSrvReenableForRegisteredProcess.c)
 *     RmGameModeRSrvRegisterPairedAuxiliaryProcess @ 0x18006A9E0 (RmGameModeRSrvRegisterPairedAuxiliaryProcess.c)
 *     RmGameModeRSrvRegisterProcess @ 0x18006AA90 (RmGameModeRSrvRegisterProcess.c)
 *     RmGameModeRSrvUnregisterProcess @ 0x18006AB10 (RmGameModeRSrvUnregisterProcess.c)
 *     ?RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z @ 0x18006E75C (-RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180074394 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18007CAF8 (-HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpSystemOpenProcess(void **a1, ACCESS_MASK a2, unsigned int a3)
{
  unsigned __int128 v4; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v5; // [rsp+30h] [rbp-38h] BYREF

  v5.Length = 48;
  memset(&v5.RootDirectory, 0, 20);
  v4 = a3;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  return NtOpenProcess(a1, a2, &v5, (PCLIENT_ID)&v4);
}
