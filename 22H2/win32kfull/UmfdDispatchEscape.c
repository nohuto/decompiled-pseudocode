/*
 * XREFs of UmfdDispatchEscape @ 0x1C00A76B0
 * Callers:
 *     NtGdiExtEscape @ 0x1C00A7450 (NtGdiExtEscape.c)
 * Callees:
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00A46DC (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00A7970 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00A7F20 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00A8C0C (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C00A8D30 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?UmfdEscHostUnhandledException@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00F42C0 (-UmfdEscHostUnhandledException@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C01301E8 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0136584 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C0139E64 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C016C1FC (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     EngFntCacheFault @ 0x1C0288BD0 (EngFntCacheFault.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029E27C (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029E3B0 (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029E47C (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscFONTOBJ_pifi@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029E57C (-UmfdEscFONTOBJ_pifi@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02DED78 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 */

__int64 __fastcall UmfdDispatchEscape(struct _PATHOBJ *a1)
{
  ULONG v2; // edi
  struct _PATHOBJ *v3; // rdx
  struct UmfdTls *v4; // rax
  PATHOBJ *v5; // rcx
  struct UmfdTls *v6; // rax
  PATHOBJ *v7; // rcx
  __int64 result; // rax
  ULONG ulFastCheckSum[4]; // [rsp+30h] [rbp-38h] BYREF
  POINTFIX ptfx[2]; // [rsp+40h] [rbp-28h]
  __int128 v11; // [rsp+50h] [rbp-18h]

  v2 = 0;
  *(_OWORD *)ulFastCheckSum = 0LL;
  *(_OWORD *)&ptfx[0].x = 0LL;
  v11 = 0LL;
  if ( ((unsigned __int8)a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v3 = a1 + 6;
  if ( (unsigned __int64)&a1[6] > MmUserProbeAddress || v3 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)ulFastCheckSum = *(_OWORD *)&a1->fl;
  *(_OWORD *)&ptfx[0].x = *(_OWORD *)&a1[2].fl;
  v11 = *(_OWORD *)&a1[4].fl;
  switch ( ulFastCheckSum[0] )
  {
    case 0u:
      UmfdEscSendCompleteWaitReceive((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 1u:
      UmfdEscXFORMOBJ_iGetXform((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 3u:
      UmfdEscFONTOBJ_pifi((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 4u:
      v4 = UmfdTls::EnsureTls();
      if ( !v4 )
        goto LABEL_21;
      v5 = (PATHOBJ *)*((_QWORD *)v4 + 6);
      if ( !v5 )
        goto LABEL_21;
      ulFastCheckSum[2] = PATHOBJ_bCloseFigure(v5);
      break;
    case 5u:
      v6 = UmfdTls::EnsureTls();
      if ( !v6 )
        goto LABEL_21;
      v7 = (PATHOBJ *)*((_QWORD *)v6 + 6);
      if ( !v7 )
        goto LABEL_21;
      ulFastCheckSum[2] = PATHOBJ_bMoveTo(v7, ptfx[0]);
      break;
    case 6u:
      ulFastCheckSum[2] = UmfdEscPATHOBJ_bCommonTo(PATHOBJ_bPolyBezierTo, v3, *(struct _POINTFIX **)ptfx, ptfx[1].x);
      break;
    case 7u:
      ulFastCheckSum[2] = UmfdEscPATHOBJ_bCommonTo(PATHOBJ_bPolyLineTo, v3, *(struct _POINTFIX **)ptfx, ptfx[1].x);
      break;
    case 8u:
      LOBYTE(v2) = (unsigned __int8)UmfdFontCacheEntry::FntCacheAllocate(
                                      *(_QWORD *)&ptfx[1],
                                      (unsigned int)ptfx[0].x,
                                      ulFastCheckSum[3],
                                      ulFastCheckSum[2]) != 0;
LABEL_21:
      ulFastCheckSum[2] = v2;
      break;
    case 9u:
      EngFntCacheFault(ulFastCheckSum[2], ulFastCheckSum[3]);
      break;
    case 0xAu:
      UmfdEscEngMapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 0xBu:
      UmfdEscEngUnmapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 0xCu:
      UmfdEscEngGetFileChangeTime((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 0xDu:
      UmfdEscEngGetFilePath((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 0xEu:
      UmfdEscEngComputeGlyphSet((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 0xFu:
      UmfdEscEngCreateFile((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 0x10u:
      UmfdEscParseFontResources((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 0x11u:
      LOBYTE(v2) = gbJpn98FixPitch != 0;
      ulFastCheckSum[2] = v2 | (*(_DWORD *)(gpGdiSharedMemory + 1573012LL) != 0 ? 2 : 0);
      break;
    case 0x12u:
      UmfdHostLifeTimeManager::OnHostReady();
      break;
    case 0x13u:
      UmfdEscHostUnhandledException(0LL);
      break;
    default:
      break;
  }
  result = (int)ulFastCheckSum[0];
  switch ( ulFastCheckSum[0] )
  {
    case 0u:
    case 1u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 0xAu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0x10u:
    case 0x11u:
      ProbeForWrite(&a1[1], 4uLL, 8u);
      result = ulFastCheckSum[2];
      a1[1].fl = ulFastCheckSum[2];
      break;
    case 2u:
    case 3u:
    case 0xFu:
      ProbeForWrite(&a1[1], 8uLL, 8u);
      result = *(_QWORD *)&ulFastCheckSum[2];
      a1[1] = *(struct _PATHOBJ *)&ulFastCheckSum[2];
      break;
    default:
      return result;
  }
  return result;
}
