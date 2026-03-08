/*
 * XREFs of ??1CWin32kLocks@@QEAA@XZ @ 0x1C00262D4
 * Callers:
 *     DxgkPresent @ 0x1C01C8120 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C03198F0 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C00262F8 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C0026374 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 */

void __fastcall CWin32kLocks::~CWin32kLocks(CWin32kLocks *this)
{
  CWin32kLocks::Unlock(this);
  DXGSTABLEVISRGNANDSPRITE::vUnlock((CWin32kLocks *)((char *)this + 32));
}
