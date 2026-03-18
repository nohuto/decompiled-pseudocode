/*
 * XREFs of GreExtGetObjectW @ 0x1C002E520
 * Callers:
 *     xxxCreateCaret @ 0x1C000FD64 (xxxCreateCaret.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C002DBDC (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     NtGdiExtGetObjectW @ 0x1C002E410 (NtGdiExtGetObjectW.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0030EF0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     EraseBitmap @ 0x1C006EC78 (EraseBitmap.c)
 *     CreateFontFromUserProfile @ 0x1C0078200 (CreateFontFromUserProfile.c)
 *     UserSetAltScaleFont @ 0x1C0078308 (UserSetAltScaleFont.c)
 *     xxxSetNCFonts @ 0x1C0078690 (xxxSetNCFonts.c)
 *     RecreateRedirectionBitmap @ 0x1C008E968 (RecreateRedirectionBitmap.c)
 *     GetWindowNCMetrics @ 0x1C00F0894 (GetWindowNCMetrics.c)
 *     GetWindowNCMetricsForDpi @ 0x1C00F0B8C (GetWindowNCMetricsForDpi.c)
 *     GetScaledLogFontForDpi @ 0x1C00F0E0C (GetScaledLogFontForDpi.c)
 *     CreateScaledFont @ 0x1C01BF458 (CreateScaledFont.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C7A54 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01FC7BC (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C0223490 (-SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0225430 (-GetCursorHeight@@YAHXZ.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0233414 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0236930 (xxxRealDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0237E5C (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     CreateCompatiblePublicDC @ 0x1C023F4DC (CreateCompatiblePublicDC.c)
 *     xxxDrawState @ 0x1C023F6F0 (xxxDrawState.c)
 * Callees:
 *     ?GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C002F6C0 (-GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@II.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005848C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C02A7A64 (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02CEB8C (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 */

