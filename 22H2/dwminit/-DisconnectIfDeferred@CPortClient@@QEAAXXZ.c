/*
 * XREFs of ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x1800049CC
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004154 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x1800042B8 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 * Callees:
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x180004988 (-Disconnect@CPortClient@@QEAAXXZ.c)
 */

void __fastcall CPortClient::DisconnectIfDeferred(CPortClient *this)
{
  if ( *((_DWORD *)this + 2) )
    CPortClient::Disconnect(this);
}
