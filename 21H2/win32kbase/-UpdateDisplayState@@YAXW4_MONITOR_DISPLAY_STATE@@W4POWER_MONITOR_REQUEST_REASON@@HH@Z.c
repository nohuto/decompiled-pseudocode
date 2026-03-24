/*
 * XREFs of ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0078BE4
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0076B30 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C00775A0 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C00C1E70 (PowerOffMonitor.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0071C60 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     PowerInputEvent @ 0x1C0077440 (PowerInputEvent.c)
 *     CitDisplayPowerChange @ 0x1C00B6FBC (CitDisplayPowerChange.c)
 *     EtwTraceDisplayChange @ 0x1C00B7E00 (EtwTraceDisplayChange.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00C2390 (xxxSendWinlogonPowerMessage.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0118858 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C0118E94 (-SetProximityBlocking@@YAXXZ.c)
 */

void __fastcall UpdateDisplayState(int a1, enum POWER_MONITOR_REQUEST_REASON a2, char a3)
{
  char v6; // bp
  char v7; // si
  LeaveEnterCrit *v8; // rcx
  __int64 v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-68h] BYREF
  _DWORD InputBuffer[3]; // [rsp+40h] [rbp-58h] BYREF
  char v12; // [rsp+4Ch] [rbp-4Ch]
  char v13; // [rsp+4Dh] [rbp-4Bh]
  char v14; // [rsp+4Eh] [rbp-4Ah]
  char v15; // [rsp+4Fh] [rbp-49h]

  gPowerDisplayState = gSessionId;
  dword_1C025219C = dword_1C02521A0;
  dword_1C02521A0 = a1;
  qword_1C0252168 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - qword_1C0252170;
  qword_1C0252170 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( gProtocolType )
  {
    v6 = 0;
    word_1C02521A4 = 0;
  }
  else
  {
    v6 = 1;
    word_1C02521A4 = 1;
  }
  if ( a1 )
  {
    gPowerTransitionsState = 1;
    qword_1C02521FC = 0LL;
  }
  else
  {
    gPowerTransitionsState = 0;
    if ( a2 == MonitorRequestReasonGracePeriod )
    {
      LODWORD(qword_1C02521FC) = 1;
    }
    else
    {
      LODWORD(qword_1C02521FC) = 0;
      if ( a2 == MonitorRequestReasonNearProximity )
        SetProximityBlocking();
    }
  }
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  if ( !a1 && !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    PowerInputEvent(0);
  }
  UserSessionSwitchLeaveCrit();
  if ( !gbTtmEnabled
    && (unsigned int)(a1 - 1) > 1
    && (a1 || a2 == MonitorRequestReasonGracePeriod || a2 == MonitorRequestReasonNearProximity) )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    if ( a1 != 2 )
    {
      v10 = 0LL;
      xxxSendWinlogonPowerMessage(0LL, 261 - (unsigned int)(a1 != 0), &v10);
    }
  }
  InputBuffer[0] = gSessionId;
  InputBuffer[1] = a1;
  InputBuffer[2] = a2;
  v12 = v6;
  v13 = v7;
  v14 = a3;
  if ( gPowerTransitionsState || (_DWORD)qword_1C02521FC || (v15 = 0, HIDWORD(qword_1C02521FC)) )
    v15 = 1;
  ZwPowerInformation(SessionDisplayState, InputBuffer, 0x10u, 0LL, 0);
  if ( gSystemIsAoAc )
  {
    if ( (gPowerTransitionsState || qword_1C02521FC) && !HIDWORD(qword_1C02521FC) )
      v9 = 0LL;
    else
      v9 = 2LL;
    SetInputMode(v9);
  }
  LeaveEnterCrit::~LeaveEnterCrit(v8);
  EtwTraceDisplayChange();
  CitDisplayPowerChange(&gPowerDisplayState);
}
