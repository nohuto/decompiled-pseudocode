/*
 * XREFs of ?ReadPerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEAPEAXPEA_K@Z @ 0x1804A4E4C
 * Callers:
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x1804A4F40 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180062A7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x1804A4C90 (-GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z.c)
 */

__int64 __fastcall VirtualDesktopPersistence::ReadPerDesktopData(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktop *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        void **a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // edi
  VirtualDesktopPersistence *v9; // rcx
  int VirtualDesktopRegKeyName; // eax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  int v14; // eax
  wchar_t v15[56]; // [rsp+40h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v6 = 0;
  *a5 = 0LL;
  *a6 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3);
  VirtualDesktopRegKeyName = VirtualDesktopPersistence::GetVirtualDesktopRegKeyName(v9, a2, v15);
  v12 = VirtualDesktopRegKeyName;
  if ( VirtualDesktopRegKeyName >= 0 )
  {
    LOBYTE(v11) = 1;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, wchar_t *, const wchar_t *, int, void **, unsigned __int64 *))(**((_QWORD **)this + 2) + 24LL))(
            *((_QWORD *)this + 2),
            v11,
            v15,
            L"Name",
            1,
            a5,
            a6);
    if ( v14 < 0 )
      return (unsigned int)v14;
    return v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)VirtualDesktopRegKeyName);
    return v12;
  }
}
