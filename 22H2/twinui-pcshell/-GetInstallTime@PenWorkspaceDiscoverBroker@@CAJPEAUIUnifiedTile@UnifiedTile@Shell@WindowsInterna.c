/*
 * XREFs of ?GetInstallTime@PenWorkspaceDiscoverBroker@@CAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAU_FILETIME@@@Z @ 0x18028B2C8
 * Callers:
 *     ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x18028ABD0 (-GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspaceDiscoverBroker::GetInstallTime(
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *a1,
        struct _FILETIME *a2)
{
  __int64 (__fastcall *v4)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  struct _FILETIME v11; // [rsp+50h] [rbp+18h]
  struct _FILETIME v12; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, __int64 *))(*(_QWORD *)a1 + 88LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v5 = v4(a1, &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, struct _FILETIME *))(*(_QWORD *)v10 + 64LL))(v10, &v12);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v11 = v12;
      *a2 = v12;
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 132LL;
  }
  else
  {
    v7 = 130LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v6;
}
