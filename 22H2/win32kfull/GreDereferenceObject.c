/*
 * XREFs of GreDereferenceObject @ 0x1C002D3F8
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C002D2BC (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C002DBDC (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0057310 (GreCreateCompatibleBitmapInternal.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C0079E88 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C825C (DeleteOrSetRedirectionBitmap.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00D564C (CreateOrGetRedirectionBitmap.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C00DD3B0 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00F8B40 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     GreExtSelectClipRgnInternal @ 0x1C011A2F0 (GreExtSelectClipRgnInternal.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1C011C768 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0087EAC (--1SURFREF@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDereferenceObject(HSURF a1, unsigned int a2)
{
  unsigned int v4; // ebx
  _BYTE v6[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v6, a1);
  v4 = 0;
  if ( v7 )
  {
    if ( ((unsigned int)a1 & 0x800000) != 0 )
    {
      DEC_SHARE_REF_CNT(v7);
    }
    else if ( HmgShareUnlockRemoveObject(a1, 0LL, 1LL, a2, 5) && (unsigned int)SURFACE::bDeleteSurface(v7, 0LL, 1LL) )
    {
      v7 = 0LL;
    }
    else
    {
      v4 = -1073741823;
    }
    SURFREF::~SURFREF((SURFREF *)v6);
    return v4;
  }
  else
  {
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v6);
    return 3221225480LL;
  }
}
