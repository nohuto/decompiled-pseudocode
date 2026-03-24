/*
 * XREFs of ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00B7D98
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00B7948 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A038 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
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
