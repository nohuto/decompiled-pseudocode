/*
 * XREFs of ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00024C8
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0002004 (xxxSetModernAppWindow.c)
 *     EditionIsAppForeground @ 0x1C01CEDC0 (EditionIsAppForeground.c)
 *     GetActiveTrackPwnd @ 0x1C01DCBDC (GetActiveTrackPwnd.c)
 *     NtUserNavigateFocus @ 0x1C01FA6F0 (NtUserNavigateFocus.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C020D6AC (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C021D188 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0077038 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
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
  v2 = *(_QWORD *)(gpqForeground + 120LL);
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
