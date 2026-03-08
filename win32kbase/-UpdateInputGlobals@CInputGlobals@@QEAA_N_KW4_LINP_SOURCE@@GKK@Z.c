/*
 * XREFs of ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0080790
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C007AB10 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     xxxProcessKeyEvent @ 0x1C007EE00 (xxxProcessKeyEvent.c)
 *     NtMITUpdateInputGlobals @ 0x1C00CF240 (NtMITUpdateInputGlobals.c)
 *     rimDoUpdateInputGlobalsWorkItem @ 0x1C01CDFBC (rimDoUpdateInputGlobalsWorkItem.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C02120C0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0016C74 (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00397E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     CitLastInputUpdate @ 0x1C00B82C0 (CitLastInputUpdate.c)
 *     ApiSetEditionKeepMachineUp @ 0x1C00BAE68 (ApiSetEditionKeepMachineUp.c)
 *     EtwTraceUserIsActive @ 0x1C00C14F0 (EtwTraceUserIsActive.c)
 *     ?KnownInputTypeFromLinpSource@@YA?AW4InputType@@W4_LINP_SOURCE@@@Z @ 0x1C00C262C (-KnownInputTypeFromLinpSource@@YA-AW4InputType@@W4_LINP_SOURCE@@@Z.c)
 *     ApiSetTraceLoggingUserIsActive @ 0x1C00C954C (ApiSetTraceLoggingUserIsActive.c)
 *     Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage @ 0x1C00DD67C (Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage.c)
 *     ?UpdateInputGlobals@Power@InputTraceLogging@@SAXW4_LINP_SOURCE@@GK@Z @ 0x1C00E009C (-UpdateInputGlobals@Power@InputTraceLogging@@SAXW4_LINP_SOURCE@@GK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputGlobals::UpdateInputGlobals(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  unsigned int v8; // r14d
  int v12; // eax
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  v8 = a6;
  if ( (unsigned int)Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage() )
    InputTraceLogging::Power::UpdateInputGlobals(a3, a4, v6);
  if ( (v6 & 0x20) != 0 )
  {
    v12 = KnownInputTypeFromLinpSource(a3, 2LL);
    v6 |= 4u;
    if ( (v12 & *(_DWORD *)(a1 + 104)) == 0 )
      v6 = v8;
    if ( (v12 & *(_DWORD *)(a1 + 100)) != 0 )
      v6 |= v13;
  }
  RIMLockExclusive(a1);
  if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
  {
    CInpPushLock::UnLockExclusive((CInpPushLock *)a1);
  }
  else
  {
    *(_DWORD *)(a1 + 80) = a3;
    *(_BYTE *)(a1 + 85) = 0;
    *(_BYTE *)(a1 + 84) = (v6 & 8) != 0;
    if ( a3 != 1 )
      _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFBF);
    if ( (v6 & 0x10) == 0 )
    {
      if ( (unsigned __int64)(a2 - *(_QWORD *)(a1 + 72)) > 0x1F4 )
      {
        v18 = SGDGetUserSessionState(v15, v14, v16, v17);
        if ( (int)ZwUpdateWnfStateData(&WNF_ISM_LAST_USER_ACTIVITY, 0LL, 0LL, 0LL, v18) < 0 )
        {
          a6 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 317LL);
        }
        *(_QWORD *)(a1 + 72) = a2;
      }
      if ( !gbBlockSendInputResets || (v6 & 8) == 0 )
        CInputGlobals::_UpdateLastInputTime(a1, a2, a3, v17);
    }
    CInpPushLock::UnLockExclusive((CInpPushLock *)a1);
    a6 = 0;
    v20 = 0LL;
    *((_DWORD *)gpsi + 1242) = a2;
    if ( (unsigned int)EtwTraceUserIsActive(&a6, &v20) )
      ApiSetTraceLoggingUserIsActive(a6, v20);
    if ( (v6 & 0x10) == 0 )
    {
      CitLastInputUpdate(a3, (unsigned int)a2, a4, v6);
      ApiSetEditionKeepMachineUp((unsigned int)a2, a3, a5, v6);
    }
  }
  return 1;
}
