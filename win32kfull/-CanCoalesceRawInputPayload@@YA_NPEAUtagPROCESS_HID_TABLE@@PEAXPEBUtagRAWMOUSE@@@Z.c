/*
 * XREFs of ?CanCoalesceRawInputPayload@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@@Z @ 0x1C01ABD18
 * Callers:
 *     ?ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x1C01AC4B4 (-ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CanCoalesceRawInputPayload(struct tagPROCESS_HID_TABLE *a1, void *a2, const struct tagRAWMOUSE *a3)
{
  int v6; // r8d
  char v7; // dl
  bool v8; // zf
  bool v9; // sf
  char v10; // r8
  char v11; // al

  if ( *((_DWORD *)a1 + 28) != 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 355);
  if ( *((_DWORD *)a3 + 5) != *((_DWORD *)a1 + 38) || a2 != *((void **)a1 + 17) )
    return 0;
  v6 = *((_DWORD *)a3 + 3);
  v7 = 1;
  if ( (~v6 ^ ~*((_DWORD *)a1 + 36)) >= 0
    || (v8 = v6 == 0, v9 = v6 < 0, v10 = 0, (v9 || v8) == *((_DWORD *)a1 + 36) <= 0) )
  {
    v10 = 1;
  }
  if ( (~*((_DWORD *)a3 + 4) ^ ~*((_DWORD *)a1 + 37)) >= 0
    || (v11 = 0, *((_DWORD *)a3 + 4) <= 0 == *((_DWORD *)a1 + 37) <= 0) )
  {
    v11 = 1;
  }
  if ( !v10 || !v11 )
    return 0;
  return v7;
}
