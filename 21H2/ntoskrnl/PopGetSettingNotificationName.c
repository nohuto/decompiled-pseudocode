/*
 * XREFs of PopGetSettingNotificationName @ 0x140679824
 * Callers:
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     PopSetNotificationWork @ 0x140281E90 (PopSetNotificationWork.c)
 *     PsGetProcessSessionIdEx @ 0x1402830D0 (PsGetProcessSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1403A6A08 (MmIsSessionInCurrentServerSilo.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PopFindPowerSettingConfiguration @ 0x14067AD78 (PopFindPowerSettingConfiguration.c)
 *     PopStateIsSessionSpecific @ 0x14067AE74 (PopStateIsSessionSpecific.c)
 *     PopCreateNotificationName @ 0x1406C1060 (PopCreateNotificationName.c)
 *     PsIsServiceSession @ 0x1406C27A8 (PsIsServiceSession.c)
 *     PopValidateContextMembership @ 0x14078E220 (PopValidateContextMembership.c)
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
  int v11; // ebx
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
        if ( ProcessSessionId == -1 || (unsigned __int8)PsIsServiceSession(ProcessSessionId) )
        {
          v11 = -1073741811;
          goto LABEL_12;
        }
        v6 = v14;
      }
      else
      {
        v11 = PopValidateContextMembership(SeLocalSystemSid);
        if ( v11 < 0 )
        {
          if ( !(unsigned __int8)PsIsServiceSession(v14) )
            goto LABEL_12;
          if ( !MmIsSessionInCurrentServerSilo(v6) )
            goto LABEL_12;
          v11 = PopValidateContextMembership(SeExports->SeLocalServiceSid);
          if ( v11 < 0 )
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
        v11 = 0;
        goto LABEL_12;
      }
      v11 = PopCreateNotificationName(&v17);
      if ( v11 >= 0 )
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
      v11 = -1073741275;
    }
  }
  else
  {
    v10 = PopPopPowerSettingSetChangeNotification;
    if ( PopPopPowerSettingSetChangeNotification != __PAIR64__(PopPopPowerSettingSetChangeNotification, 0) )
      goto LABEL_10;
    v11 = PopCreateNotificationName(&v17);
    if ( v11 >= 0 )
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
  return (unsigned int)v11;
}
