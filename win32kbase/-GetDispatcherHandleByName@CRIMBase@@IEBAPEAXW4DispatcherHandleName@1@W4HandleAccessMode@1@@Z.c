/*
 * XREFs of ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C0039100
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C002E140 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C00320D4 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C0039080 (-Read@CBaseInput@@QEAAJXZ.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C00CDD24 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C0211110 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x1C021118C (-HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C02111DC (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C0211278 (-HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ?ArmRawMouseThrottlingTimer@CMouseSensor@@QEAAX_NK@Z @ 0x1C0214AE4 (-ArmRawMouseThrottlingTimer@CMouseSensor@@QEAAX_NK@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CRIMBase::GetDispatcherHandleByName(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax

  v3 = a2;
  if ( a2 >= 0x12 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 329LL);
  v6 = v3 << 6;
  if ( a3 )
    return *(_QWORD *)(v6 + a1 + 208);
  else
    return *(_QWORD *)(v6 + a1 + 192);
}
