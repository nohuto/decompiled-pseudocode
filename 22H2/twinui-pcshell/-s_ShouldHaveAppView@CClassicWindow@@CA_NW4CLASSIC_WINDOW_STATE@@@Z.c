/*
 * XREFs of ?s_ShouldHaveAppView@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x18007A690
 * Callers:
 *     ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x18007A580 (-ChangeWindowType@CClassicWindow@@UEAA-AW4WindowChangeFlags@@W42@@Z.c)
 *     ?ShouldHaveAppView@CClassicWindow@@UEBA_NXZ @ 0x18007A680 (-ShouldHaveAppView@CClassicWindow@@UEBA_NXZ.c)
 * Callees:
 *     ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x18007A6D0 (-s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 */

char __fastcall CClassicWindow::s_ShouldHaveAppView(__int64 a1)
{
  char ShouldShowInSwitchers; // al
  char v2; // cl
  char v3; // dl

  ShouldShowInSwitchers = CClassicWindow::s_ShouldShowInSwitchers(a1);
  v3 = 0;
  if ( ShouldShowInSwitchers || (v2 & 5) != 0 )
    return 1;
  return v3;
}
