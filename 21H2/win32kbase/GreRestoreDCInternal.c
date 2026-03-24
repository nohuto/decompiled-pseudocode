/*
 * XREFs of GreRestoreDCInternal @ 0x1C00CC090
 * Callers:
 *     GreRestoreDC @ 0x1C014D570 (GreRestoreDC.c)
 * Callees:
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00203D0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     GreDCSelectPen @ 0x1C0020D90 (GreDCSelectPen.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0021480 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0028144 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C002827C (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C002A5A8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     GreDCSelectBrush @ 0x1C002A5E0 (GreDCSelectBrush.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C002A988 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C002C0E0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C002CBA0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C002D2A0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C002D890 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C002E0A0 (DEC_SHARE_REF_CNT.c)
 *     HmgPentryFromPobj @ 0x1C002E5D0 (HmgPentryFromPobj.c)
 *     GreUnlockVisRgn @ 0x1C0038AB0 (GreUnlockVisRgn.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0038B54 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreLockVisRgn @ 0x1C0038CD0 (GreLockVisRgn.c)
 *     EngAcquireSemaphore @ 0x1C0038DC0 (EngAcquireSemaphore.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003B478 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C003B4A4 (--0DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003B4D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005CD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C007B060 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C007EB48 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     HmgLockIgnoreOwner @ 0x1C0080480 (HmgLockIgnoreOwner.c)
 *     vRestoreRegion @ 0x1C00848B0 (vRestoreRegion.c)
 *     hbmSelectBitmap @ 0x1C00911B0 (hbmSelectBitmap.c)
 *     EngSetLastError @ 0x1C009E670 (EngSetLastError.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00C9B94 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00C9CDC (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C013C440 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 */

__int64 __fastcall GreRestoreDCInternal(HDC a1, int a2, int a3, int a4)
{
  int v8; // r8d
  DC *v9; // rsi
  unsigned int v10; // edi
  int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // rbx
  int v18; // r15d
  int v19; // esi
  int v20; // eax
  unsigned int *v21; // rcx
  int v22; // eax
  DC *v23; // rcx
  DC *v24; // rdx
  __int64 v25; // rax
  DC *v26; // rcx
  DC *v27; // rcx
  int v28; // edx
  __int64 v29; // r8
  int v30; // eax
  int v31; // ecx
  unsigned int v32; // ecx
  __int64 v33; // rdx
  int v34; // r8d
  ULONG v35; // ecx
  DC *v37[6]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v38; // [rsp+68h] [rbp-19h] BYREF
  HSEMAPHORE v39; // [rsp+70h] [rbp-11h] BYREF
  DC *v40[6]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v41; // [rsp+A8h] [rbp+27h] BYREF
  char v42; // [rsp+B0h] [rbp+2Fh]

  DCOBJ::DCOBJ((DCOBJ *)v37, a1);
  v9 = v37[0];
  v10 = 0;
  v11 = 1;
  if ( !v37[0] || !a3 && (*(_DWORD *)(HmgPentryFromPobj((_DWORD *)v37[0]) + 8) & 0xFFFFFFFE) == 0 )
  {
    v35 = 6;
    goto LABEL_69;
  }
  if ( !a4 || (v12 = *((unsigned __int16 *)v9 + 6), (unsigned __int16)v12 <= 1u) )
  {
    v15 = *((_QWORD *)v9 + 122);
    v16 = *(_DWORD *)(v15 + 152);
    if ( (v16 & 0x1000) != 0 )
    {
      GreDCSelectBrush((__int64)v9, *(_QWORD *)(v15 + 160));
      v9 = v37[0];
    }
    if ( (v16 & 0x2000) != 0 )
    {
      GreDCSelectPen(v9, *(_QWORD *)(*((_QWORD *)v9 + 122) + 168LL));
      v9 = v37[0];
    }
    if ( a2 < 0 )
      a2 += *((_DWORD *)v9 + 26);
    if ( a2 >= 1 && a2 < *((_DWORD *)v9 + 26) )
    {
      v17 = *((_QWORD *)v9 + 6);
      if ( (*(_DWORD *)(v17 + 40) & 1) != 0 )
      {
        GreLockVisRgn(*((_QWORD *)v9 + 6), v15, v8);
        v9 = v37[0];
      }
      v18 = *((_DWORD *)v9 + 9) & 0x800;
      if ( v18 )
      {
        DC::bMakeInfoDC(v9, 0);
        v9 = v37[0];
      }
      v19 = *(_DWORD *)(*((_QWORD *)v9 + 122) + 104LL);
      while ( 1 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v40);
        v40[0] = (DC *)HmgLockIgnoreOwner(*((_QWORD *)v37[0] + 14), 1);
        if ( !v40[0] )
          break;
        DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v37[0] + 17));
        DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v37[0] + 18));
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)v37[0] + 19));
        DEC_SHARE_REF_CNT(*((unsigned int **)v37[0] + 12));
        vRestoreRegion((__int64)v37);
        if ( qword_1C0256340 )
          v20 = qword_1C0256340();
        else
          v20 = -1073741637;
        if ( v20 >= 0 && qword_1C0256348 )
          qword_1C0256348(v37, (unsigned int)(*((_DWORD *)v37[0] + 26) - 1));
        v21 = (unsigned int *)*((_QWORD *)v37[0] + 62);
        if ( v21 )
        {
          if ( *((_DWORD *)v37[0] + 8) == 1 )
          {
            hbmSelectBitmap(a1, (HBITMAP)gahStockObjects[21], 1, 0);
          }
          else
          {
            v22 = v21[28];
            if ( (v22 & 0x800) != 0 )
            {
              DEC_SHARE_REF_CNT(v21);
            }
            else if ( v22 >= 0 )
            {
              SURFACE::vDec_cRef((SURFACE *)v21);
            }
          }
        }
        v39 = ghsemPalette;
        EngAcquireSemaphore(ghsemPalette);
        v23 = v40[0];
        v24 = v37[0];
        if ( *((_QWORD *)v37[0] + 10) != *((_QWORD *)v40[0] + 10) )
        {
          SelectPaletteWorker((struct XDCOBJ *)v37, *((HPALETTE *)v40[0] + 10), 1);
          v24 = v37[0];
          v23 = v40[0];
        }
        if ( *((_QWORD *)v24 + 11) != *((_QWORD *)v23 + 11) )
        {
          EPALOBJ::EPALOBJ((EPALOBJ *)&v38, *((HPALETTE *)v24 + 10));
          *((_QWORD *)v40[0] + 11) = v38;
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v38);
          v23 = v40[0];
        }
        v25 = *((_QWORD *)v23 + 11);
        if ( (struct PALETTE *)v25 != ppalDefault )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v25 + 56));
          v23 = v40[0];
        }
        DC::vCopyTo(v23, v37);
        XDCOBJ::bDeleteDC(v40, 0);
        SEMOBJ::vUnlock((PERESOURCE *)&v39);
        DCOBJ::~DCOBJ((DCOBJ *)v40);
        v26 = v37[0];
        if ( a2 >= *((_DWORD *)v37[0] + 26) )
          goto LABEL_46;
      }
      EngSetLastError(6u);
      v11 = 0;
      DCOBJ::~DCOBJ((DCOBJ *)v40);
      v26 = v37[0];
