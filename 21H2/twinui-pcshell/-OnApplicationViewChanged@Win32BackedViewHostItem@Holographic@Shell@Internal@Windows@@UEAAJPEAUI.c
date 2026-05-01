/*
 * XREFs of ?OnApplicationViewChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1802C00E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ApplySizeConstraints@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAUIApplicationView@@@Z @ 0x1802C35BC (-_ApplySizeConstraints@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAUIApp.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::OnApplicationViewChanged(
        __int64 a1,
        struct IUnknown *a2,
        int a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
    return 0LL;
  if ( a3 != 15 )
    return 0LL;
  if ( !(unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 400), a2) )
    return 0LL;
  v5 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_ApplySizeConstraints(
         (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)(a1 - 168),
         (struct IApplicationView *)a2);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4FB,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
