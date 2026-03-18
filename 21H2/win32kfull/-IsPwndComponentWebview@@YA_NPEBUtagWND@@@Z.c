/*
 * XREFs of ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C0210658
 * Callers:
 *     NtUserNavigateFocus @ 0x1C01FA6F0 (NtUserNavigateFocus.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0238F50 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     _GetParent @ 0x1C00DE714 (_GetParent.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0238D30 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

bool __fastcall IsPwndComponentWebview(const struct tagWND *a1)
{
  struct tagWND *Host; // rax
  __int64 Parent; // rax
  bool result; // al

  Host = CoreWindowProp::GetHost(a1);
  result = 0;
  if ( Host )
  {
    Parent = GetParent(Host);
    if ( Parent )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(Parent + 40) + 233LL) & 8) != 0 )
        return 1;
    }
  }
  return result;
}
