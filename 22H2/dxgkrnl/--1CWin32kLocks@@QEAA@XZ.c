/*
 * XREFs of ??1CWin32kLocks@@QEAA@XZ @ 0x1C0025FA8
 * Callers:
 *     DxgkPresent @ 0x1C01BED90 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C031E8D0 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0025FCC (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C0026048 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 */

void __fastcall CWin32kLocks::~CWin32kLocks(CWin32kLocks *this)
{
  CWin32kLocks::Unlock(this);
  DXGSTABLEVISRGNANDSPRITE::vUnlock((CWin32kLocks *)((char *)this + 32));
}
