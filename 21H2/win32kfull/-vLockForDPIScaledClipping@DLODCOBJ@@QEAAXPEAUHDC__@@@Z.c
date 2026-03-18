/*
 * XREFs of ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0089934
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00894E4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

void __fastcall DLODCOBJ::vLockForDPIScaledClipping(DLODCOBJ *this, HDC a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
    goto LABEL_2;
  XDCOBJ::vLock(this, a2);
  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *((_BYTE *)this + 49) = 0;
LABEL_2:
    *(_DWORD *)(v2 + 40) |= 2u;
    *((_BYTE *)this + 48) = 1;
  }
}
