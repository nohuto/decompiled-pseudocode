/*
 * XREFs of ?VirtualDesktopNameChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x1804A5B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180062A7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x1804A4C90 (-GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z.c)
 *     ?WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z @ 0x1804A5E38 (-WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z.c)
 */

__int64 __fastcall VirtualDesktopPersistence::VirtualDesktopNameChanged(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktop *a2,
        HSTRING a3)
{
  VirtualDesktopPersistence *v6; // rcx
  PCWSTR StringRawBuffer; // rax
  const unsigned __int16 *v8; // r8
  int VirtualDesktopRegKeyName; // ebx
  __int64 v10; // rdx
  __int64 v12; // rdx
  UINT32 length[4]; // [rsp+30h] [rbp-A8h] BYREF
  wchar_t v14[56]; // [rsp+40h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3);
  if ( a3 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a3, length);
    VirtualDesktopRegKeyName = VirtualDesktopPersistence::WritePerDesktopData(
                                 this,
                                 a2,
                                 v8,
                                 2 * (length[0] + 1),
                                 StringRawBuffer,
                                 2LL * (length[0] + 1));
    if ( VirtualDesktopRegKeyName < 0 )
    {
      v10 = 195LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)(unsigned int)VirtualDesktopRegKeyName);
      return (unsigned int)VirtualDesktopRegKeyName;
    }
  }
  else
  {
    VirtualDesktopRegKeyName = VirtualDesktopPersistence::GetVirtualDesktopRegKeyName(v6, a2, v14);
    if ( VirtualDesktopRegKeyName < 0 )
    {
      v10 = 200LL;
      goto LABEL_4;
    }
    LOBYTE(v12) = 1;
    VirtualDesktopRegKeyName = (*(__int64 (__fastcall **)(_QWORD, __int64, wchar_t *, const wchar_t *))(**((_QWORD **)this + 2) + 64LL))(
                                 *((_QWORD *)this + 2),
                                 v12,
                                 v14,
                                 L"Name");
    if ( VirtualDesktopRegKeyName < 0 )
    {
      v10 = 201LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
