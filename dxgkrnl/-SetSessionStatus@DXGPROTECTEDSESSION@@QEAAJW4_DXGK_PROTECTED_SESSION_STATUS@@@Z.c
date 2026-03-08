/*
 * XREFs of ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C0055FD4
 * Callers:
 *     ?Reset@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C0344464 (-Reset@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C0344664 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     DxgkSetProtectedSessionStatusCB @ 0x1C0346710 (DxgkSetProtectedSessionStatusCB.c)
 * Callees:
 *     ?QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1C0344354 (-QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::SetSessionStatus(
        DXGPROTECTEDSESSION *this,
        enum _DXGK_PROTECTED_SESSION_STATUS a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = 0LL;
  if ( *((_DWORD *)this + 37) != a2 )
  {
    v3 = *((_DWORD *)this + 6) == 1;
    *((_DWORD *)this + 37) = a2;
    if ( v3 )
      return DXGPROTECTEDSESSION::QueueSignal(this);
  }
  return result;
}
