/*
 * XREFs of GetWindowCloakStateComponentUIAware @ 0x1C003888C
 * Callers:
 *     zzzImeSetFutureOwner @ 0x1C0033FA4 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C0035B24 (zzzImeSetOwnerWindow.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C008A1A8 (xxxSetWindowData.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C004DB6C (GetWindowCloakState.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006B6A0 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006FC20 (_GetTopLevelWindow.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0122588 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall GetWindowCloakStateComponentUIAware(struct tagWND *a1)
{
  const struct tagWND *v1; // rbx
  int IsComponent; // eax
  __int64 TopLevelWindow; // rcx
  __int64 result; // rax
  struct tagWND *Host; // rax

  v1 = a1;
  IsComponent = CoreWindowProp::IsComponent(a1);
  TopLevelWindow = (__int64)v1;
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
      TopLevelWindow = GetTopLevelWindow(v1);
      return GetWindowCloakState(TopLevelWindow);
    }
  }
  return 2LL;
}
