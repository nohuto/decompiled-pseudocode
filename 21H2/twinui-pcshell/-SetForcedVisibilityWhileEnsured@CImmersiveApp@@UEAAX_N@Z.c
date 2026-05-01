/*
 * XREFs of ?SetForcedVisibilityWhileEnsured@CImmersiveApp@@UEAAX_N@Z @ 0x1801F1350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::SetForcedVisibilityWhileEnsured(CImmersiveApp *this, char a2)
{
  CImmersiveApp::CImmersiveWindowCollection *v2; // rcx

  v2 = (CImmersiveApp *)((char *)this + 184);
  if ( a2 )
    CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(v2, 2LL, 3LL);
  else
    CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(v2, 3u);
}
