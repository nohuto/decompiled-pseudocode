/*
 * XREFs of HalpMiscGetParameters @ 0x140B672C8
 * Callers:
 *     HalpMiscInitSystem @ 0x140A8E290 (HalpMiscInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x14028EADC (HalpInterruptModel.c)
 *     HalpIsPartitionCpuManager @ 0x1403732F8 (HalpIsPartitionCpuManager.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037333C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsHvPresent @ 0x14037337C (HalpIsHvPresent.c)
 *     HalpIsXboxNanovisorPresent @ 0x140373A1C (HalpIsXboxNanovisorPresent.c)
 *     strstr @ 0x1403D3650 (strstr.c)
 *     atoi @ 0x1403D36E0 (atoi.c)
 *     HalpInterruptSetMsiOverride @ 0x14050354C (HalpInterruptSetMsiOverride.c)
 *     HalpIsHvUsedForReboot @ 0x1405093D8 (HalpIsHvUsedForReboot.c)
 */

char __fastcall HalpMiscGetParameters(__int64 a1)
{
  char *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  const char *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  const char *v8; // rbx
  char *v9; // rax
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  char IsHvUsedForReboot; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  char *v16; // rax
  char v17; // cl
  int v18; // eax
  char v19; // cl
  int v20; // eax
  char v21; // cl
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // cl

  LODWORD(v2) = HalpInterruptModel();
  if ( (_DWORD)v2 == 1 )
    HalpMiscDiscardLowMemory = 1;
  if ( a1
    && ((v2 = *(char **)(a1 + 240), (*((_DWORD *)v2 + 873) & 0x2000) != 0)
     && (LOBYTE(v2) = HalpIsPartitionCpuManager(v4, v3), !(_BYTE)v2)
     || (v5 = *(const char **)(a1 + 216)) != 0LL
     && (v2 = strstr(v5, "SMT=BLOCKED")) != 0LL
     && (LOBYTE(v2) = HalpIsPartitionCpuManager(v7, v6), !(_BYTE)v2)) )
  {
    HalpInterruptBlockHyperthreading = 1;
    v2 = *(char **)(a1 + 240);
    if ( (*((_DWORD *)v2 + 33) & 0x200) == 0 )
      HalpInterruptStartHyperthreadSiblings = 1;
  }
  else
  {
    HalpInterruptBlockHyperthreading = 0;
    if ( !a1 )
      return (char)v2;
  }
  v8 = *(const char **)(a1 + 216);
  if ( !v8 )
    return (char)v2;
  strstr(*(const char **)(a1 + 216), "SAFEBOOT:");
  if ( strstr(v8, "ONECPU") )
    HalpInterruptProcessorCap = 1;
  if ( strstr(v8, "USEPHYSICALAPIC") )
    HalpInterruptPhysicalModeOnly = 1;
  if ( strstr(v8, "BREAK") )
    HalpMiscDebugBreakRequested = 1;
  v9 = strstr(v8, "MAXPROCSPERCLUSTER");
  if ( v9 )
  {
    while ( 1 )
    {
      v17 = *v9;
      if ( !*v9 || v17 == 32 || (unsigned __int8)(v17 - 48) <= 9u )
        break;
      ++v9;
    }
    v18 = atoi(v9);
    HalpInterruptClusterModeForced = 1;
    if ( v18 )
      HalpInterruptMaxClusterSize = v18;
  }
  v10 = strstr(v8, "MAXAPICCLUSTER");
  if ( v10 )
  {
    while ( 1 )
    {
      v19 = *v10;
      if ( !*v10 || v19 == 32 || (unsigned __int8)(v19 - 48) <= 9u )
        break;
      ++v10;
    }
    v20 = atoi(v10);
    if ( v20 )
      LODWORD(HalpInterruptMaxCluster) = v20;
  }
  if ( strstr(v8, "X2APICPOLICY=ENABLE") )
    HalpInterruptX2ApicPolicy = 1;
  if ( strstr(v8, "X2APICPOLICY=DISABLE") )
    HalpInterruptX2ApicPolicy = 0;
  if ( strstr(v8, "USELEGACYAPICMODE") )
    HalpInterruptX2ApicPolicy = 0;
  if ( strstr(v8, "SYSTEMWATCHDOGPOLICY=DISABLED") )
  {
    HalpTimerWatchdogDisable = 1;
  }
  else if ( strstr(v8, "SYSTEMWATCHDOGPOLICY=PHYSICALONLY") )
  {
    HalpTimerWatchdogPhysicalOnly = 1;
  }
  if ( strstr(v8, "CONFIGACCESSPOLICY=DISALLOWMMCONFIG") )
    HalpAvoidMmConfigAccessMethod = 1;
  if ( strstr(v8, "MSIPOLICY=FORCEDISABLE") )
  {
    v21 = 0;
LABEL_63:
    HalpInterruptSetMsiOverride(v21);
    goto LABEL_30;
  }
  if ( strstr(v8, "FORCEMSI") )
  {
    v21 = 1;
    goto LABEL_63;
  }
LABEL_30:
  if ( HalpIsHvPresent() )
  {
    HalpHvPresent = 1;
    if ( HalpIsPartitionCpuManager(v12, v11) )
      HalpHvCpuManager = 1;
    IsHvUsedForReboot = HalpIsHvUsedForReboot(v23, v22);
  }
  else
  {
    IsHvUsedForReboot = HalpIsXboxNanovisorPresent();
  }
  if ( IsHvUsedForReboot )
    HalpHvUsedForReboot = 1;
  if ( strstr(v8, "FIRSTMEGABYTEPOLICY=USEALL") || HalpIsMicrosoftCompatibleHvLoaded(v15, v14) && !HalpHvCpuManager )
    HalpMiscDiscardLowMemory = 0;
  if ( strstr(v8, "USEPLATFORMCLOCK") )
    HalpTimerPlatformSourceForced = 1;
  if ( strstr(v8, "USEPLATFORMTICK") )
    HalpTimerPlatformClockSourceForced = 1;
  v16 = strstr(v8, "GROUPSIZE");
  if ( v16 )
  {
    while ( 1 )
    {
      v24 = *v16;
      if ( !*v16 || v24 == 32 || (unsigned __int8)(v24 - 48) <= 9u )
        break;
      ++v16;
    }
    HalpMaximumGroupSize = atoi(v16);
    if ( (unsigned int)(HalpMaximumGroupSize - 1) > 0x3F )
      HalpMaximumGroupSize = 64;
  }
  HalpSplitLargeNumaNodes = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x20000) != 0;
  strstr(v8, "HALTPROFILINGPOLICY=BLOCKED");
  strstr(v8, "HALTPROFILINGPOLICY=RELAXED");
  LOBYTE(v2) = (unsigned __int8)strstr(v8, "HALTPROFILINGPOLICY=RESTRICTED");
  return (char)v2;
}
