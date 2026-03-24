/*
 * XREFs of GreExtGetObjectW @ 0x1C0083108
 * Callers:
 *     EraseBitmap @ 0x1C00296A4 (EraseBitmap.c)
 *     GetScaledLogFontForDpi @ 0x1C0047AC4 (GetScaledLogFontForDpi.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00481E8 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C00654F4 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     NtGdiExtGetObjectW @ 0x1C0083000 (NtGdiExtGetObjectW.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00A9CD0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 *     GetWindowNCMetrics @ 0x1C00E0CB0 (GetWindowNCMetrics.c)
 *     CreateFontFromUserProfile @ 0x1C00E2B38 (CreateFontFromUserProfile.c)
 *     xxxSetNCFonts @ 0x1C00E2C88 (xxxSetNCFonts.c)
 *     UserSetAltScaleFont @ 0x1C00E4424 (UserSetAltScaleFont.c)
 *     RecreateRedirectionBitmap @ 0x1C00F18E8 (RecreateRedirectionBitmap.c)
 *     xxxCreateCaret @ 0x1C0113DC4 (xxxCreateCaret.c)
 *     CreateCompatiblePublicDC @ 0x1C0159B50 (CreateCompatiblePublicDC.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C015CE20 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D6B7C (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     CreateScaledFont @ 0x1C01EA410 (CreateScaledFont.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0242624 (-GetCursorHeight@@YAHXZ.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024B9B8 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C024D8A4 (xxxRealDrawMenuItem.c)
 *     xxxDrawState @ 0x1C0250D44 (xxxDrawState.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0019C48 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     GreGetDIBitsInternal @ 0x1C0082A14 (GreGetDIBitsInternal.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C008393C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C01466F4 (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02B68C8 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 */

__int64 __fastcall GreExtGetObjectW(HSURF a1, __int64 a2, char *a3)
{
  HSURF v3; // r14
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
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  int DIBitsInternal; // eax
  __int64 v29; // rax
  int v30; // ecx
  _BYTE v32[32]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v33; // [rsp+70h] [rbp-48h]
  __int64 v34; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v35; // [rsp+D8h] [rbp+20h] BYREF

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
    SURFREF::SURFREF((SURFREF *)v32, v3);
    v24 = v33;
    if ( !v33 )
    {
LABEL_58:
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v32);
      return v7;
    }
    v25 = *(_DWORD *)(v33 + 112);
    if ( (v25 & 0x4000000) == 0 && (v25 & 0x100000) == 0 )
      goto LABEL_57;
    *(_DWORD *)a3 = 0;
    *((_DWORD *)a3 + 1) = *(_DWORD *)(v24 + 56);
    *((_DWORD *)a3 + 2) = *(_DWORD *)(v24 + 60);
    if ( (*(_DWORD *)(v24 + 116) & 0x800) != 0 )
    {
      *((_DWORD *)a3 + 1) = *(_DWORD *)(v24 + 668);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v24 + 672);
    }
    v23 = *((unsigned __int16 *)&galBitsPerPixel + 2 * *(unsigned int *)(v24 + 96));
    *((_WORD *)a3 + 9) = v23;
    v26 = v23 * *(int *)(v24 + 56);
    *((_QWORD *)a3 + 3) = 0LL;
    *((_DWORD *)a3 + 3) = ((unsigned __int64)(v26 + 15) >> 3) & 0xFFFFFFFE;
    *((_WORD *)a3 + 8) = 1;
    v7 = 32;
    if ( (*(_WORD *)(v24 + 100) || !*(_QWORD *)(v24 + 192)) && (*(_DWORD *)(v24 + 112) & 0x100000) == 0 )
      goto LABEL_57;
    v27 = *(_QWORD *)(v24 + 72);
    if ( v27 < 0x10000 || v27 > (unsigned __int64)MmHighestUserAddress )
      v27 = 0LL;
    *((_QWORD *)a3 + 3) = v27;
    *((_DWORD *)a3 + 3) = ((unsigned __int64)(v23 * *(int *)(v24 + 56) + 31) >> 3) & 0xFFFFFFFC;
    if ( (unsigned int)v4 < 0x68 )
    {
LABEL_57:
      DEC_SHARE_REF_CNT(v24, v23);
      goto LABEL_58;
    }
    *((_DWORD *)a3 + 8) = 40;
    *((_WORD *)a3 + 23) = 0;
    DIBitsInternal = GreGetDIBitsInternal(0LL, v3, 0, 0, 0LL, (struct tagBITMAPINFO *)(a3 + 32), 0, 0, 0x68u);
    v24 = v33;
    if ( DIBitsInternal )
    {
      v7 = 104;
      if ( (*(_DWORD *)(v33 + 112) & 0x100000) != 0 )
        *((_DWORD *)a3 + 13) = 0;
    }
    v29 = *(_QWORD *)(v24 + 128);
    if ( v29 )
    {
      v30 = *(_DWORD *)(v29 + 24);
      if ( (v30 & 2) != 0 )
      {
        *((_DWORD *)a3 + 18) = **(_DWORD **)(v29 + 112);
        v23 = *(unsigned int *)(*(_QWORD *)(v29 + 112) + 4LL);
        *((_DWORD *)a3 + 19) = v23;
        v5 = *(_DWORD *)(*(_QWORD *)(v29 + 112) + 8LL);
LABEL_56:
        *((_DWORD *)a3 + 20) = v5;
        *((_QWORD *)a3 + 11) = *(_QWORD *)(v24 + 184);
        *((_DWORD *)a3 + 24) = *(_DWORD *)(v24 + 212);
        goto LABEL_57;
      }
      if ( (v30 & 8) != 0 )
        *((_DWORD *)a3 + 12) = 0;
    }
    *((_QWORD *)a3 + 9) = 0LL;
    goto LABEL_56;
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
        return (unsigned int)cjGetBrushOrPen((HBRUSH)v3, a2, a3);
    }
    else
    {
      LOBYTE(a2) = 10;
      v13 = HmgShareLock(v3, a2);
      v14 = v13;
      if ( v13 )
      {
        if ( (*(_DWORD *)(v13 + 28) & 1) != 0 )
        {
          HDEV = UserGetHDEV();
          v16 = *(_DWORD *)(v14 + 24);
          v17 = (_QWORD *)HDEV;
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v14);
          if ( !v17 )
            return v7;
          v19 = v16 - 4;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              if ( v20 == 1 )
                v3 = (HSURF)v17[181];
            }
            else
            {
              v3 = (HSURF)v17[180];
            }
          }
          else
          {
            v3 = (HSURF)v17[179];
          }
          LOBYTE(v18) = 10;
          v14 = HmgShareLock(v3, v18);
        }
        if ( v14 )
        {
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
  else
  {
    v7 = 2;
    if ( a3 )
    {
      if ( (int)a2 >= 2 )
      {
        v35 = ghsemPalette;
        GreAcquireSemaphore(ghsemPalette);
        EPALOBJ::EPALOBJ((EPALOBJ *)&v34, (HPALETTE)v3);
        v22 = v34;
        if ( v34 )
        {
          *(_WORD *)a3 = *(_WORD *)(v34 + 28);
          DEC_SHARE_REF_CNT(v22, v21);
        }
        else
        {
          v7 = 0;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v35);
      }
      else
      {
        return 0;
      }
    }
  }
  return v7;
}
