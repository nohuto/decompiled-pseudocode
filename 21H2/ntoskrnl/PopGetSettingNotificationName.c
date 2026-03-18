/*
 * XREFs of PopGetSettingNotificationName @ 0x140751120
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     MmIsSessionInCurrentServerSilo @ 0x14025DEF0 (MmIsSessionInCurrentServerSilo.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PopSetNotificationWork @ 0x1402D6220 (PopSetNotificationWork.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopCreateNotificationName @ 0x1406E7694 (PopCreateNotificationName.c)
 *     PsIsServiceSession @ 0x1406E9070 (PsIsServiceSession.c)
 *     PopValidateContextMembership @ 0x1406EB3FC (PopValidateContextMembership.c)
 *     PopFindPowerSettingConfiguration @ 0x140751880 (PopFindPowerSettingConfiguration.c)
 *     PopStateIsSessionSpecific @ 0x14075197C (PopStateIsSessionSpecific.c)
 *     PopDiagTracePowerSettingRegistration @ 0x1407F77B8 (PopDiagTracePowerSettingRegistration.c)
 */

__int64 __fastcall PopGetSettingNotificationName(__int64 a1, __int64 *a2)
{
  char v3; // r12
  char v4; // r13
  char v5; // r15
  unsigned int v6; // esi
  _QWORD *v7; // r14
  __int64 PowerSettingConfiguration; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  int NotificationName; // ebx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v13; // r8
  unsigned int ProcessSessionId; // eax
  unsigned int v16; // edi
  __int64 v17; // rax
  int v18; // ecx
  __int64 v20; // [rsp+40h] [rbp-38h] BYREF

  v20 = 0LL;
  v3 = 0;
  v4 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  v5 = 1;
  if ( a1 )
    v6 = *(_DWORD *)(a1 + 16);
  else
    v6 = -1;
  v7 = (_QWORD *)(a1 & -(__int64)(a1 != 0));
  if ( !v7 )
  {
    v10 = PopPopPowerSettingSetChangeNotification;
    if ( PopPopPowerSettingSetChangeNotification == __PAIR64__(PopPopPowerSettingSetChangeNotification, 0) )
    {
      NotificationName = PopCreateNotificationName((__int64)&v20);
      if ( NotificationName < 0 )
        goto LABEL_12;
      PopPopPowerSettingSetChangeNotification = v20;
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  if ( (unsigned __int8)PopStateIsSessionSpecific(a1 & -(__int64)(a1 != 0)) )
  {
    ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v16 = ProcessSessionId;
    if ( v6 == -1 || v6 == ProcessSessionId )
    {
      if ( ProcessSessionId == -1 || PsIsServiceSession(ProcessSessionId) )
      {
        NotificationName = -1073741811;
        goto LABEL_15;
      }
      v6 = v16;
    }
    else
    {
      NotificationName = PopValidateContextMembership(SeLocalSystemSid);
      if ( NotificationName < 0 )
      {
        if ( !PsIsServiceSession(v16)
          || !MmIsSessionInCurrentServerSilo(v6)
          || (NotificationName = PopValidateContextMembership(SeExports->SeLocalServiceSid), NotificationName < 0) )
        {
LABEL_12:
          if ( NotificationName && NotificationName != -1073741275 )
            goto LABEL_15;
          goto LABEL_13;
        }
      }
    }
  }
  else
  {
    v6 = -1;
  }
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(v7, v6);
  v9 = PowerSettingConfiguration;
  if ( PowerSettingConfiguration )
  {
    v4 = 1;
    if ( !*(_DWORD *)(PowerSettingConfiguration + 56) && !*(_DWORD *)(PowerSettingConfiguration + 60) )
    {
      NotificationName = PopCreateNotificationName((__int64)&v20);
      if ( NotificationName < 0 )
        goto LABEL_12;
      v17 = *v7 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
      if ( *v7 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
        v17 = v7[1] - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
      if ( !v17 )
        *(_DWORD *)(v9 + 52) |= 8u;
      v18 = *(_DWORD *)(v9 + 52);
      *(_QWORD *)(v9 + 56) = v20;
      *(_DWORD *)(v9 + 52) = v18 | 1;
      v3 = 1;
      goto LABEL_11;
    }
    v10 = *(_QWORD *)(PowerSettingConfiguration + 56);
LABEL_10:
    v20 = v10;
LABEL_11:
    KeReleaseGuardedMutex(&PopSettingLock);
    v5 = 0;
    *a2 = v20;
    NotificationName = 0;
    goto LABEL_12;
  }
  NotificationName = -1073741275;
LABEL_13:
  CurrentSilo = PsGetCurrentSilo();
  if ( !PsIsHostSilo((__int64)CurrentSilo) )
  {
    LOBYTE(v13) = v4;
    PopDiagTracePowerSettingRegistration(v7, v6, v13);
  }
LABEL_15:
  if ( v5 )
    KeReleaseGuardedMutex(&PopSettingLock);
  if ( v3 )
    PopSetNotificationWork(0x80u);
  return (unsigned int)NotificationName;
}
