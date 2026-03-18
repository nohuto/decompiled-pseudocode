/*
 * XREFs of ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C003B30C
 * Callers:
 *     GenerateMouseMove @ 0x1C003B2B0 (GenerateMouseMove.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C003C740 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C0035AFC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@KA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1C003B4E4 (-GetExecutionEnvironment@CBaseProcessor@@KA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     ApiSetEditionUpdateCursorAsync @ 0x1C003B50C (ApiSetEditionUpdateCursorAsync.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C003C62C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01DB33C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MoveMouseWindowManagement(__int64 a1, int a2)
{
  __int64 v4; // rdx
  void *v5; // rcx
  __int64 v6; // r8
  CInputThreadBase *v7; // rdi
  char *v8; // rbx
  bool v9; // di
  __int64 v10; // rdx
  __int64 v11; // r8
  struct tagPOINT v12; // rax
  int v13; // r8d
  int v14; // r9d
  _BYTE v15[4]; // [rsp+30h] [rbp-59h] BYREF
  BOOL v16; // [rsp+34h] [rbp-55h] BYREF
  int v17; // [rsp+38h] [rbp-51h] BYREF
  __int128 v18; // [rsp+40h] [rbp-49h] BYREF
  __int64 v19; // [rsp+50h] [rbp-39h]
  struct tagPOINT v20; // [rsp+60h] [rbp-29h] BYREF

  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment() != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v9 = 1;
  if ( (a2 & 4) == 0 )
  {
    v7 = gpInputThread;
    v8 = (char *)gpInputThread + 8;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v8, 0LL);
    LODWORD(v7) = *((_DWORD *)v7 + 6);
    ExReleasePushLockSharedEx(v8, 0LL);
    KeLeaveCriticalRegion();
    if ( (_DWORD)v7 == 2 )
      v9 = 0;
  }
  if ( (a2 & 1) != 0 )
  {
    v5 = gpsi;
    *(_QWORD *)&v18 = *((_QWORD *)gpsi + 620);
    *(_QWORD *)(a1 + 60) = v18;
    *(_DWORD *)(a1 + 68) = 18;
    *((_QWORD *)gpsi + 619) = 0LL;
    v12 = gptCursorAsync;
    *(_QWORD *)(a1 + 3448) = 0LL;
    *(struct tagPOINT *)(a1 + 3440) = v12;
  }
  if ( (a2 & 2) != 0 )
  {
    if ( gpqCursor )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
    RIMLockExclusive(a1 + 3824);
    *(_BYTE *)(a1 + 3840) = 1;
    *(_QWORD *)(a1 + 3832) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 3824, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 64LL) )
  {
    v16 = v9;
    v17 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C028EE70,
      (unsigned int)&unk_1C0263F6E,
      v13,
      v14,
      (__int64)&v17,
      (__int64)&v16);
  }
  if ( v9 )
  {
    v19 = 0LL;
    v18 = 0LL;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx(&v20, &v18, 4LL, 2304LL);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15, v10, v11);
    CMouseProcessor::SynthesizeMouse((CMouseProcessor *)a1, (struct tagPOINT)&v20, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15);
  }
  else
  {
    ApiSetEditionUpdateCursorAsync();
  }
}
