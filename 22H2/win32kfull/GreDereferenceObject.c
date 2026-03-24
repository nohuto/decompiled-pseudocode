/*
 * XREFs of GreDereferenceObject @ 0x1C004B8AC
 * Callers:
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C0016E34 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C004B794 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0065454 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C008AF30 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1C008E548 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00AF240 (GreSetDIBitsToDeviceInternal.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00BEDE8 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00EF608 (DeleteOrSetRedirectionBitmap.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082F38 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C016AF6C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026CC04 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?vAltUnlockFast@SURFREF@@QEAAXXZ @ 0x1C027301C (-vAltUnlockFast@SURFREF@@QEAAXXZ.c)
 */

__int64 __fastcall GreDereferenceObject(HSURF a1, unsigned int a2)
{
  unsigned int v4; // ebx
  char v6; // [rsp+20h] [rbp-48h]
  _BYTE v7[56]; // [rsp+30h] [rbp-38h] BYREF

  SURFREF::SURFREF((SURFREF *)v7, a1);
  v4 = 0;
  if ( (unsigned int)SURFREF::bValid((SURFREF *)v7) )
  {
    if ( ((unsigned int)a1 & 0x800000) != 0 )
    {
      SURFREF::vAltUnlockFast((SURFREF *)v7);
    }
    else
    {
      v6 = 5;
      if ( !HmgShareUnlockRemoveObject(a1, 0LL, 1LL, a2, v6) || !(unsigned int)SURFREF::bDeleteSurface(v7, 0LL, 1LL) )
        v4 = -1073741823;
    }
  }
  else
  {
    v4 = -1073741816;
  }
  SURFREF::~SURFREF((SURFREF *)v7);
  return v4;
}
