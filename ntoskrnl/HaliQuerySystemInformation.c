/*
 * XREFs of HaliQuerySystemInformation @ 0x140A85470
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetPlatformTimerInformation @ 0x1402FB1C8 (HalpGetPlatformTimerInformation.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403AFF50 (HalpQueryNumaRangeTableInformation.c)
 *     HalpGetDisplayBiosInformation @ 0x1403B0C58 (HalpGetDisplayBiosInformation.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403B1960 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpTimerQueryWatchdogType @ 0x1404FC830 (HalpTimerQueryWatchdogType.c)
 *     HalpDpQueryMaxHotPlugMemoryAddress @ 0x140504938 (HalpDpQueryMaxHotPlugMemoryAddress.c)
 *     HalpHvQueryHyperlaunchEntrypoint @ 0x140518EE8 (HalpHvQueryHyperlaunchEntrypoint.c)
 *     HalpQueryHeterogeneousMemoryAttributesInterface @ 0x14079239C (HalpQueryHeterogeneousMemoryAttributesInterface.c)
 *     HalpQueryPerDeviceMsiLimitInformation @ 0x1407923B0 (HalpQueryPerDeviceMsiLimitInformation.c)
 *     xHalAllocatePmcCounterSet @ 0x1407F8FF0 (xHalAllocatePmcCounterSet.c)
 *     HalpInterruptGetIrtInfo @ 0x14080BB74 (HalpInterruptGetIrtInfo.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x1408220EC (HalpQueryIommuReservedRegionInformation.c)
 *     HalpGetProcessorBrandString @ 0x14084F5EC (HalpGetProcessorBrandString.c)
 *     HalpQuerySecondaryInterruptInformation @ 0x14085EDA0 (HalpQuerySecondaryInterruptInformation.c)
 *     HalpInterruptQueryControllerInfo @ 0x14085FB64 (HalpInterruptQueryControllerInfo.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x1408603E8 (HalpGetAcpiStaticNumaTopology.c)
 *     HalpQueryProfileInformation @ 0x140861248 (HalpQueryProfileInformation.c)
 *     HalpDmaGetRemappingInformation @ 0x1408613F8 (HalpDmaGetRemappingInformation.c)
 *     HalpGetMcaLog @ 0x14093051C (HalpGetMcaLog.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x14093207C (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpAuditQueryResults @ 0x1409323F4 (HalpAuditQueryResults.c)
 *     HalpChannelPowerRequest @ 0x1409329FC (HalpChannelPowerRequest.c)
 *     HalpQueryDebuggerInformation @ 0x140AAEF8C (HalpQueryDebuggerInformation.c)
 *     HalpQueryChannelTopologyInformation @ 0x140B8F7C8 (HalpQueryChannelTopologyInformation.c)
 */

