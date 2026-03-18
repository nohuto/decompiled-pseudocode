/*
 * XREFs of RIMGetDeviceLocationInfo @ 0x1C01928F4
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C0182990 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C019B9FC (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetPanelId @ 0x1C00A1AB8 (RIMGetPanelId.c)
 *     RIMGetContainerId @ 0x1C0192030 (RIMGetContainerId.c)
 */

__int64 __fastcall RIMGetDeviceLocationInfo(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  ULONG v4; // r8d

  *(_DWORD *)(a2 + 16) = 2;
  RIMGetContainerId(a1, (void *)a2, (_DWORD *)(a2 + 16));
  return RIMGetPanelId(a1, (_WORD *)(a2 + 20), v4);
}
