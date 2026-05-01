/*
 * XREFs of ?SuspendModificationsInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIUnknown@@@Z @ 0x1804AD7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopManagerSuspensionToken@@UIUnknown@@PEAVCVirtualDesktopManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@$$QEAPEAVCVirtualDesktopManager@@@Z @ 0x1804A7B54 (--$MakeAndInitialize@VVirtualDesktopManagerSuspensionToken@@UIUnknown@@PEAVCVirtualDesktopManage.c)
 */

__int64 __fastcall CVirtualDesktopManager::SuspendModificationsInternal(
        CVirtualDesktopManager *this,
        struct IUnknown **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (char *)this - 8;
  v2 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopManagerSuspensionToken,IUnknown,CVirtualDesktopManager *>(
         (void **)a2,
         &v6);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x277,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
