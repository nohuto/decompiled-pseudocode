/*
 * XREFs of ?IsPPIFullFrameUI@@YA_NXZ @ 0x1801E5434
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x18000E0C0 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@SurfaceHubPositioner@@QEAAJXZ @ 0x180447F8C (-RuntimeClassInitialize@SurfaceHubPositioner@@QEAAJXZ.c)
 *     ?TabletModeChanged@SurfaceHubPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x180448280 (-TabletModeChanged@SurfaceHubPositioner@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180010180 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

bool IsPPIFullFrameUI(void)
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  return SHRegGetDWORD(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\PPI\\DeviceCapabilities", L"FullFrameUI", &v1) < 0
      || v1 == 1;
}
