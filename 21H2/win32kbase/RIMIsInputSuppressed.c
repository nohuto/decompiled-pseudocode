/*
 * XREFs of RIMIsInputSuppressed @ 0x1C0004020
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C0003DB8 (rimSignalReadComplete.c)
 *     rimApplyPointerDevicePolicies @ 0x1C00E70E4 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     RIMIsWakeCapableDevice @ 0x1C00D2D98 (RIMIsWakeCapableDevice.c)
 */

__int64 __fastcall RIMIsInputSuppressed(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // r11d

  v1 = *(_DWORD *)(a1 + 1320);
  v2 = 0;
  if ( v1 == 1 || v1 == 2 && !(unsigned int)RIMIsWakeCapableDevice() )
    return 1;
  return v2;
}
