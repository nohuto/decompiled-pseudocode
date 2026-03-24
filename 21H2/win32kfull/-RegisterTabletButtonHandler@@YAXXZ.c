/*
 * XREFs of ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C01D8EC8
 * Callers:
 *     RawInputThread @ 0x1C0009A50 (RawInputThread.c)
 * Callees:
 *     _RegisterRawInputDevices @ 0x1C0108350 (_RegisterRawInputDevices.c)
 *     ?ReadTabletButtonSettings@@YAXXZ @ 0x1C01D8E24 (-ReadTabletButtonSettings@@YAXXZ.c)
 */

void RegisterTabletButtonHandler(void)
{
  __int64 v0; // xmm1_8
  _DWORD v1[2]; // [rsp+20h] [rbp-38h] BYREF
  void (__fastcall *v2)(struct DEVICEINFO *); // [rsp+28h] [rbp-30h]
  __int128 v3; // [rsp+30h] [rbp-28h]
  __int64 v4; // [rsp+40h] [rbp-18h]

  v1[0] = 589825;
  v2 = TabletButtonHandler;
  v1[1] = 256;
  ReadTabletButtonSettings();
  v0 = *((_QWORD *)&gObjDummyLock + 2);
  v3 = gObjDummyLock;
  v4 = v0;
  RegisterRawInputDevices((__int64)v1, 1u, 1u);
}
