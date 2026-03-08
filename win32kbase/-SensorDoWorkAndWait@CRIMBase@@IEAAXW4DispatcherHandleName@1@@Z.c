/*
 * XREFs of ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C009B248
 * Callers:
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C009AFA0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C0212654 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ?ProcessPTPMouseInput@CHidInput@@QEAAXPEAXPEAU_MOUSE_INPUT_DATA@@_K2K@Z @ 0x1C0212AC0 (-ProcessPTPMouseInput@CHidInput@@QEAAXPEAXPEAU_MOUSE_INPUT_DATA@@_K2K@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021F9D0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA?AVDoWorkAndWait@2@XZ @ 0x1C009B310 (-GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA-AVDoWorkAndWait@2@XZ.c)
 *     ??1DoWorkAndWait@CRIMBase@@QEAA@XZ @ 0x1C009B3D0 (--1DoWorkAndWait@CRIMBase@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CRIMBase::SensorDoWorkAndWait(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  PVOID v5; // rbx
  PRKEVENT Event; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h]

  v2 = a2;
  if ( a2 >= 0x12 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 450LL);
  v4 = (v2 << 6) + a1;
  if ( *(_DWORD *)(v4 + 184) == 18 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 455LL);
  if ( *(_DWORD *)(v4 + 184) != (_DWORD)v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 457LL);
  CRIMBase::SensorDispatcherObject::GetWorkAndWait(v4 + 168, &Event);
  v5 = Object;
  if ( Object || Event )
  {
    KeSetEvent(Event, 1, 0);
    KeWaitForSingleObject(v5, WrUserRequest, 0, 0, 0LL);
  }
  CRIMBase::DoWorkAndWait::~DoWorkAndWait((CRIMBase::DoWorkAndWait *)&Event);
}
