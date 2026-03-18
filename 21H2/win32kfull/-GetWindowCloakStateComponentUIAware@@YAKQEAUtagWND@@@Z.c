/*
 * XREFs of ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C0082554
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C004F920 (xxxSetWindowData.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0080F68 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C00F4EEC (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0048EF8 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0238D30 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall GetWindowCloakStateComponentUIAware(struct tagWND *const a1)
{
  const struct tagWND *v1; // rbx
  int IsComponent; // eax
  const struct tagWND *TopLevelWindow; // rcx
  __int64 result; // rax
  const struct tagWND *Host; // rax

  v1 = a1;
  IsComponent = CoreWindowProp::IsComponent(a1);
  TopLevelWindow = v1;
  if ( !IsComponent )
    return GetWindowCloakState(TopLevelWindow);
  if ( (GetWindowCloakState(v1) & 1) != 0 )
    return 1LL;
  while ( 1 )
  {
    Host = CoreWindowProp::GetHost(v1);
    v1 = Host;
    if ( !Host )
      break;
    result = GetWindowCloakState(Host);
    if ( (result & 1) != 0 )
      return result;
    if ( !(unsigned int)CoreWindowProp::IsComponent(v1) )
    {
      TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)v1);
      return GetWindowCloakState(TopLevelWindow);
    }
  }
  return 2LL;
}
