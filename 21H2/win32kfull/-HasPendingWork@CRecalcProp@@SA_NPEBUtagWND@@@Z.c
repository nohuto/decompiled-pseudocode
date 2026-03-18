/*
 * XREFs of ?HasPendingWork@CRecalcProp@@SA_NPEBUtagWND@@@Z @ 0x1C0082238
 * Callers:
 *     ?OnWindowUncloak@DesktopRecalc@@YAXPEAUtagWND@@@Z @ 0x1C0082214 (-OnWindowUncloak@DesktopRecalc@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxOnWindowRestoreFromMinimized@DesktopRecalc@@YA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1C00CD718 (-xxxOnWindowRestoreFromMinimized@DesktopRecalc@@YA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z @ 0x1C0082264 (-GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z.c)
 */

char __fastcall CRecalcProp::HasPendingWork(const struct tagWND *a1)
{
  struct CRecalcProp *RecalcProperty; // rcx
  char result; // al

  RecalcProperty = CRecalcProp::GetRecalcProperty(a1);
  result = 0;
  if ( RecalcProperty )
  {
    if ( *((_QWORD *)RecalcProperty + 3) )
      return 1;
  }
  return result;
}
