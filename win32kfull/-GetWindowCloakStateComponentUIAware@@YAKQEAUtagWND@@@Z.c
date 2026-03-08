/*
 * XREFs of ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C0028F20
 * Callers:
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0026E94 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetWindowData @ 0x1C002F9C8 (xxxSetWindowData.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C009EC08 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00291D4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0048F7C (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0222F70 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

unsigned int __fastcall GetWindowCloakStateComponentUIAware(struct tagWND *const a1)
{
  const struct tagWND *v1; // rbx
  int IsComponent; // eax
  const struct tagWND *TopLevelWindow; // rcx
  unsigned int result; // eax
  const struct tagWND *Host; // rax

  v1 = a1;
  IsComponent = CoreWindowProp::IsComponent(a1);
  TopLevelWindow = v1;
  if ( !IsComponent )
    return GetWindowCloakState(TopLevelWindow);
  if ( (GetWindowCloakState(v1) & 1) != 0 )
    return 1;
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
      TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(v1);
      return GetWindowCloakState(TopLevelWindow);
    }
  }
  return 2;
}
