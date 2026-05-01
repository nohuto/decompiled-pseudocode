/*
 * XREFs of ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x18029A494
 * Callers:
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x18029A3C8 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@V.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180053384 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VIamAccess@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIamAccess@@@Z @ 0x180298790 (--$MakeAndInitialize@VIamAccess@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIamAccess@@@Z.c)
 *     ??$MakeAndInitialize@VPrivilegedWindowGroupingOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedWindowGroupingOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1802989D0 (--$MakeAndInitialize@VPrivilegedWindowGroupingOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Micr.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18029A974 (-InternalRelease@-$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedWindowGroupingOperations>::InitializePrivilegedOperations(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rbx
  int v5; // eax
  int v6; // esi
  __int64 v7; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(*a2);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(a1);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<IamAccess,IamAccess,>((Microsoft::WRL::FtmBase **)a1);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x261,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v5);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v6 >= 0 )
  {
    v13 = *a1;
    Microsoft::WRL::ComPtr<PrivilegedWindowGroupingOperations>::InternalRelease(a1 + 1);
    v9 = Microsoft::WRL::Details::MakeAndInitialize<PrivilegedWindowGroupingOperations,PrivilegedWindowGroupingOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
           a1 + 1,
           &v13,
           a2);
    v10 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x289,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v9);
    v11 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return v10;
  }
  else
  {
    v7 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return (unsigned int)v6;
  }
}
