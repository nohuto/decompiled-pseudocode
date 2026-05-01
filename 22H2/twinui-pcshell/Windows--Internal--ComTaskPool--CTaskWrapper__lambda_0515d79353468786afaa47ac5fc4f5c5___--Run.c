/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0515d79353468786afaa47ac5fc4f5c5___::Run @ 0x1800C94C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SendViewToDesktop@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CAJPEAUIWin32ApplicationView@@_N@Z @ 0x1802C47A0 (-_SendViewToDesktop@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CAJPEAUIWin32App.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0515d79353468786afaa47ac5fc4f5c5___::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_SendViewToDesktop(
         *(struct IWin32ApplicationView **)(a1 + 16),
         *(_BYTE *)(a1 + 24));
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x557,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v1);
}