__int64 __fastcall GreExtGetObjectW(HBRUSH a1, __int64 a2, __int64 a3)
{
  HBRUSH v3; // rbp
  unsigned __int64 v4; // r15
  int v5; // ebx
  unsigned int v6; // ecx
  unsigned int v8; // esi
  Gre::Base *v9; // rcx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 HDEV; // rax
  int v15; // r14d
  _QWORD *v16; // r13
  __int64 v17; // rdx
  int v18; // r14d
  int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  int DIBitsInternalImpl; // eax
  __int64 v26; // rax
  int v27; // ecx
  __int64 v29[3]; // [rsp+50h] [rbp-78h] BYREF
  __int16 v30; // [rsp+68h] [rbp-60h]
  _BYTE v31[32]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v32; // [rsp+90h] [rbp-38h]
  __int64 v33; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v34; // [rsp+E8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = (int)a2;
  v5 = 0;
  v6 = ((unsigned int)a1 >> 16) & 0x1F;
  v8 = 0;
  if ( v6 == 5 )
  {
    if ( !a3 )
      return 32;
    if ( (int)a2 < 32 )
      return v8;
    SURFREF::SURFREF((SURFREF *)v31, (HSURF)v3);
    v21 = v32;
    if ( !v32 )
    {
LABEL_60:
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v31);
      return v8;
    }
    if ( (*(_DWORD *)(v32 + 112) & 0x4100000) == 0 )
      goto LABEL_58;
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(v21 + 56);
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(v21 + 60);
    if ( (*(_DWORD *)(v21 + 116) & 0x800) != 0 )
    {
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(v21 + 668);
      *(_DWORD *)(a3 + 8) = *(_DWORD *)(v21 + 672);
    }
    v22 = (unsigned __int16)gaulConvert[2 * *(unsigned int *)(v21 + 96)];
    *(_WORD *)(a3 + 18) = v22;
    v23 = v22 * *(int *)(v21 + 56);
    *(_QWORD *)(a3 + 24) = 0LL;
    *(_DWORD *)(a3 + 12) = ((unsigned __int64)(v23 + 15) >> 3) & 0xFFFFFFFE;
    *(_WORD *)(a3 + 16) = 1;
    v8 = 32;
    if ( (*(_WORD *)(v21 + 100) || !*(_QWORD *)(v21 + 192)) && (*(_DWORD *)(v21 + 112) & 0x100000) == 0 )
      goto LABEL_58;
    v24 = *(_QWORD *)(v21 + 72);
    if ( v24 < 0x10000 || v24 > (unsigned __int64)MmHighestUserAddress )
      v24 = 0LL;
    *(_QWORD *)(a3 + 24) = v24;
    *(_DWORD *)(a3 + 12) = ((unsigned __int64)(v22 * *(int *)(v21 + 56) + 31) >> 3) & 0xFFFFFFFC;
    if ( (unsigned int)v4 < 0x68 )
    {
LABEL_58:
      if ( v21 )
        DEC_SHARE_REF_CNT(v21);
      goto LABEL_60;
    }
    *(_DWORD *)(a3 + 32) = 40;
    *(_WORD *)(a3 + 46) = 0;
    memset(v29, 0, sizeof(v29));
    v30 = 0;
    DIBitsInternalImpl = GreGetDIBitsInternalImpl(0, (int)v3, 0, 0, (__int64)v29, (void *)(a3 + 32), 0, 0, 104);
    v21 = v32;
    if ( DIBitsInternalImpl )
    {
      v8 = 104;
      if ( (*(_DWORD *)(v32 + 112) & 0x100000) != 0 )
        *(_DWORD *)(a3 + 52) = 0;
    }
    v26 = *(_QWORD *)(v21 + 128);
    if ( v26 )
    {
      v27 = *(_DWORD *)(v26 + 24);
      if ( (v27 & 2) != 0 )
      {
        *(_DWORD *)(a3 + 72) = **(_DWORD **)(v26 + 112);
        *(_DWORD *)(a3 + 76) = *(_DWORD *)(*(_QWORD *)(v26 + 112) + 4LL);
        v5 = *(_DWORD *)(*(_QWORD *)(v26 + 112) + 8LL);
LABEL_57:
        *(_DWORD *)(a3 + 80) = v5;
        *(_QWORD *)(a3 + 88) = *(_QWORD *)(v21 + 184);
        *(_DWORD *)(a3 + 96) = *(_DWORD *)(v21 + 212);
        goto LABEL_58;
      }
      if ( (v27 & 8) != 0 )
        *(_DWORD *)(a3 + 48) = 0;
    }
    *(_QWORD *)(a3 + 72) = 0LL;
    goto LABEL_57;
  }
  v9 = (Gre::Base *)(v6 - 8);
  if ( (_DWORD)v9 )
  {
    v10 = (_DWORD)v9 - 1;
    if ( !v10 )
      return (unsigned int)cjGetLogicalColorSpace((HCOLORSPACE)v3, a2, (void *)a3);
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 6 )
        return (unsigned int)cjGetBrushOrPen(v3, a2, (void *)a3);
      return v8;
    }
    LOBYTE(a2) = 10;
    v12 = HmgShareLock(v3, a2);
    v13 = v12;
    if ( v12 )
    {
      if ( (*(_DWORD *)(v12 + 28) & 1) == 0 )
      {
LABEL_18:
        if ( a3 )
        {
          if ( v4 >= *(unsigned int *)(v13 + 272) )
            LODWORD(v4) = *(_DWORD *)(v13 + 272);
          v8 = v4;
          memmove((void *)a3, (const void *)(v13 + 276), (unsigned int)v4);
        }
        else
        {
          v8 = *(_DWORD *)(v13 + 272);
        }
        if ( v13 )
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v13);
        return v8;
      }
      HDEV = UserGetHDEV();
      v15 = *(_DWORD *)(v13 + 24);
      v16 = (_QWORD *)HDEV;
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v13);
      if ( !v16 )
        return v8;
      v18 = v15 - 4;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 == 1 )
            v3 = (HBRUSH)v16[180];
        }
        else
        {
          v3 = (HBRUSH)v16[179];
        }
      }
      else
      {
        v3 = (HBRUSH)v16[178];
      }
      LOBYTE(v17) = 10;
      v13 = HmgShareLock(v3, v17);
    }
    if ( !v13 )
      return v8;
    goto LABEL_18;
  }
  v8 = 2;
  if ( a3 )
  {
    if ( (int)a2 >= 2 )
    {
      v34 = *((_QWORD *)Gre::Base::Globals(v9) + 5);
      GreAcquireSemaphore(v34);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v33, (HPALETTE)v3);
      v20 = v33;
      if ( v33 )
        *(_WORD *)a3 = *(_WORD *)(v33 + 28);
      else
        v8 = 0;
      if ( v20 )
        DEC_SHARE_REF_CNT(v20);
      SEMOBJ::vUnlock((SEMOBJ *)&v34);
    }
    else
    {
      return 0;
    }
  }
  return v8;
}
