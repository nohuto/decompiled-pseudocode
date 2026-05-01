/*
 * XREFs of ?WindowDiscoveredFromShellHook@WindowWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x180022E20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180024FC8 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::WindowDiscoveredFromShellHook(WindowWrapperBase *this, HWND a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (unsigned int)a2;
  v4 = *((_QWORD *)this + 34);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 216LL))(v4);
    WindowWrapperBase::SetWindowId((char *)this - 16, v2, 0LL);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x64F,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      v5);
  }
}
