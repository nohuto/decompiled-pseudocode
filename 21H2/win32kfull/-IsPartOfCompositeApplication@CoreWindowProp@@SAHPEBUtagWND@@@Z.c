/*
 * XREFs of ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C010C5A4
 * Callers:
 *     NtUserSetForegroundWindowForApplication @ 0x1C010C450 (NtUserSetForegroundWindowForApplication.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C010C53C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0048EF8 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0082174 (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0238DD4 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsPartOfCompositeApplication(const struct tagWND *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !a1 )
    return 0LL;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
  {
    LOBYTE(v1) = CoreWindowProp::GetTopLevelHost(a1) != 0LL;
    return v1;
  }
  else
  {
    return (unsigned int)CoreWindowProp::IsHost(a1) != 0;
  }
}
