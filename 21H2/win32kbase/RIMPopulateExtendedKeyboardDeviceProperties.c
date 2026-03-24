/*
 * XREFs of RIMPopulateExtendedKeyboardDeviceProperties @ 0x1C006BFB8
 * Callers:
 *     RIMCreateDev @ 0x1C0054530 (RIMCreateDev.c)
 * Callees:
 *     ?ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z @ 0x1C006C670 (-ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1C006CD68 (RIMRegOpenDeviceInstanceKey.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

int __fastcall RIMPopulateExtendedKeyboardDeviceProperties(__int64 a1)
{
  int v1; // ebx
  void *v3; // rax
  void *v4; // rsi
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 )
  {
    v6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 293LL);
  }
  v3 = (void *)RIMRegOpenDeviceInstanceKey(a1);
  v4 = v3;
  if ( v3 )
  {
    v6 = 1;
    if ( ReadDevicePropertyFromRegistry(L"HasPhysicalKeys", v3, 0LL, 1, &v6) )
    {
      LOBYTE(v1) = v6 == 0;
      *(_DWORD *)(a1 + 500) = v1 | *(_DWORD *)(a1 + 500) & 0xFFFFFFFE;
    }
    LODWORD(v3) = ZwClose(v4);
  }
  return (int)v3;
}
