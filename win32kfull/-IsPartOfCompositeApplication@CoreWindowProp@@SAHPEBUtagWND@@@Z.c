/*
 * XREFs of ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00999A8
 * Callers:
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0099940 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     NtUserSetForegroundWindowForApplication @ 0x1C01DCC40 (NtUserSetForegroundWindowForApplication.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00291D4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C009BD04 (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0223014 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsPartOfCompositeApplication(const struct tagWND *a1)
{
  unsigned int v1; // ebx
  bool v3; // zf

  v1 = 0;
  if ( !a1 )
    return 0LL;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
    v3 = CoreWindowProp::GetTopLevelHost(a1) == 0LL;
  else
    v3 = (unsigned int)CoreWindowProp::IsHost(a1) == 0;
  LOBYTE(v1) = !v3;
  return v1;
}
