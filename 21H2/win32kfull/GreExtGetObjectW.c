/*
 * XREFs of GreExtGetObjectW @ 0x1C0027B74
 * Callers:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0023D00 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0026768 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     NtGdiExtGetObjectW @ 0x1C0027A60 (NtGdiExtGetObjectW.c)
 *     GetScaledLogFontForDpi @ 0x1C0063C80 (GetScaledLogFontForDpi.c)
 *     GetWindowNCMetrics @ 0x1C006492C (GetWindowNCMetrics.c)
 *     RecreateRedirectionBitmap @ 0x1C008F778 (RecreateRedirectionBitmap.c)
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     CreateCompatiblePublicDC @ 0x1C00BA240 (CreateCompatiblePublicDC.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00BF15C (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxSetNCFonts @ 0x1C00C3874 (xxxSetNCFonts.c)
 *     CreateFontFromUserProfile @ 0x1C00C58D0 (CreateFontFromUserProfile.c)
 *     UserSetAltScaleFont @ 0x1C00C5A80 (UserSetAltScaleFont.c)
 *     xxxCreateCaret @ 0x1C00C6204 (xxxCreateCaret.c)
 *     EraseBitmap @ 0x1C011C584 (EraseBitmap.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C0158F68 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     CreateScaledFont @ 0x1C01E4B98 (CreateScaledFont.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C0219890 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C023A3E8 (-SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C023E168 (-GetCursorHeight@@YAHXZ.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0246DE4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 *     xxxDrawState @ 0x1C024DD1C (xxxDrawState.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreGetDIBitsInternal @ 0x1C0027480 (GreGetDIBitsInternal.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00921F8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C0132068 (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02B4B24 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 */

