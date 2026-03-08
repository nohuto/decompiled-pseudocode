/*
 * XREFs of RawInputManagerObjectCreateKernelHandle @ 0x1C00B6080
 * Callers:
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0004878 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C00B5DB0 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 *     ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C00B6040 (-GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C01C2E38 (RIMIDECreatePseudoHIDDevice.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RawInputManagerObjectCreateKernelHandle(
        _DWORD *a1,
        ACCESS_MASK a2,
        unsigned __int8 a3,
        KPROCESSOR_MODE AccessMode,
        PHANDLE Handle)
{
  NTSTATUS v5; // ebx

  *Handle = (void *)-1LL;
  if ( a1[1] == 1 )
  {
    v5 = ObOpenObjectByPointer(a1, 2 * a3 + 512, 0LL, a2, ExRawInputManagerObjectType, AccessMode, Handle);
    if ( v5 < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 746LL);
  }
  else
  {
    return (unsigned int)-1073741788;
  }
  return (unsigned int)v5;
}
