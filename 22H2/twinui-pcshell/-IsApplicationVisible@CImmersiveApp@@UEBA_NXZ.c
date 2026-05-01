/*
 * XREFs of ?IsApplicationVisible@CImmersiveApp@@UEBA_NXZ @ 0x180081860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::IsApplicationVisible(CImmersiveApp *this)
{
  return (*((_DWORD *)this + 118) & 4) != 0;
}
