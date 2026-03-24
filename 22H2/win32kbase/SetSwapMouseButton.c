/*
 * XREFs of SetSwapMouseButton @ 0x1C0127A80
 * Callers:
 *     UnpackMouseSettings @ 0x1C01AF8D0 (UnpackMouseSettings.c)
 * Callees:
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C000D350 (BroadcastSettingsUpdateToAllContainers.c)
 */

char __fastcall SetSwapMouseButton(unsigned __int8 a1)
{
  char v1; // bl

  v1 = *((_DWORD *)gpsi + 497) != 0;
  if ( v1 != a1 )
  {
    gbSwapMouseButtonsDirty = gbSwapMouseButtonsDirty == 0;
    *((_DWORD *)gpsi + 497) = a1;
    BroadcastSettingsUpdateToAllContainers();
  }
  return v1;
}
