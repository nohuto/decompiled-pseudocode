/*
 * XREFs of W32GetCurrentThread @ 0x1C004DBF0
 * Callers:
 *     HmgSetOwner @ 0x1C00522C0 (HmgSetOwner.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0052C24 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C00EEC00 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C017F048 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C018BD80 (EngUpdateDeviceSurface.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 */

__int64 W32GetCurrentThread()
{
  return W32GetThreadWin32Thread(KeGetCurrentThread());
}
