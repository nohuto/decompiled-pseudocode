/*
 * XREFs of GreDereferenceObject @ 0x1C002669C
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C001F528 (CreateOrGetRedirectionBitmap.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0026524 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0026768 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1C0040528 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00B4214 (DeleteOrSetRedirectionBitmap.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C010DA34 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDereferenceObject(HSURF a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _BYTE v7[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v7, a1);
  v4 = v8;
  if ( v8 )
  {
    if ( ((unsigned int)a1 & 0x800000) != 0 )
    {
      DEC_SHARE_REF_CNT(v8);
      v4 = v8;
    }
    else
    {
      if ( !HmgShareUnlockRemoveObject(a1, 0LL, 1LL, a2, 5) || !(unsigned int)SURFACE::bDeleteSurface(v8, 0LL, 1LL) )
      {
        v4 = v8;
        v5 = -1073741823;
        goto LABEL_10;
      }
      v4 = 0LL;
      v8 = 0LL;
    }
    v5 = 0;
  }
  else
  {
    v5 = -1073741816;
  }
LABEL_10:
  if ( v4 )
    DEC_SHARE_REF_CNT(v4);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v7);
  return v5;
}
