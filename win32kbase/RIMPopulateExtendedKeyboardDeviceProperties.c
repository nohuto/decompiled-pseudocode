/*
 * XREFs of RIMPopulateExtendedKeyboardDeviceProperties @ 0x1C00D2AB0
 * Callers:
 *     RIMCreateDev @ 0x1C0036CBC (RIMCreateDev.c)
 * Callees:
 *     ?ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z @ 0x1C002EDC4 (-ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1C0030CF0 (RIMRegOpenDeviceInstanceKey.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

int __fastcall RIMPopulateExtendedKeyboardDeviceProperties(__int64 a1, int a2, int a3)
{
  int v3; // ebx
  void *v5; // rax
  void *v6; // rsi
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 )
  {
    v8 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 241LL);
  }
  v5 = RIMRegOpenDeviceInstanceKey(a1, a2, a3);
  v6 = v5;
  if ( v5 )
  {
    v8 = 1;
    if ( ReadDevicePropertyFromRegistry(L"HasPhysicalKeys", v5, 0LL, 1, &v8) )
    {
      LOBYTE(v3) = v8 == 0;
      *(_DWORD *)(a1 + 492) = v3 | *(_DWORD *)(a1 + 492) & 0xFFFFFFFE;
    }
    LODWORD(v5) = ZwClose(v6);
  }
  return (int)v5;
}
