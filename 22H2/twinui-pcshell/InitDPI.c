/*
 * XREFs of InitDPI @ 0x1804DC3FC
 * Callers:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180018B3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18001A420 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z @ 0x18023A35C (-AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

int InitDPI()
{
  HDC ProcAddress; // rax
  int v1; // ebx
  HMODULE ModuleHandleW; // rax
  HDC v3; // rbx

  ProcAddress = (HDC)qword_18064EFA0;
  v1 = 1;
  if ( qword_18064EFA0 == -1 )
  {
    ModuleHandleW = GetModuleHandleW(L"USER32.DLL");
    if ( ModuleHandleW )
    {
      ProcAddress = (HDC)GetProcAddress(ModuleHandleW, "IsProcessDPIAware");
      qword_18064EFA0 = (__int64)ProcAddress;
    }
    else
    {
      ProcAddress = (HDC)qword_18064EFA0;
    }
  }
  if ( ProcAddress )
  {
    LODWORD(ProcAddress) = ((__int64 (*)(void))ProcAddress)();
    v1 = (int)ProcAddress;
  }
  if ( dword_18064EF30 == -1 || dword_1806532B8 != v1 )
  {
    dword_1806532B8 = v1;
    ProcAddress = GetDC(0LL);
    v3 = ProcAddress;
    if ( ProcAddress )
    {
      dword_18064EF30 = GetDeviceCaps(ProcAddress, 88);
      GetDeviceCaps(v3, 90);
      LODWORD(ProcAddress) = ReleaseDC(0LL, v3);
    }
    else
    {
      dword_18064EF30 = 96;
    }
  }
  return (int)ProcAddress;
}
