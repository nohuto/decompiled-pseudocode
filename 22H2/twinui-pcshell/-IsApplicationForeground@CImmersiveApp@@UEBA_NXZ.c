/*
 * XREFs of ?IsApplicationForeground@CImmersiveApp@@UEBA_NXZ @ 0x180081DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::IsApplicationForeground(CImmersiveApp *this)
{
  return (*((_DWORD *)this + 118) & 2) != 0;
}
