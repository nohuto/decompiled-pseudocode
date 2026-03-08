/*
 * XREFs of ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C004B500
 * Callers:
 *     GreSelectVisRgn @ 0x1C0042CD0 (GreSelectVisRgn.c)
 *     EngLockSurface @ 0x1C0044C20 (EngLockSurface.c)
 *     HmgReplaceObject @ 0x1C0045470 (HmgReplaceObject.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00467B8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C0052144 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0052A00 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     bDeleteRegion @ 0x1C0053FA0 (bDeleteRegion.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0055BB0 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgSwapLockedHandleContents @ 0x1C0186370 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     <none>
 */

char __fastcall GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(
        GdiHandleEntryDirectory *this,
        unsigned int a2,
        struct GdiHandleEntryTable **a3,
        unsigned int *a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // r11d
  __int64 v7; // rdx

  v4 = a2;
  v5 = *((_DWORD *)this + 514);
  if ( a2 >= v5 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0;
  if ( a2 >= v5 )
  {
    v7 = ((a2 - v5) >> 16) + 1;
    *a3 = (struct GdiHandleEntryTable *)*((_QWORD *)this + v7 + 1);
    v4 += ((1 - (_DWORD)v7) << 16) - v5;
  }
  else
  {
    *a3 = (struct GdiHandleEntryTable *)*((_QWORD *)this + 1);
  }
  *a4 = v4;
  return 1;
}
