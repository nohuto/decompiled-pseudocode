/*
 * XREFs of ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0092720
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C000AAF0 (-vCleanupDCs@@YAXK@Z.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C003B51C (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     GreCleanDC @ 0x1C00926D0 (GreCleanDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00CBFF0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     GreDCSelectPen @ 0x1C0020D90 (GreDCSelectPen.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0023338 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0028144 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     GreDCSelectBrush @ 0x1C002A5E0 (GreDCSelectBrush.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002B920 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C002C0E0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     INC_SHARE_REF_CNT @ 0x1C002CE70 (INC_SHARE_REF_CNT.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C002D2A0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C002D890 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C002E0A0 (DEC_SHARE_REF_CNT.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007B150 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C007B248 (--0RFONTOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     IsXDCOBJ_vSetDefaultFontSupported @ 0x1C00801B0 (IsXDCOBJ_vSetDefaultFontSupported.c)
 *     XDCOBJ_vSetDefaultFontWrap @ 0x1C0080AB4 (XDCOBJ_vSetDefaultFontWrap.c)
 *     hbmSelectBitmap @ 0x1C00911B0 (hbmSelectBitmap.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00BCB40 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C013C754 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     GreRestoreDC @ 0x1C014D570 (GreRestoreDC.c)
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
  __int64 v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // rdx
  HPALETTE *v14; // rcx
  __int64 v15; // r8
  __int128 v16; // xmm1
  _OWORD *v17; // rcx
  PVOID *p_DeviceObject; // rax
  __int128 v19; // xmm1
  DC *v20; // rdx
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  DC *v24; // r8
  __int64 v25; // rax
  int v26; // ecx
  DC *v27; // rcx
  int v28; // edx
  __int64 v30; // [rsp+40h] [rbp+8h] BYREF
  char v31; // [rsp+50h] [rbp+18h] BYREF

  v4 = *this;
  v5 = *((_QWORD *)v4 + 122);
  v6 = *(_DWORD *)(v5 + 152);
  if ( (v6 & 0x1000) != 0 )
    GreDCSelectBrush((__int64)v4, *(_QWORD *)(v5 + 160));
  if ( (v6 & 0x2000) != 0 )
    GreDCSelectPen(*this, *(_QWORD *)(*((_QWORD *)*this + 122) + 168LL));
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
  *((_WORD *)v7 + 1048) = -1;
  v9 = *this;
  if ( *((_QWORD *)*this + 20) )
  {
    v30 = *((_QWORD *)*this + 20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
    *((_QWORD *)*this + 20) = 0LL;
    v9 = *this;
  }
  if ( *((_QWORD *)v9 + 21) )
  {
    v30 = *((_QWORD *)v9 + 21);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
    *((_QWORD *)*this + 21) = 0LL;
    v9 = *this;
  }
  DC::hpath(v9, 0LL);
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 17));
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 18));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)*this + 19));
  DEC_SHARE_REF_CNT(*((unsigned int **)*this + 12));
  v10 = *this;
  v11 = *((_QWORD *)*this + 37);
  if ( v11 && (DC *)v11 != (DC *)((char *)*this + 264) )
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
  p_DeviceObject = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  do
  {
    *v17 = *(_OWORD *)p_DeviceObject;
    v17[1] = *((_OWORD *)p_DeviceObject + 1);
    v17[2] = *((_OWORD *)p_DeviceObject + 2);
    v17[3] = *((_OWORD *)p_DeviceObject + 3);
    v17[4] = *((_OWORD *)p_DeviceObject + 4);
    v17[5] = *((_OWORD *)p_DeviceObject + 5);
    v17[6] = *((_OWORD *)p_DeviceObject + 6);
    v17 += 8;
    v19 = *((_OWORD *)p_DeviceObject + 7);
    p_DeviceObject += 16;
    *(v17 - 1) = v19;
    --v13;
  }
  while ( v13 );
  *v17 = *(_OWORD *)p_DeviceObject;
  v17[1] = *((_OWORD *)p_DeviceObject + 1);
  v17[2] = *((_OWORD *)p_DeviceObject + 2);
  *(_DWORD *)(*((_QWORD *)*this + 122) + 152LL) |= 0x12001Fu;
  INC_SHARE_REF_CNT(*((unsigned int **)*this + 17));
  INC_SHARE_REF_CNT(*((unsigned int **)*this + 18));
  if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
    XDCOBJ_vSetDefaultFontWrap();
  v20 = *this;
  if ( *((_QWORD *)*this + 6) == *(_QWORD *)(gpDispInfo + 40) )
  {
    **((_DWORD **)v20 + 122) |= 2u;
    v20 = *this;
  }
  v21 = *((_DWORD *)v20 + 63);
  v22 = v21 | 1;
  v23 = v21 & 0xFFFFFFFE;
  if ( !v8 )
    v22 = v23;
  *((_DWORD *)v20 + 63) = v22;
  INC_SHARE_REF_CNT(*((unsigned int **)*this + 12));
  RFONTOBJ::RFONTOBJ((RFONTOBJ *)&v31, *((struct RFONT **)*this + 221));
  *((_QWORD *)*this + 221) = 0LL;
  v24 = *this;
  v25 = *((_DWORD *)*this + 10) & 1;
  v26 = *((_DWORD *)*this + 2 * v25 + 255);
  *((_DWORD *)v24 + 300) = *((_DWORD *)*this + 2 * v25 + 254);
  *((_DWORD *)v24 + 301) = v26;
  DC::vReleaseRao(*this);
  if ( (unsigned int)DC::bDpiScaleTransform(*this) )
  {
    v28 = *((_DWORD *)v27 + 130);
    if ( (v28 & 1) != 0 )
    {
      *((_DWORD *)v27 + 131) = 0;
      *((_DWORD *)v27 + 132) = 0;
      *((_DWORD *)v27 + 133) = 0;
      *((_DWORD *)v27 + 134) = 0;
      *((_DWORD *)v27 + 9) |= 0x10u;
      *((_DWORD *)v27 + 130) = v28 & 0xFFFFFFF8 | 4;
      DC::vUpdateCachedDPIScaleValue(v27);
    }
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v31);
  return 1LL;
}