LABEL_46:
      if ( v19 != *(_DWORD *)(*((_QWORD *)v26 + 122) + 104LL) )
      {
        *((_DWORD *)v26 + 63) |= 1u;
        v26 = v37[0];
      }
      if ( v18 )
      {
        DC::bMakeInfoDC(v26, 1);
        v26 = v37[0];
      }
      DC::vReleaseRao(v26);
      DC::AcquireDcVisRgnShared(v37[0], (__int64)&v41);
      DC::vUpdate_VisRect(v37[0], *((__m128i **)v37[0] + 143));
      if ( v42 )
        CPushLock::ReleaseLock((CPushLock *)(v41 + 1112));
      *(_DWORD *)(*((_QWORD *)v37[0] + 122) + 152LL) |= 0x12001Fu;
      v27 = v37[0];
      if ( *((_DWORD *)v37[0] + 8) == 1 )
      {
        DC::bSetDefaultRegion(v37[0]);
        v27 = v37[0];
      }
      v28 = *((_DWORD *)v27 + 9);
      v29 = *((_QWORD *)v27 + 62);
      if ( (v28 & 1) != 0
        || *((_DWORD *)v27 + 8) == 1
        && v29
        && ((v30 = *(_DWORD *)(v29 + 112), (v30 & 0x4000) != 0)
         || (v30 & 0x800000) != 0 && (*(_DWORD *)(v17 + 40) & 1) != 0) )
      {
        *((_DWORD *)v27 + 9) = v28 | 0x200;
        v31 = *((_DWORD *)v37[0] + 9);
        if ( (*(_DWORD *)(v29 + 112) & 0x200) != 0 )
          v32 = v31 | 0x8000;
        else
          v32 = v31 & 0xFFFF7FFF;
        *((_DWORD *)v37[0] + 9) = v32;
      }
      else
      {
        *((_DWORD *)v27 + 9) = v28 & 0xFFFFFDFF;
      }
      DC::vCalcFillOrigin(v37[0]);
      if ( (*(_DWORD *)(v17 + 40) & 1) != 0 )
        GreUnlockVisRgn(v17, v33, v34);
      goto LABEL_70;
    }
    v35 = 87;
LABEL_69:
    EngSetLastError(v35);
    v11 = 0;
LABEL_70:
    v10 = v11;
    goto LABEL_71;
  }
  v13 = *((_QWORD *)v9 + 6);
  if ( v13 )
    v14 = *(_DWORD *)(v13 + 40);
  else
    v14 = 0;
  TraceLoggingWriteUnsupportedGdiUsage(8LL, v14, v12, 0LL, 0LL);
LABEL_71:
  DCOBJ::~DCOBJ((DCOBJ *)v37);
  return v10;
}
