/*
 * XREFs of PopGetSettingNotificationName @ 0x1406F2614
 * Callers:
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     PsGetProcessSessionIdEx @ 0x140315400 (PsGetProcessSessionIdEx.c)
 *     PopSetNotificationWork @ 0x14034AEA0 (PopSetNotificationWork.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1403A6308 (MmIsSessionInCurrentServerSilo.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     PopCreateNotificationName @ 0x1406A3A70 (PopCreateNotificationName.c)
 *     PsIsServiceSession @ 0x1406A5008 (PsIsServiceSession.c)
 *     PopFindPowerSettingConfiguration @ 0x1406F3B68 (PopFindPowerSettingConfiguration.c)
 *     PopStateIsSessionSpecific @ 0x1406F3C64 (PopStateIsSessionSpecific.c)
 *     PopValidateContextMembership @ 0x14078E120 (PopValidateContextMembership.c)
 */

__int64 __fastcall PopGetSettingNotificationName(__int64 a1, __int64 *a2)
{
  char v4; // r12
  char v5; // r14
  unsigned int v6; // edi
  _QWORD *v7; // r15
  __int64 PowerSettingConfiguration; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  NTSTATUS NotificationName; // ebx
  unsigned int ProcessSessionId; // eax
  unsigned int v14; // esi
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // [rsp+28h] [rbp-40h] BYREF

  v17 = 0LL;
  v4 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  v5 = 1;
  v6 = -1;
  if ( a1 )
    v6 = *(_DWORD *)(a1 + 16);
  v7 = (_QWORD *)(a1 & -(__int64)(a1 != 0));
  if ( v7 )
  {
    if ( (unsigned __int8)PopStateIsSessionSpecific(a1 & -(__int64)(a1 != 0)) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v14 = ProcessSessionId;
      if ( v6 == -1 || v6 == ProcessSessionId )
      {
        if ( ProcessSessionId == -1 || PsIsServiceSession(ProcessSessionId) )
        {
          NotificationName = -1073741811;
          goto LABEL_12;
        }
        v6 = v14;
      }
      else
      {
        NotificationName = PopValidateContextMembership(SeLocalSystemSid);
        if ( NotificationName < 0 )
        {
          if ( !PsIsServiceSession(v14) )
            goto LABEL_12;
          if ( !MmIsSessionInCurrentServerSilo(v6) )
            goto LABEL_12;
          NotificationName = PopValidateContextMembership(SeExports->SeLocalServiceSid);
          if ( NotificationName < 0 )
            goto LABEL_12;
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
      if ( *(_DWORD *)(PowerSettingConfiguration + 56) || *(_DWORD *)(PowerSettingConfiguration + 60) )
      {
        v10 = *(_QWORD *)(PowerSettingConfiguration + 56);
LABEL_10:
        v17 = v10;
LABEL_11:
        KeReleaseGuardedMutex(&PopSettingLock);
        v5 = 0;
        *a2 = v17;
        NotificationName = 0;
        goto LABEL_12;
      }
      NotificationName = PopCreateNotificationName((__int64)&v17);
      if ( NotificationName >= 0 )
      {
        v15 = *v7 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
        if ( *v7 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
          v15 = v7[1] - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
        if ( !v15 )
          *(_DWORD *)(v9 + 52) |= 8u;
        v16 = *(_DWORD *)(v9 + 52);
        *(_QWORD *)(v9 + 56) = v17;
        *(_DWORD *)(v9 + 52) = v16 | 1;
        v4 = 1;
        goto LABEL_11;
      }
    }
    else
    {
      NotificationName = -1073741275;
    }
  }
  else
  {
    v10 = PopPopPowerSettingSetChangeNotification;
    if ( PopPopPowerSettingSetChangeNotification != __PAIR64__(PopPopPowerSettingSetChangeNotification, 0) )
      goto LABEL_10;
    NotificationName = PopCreateNotificationName((__int64)&v17);
    if ( NotificationName >= 0 )
    {
      PopPopPowerSettingSetChangeNotification = v17;
      goto LABEL_11;
    }
  }
LABEL_12:
  if ( v5 )
    KeReleaseGuardedMutex(&PopSettingLock);
  if ( v4 )
    PopSetNotificationWork(0x80u);
  return (unsigned int)NotificationName;
}
