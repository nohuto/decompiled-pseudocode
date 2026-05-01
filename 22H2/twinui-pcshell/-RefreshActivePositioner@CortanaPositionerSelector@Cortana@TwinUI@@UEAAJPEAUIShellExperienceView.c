/*
 * XREFs of ?RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x180268400
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180010180 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::RefreshActivePositioner(
        TwinUI::Cortana::CortanaPositionerSelector *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        HSTRING a3)
{
  unsigned int v3; // ebx
  int v6; // edi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (unsigned int)dword_180652A10 <= 1 )
  {
    v6 = 1;
    if ( SHRegGetDWORD(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
           L"CortanaPositionerOverride",
           &v11) >= 0 )
    {
      v6 = 0;
      if ( v11 <= 1 )
        v3 = v11;
    }
    if ( !dword_180652A10 )
      dword_180652A10 = v6 + 1;
  }
  v7 = (*(__int64 (__fastcall **)(TwinUI::Cortana::CortanaPositionerSelector *, _QWORD, struct Windows::Internal::Shell::Experience::IShellExperienceView *))(*(_QWORD *)this + 32LL))(
         this,
         v3,
         a2);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4A,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
