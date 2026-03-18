/*
 * XREFs of ?vAltCheckLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C029E2FC
 * Callers:
 *     GreCancelDC @ 0x1C029E32C (GreCancelDC.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vAltCheckLock(XDCOBJ *this, HDC a2)
{
  HDC v3; // rcx

  v3 = a2;
  LOBYTE(a2) = 1;
  *(_QWORD *)this = HmgShareLockCheck(v3, a2);
}