__int64 __fastcall GreExtGetObjectW(HBRUSH a1, __int64 a2, char *a3)
{
  HBRUSH v3; // r14
  unsigned __int64 v4; // r12
  int v5; // edi
  unsigned int v7; // ebp
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 HDEV; // rax
  int v16; // r15d
  _QWORD *v17; // r13
  __int64 v18; // rdx
  int v19; // r15d
  int v20; // r15d
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  int DIBitsInternal; // eax
  __int64 v28; // rax
  int v29; // ecx
  _BYTE v31[32]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v32; // [rsp+70h] [rbp-48h]
  __int64 v33; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v34; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = (int)a2;
  v5 = 0;
  v7 = 0;
  v8 = (((unsigned int)a1 >> 16) & 0x1F) - 5;
  if ( !v8 )
  {
    if ( !a3 )
      return 32;
    if ( (int)a2 < 32 )
      return v7;
    SURFREF::SURFREF((SURFREF *)v31, (HSURF)v3);
    v22 = v32;
    if ( !v32 )
    {
LABEL_57:
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v31);
      return v7;
    }
    v23 = *(_DWORD *)(v32 + 112);
    if ( (v23 & 0x4000000) == 0 && (v23 & 0x100000) == 0 )
      goto LABEL_56;
    *(_DWORD *)a3 = 0;
    *((_DWORD *)a3 + 1) = *(_DWORD *)(v22 + 56);
    *((_DWORD *)a3 + 2) = *(_DWORD *)(v22 + 60);
    if ( (*(_DWORD *)(v22 + 116) & 0x800) != 0 )
    {
      *((_DWORD *)a3 + 1) = *(_DWORD *)(v22 + 668);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v22 + 672);
    }
    v24 = *((unsigned __int16 *)&galBitsPerPixel + 2 * *(unsigned int *)(v22 + 96));
    *((_WORD *)a3 + 9) = v24;
    v25 = v24 * *(int *)(v22 + 56);
    *((_QWORD *)a3 + 3) = 0LL;
    *((_DWORD *)a3 + 3) = ((unsigned __int64)(v25 + 15) >> 3) & 0xFFFFFFFE;
    *((_WORD *)a3 + 8) = 1;
    v7 = 32;
    if ( (*(_WORD *)(v22 + 100) || !*(_QWORD *)(v22 + 192)) && !_bittest((const signed __int32 *)(v22 + 112), 0x14u) )
      goto LABEL_56;
    v26 = *(_QWORD *)(v22 + 72);
    if ( v26 < 0x10000 || v26 > (unsigned __int64)MmHighestUserAddress )
      v26 = 0LL;
    *((_QWORD *)a3 + 3) = v26;
    *((_DWORD *)a3 + 3) = ((unsigned __int64)(v24 * *(int *)(v22 + 56) + 31) >> 3) & 0xFFFFFFFC;
    if ( (unsigned int)v4 < 0x68 )
    {
LABEL_56:
      DEC_SHARE_REF_CNT(v22);
      goto LABEL_57;
    }
    *((_DWORD *)a3 + 8) = 40;
    *((_WORD *)a3 + 23) = 0;
    DIBitsInternal = GreGetDIBitsInternal(0LL, (HSURF)v3, 0, 0, 0LL, (struct tagBITMAPINFO *)(a3 + 32), 0, 0, 0x68u);
    v22 = v32;
    if ( DIBitsInternal )
    {
      v7 = 104;
      if ( _bittest((const signed __int32 *)(v32 + 112), 0x14u) )
        *((_DWORD *)a3 + 13) = 0;
    }
    v28 = *(_QWORD *)(v22 + 128);
    if ( v28 )
    {
      v29 = *(_DWORD *)(v28 + 24);
      if ( (v29 & 2) != 0 )
      {
        *((_DWORD *)a3 + 18) = **(_DWORD **)(v28 + 112);
        *((_DWORD *)a3 + 19) = *(_DWORD *)(*(_QWORD *)(v28 + 112) + 4LL);
        v5 = *(_DWORD *)(*(_QWORD *)(v28 + 112) + 8LL);
LABEL_55:
        *((_DWORD *)a3 + 20) = v5;
        *((_QWORD *)a3 + 11) = *(_QWORD *)(v22 + 184);
        *((_DWORD *)a3 + 24) = *(_DWORD *)(v22 + 212);
        goto LABEL_56;
      }
      if ( (v29 & 8) != 0 )
        *((_DWORD *)a3 + 12) = 0;
    }
    *((_QWORD *)a3 + 9) = 0LL;
    goto LABEL_55;
  }
  v9 = v8 - 3;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
      return (unsigned int)cjGetLogicalColorSpace((HCOLORSPACE)v3, a2, a3);
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 6 )
        return (unsigned int)cjGetBrushOrPen(v3, a2, a3);
    }
    else
    {
      LOBYTE(a2) = 10;
      v13 = HmgShareLock(v3, a2);
      v14 = v13;
      if ( v13 )
      {
        if ( (*(_DWORD *)(v13 + 28) & 1) == 0 )
          goto LABEL_18;
        HDEV = UserGetHDEV();
        v16 = *(_DWORD *)(v14 + 24);
        v17 = (_QWORD *)HDEV;
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v14);
        if ( v17 )
        {
          v19 = v16 - 4;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              if ( v20 == 1 )
                v3 = (HBRUSH)v17[180];
            }
            else
            {
              v3 = (HBRUSH)v17[179];
            }
          }
          else
          {
            v3 = (HBRUSH)v17[178];
          }
          LOBYTE(v18) = 10;
          v14 = HmgShareLock(v3, v18);
          if ( v14 )
          {
LABEL_18:
            if ( a3 )
            {
              v7 = v4;
              if ( v4 >= *(unsigned int *)(v14 + 272) )
                v7 = *(_DWORD *)(v14 + 272);
              memmove(a3, (const void *)(v14 + 276), v7);
            }
            else
            {
              v7 = *(_DWORD *)(v14 + 272);
            }
            DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v14);
          }
        }
      }
    }
  }
  else
  {
    v7 = 2;
    if ( a3 )
    {
      if ( (int)a2 >= 2 )
      {
        v34 = ghsemPalette;
        GreAcquireSemaphore(ghsemPalette);
        EPALOBJ::EPALOBJ((EPALOBJ *)&v33, (HPALETTE)v3);
        v21 = v33;
        if ( v33 )
        {
          *(_WORD *)a3 = *(_WORD *)(v33 + 28);
          DEC_SHARE_REF_CNT(v21);
        }
        else
        {
          v7 = 0;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v34);
      }
      else
      {
        return 0;
      }
    }
  }
  return v7;
}
