/*
 * XREFs of ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1C00A0A00
 * Callers:
 *     InitializeGre @ 0x1C02990FC (InitializeGre.c)
 * Callees:
 *     <none>
 */

void InitializeDefaultDCAttributes(void)
{
  WPP_MAIN_CB.DeviceQueue.1 = 0LL;
  WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
  LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 0;
  dword_1C024FFB8 = 0;
  dword_1C024FFBC = 0;
  dword_1C024FFC4 = 0;
  dword_1C024FFC8 = 0;
  dword_1C024FFE0 = 0;
  dword_1C024FFE4 = 0;
  WPP_MAIN_CB.Reserved = (PVOID)0xFFFFFF00FFFFFFLL;
  dword_1C024FF10 = 0xFFFFFF;
  dword_1C024FF14 = 0xFFFFFF;
  dword_1C024FF50 = -1;
  dword_1C024FF54 = -1;
  qword_1C024FF8C = 0x100000001LL;
  qword_1C024FF9C = 0x100000001LL;
  LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) = 16;
  dword_1C024FF20 = 1;
  dword_1C024FF24 = 16843277;
  dword_1C024FF30 = 2;
  dword_1C024FF34 = 1;
  dword_1C024FF38 = 1;
  dword_1C024FF40 = 0;
  qword_1C024FF60 = 0LL;
  dword_1C024FFB0 = 1;
  *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = _xmm;
  *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0LL;
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)0x3D8000000000004BLL;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)1031798784;
  *(PVOID *)((char *)&WPP_MAIN_CB.Dpc.DeferredContext + 4) = 0LL;
  HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = 83;
  dword_1C024FFB4 = 1065353216;
  dword_1C024FFC0 = 1065353216;
  qword_1C024FFCC = 0LL;
  dword_1C024FFD4 = 99;
  dword_1C024FFD8 = 1098907648;
  dword_1C024FFDC = 1098907648;
  LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = 1;
  dword_1C024FFA4 = 6146;
  WPP_MAIN_CB.DeviceLock.Header.LockNV = 1;
}
