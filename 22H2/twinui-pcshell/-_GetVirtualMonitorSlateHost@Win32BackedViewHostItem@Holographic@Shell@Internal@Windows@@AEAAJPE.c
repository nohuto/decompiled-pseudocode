/*
 * XREFs of ?_GetVirtualMonitorSlateHost@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAPEAUIVirtualMonitorSlateHost@2345@@Z @ 0x1802C3F9C
 * Callers:
 *     ?_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_NPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x1802C4108 (-_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA.c)
 *     ?_SetLogicalSize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJUSize@Foundation@5@@Z @ 0x1802C4C24 (-_SetLogicalSize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJUSize@Foundati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800C7290 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801A9F0C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x1802C3F68 (-_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GetVirtualMonitorSlateHost(
        RTL_SRWLOCK *this,
        struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost **a2)
{
  const char *v4; // r9
  unsigned int v5; // esi
  __int64 *v6; // r14
  PVOID Ptr; // rdi
  __int64 (__fastcall *v8)(PVOID, RTL_SRWLOCK *, struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost **); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v11; // rcx
  struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *v15; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  if ( !Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GetIsSlate((Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)this) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1386LL,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      v4);
    __debugbreak();
  }
  v15 = 0LL;
  AcquireSRWLockShared(this + 28);
  v6 = (__int64 *)&this[78];
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=((__int64 *)&v15, (__int64 *)&this[78]);
  if ( this != (RTL_SRWLOCK *)-224LL )
    ReleaseSRWLockShared(this + 28);
  if ( v15 )
    goto LABEL_14;
  Ptr = this[77].Ptr;
  v8 = *(__int64 (__fastcall **)(PVOID, RTL_SRWLOCK *, struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost **))(*(_QWORD *)Ptr + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  v9 = v8(Ptr, this, &v15);
  v10 = v9;
  if ( v9 >= 0 )
  {
    AcquireSRWLockExclusive(this + 28);
    if ( *v6 )
    {
      v11 = (__int64 *)&v15;
    }
    else
    {
      v11 = (__int64 *)&this[78];
      v6 = (__int64 *)&v15;
    }
    Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(v11, v6);
    if ( this != (RTL_SRWLOCK *)-224LL )
      ReleaseSRWLockExclusive(this + 28);
LABEL_14:
    v12 = v15;
    v15 = 0LL;
    *a2 = v12;
    goto LABEL_15;
  }
  v5 = -2147023496;
  if ( v9 != -2147023496 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x574,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v9);
    v5 = v10;
  }
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return v5;
}
