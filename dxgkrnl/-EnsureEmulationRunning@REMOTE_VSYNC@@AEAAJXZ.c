/*
 * XREFs of ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C01C6940
 * Callers:
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C01C68E8 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C0347A54 (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C01C6A40 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 */

__int64 __fastcall REMOTE_VSYNC::EnsureEmulationRunning(struct _KTHREAD **this)
{
  bool v2; // zf
  int started; // ebx
  _BYTE v5[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-30h]
  int v7; // [rsp+30h] [rbp-28h]
  _BYTE v8[8]; // [rsp+38h] [rbp-20h] BYREF
  DXGPUSHLOCK *v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+48h] [rbp-10h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 5, 0);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, this + 5, 0);
  DXGPUSHLOCK::AcquireShared(v6);
  v2 = this[1] == 0LL;
  v7 = 1;
  if ( !v2
    || (DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5),
        DXGPUSHLOCK::AcquireExclusive(v9),
        v2 = this[1] == 0LL,
        v10 = 2,
        !v2)
    || (started = REMOTE_VSYNC::StartEmulation((REMOTE_VSYNC *)this), started >= 0) )
  {
    started = 0;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
  return (unsigned int)started;
}
