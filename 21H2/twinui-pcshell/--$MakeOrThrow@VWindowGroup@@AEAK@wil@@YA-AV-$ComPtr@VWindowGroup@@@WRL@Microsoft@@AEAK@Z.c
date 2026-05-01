/*
 * XREFs of ??$MakeOrThrow@VWindowGroup@@AEAK@wil@@YA?AV?$ComPtr@VWindowGroup@@@WRL@Microsoft@@AEAK@Z @ 0x180308C9C
 * Callers:
 *     ?CreateWindowGroup@WindowGroupManager@@UEAAJPEAKPEAPEAUIWindowGroup@@@Z @ 0x1803043E0 (-CreateWindowGroup@WindowGroupManager@@UEAAJPEAKPEAPEAUIWindowGroup@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097A60 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C55E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     ??0WindowGroup@@QEAA@K@Z @ 0x180308D50 (--0WindowGroup@@QEAA@K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeOrThrow<WindowGroup,unsigned long &>(__int64 *a1, unsigned int *a2)
{
  WindowGroup *v4; // rax
  const char *v5; // r9
  WindowGroup *v6; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v4 = (WindowGroup *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = WindowGroup::WindowGroup(v4, *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(*a1);
    *a1 = (__int64)v6;
  }
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      56LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
    __debugbreak();
  }
  return a1;
}