__int64 __fastcall HaliQuerySystemInformation(int a1, unsigned int a2, LARGE_INTEGER *a3, int *a4)
{
  unsigned int PerDeviceMsiLimitInformation; // ebx
  unsigned int v9; // edi
  __int64 (__fastcall ****v10)(); // r15
  unsigned int PlatformTimerInformation; // eax
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v21; // edi
  int WatchdogType; // eax
  bool v23; // cc
  int Src[64]; // [rsp+20h] [rbp-E0h] BYREF

  memset(Src, 0, sizeof(Src));
  PerDeviceMsiLimitInformation = 0;
  if ( a4 )
    *a4 = 0;
  if ( a1 > 31 )
  {
    if ( a1 > 44 )
    {
      switch ( a1 )
      {
        case '-':
          v9 = 8;
          if ( a2 == 8 )
          {
            v10 = (__int64 (__fastcall ****)())Src;
            *(_QWORD *)Src = HalpHvQueryHyperlaunchEntrypoint();
            goto LABEL_12;
          }
          return (unsigned int)-1073741820;
        case '.':
          v21 = 4;
          if ( a2 < 4 )
            return (unsigned int)-1073741820;
          WatchdogType = HalpTimerQueryWatchdogType(a3);
          break;
        case '/':
          return (unsigned int)HalpDmaGetRemappingInformation(a2, a4);
        case '1':
          v21 = 8;
          if ( a2 != 8 )
            return (unsigned int)-1073741820;
          WatchdogType = HalpQueryHeterogeneousMemoryAttributesInterface(a3);
          break;
        case '2':
          if ( a2 < 2 )
            return (unsigned int)-1073741820;
          PerDeviceMsiLimitInformation = HalpQueryPerDeviceMsiLimitInformation(a3);
          if ( (PerDeviceMsiLimitInformation & 0x80000000) == 0 )
            *a4 = 2;
          return PerDeviceMsiLimitInformation;
        default:
          if ( (unsigned int)(a1 - 51) > 1 )
            return (unsigned int)-1073741496;
          return (unsigned int)HalpQueryProfileInformation(a1, a2, (__int64)a3, (unsigned int *)a4);
      }
      goto LABEL_55;
    }
    if ( a1 == 44 )
      return (unsigned int)HalpQueryProfileInformation(a1, a2, (__int64)a3, (unsigned int *)a4);
    v13 = a1 - 33;
    if ( !v13 )
      return (unsigned int)HalpQueryDebuggerInformation(a3, a2, a4);
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
          return (unsigned int)HalpChannelPowerRequest((__int16 *)a3, a2, a4);
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( !v18 )
            return (unsigned int)HalpInterruptQueryControllerInfo(a2, a3, a4);
          v19 = v18 - 1;
          if ( !v19 )
          {
            if ( a2 < 0x10 )
              return (unsigned int)-1073741820;
            PerDeviceMsiLimitInformation = HalpQueryIommuReservedRegionInformation((__int64)a3, a2);
            if ( (PerDeviceMsiLimitInformation & 0x80000000) == 0 )
              *a4 = 16;
            return PerDeviceMsiLimitInformation;
          }
          if ( v19 != 3 )
            return (unsigned int)-1073741496;
          v21 = 4;
          if ( (HalpPlatformFlags & 4) != 0 )
            return (unsigned int)-1073741637;
          if ( a2 < 4 )
            return (unsigned int)-1073741820;
          WatchdogType = HalpQueryAcpiWakeAlarmSystemPowerState(a3);
LABEL_55:
          PerDeviceMsiLimitInformation = WatchdogType;
          if ( WatchdogType < 0 )
            return PerDeviceMsiLimitInformation;
          goto LABEL_56;
        }
        v10 = &off_14000A410;
        if ( a2 < 0x10 )
          v10 = 0LL;
        v9 = a2 < 0x10 ? 0 : 0x10;
        PerDeviceMsiLimitInformation = a2 < 0x10 ? 0xC0000004 : 0;
LABEL_71:
        if ( !v9 )
          return PerDeviceMsiLimitInformation;
        goto LABEL_34;
      }
      v10 = (__int64 (__fastcall ****)())HalpFwS3PerformanceTable;
      if ( !HalpFwS3PerformanceTable )
        return (unsigned int)-1073741822;
      v9 = *(_DWORD *)(HalpFwS3PerformanceTable + 4);
      v23 = v9 <= HalpFwS3PerformanceTableMaximumLength;
    }
    else
    {
      v10 = (__int64 (__fastcall ****)())HalpFwBootPerformanceTable;
      if ( !HalpFwBootPerformanceTable )
        return (unsigned int)-1073741822;
      v9 = *(_DWORD *)(HalpFwBootPerformanceTable + 4);
      v23 = v9 <= HalpFwBootPerformanceTableMaximumLength;
    }
    if ( v23 )
    {
      if ( a2 < v9 )
        goto LABEL_61;
      goto LABEL_71;
    }
    return (unsigned int)-1073741822;
  }
  if ( a1 == 31 )
    return (unsigned int)HalpQueryChannelTopologyInformation(a3, a2, a4);
  if ( a1 <= 17 )
  {
    if ( a1 != 17 )
    {
      switch ( a1 )
      {
        case 1:
          return (unsigned int)HalpQueryProfileInformation(a1, a2, (__int64)a3, (unsigned int *)a4);
        case 7:
          return (unsigned int)HalpGetMcaLog();
        case 8:
          return (unsigned int)-1073741496;
        case 9:
          v10 = (__int64 (__fastcall ****)())Src;
          v9 = 4;
          Src[0] = HalpGetDisplayBiosInformation();
          goto LABEL_34;
        case 11:
          if ( a2 != 64 )
            return (unsigned int)-1073741820;
          PerDeviceMsiLimitInformation = -1073741496;
          if ( HalpNumaConfig )
          {
            PerDeviceMsiLimitInformation = HalpGetAcpiStaticNumaTopology();
            if ( (PerDeviceMsiLimitInformation & 0x80000000) == 0 )
              *a4 = 64;
          }
          return PerDeviceMsiLimitInformation;
        case 12:
          v10 = (__int64 (__fastcall ****)())Src;
          Src[0] = a3->LowPart;
          v9 = 144;
          PerDeviceMsiLimitInformation = xHalAllocatePmcCounterSet();
LABEL_34:
          if ( a2 < v9 )
            v9 = a2;
          goto LABEL_12;
        case 13:
          return (unsigned int)HalpGetMcaLog();
      }
      if ( a1 != 16 )
        return (unsigned int)-1073741496;
      v9 = 456;
      if ( a2 >= 0x1C8 )
      {
        v10 = (__int64 (__fastcall ****)())&BadIOAddrList;
        goto LABEL_12;
      }
LABEL_61:
      *a4 = v9;
      return (unsigned int)-1073741820;
    }
    v21 = 8;
    if ( a2 != 8 )
      return (unsigned int)-1073741820;
    a3->QuadPart = HalpDpQueryMaxHotPlugMemoryAddress();
LABEL_56:
    *a4 = v21;
    return PerDeviceMsiLimitInformation;
  }
  switch ( a1 )
  {
    case 20:
      return (unsigned int)HalpQueryProfileInformation(a1, a2, (__int64)a3, (unsigned int *)a4);
    case 23:
      return (unsigned int)HalpGetProcessorBrandString(a2, (__int64)a3, a4);
    case 25:
      v9 = 12;
      if ( a2 >= 0xC )
      {
        v10 = (__int64 (__fastcall ****)())Src;
        PlatformTimerInformation = HalpGetPlatformTimerInformation(Src);
LABEL_11:
        PerDeviceMsiLimitInformation = PlatformTimerInformation;
LABEL_12:
        *a4 = v9;
        memmove(a3, v10, v9);
        return PerDeviceMsiLimitInformation;
      }
      return (unsigned int)-1073741820;
    case 26:
      v9 = 8;
      if ( a2 >= 8 )
      {
        v10 = (__int64 (__fastcall ****)())Src;
        PlatformTimerInformation = HalpAuditQueryResults(Src);
        goto LABEL_11;
      }
      return (unsigned int)-1073741820;
    case 27:
      v9 = 12;
      if ( a2 >= 0xC )
      {
        v10 = (__int64 (__fastcall ****)())Src;
        PlatformTimerInformation = HalpInterruptGetIrtInfo(Src);
        goto LABEL_11;
      }
      return (unsigned int)-1073741820;
    case 28:
      v9 = 56;
      if ( a2 >= 0x38 )
      {
        v10 = (__int64 (__fastcall ****)())Src;
        PlatformTimerInformation = HalpQuerySecondaryInterruptInformation((__int64)Src);
        goto LABEL_11;
      }
      return (unsigned int)-1073741820;
  }
  if ( a1 != 29 )
  {
    if ( a1 == 30 )
      return (unsigned int)HalpQueryNumaRangeTableInformation(a3, a2, (unsigned int *)a4);
    return (unsigned int)-1073741496;
  }
  if ( a2 < 0x18 )
    return (unsigned int)-1073741820;
  PerDeviceMsiLimitInformation = xKdEnumerateDebuggingDevices();
  if ( (PerDeviceMsiLimitInformation & 0x80000000) == 0 )
    *a4 = 24;
  return PerDeviceMsiLimitInformation;
}
