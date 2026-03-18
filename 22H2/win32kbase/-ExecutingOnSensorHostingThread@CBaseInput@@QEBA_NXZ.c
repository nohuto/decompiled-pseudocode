/*
 * XREFs of ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0057FD0
 * Callers:
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C0057F70 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 *     CleanupSensorExplicitly @ 0x1C006E510 (CleanupSensorExplicitly.c)
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0075FAC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C00761A4 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C00B30F0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseInput::ExecutingOnSensorHostingThread(CBaseInput *this)
{
  return *((_DWORD *)this + 335) == (unsigned int)PsGetCurrentThreadId();
}
