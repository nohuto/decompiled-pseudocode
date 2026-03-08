/*
 * XREFs of RIMGetDeviceLocationInfo @ 0x1C01B67F4
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C01A46A0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C01B3FEC (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetContainerId @ 0x1C0030264 (RIMGetContainerId.c)
 *     RIMGetPanelId @ 0x1C0030420 (RIMGetPanelId.c)
 */

__int64 __fastcall RIMGetDeviceLocationInfo(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  ULONG v4; // r8d

  *(_DWORD *)(a2 + 16) = 2;
  RIMGetContainerId(a1, (void *)a2, (_DWORD *)(a2 + 16));
  return RIMGetPanelId(a1, (_WORD *)(a2 + 20), v4);
}
