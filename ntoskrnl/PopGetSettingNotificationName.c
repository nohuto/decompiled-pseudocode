/*
 * XREFs of PopGetSettingNotificationName @ 0x14068CCC4
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     MmIsSessionInCurrentServerSilo @ 0x1402019D8 (MmIsSessionInCurrentServerSilo.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     PsGetCurrentSilo @ 0x1402640A0 (PsGetCurrentSilo.c)
 *     PopSetNotificationWork @ 0x1402BCB00 (PopSetNotificationWork.c)
 *     PsGetProcessSessionIdEx @ 0x1402BDFA0 (PsGetProcessSessionIdEx.c)
 *     PsIsHostSilo @ 0x14030F2E0 (PsIsHostSilo.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopFindPowerSettingConfiguration @ 0x14068D434 (PopFindPowerSettingConfiguration.c)
 *     PopStateIsSessionSpecific @ 0x14068D530 (PopStateIsSessionSpecific.c)
 *     PopCreateNotificationName @ 0x140794270 (PopCreateNotificationName.c)
 *     PsIsServiceSession @ 0x140799A4C (PsIsServiceSession.c)
 *     PopValidateContextMembership @ 0x14079BF0C (PopValidateContextMembership.c)
 *     PopDiagTracePowerSettingRegistration @ 0x14098DD00 (PopDiagTracePowerSettingRegistration.c)
 */

__int64 __fastcall PopGetSettingNotificationName(__int64 a1, __int64 *a2)
{
  char v3; // r12
  char v4; // r13
  char v5; // r14
  unsigned int v6; // edi
  _QWORD *v7; // r15
  __int64 PowerSettingConfiguration; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  struct _LIST_ENTRY *CurrentSilo; // rax
  unsigned int ProcessSessionId; // eax
  unsigned int v18; // esi
  __int64 v19; // rcx
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF

  v21 = 0LL;
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
      v14 = PopCreateNotificationName(&v21);
      if ( v14 < 0 )
        goto LABEL_12;
      PopPopPowerSettingSetChangeNotification = v21;
      goto LABEL_11;
    }
LABEL_10:
    v21 = v10;
LABEL_11:
    ExReleaseFastMutex(&PopSettingLock);
    v5 = 0;
    *a2 = v21;
    v14 = 0;
    goto LABEL_12;
  }
  if ( (unsigned __int8)PopStateIsSessionSpecific(a1 & -(__int64)(a1 != 0)) )
  {
    ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v18 = ProcessSessionId;
    if ( v6 == -1 || v6 == ProcessSessionId )
    {
      if ( ProcessSessionId == -1 || (unsigned __int8)PsIsServiceSession(ProcessSessionId) )
      {
        v14 = -1073741811;
        goto LABEL_15;
      }
      v6 = v18;
    }
    else
    {
      v14 = PopValidateContextMembership(SeLocalSystemSid);
      if ( v14 < 0 )
      {
        if ( !(unsigned __int8)PsIsServiceSession(v18)
          || !MmIsSessionInCurrentServerSilo(v6)
          || (v14 = PopValidateContextMembership(SeExports->SeLocalServiceSid), v14 < 0) )
        {
LABEL_12:
          if ( v14 && v14 != -1073741275 )
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
      v14 = PopCreateNotificationName(&v21);
      if ( v14 < 0 )
        goto LABEL_12;
      v19 = *v7 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
      if ( *v7 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
        v19 = v7[1] - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
      if ( !v19 )
        *(_DWORD *)(v9 + 52) |= 8u;
      *(_QWORD *)(v9 + 56) = v21;
      *(_DWORD *)(v9 + 52) |= 1u;
      v3 = 1;
      goto LABEL_11;
    }
    v10 = *(_QWORD *)(PowerSettingConfiguration + 56);
    goto LABEL_10;
  }
  v14 = -1073741275;
LABEL_13:
  CurrentSilo = PsGetCurrentSilo();
  if ( !PsIsHostSilo((__int64)CurrentSilo) )
  {
    LOBYTE(v12) = v4;
    PopDiagTracePowerSettingRegistration(v7, v6, v12);
  }
LABEL_15:
  if ( v5 )
    ExReleaseFastMutex(&PopSettingLock);
  if ( v3 )
    PopSetNotificationWork(0x80u, v11, v12, v13);
  return (unsigned int)v14;
}
