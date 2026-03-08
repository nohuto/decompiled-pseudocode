/*
 * XREFs of ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C01F3DE8
 * Callers:
 *     NtUserNavigateFocus @ 0x1C01D8BC0 (NtUserNavigateFocus.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C022325C (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     _GetParent @ 0x1C00C85CC (_GetParent.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0222F70 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

bool __fastcall IsPwndComponentWebview(const struct tagWND *a1)
{
  struct tagWND *Host; // rax
  __int64 Parent; // rax

  Host = CoreWindowProp::GetHost(a1);
  return Host && (Parent = GetParent(Host)) != 0 && (*(_BYTE *)(*(_QWORD *)(Parent + 40) + 233LL) & 8) != 0;
}
