/*
 * XREFs of RIMPopulateExtendedKeyboardDeviceProperties @ 0x1C009F0E8
 * Callers:
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 * Callees:
 *     ?ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z @ 0x1C009F174 (-ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1C00A196C (RIMRegOpenDeviceInstanceKey.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall RIMPopulateExtendedKeyboardDeviceProperties(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rax
  int v5; // edi
  void *v6; // rsi
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v4 = (void *)RIMRegOpenDeviceInstanceKey(a1);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    v8 = 1;
    if ( ReadDevicePropertyFromRegistry(L"HasPhysicalKeys", v4, 0LL, 1, &v8) )
    {
      LOBYTE(v5) = v8 == 0;
      *(_DWORD *)(a1 + 492) = v5 | *(_DWORD *)(a1 + 492) & 0xFFFFFFFE;
    }
    LODWORD(v4) = ZwClose(v6);
  }
  return (int)v4;
}
