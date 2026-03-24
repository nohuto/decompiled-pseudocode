/*
 * XREFs of ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1C009FC40
 * Callers:
 *     InitializeGre @ 0x1C029A0FC (InitializeGre.c)
 * Callees:
 *     <none>
 */

void InitializeDefaultDCAttributes(void)
{
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = 0LL;
  WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0;
  *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) = 0;
  LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = 0;
  dword_1C0250F98 = 0;
  dword_1C0250F9C = 0;
  dword_1C0250FA4 = 0;
  dword_1C0250FA8 = 0;
  dword_1C0250FC0 = 0;
  dword_1C0250FC4 = 0;
  *(_DWORD *)&WPP_MAIN_CB.SectorSize = 0xFFFFFF;
  *(_DWORD *)(&WPP_MAIN_CB.Spare1 + 1) = 0xFFFFFF;
  WPP_MAIN_CB.Reserved = (PVOID)0xFFFFFF00FFFFFFLL;
  dword_1C0250F30 = -1;
  dword_1C0250F34 = -1;
  qword_1C0250F6C = 0x100000001LL;
  qword_1C0250F7C = 0x100000001LL;
  WPP_MAIN_CB.DeviceLock.Header.LockNV = 16;
  dword_1C0250F00 = 1;
  dword_1C0250F04 = 16843277;
  dword_1C0250F10 = 2;
  dword_1C0250F14 = 1;
  dword_1C0250F18 = 1;
  dword_1C0250F20 = 0;
  qword_1C0250F40 = 0LL;
  dword_1C0250F90 = 1;
  *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.Type = _xmm;
  WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
  WPP_MAIN_CB.DeviceQueue.1 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)0x3D8000000000004BLL;
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)1031798784;
  *(KAFFINITY *)((char *)&WPP_MAIN_CB.Dpc.ProcessorHistory + 4) = 0LL;
  HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = 83;
  dword_1C0250F94 = 1065353216;
  dword_1C0250FA0 = 1065353216;
  qword_1C0250FAC = 0LL;
  dword_1C0250FB4 = 99;
  dword_1C0250FB8 = 1098907648;
  dword_1C0250FBC = 1098907648;
  LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 1;
  dword_1C0250F84 = 6146;
  WPP_MAIN_CB.ActiveThreadCount = 1;
}
