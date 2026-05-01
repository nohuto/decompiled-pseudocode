/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopManagerSuspensionToken@@UIUnknown@@PEAVCVirtualDesktopManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@$$QEAPEAVCVirtualDesktopManager@@@Z @ 0x1804A7B54
 * Callers:
 *     ?SuspendModificationsInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIUnknown@@@Z @ 0x1804AD7C0 (-SuspendModificationsInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800431B0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180259660 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 *     ??0VirtualDesktopManagerSuspensionToken@@QEAA@XZ @ 0x1804A8B28 (--0VirtualDesktopManagerSuspensionToken@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopManagerSuspensionToken@@QEAAJPEAUISuspendableVirtualDesktopManager@@@Z @ 0x1804AA934 (-RuntimeClassInitialize@VirtualDesktopManagerSuspensionToken@@QEAAJPEAUISuspendableVirtualDeskto.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopManagerSuspensionToken,IUnknown,CVirtualDesktopManager *>(
        void **a1,
        _QWORD *a2)
{
  VirtualDesktopManagerSuspensionToken *v4; // rax
  int CanCastTo; // edi
  VirtualDesktopManagerSuspensionToken *v6; // rbx
  volatile int *v7; // rdx
  const struct _GUID *v8; // rdx

  *a1 = 0LL;
  v4 = (VirtualDesktopManagerSuspensionToken *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = VirtualDesktopManagerSuspensionToken::VirtualDesktopManagerSuspensionToken(v4);
    CanCastTo = VirtualDesktopManagerSuspensionToken::RuntimeClassInitialize(
                  v6,
                  (struct ISuspendableVirtualDesktopManager *)((*a2 + 32LL) & -(__int64)(*a2 != 0LL)));
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v6;
        (*(void (__fastcall **)(VirtualDesktopManagerSuspensionToken *))(*(_QWORD *)v6 + 8LL))(v6);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((VirtualDesktopManagerSuspensionToken *)((char *)v6 + 8), v8, a1);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(
        (__int64)v6,
        v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
