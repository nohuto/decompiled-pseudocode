/*
 * XREFs of ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C001783C (-vCleanupDCs@@YAXK@Z.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002EB80 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     GreCleanDC @ 0x1C009C3E0 (GreCleanDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00DBCF0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C001AE70 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     GreDCSelectBrush @ 0x1C001DC40 (GreDCSelectBrush.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C001FD30 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     INC_SHARE_REF_CNT @ 0x1C0020410 (INC_SHARE_REF_CNT.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0020AE0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0021290 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0021390 (DEC_SHARE_REF_CNT.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0023D60 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0031718 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0087050 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C0087148 (--0RFONTOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     IsXDCOBJ_vSetDefaultFontSupported @ 0x1C008F168 (IsXDCOBJ_vSetDefaultFontSupported.c)
 *     XDCOBJ_vSetDefaultFontWrap @ 0x1C008F2E0 (XDCOBJ_vSetDefaultFontWrap.c)
 *     GreDCSelectPen @ 0x1C0098770 (GreDCSelectPen.c)
 *     hbmSelectBitmap @ 0x1C009A990 (hbmSelectBitmap.c)
 *     GreRestoreDC @ 0x1C00BEF90 (GreRestoreDC.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00CB7C0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0169B88 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

__int64 __fastcall XDCOBJ::bCleanDC(DC **this, int a2)
{
  DC *v4; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  DC *v7; // rcx
  BOOL v8; // ebp
  DC *v9; // rcx
  DC *v10; // rdx
  char *v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // rdx
  HPALETTE *v14; // rcx
  __int64 v15; // r8
  __int128 v16; // xmm1
  _OWORD *v17; // rcx
  PKDPC *p_BufferChainingDpc; // rax
  __int128 v19; // xmm1
  __int64 v20; // rbx
  DC *v21; // rdx
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  DC *v25; // r8
  __int64 v26; // rax
  int v27; // ecx
  DC *v28; // rcx
  int v29; // edx
  __int64 v31; // [rsp+40h] [rbp+8h] BYREF
  char v32; // [rsp+50h] [rbp+18h] BYREF

  v4 = *this;
  v5 = *((_QWORD *)v4 + 122);
  v6 = *(_DWORD *)(v5 + 152);
  if ( (v6 & 0x1000) != 0 )
    GreDCSelectBrush((__int64)v4, *(_QWORD *)(v5 + 160));
  if ( (v6 & 0x2000) != 0 )
    GreDCSelectPen(*this);
  v7 = *this;
  v8 = *(_DWORD *)(*((_QWORD *)*this + 122) + 104LL) != 1 || (*((_DWORD *)v7 + 63) & 1) != 0;
  if ( *((int *)v7 + 26) > 1 )
  {
    GreRestoreDC(*(_QWORD *)v7, 1LL);
    v7 = *this;
  }
  if ( *((struct PALETTE **)v7 + 11) != ppalDefault )
  {
    SelectPaletteWorker((struct XDCOBJ *)this, dclevelDefault, 1);
    v7 = *this;
  }
  if ( *((_DWORD *)v7 + 8) == 1 )
  {
    hbmSelectBitmap(*(HDC *)v7, (HBITMAP)gahStockObjects[21], 1, a2);
    *((_DWORD *)*this + 9) &= ~0x1000u;
    v7 = *this;
  }
  *((_WORD *)v7 + 1044) = -1;
  v9 = *this;
  if ( *((_QWORD *)*this + 20) )
  {
    v31 = *((_QWORD *)*this + 20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
    *((_QWORD *)*this + 20) = 0LL;
    v9 = *this;
  }
  if ( *((_QWORD *)v9 + 21) )
  {
    v31 = *((_QWORD *)v9 + 21);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
    *((_QWORD *)*this + 21) = 0LL;
    v9 = *this;
  }
  DC::hpath(v9, 0LL);
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 17));
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 18));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)*this + 19));
  DEC_SHARE_REF_CNT(*((unsigned int **)*this + 12));
  v10 = *this;
  v11 = (char *)*((_QWORD *)*this + 37);
  if ( v11 && v11 != (char *)*this + 264 )
  {
    Win32FreePool(v11);
    *((_QWORD *)*this + 37) = 0LL;
    v10 = *this;
  }
  v12 = (_OWORD *)((char *)v10 + 80);
  v13 = 3LL;
  v14 = &dclevelDefault;
  v15 = 3LL;
  do
  {
    *v12 = *(_OWORD *)v14;
    v12[1] = *((_OWORD *)v14 + 1);
    v12[2] = *((_OWORD *)v14 + 2);
    v12[3] = *((_OWORD *)v14 + 3);
    v12[4] = *((_OWORD *)v14 + 4);
    v12[5] = *((_OWORD *)v14 + 5);
    v12[6] = *((_OWORD *)v14 + 6);
    v12 += 8;
    v16 = *((_OWORD *)v14 + 7);
    v14 += 16;
    *(v12 - 1) = v16;
    --v15;
  }
  while ( v15 );
  *v12 = *(_OWORD *)v14;
  v12[1] = *((_OWORD *)v14 + 1);
  v17 = (_OWORD *)*((_QWORD *)*this + 122);
  p_BufferChainingDpc = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  do
  {
    *v17 = *(_OWORD *)p_BufferChainingDpc;
    v17[1] = *((_OWORD *)p_BufferChainingDpc + 1);
    v17[2] = *((_OWORD *)p_BufferChainingDpc + 2);
    v17[3] = *((_OWORD *)p_BufferChainingDpc + 3);
    v17[4] = *((_OWORD *)p_BufferChainingDpc + 4);
    v17[5] = *((_OWORD *)p_BufferChainingDpc + 5);
    v17[6] = *((_OWORD *)p_BufferChainingDpc + 6);
    v17 += 8;
    v19 = *((_OWORD *)p_BufferChainingDpc + 7);
    p_BufferChainingDpc += 16;
    *(v17 - 1) = v19;
    --v13;
  }
  while ( v13 );
  *v17 = *(_OWORD *)p_BufferChainingDpc;
  v17[1] = *((_OWORD *)p_BufferChainingDpc + 1);
  v17[2] = *((_OWORD *)p_BufferChainingDpc + 2);
  *(_DWORD *)(*((_QWORD *)*this + 122) + 152LL) |= 0x12001Fu;
  INC_SHARE_REF_CNT(*((unsigned int **)*this + 17));
  INC_SHARE_REF_CNT(*((unsigned int **)*this + 18));
  v20 = *((_QWORD *)*this + 6);
  if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
    XDCOBJ_vSetDefaultFontWrap(this, *(_DWORD *)(v20 + 40) & 1);
  v21 = *this;
  if ( *((_QWORD *)*this + 6) == *((_QWORD *)gpDispInfo + 5) )
  {
    **((_DWORD **)v21 + 122) |= 2u;
    v21 = *this;
  }
  v22 = *((_DWORD *)v21 + 63);
  v23 = v22 | 1;
  v24 = v22 & 0xFFFFFFFE;
  if ( !v8 )
    v23 = v24;
  *((_DWORD *)v21 + 63) = v23;
  INC_SHARE_REF_CNT(*((unsigned int **)*this + 12));
  RFONTOBJ::RFONTOBJ((RFONTOBJ *)&v32, *((struct RFONT **)*this + 220));
  *((_QWORD *)*this + 220) = 0LL;
  v25 = *this;
  v26 = *((_DWORD *)*this + 10) & 1;
  v27 = *((_DWORD *)*this + 2 * v26 + 255);
  *((_DWORD *)v25 + 298) = *((_DWORD *)*this + 2 * v26 + 254);
  *((_DWORD *)v25 + 299) = v27;
  DC::vReleaseRao(*this);
  if ( (unsigned int)DC::bDpiScaleTransform(*this) )
  {
    v29 = *((_DWORD *)v28 + 130);
    if ( (v29 & 1) != 0 )
    {
      *((_DWORD *)v28 + 131) = 0;
      *((_DWORD *)v28 + 132) = 0;
      *((_DWORD *)v28 + 133) = 0;
      *((_DWORD *)v28 + 134) = 0;
      *((_DWORD *)v28 + 9) |= 0x10u;
      *((_DWORD *)v28 + 130) = v29 & 0xFFFFFFF8 | 4;
      DC::vUpdateCachedDPIScaleValue(v28);
    }
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
  return 1LL;
}
