__int64 __fastcall CGlobalManipulationManager::InitializeMMCSSTask(CGlobalManipulationManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[33]; // [rsp+20h] [rbp-A8h] BYREF
  int v6; // [rsp+A4h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  memset_0(v5, 0, 0x90uLL);
  StringCchCopyW((unsigned __int16 *)v5, 0x40uLL, (size_t *)L"Capture");
  v6 = 1;
  v2 = CMmcssTask::Set((CGlobalManipulationManager *)((char *)this + 312), (const struct DWM_MMTASK *)v5, 0);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\globalmanipulationmanager.cpp",
      (const char *)(unsigned int)v2,
      v5[0]);
  return v3;
}
