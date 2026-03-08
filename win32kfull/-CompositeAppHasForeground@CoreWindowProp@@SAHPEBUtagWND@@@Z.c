/*
 * XREFs of ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000E6EC
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000E204 (xxxSetModernAppWindow.c)
 *     EditionIsAppForeground @ 0x1C01AF760 (EditionIsAppForeground.c)
 *     GetActiveTrackPwnd @ 0x1C01B7A4C (GetActiveTrackPwnd.c)
 *     NtUserNavigateFocus @ 0x1C01D8BC0 (NtUserNavigateFocus.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01EEA1C (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C0203380 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0035AC4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
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
