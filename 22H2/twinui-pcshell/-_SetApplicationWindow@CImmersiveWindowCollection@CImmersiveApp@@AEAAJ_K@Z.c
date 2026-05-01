/*
 * XREFs of ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x1801F2B9C
 * Callers:
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x1801EF004 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x1801F0C08 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x180036660 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x180046A24 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z @ 0x1801F2FFC (-_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_SetApplicationWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        unsigned __int64 a2,
        bool a3)
{
  int updated; // edi

  updated = CImmersiveApp::CImmersiveWindowCollection::_UpdateZOrderActivation(this, a2, a3);
  if ( updated >= 0 )
  {
    CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, **((struct ITaskWindow ***)this + 21));
    CImmersiveApp::_UpdateWindowTitleAndButtons(*((CImmersiveApp **)this + 20));
  }
  return (unsigned int)updated;
}
