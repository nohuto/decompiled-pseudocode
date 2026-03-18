/*
 * XREFs of ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0052B2C
 * Callers:
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C00528F0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01E2B54 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ?ProcessPTPMouseInput@CHidInput@@QEAAXPEAXPEAU_MOUSE_INPUT_DATA@@_K2K@Z @ 0x1C01E2F10 (-ProcessPTPMouseInput@CHidInput@@QEAAXPEAXPEAU_MOUSE_INPUT_DATA@@_K2K@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EEBD0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ??1DoWorkAndWait@CRIMBase@@QEAA@XZ @ 0x1C0052BE0 (--1DoWorkAndWait@CRIMBase@@QEAA@XZ.c)
 *     ?GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA?AVDoWorkAndWait@2@XZ @ 0x1C0052C20 (-GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA-AVDoWorkAndWait@2@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CRIMBase::SensorDoWorkAndWait(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  int v6; // eax
  PVOID v7; // rbx
  PRKEVENT Event; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h]

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 0x11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = (v3 << 6) + a1;
  v6 = *(_DWORD *)(v5 + 184);
  if ( v6 == 17 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v6 = *(_DWORD *)(v5 + 184);
  }
  if ( v6 != (_DWORD)v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  CRIMBase::SensorDispatcherObject::GetWorkAndWait(v5 + 168, &Event);
  v7 = Object;
  if ( Object || Event )
  {
    KeSetEvent(Event, 1, 0);
    KeWaitForSingleObject(v7, WrUserRequest, 0, 0, 0LL);
  }
  CRIMBase::DoWorkAndWait::~DoWorkAndWait((CRIMBase::DoWorkAndWait *)&Event);
}
