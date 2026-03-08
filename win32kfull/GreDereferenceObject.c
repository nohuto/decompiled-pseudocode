/*
 * XREFs of GreDereferenceObject @ 0x1C00447CC
 * Callers:
 *     DeleteOrSetRedirectionBitmap @ 0x1C0021D34 (DeleteOrSetRedirectionBitmap.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C002B8C8 (CreateOrGetRedirectionBitmap.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0044690 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C004D240 (GreExtSelectClipRgnInternal.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00510A0 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C00510F0 (UntrapAppContainerRenderingWrap.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0051480 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0064DB8 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007BB00 (GreCreateCompatibleBitmapInternal.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C008D940 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C00D7E3C (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0124F2C (--1EPALOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreDereferenceObject(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 5;
  v4 = HmgShareLockCheck(a1, a2);
  v5 = 0;
  v8 = v4;
  v6 = v4;
  if ( !v4 )
    return 3221225480LL;
  if ( (a1 & 0x800000) != 0 )
  {
    DEC_SHARE_REF_CNT(v4);
  }
  else if ( HmgShareUnlockRemoveObject(a1, 0LL, 1LL, v2, 5) && (unsigned int)SURFACE::bDeleteSurface(v6, 0LL, 1LL) )
  {
    v8 = 0LL;
  }
  else
  {
    v5 = -1073741823;
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v8);
  return v5;
}
