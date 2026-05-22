/*
 * XREFs of ?OnHotKeyDetected@PenEventsDispatcherPrincipal@@UEAAJIII_K@Z @ 0x180133870
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDock@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x1801337F8 (-OnDock@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonClick@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180133DD4 (-OnTailButtonClick@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonDoubleClick@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180133E54 (-OnTailButtonDoubleClick@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonLongPress@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180133ED8 (-OnTailButtonLongPress@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnUndock@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180133F58 (-OnUndock@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 */

__int64 __fastcall PenEventsDispatcherPrincipal::OnHotKeyDetected(PenEventsDispatcherPrincipal *this, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v2 = a2 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 != 1 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              602LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\penev"
                       "entsdispatcherprincipal.cpp",
              (const char *)0x8000FFFFLL);
            __debugbreak();
          }
          PenEventsDispatcherPrincipal::OnUndock((PenEventsDispatcherPrincipal *)((char *)this - 56));
        }
        else
        {
          PenEventsDispatcherPrincipal::OnDock((PenEventsDispatcherPrincipal *)((char *)this - 56));
        }
      }
      else
      {
        PenEventsDispatcherPrincipal::OnTailButtonLongPress((PenEventsDispatcherPrincipal *)((char *)this - 56));
      }
    }
    else
    {
      PenEventsDispatcherPrincipal::OnTailButtonDoubleClick((PenEventsDispatcherPrincipal *)((char *)this - 56));
    }
  }
  else
  {
    PenEventsDispatcherPrincipal::OnTailButtonClick((PenEventsDispatcherPrincipal *)((char *)this - 56));
  }
  return 0LL;
}
