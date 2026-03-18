/*
 * XREFs of ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000F42C
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000EF44 (xxxSetModernAppWindow.c)
 *     EditionIsAppForeground @ 0x1C01AE570 (EditionIsAppForeground.c)
 *     GetActiveTrackPwnd @ 0x1C01B68AC (GetActiveTrackPwnd.c)
 *     NtUserNavigateFocus @ 0x1C01D7B90 (NtUserNavigateFocus.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C02007D8 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00CFF84 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 */

__int64 __fastcall CoreWindowProp::CompositeAppHasForeground(const struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  const struct tagWND *TopLevelWindow; // rsi
  __int64 v4; // rax
  const struct tagWND *v5; // rdi
  struct tagWND *CompositeAppFrameWindowOrSelf; // rsi
  struct tagWND *v7; // rax

  v1 = 0;
  if ( !gpqForeground )
    return 0LL;
  v2 = *(_QWORD *)(gpqForeground + 128LL);
  if ( !v2 )
    return 0LL;
  TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
  v4 = GetTopLevelWindow(v2);
  v5 = (const struct tagWND *)v4;
  if ( !TopLevelWindow || !v4 )
    return 0LL;
  CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(TopLevelWindow);
  v7 = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v5);
  if ( CompositeAppFrameWindowOrSelf == v7 || *((struct tagWND **)CompositeAppFrameWindowOrSelf + 25) == v7 )
    return 1;
  return v1;
}
