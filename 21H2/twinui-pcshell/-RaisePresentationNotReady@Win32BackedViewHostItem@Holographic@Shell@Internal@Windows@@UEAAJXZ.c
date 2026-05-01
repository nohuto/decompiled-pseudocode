/*
 * XREFs of ?RaisePresentationNotReady@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ @ 0x1802C0F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_MoveViewToDesktopAfterDelayIfSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x1802C4500 (-_MoveViewToDesktopAfterDelayIfSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@.c)
 *     ?_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x1802C47F4 (-_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::RaisePresentationNotReady(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this)
{
  Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *v1; // rdi
  int ready; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)((char *)this - 16);
  ready = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaisePresentationReadyEvent(
            (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)((char *)this - 16),
            0);
  if ( ready < 0 )
  {
    v3 = 692LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)ready);
    return (unsigned int)ready;
  }
  ready = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_MoveViewToDesktopAfterDelayIfSlate(v1, 0);
  if ( ready < 0 )
  {
    v3 = 697LL;
    goto LABEL_3;
  }
  return 0LL;
}
