/*
 * XREFs of PopDiagTraceSleepStudyStart @ 0x140879BB0
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x1408797E4 (PopSleepstudyStartNextSession.c)
 *     PopSleepstudyScenarioStopWorker @ 0x1409903B0 (PopSleepstudyScenarioStopWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     PopGetModernStandbyTransitionReason @ 0x1403C2A80 (PopGetModernStandbyTransitionReason.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void PopDiagTraceSleepStudyStart()
{
  int ModernStandbyTransitionReason; // eax
  char v1; // [rsp+30h] [rbp-49h] BYREF
  int v2; // [rsp+34h] [rbp-45h] BYREF
  __int64 v3; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-39h] BYREF
  char *v5; // [rsp+50h] [rbp-29h]
  int v6; // [rsp+58h] [rbp-21h]
  int v7; // [rsp+5Ch] [rbp-1Dh]
  int *v8; // [rsp+60h] [rbp-19h]
  int v9; // [rsp+68h] [rbp-11h]
  int v10; // [rsp+6Ch] [rbp-Dh]
  int *v11; // [rsp+70h] [rbp-9h]
  int v12; // [rsp+78h] [rbp-1h]
  int v13; // [rsp+7Ch] [rbp+3h]
  int *v14; // [rsp+80h] [rbp+7h]
  int v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+8Ch] [rbp+13h]
  __int64 *v17; // [rsp+90h] [rbp+17h]
  int v18; // [rsp+98h] [rbp+1Fh]
  int v19; // [rsp+9Ch] [rbp+23h]
  unsigned __int64 v20; // [rsp+A0h] [rbp+27h]
  int v21; // [rsp+A8h] [rbp+2Fh]
  int v22; // [rsp+ACh] [rbp+33h]
  __int64 *v23; // [rsp+B0h] [rbp+37h]
  int v24; // [rsp+B8h] [rbp+3Fh]
  int v25; // [rsp+BCh] [rbp+43h]

  if ( PopDiagSleepStudyHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_START_REASON) )
    {
      UserData.Reserved = 0;
      v7 = 0;
      v3 = MEMORY[0xFFFFF78000000014];
      UserData.Ptr = PopWdiCurrentScenario;
      v1 = PopWdiCurrentScenarioInstanceId;
      v5 = &v1;
      UserData.Size = 16;
      v6 = 1;
      ModernStandbyTransitionReason = PopGetModernStandbyTransitionReason(1);
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v2 = ModernStandbyTransitionReason;
      v9 = 4;
      v8 = &v2;
      v11 = &PopCsConsumption;
      v14 = &dword_140CF7958;
      v17 = &PopWdiCurrentScenarioInstanceId;
      v20 = 0xFFFFF780000002C4uLL;
      v23 = &v3;
      v12 = 4;
      v15 = 4;
      v21 = 4;
      v18 = 8;
      v24 = 8;
      EtwWrite(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_START_REASON, &PopDiagActivityId, 8u, &UserData);
    }
  }
}
