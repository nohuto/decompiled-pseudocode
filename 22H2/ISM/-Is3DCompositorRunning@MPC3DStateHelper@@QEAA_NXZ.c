/*
 * XREFs of ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x180021308
 * Callers:
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180020C00 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x180020DDC (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x1800210F4 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x18008D7D4 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x18019CFE0 (-Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPC3DStateHelper::Is3DCompositorRunning(PSRWLOCK SRWLock)
{
  char v2; // bl

  AcquireSRWLockShared(SRWLock);
  v2 = BYTE4(SRWLock[2].Ptr);
  ReleaseSRWLockShared(SRWLock);
  return v2;
}
