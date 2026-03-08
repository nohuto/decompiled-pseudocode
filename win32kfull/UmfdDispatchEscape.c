/*
 * XREFs of UmfdDispatchEscape @ 0x1C00BB270
 * Callers:
 *     NtGdiExtEscape @ 0x1C00BB120 (NtGdiExtEscape.c)
 * Callees:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00BAFD8 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BB490 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BB9C0 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BBC94 (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C00BBD4C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BC810 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BCB4C (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00F49B8 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0130084 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     EngFntCacheFault @ 0x1C028CD90 (EngFntCacheFault.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A9AC4 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A9BE8 (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A9CC8 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscFONTOBJ_pifi@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A9DD8 (-UmfdEscFONTOBJ_pifi@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C02A9E20 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C0308F48 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 */

__int64 __fastcall UmfdDispatchEscape(_OWORD *a1)
{
  ULONG v2; // edi
  ULONG64 v3; // rcx
  __int64 result; // rax
  Gre::Base *v5; // rcx
  BOOL v6; // r14d
  struct UmfdTls *v7; // rax
  PATHOBJ *v8; // rcx
  struct UmfdTls *v9; // rax
  PATHOBJ *v10; // rcx
  ULONG ulFastCheckSum[4]; // [rsp+30h] [rbp-38h] BYREF
  POINTFIX ptfx[2]; // [rsp+40h] [rbp-28h]
  __int128 v13; // [rsp+50h] [rbp-18h]

  v2 = 0;
  *(_OWORD *)ulFastCheckSum = 0LL;
  *(_OWORD *)&ptfx[0].x = 0LL;
  v13 = 0LL;
  if ( ((unsigned __int8)a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v3 = (ULONG64)(a1 + 3);
  if ( v3 > MmUserProbeAddress || v3 < (unsigned __int64)a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)ulFastCheckSum = *a1;
  *(_OWORD *)&ptfx[0].x = a1[1];
  v13 = a1[2];
  if ( ulFastCheckSum[0] )
  {
    if ( ulFastCheckSum[0] == 10 )
    {
      UmfdEscEngMapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
    }
    else if ( ulFastCheckSum[0] == 11 )
    {
      UmfdEscEngUnmapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
    }
    else
    {
      switch ( ulFastCheckSum[0] )
      {
        case 1u:
          UmfdEscXFORMOBJ_iGetXform((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
          break;
        case 3u:
          UmfdEscFONTOBJ_pifi((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
          break;
        case 4u:
          v7 = UmfdTls::EnsureTls();
          if ( !v7 )
            goto LABEL_38;
          v8 = (PATHOBJ *)*((_QWORD *)v7 + 6);
          if ( !v8 )
            goto LABEL_38;
          ulFastCheckSum[2] = PATHOBJ_bCloseFigure(v8);
          break;
        case 5u:
          v9 = UmfdTls::EnsureTls();
          if ( !v9 )
            goto LABEL_38;
          v10 = (PATHOBJ *)*((_QWORD *)v9 + 6);
          if ( !v10 )
            goto LABEL_38;
          ulFastCheckSum[2] = PATHOBJ_bMoveTo(v10, ptfx[0]);
          break;
        case 6u:
          ulFastCheckSum[2] = UmfdEscPATHOBJ_bCommonTo(
                                PATHOBJ_bPolyBezierTo,
                                (struct _PATHOBJ *)MmUserProbeAddress,
                                *(struct _POINTFIX **)ptfx,
                                ptfx[1].x);
          break;
        case 7u:
          ulFastCheckSum[2] = UmfdEscPATHOBJ_bCommonTo(
                                PATHOBJ_bPolyLineTo,
                                (struct _PATHOBJ *)MmUserProbeAddress,
                                *(struct _POINTFIX **)ptfx,
                                ptfx[1].x);
          break;
        case 8u:
          LOBYTE(v2) = (unsigned __int8)UmfdFontCacheEntry::FntCacheAllocate(
                                          *(_QWORD *)&ptfx[1],
                                          (unsigned int)ptfx[0].x,
                                          ulFastCheckSum[3],
                                          ulFastCheckSum[2]) != 0;
LABEL_38:
          ulFastCheckSum[2] = v2;
          break;
        case 9u:
          EngFntCacheFault(ulFastCheckSum[2], ulFastCheckSum[3]);
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
          v5 = *(Gre::Base **)(SGDGetSessionState(v3) + 32);
          v6 = *((_DWORD *)v5 + 4850) != 0;
          if ( *(_DWORD *)(*((_QWORD *)Gre::Base::Globals(v5) + 241) + 1573012LL) )
            v2 = 2;
          ulFastCheckSum[2] = v2 | v6;
          break;
        case 0x12u:
          UmfdHostLifeTimeManager::OnHostReady();
          break;
        case 0x13u:
          UmfdHostLifeTimeManager::UninitializeThread();
          break;
        default:
          break;
      }
    }
  }
  else
  {
    UmfdEscSendCompleteWaitReceive((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
  }
  result = ulFastCheckSum[0];
  if ( !ulFastCheckSum[0] || ulFastCheckSum[0] == 10 )
  {
LABEL_15:
    ProbeForWrite((char *)a1 + 8, 4uLL, 8u);
    result = ulFastCheckSum[2];
    *((_DWORD *)a1 + 2) = ulFastCheckSum[2];
  }
  else if ( ulFastCheckSum[0] != 11 )
  {
    result = ulFastCheckSum[0] - 1;
    switch ( ulFastCheckSum[0] )
    {
      case 1u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
      case 0xCu:
      case 0xDu:
      case 0xEu:
      case 0x10u:
      case 0x11u:
        goto LABEL_15;
      case 2u:
      case 3u:
      case 0xFu:
        ProbeForWrite((char *)a1 + 8, 8uLL, 8u);
        result = *(_QWORD *)&ulFastCheckSum[2];
        *((_QWORD *)a1 + 1) = *(_QWORD *)&ulFastCheckSum[2];
        break;
      default:
        return result;
    }
  }
  return result;
}
