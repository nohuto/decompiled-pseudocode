/*
 * XREFs of ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x18003EF18
 * Callers:
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003EE30 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18003EF5C (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CWindowData::ForceDisconnectClientNode(CWindowData *this)
{
  CTopLevelWindow *v2; // rcx
  CBaseObject *v3; // rcx

  v2 = (CTopLevelWindow *)*((_QWORD *)this + 48);
  if ( v2 )
    CTopLevelWindow::ForceDisconnectClientArea(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 16);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 16) = 0LL;
  }
}
