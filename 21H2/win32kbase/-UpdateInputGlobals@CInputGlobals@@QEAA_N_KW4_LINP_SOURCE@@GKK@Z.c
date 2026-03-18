/*
 * XREFs of ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C007DBA0
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C003ADD4 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     NtMITUpdateInputGlobals @ 0x1C007EB70 (NtMITUpdateInputGlobals.c)
 *     xxxProcessKeyEvent @ 0x1C00CABA0 (xxxProcessKeyEvent.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C01A62A0 (RIMCompletePointerDeviceFrame.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E2930 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0016698 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ApiSetEditionKeepMachineUp @ 0x1C007DDE0 (ApiSetEditionKeepMachineUp.c)
 *     EtwTraceUserIsActive @ 0x1C007DF10 (EtwTraceUserIsActive.c)
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C007DFEC (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?KnownInputTypeFromLinpSource@@YA?AW4InputType@@W4_LINP_SOURCE@@@Z @ 0x1C007E0F4 (-KnownInputTypeFromLinpSource@@YA-AW4InputType@@W4_LINP_SOURCE@@@Z.c)
 *     ApiSetTraceLoggingUserIsActive @ 0x1C00D23D8 (ApiSetTraceLoggingUserIsActive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputGlobals::UpdateInputGlobals(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // esi
  unsigned __int16 v7; // bx
  int v11; // eax
  int v12; // r8d
  int v13; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  v7 = 0;
  if ( (a6 & 0x20) != 0 )
  {
    v11 = KnownInputTypeFromLinpSource(a3, a2, 4LL);
    v13 = v12 | v6;
    if ( (v11 & *(_DWORD *)(a1 + 104)) == 0 )
      v13 = v6;
    v6 = v13;
    if ( (v11 & *(_DWORD *)(a1 + 100)) != 0 )
      v6 = v13 | 2;
  }
  RIMLockExclusive(a1);
  if ( _bittest((const signed __int32 *)gpsi, 0xDu) )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
    return 1;
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
        if ( (int)ZwUpdateWnfStateData(&WNF_ISM_LAST_USER_ACTIVITY, 0LL, 0LL, 0LL, &gSessionId) < 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
        *(_QWORD *)(a1 + 72) = a2;
      }
      if ( !gbBlockSendInputResets || (v6 & 8) == 0 )
        CInputGlobals::_UpdateLastInputTime(a1, a2, a3);
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
    a6 = 0;
    v18 = 0LL;
    *((_DWORD *)gpsi + 1242) = a2;
    if ( (unsigned int)EtwTraceUserIsActive(&a6, &v18) )
      ApiSetTraceLoggingUserIsActive(a6, v18);
    if ( (v6 & 0x10) == 0 )
    {
      switch ( a3 )
      {
        case 1u:
          if ( (v6 & 0x40) != 0 )
          {
            v7 = 512;
          }
          else if ( (v6 & 8) != 0 )
          {
            v7 = 1024;
          }
          else
          {
            v7 = 1;
          }
          break;
        case 3u:
          if ( (v6 & 8) != 0 )
            v7 = 2048;
          else
            v7 = 2;
          break;
        case 4u:
          v7 = 16;
          break;
        case 5u:
          v7 = 32;
          break;
        case 0xBu:
          if ( (v6 & 8) != 0 )
            v7 = 4096;
          else
            v7 = 4;
          break;
        case 0xDu:
          if ( (v6 & 8) != 0 )
          {
            v7 = 0x2000;
          }
          else if ( (v6 & 0x80u) == 0 )
          {
            v7 = 8;
          }
          else
          {
            v7 = 0x8000;
          }
          break;
        case 0x11u:
          if ( (v6 & 8) != 0 )
            v7 = 0x4000;
          else
            v7 = 256;
          break;
      }
      CitpLastInputUpdate(v7, a2);
      ApiSetEditionKeepMachineUp((unsigned int)a2, a3, a5, v6);
    }
    return 1;
  }
}
