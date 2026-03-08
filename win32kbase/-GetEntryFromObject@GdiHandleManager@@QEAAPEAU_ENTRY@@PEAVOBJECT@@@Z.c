/*
 * XREFs of ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004A2C0
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0019970 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiCreateRectRgn @ 0x1C001C0B0 (NtGdiCreateRectRgn.c)
 *     GreSelectBitmap @ 0x1C0043B10 (GreSelectBitmap.c)
 *     HmgRemoveObject @ 0x1C0045C70 (HmgRemoveObject.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0048610 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C004E8F0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C00502A0 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0052474 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     GreCreateCompatibleDC @ 0x1C0052510 (GreCreateCompatibleDC.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0054DA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0057B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C006DC30 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C006F338 (-vCleanupDCs@@YAXK@Z.c)
 *     GreSelectPalette @ 0x1C0092ED0 (GreSelectPalette.c)
 *     GreRestoreOwnedDC @ 0x1C00A46A0 (GreRestoreOwnedDC.c)
 *     HmgIsObjectOwnedByW32Pid @ 0x1C00A726C (HmgIsObjectOwnedByW32Pid.c)
 *     ?GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00CD950 (-GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00D27E8 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C017E210 (-GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x1C017F5B0 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C0185BC0 (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0189A30 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C0274CF0 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

struct _ENTRY *__fastcall GdiHandleManager::GetEntryFromObject(GdiHandleEntryDirectory **this, struct OBJECT *a2)
{
  unsigned int v4; // ebx
  GdiHandleEntryDirectory *v5; // r14
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  __int64 v8; // r8
  unsigned int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rax
  struct OBJECT *v12; // rdx

  v4 = (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000;
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)this > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(this[2], (unsigned __int16)*(_DWORD *)a2, 1) + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)*(_DWORD *)a2;
    }
  }
  v5 = this[2];
  v6 = *((_DWORD *)v5 + 514);
  v7 = v6 + ((*((unsigned __int16 *)v5 + 1) + 0xFFFF) << 16);
  if ( v4 >= v7 )
  {
    v10 = 0LL;
  }
  else
  {
    if ( v4 >= v6 )
    {
      v8 = *((_QWORD *)v5 + ((v4 - v6) >> 16) + 2);
      v9 = v4 + -65536 * ((v4 - v6) >> 16) - v6;
    }
    else
    {
      v8 = *((_QWORD *)v5 + 1);
      v9 = v4;
    }
    v10 = 0LL;
    if ( v9 < *(_DWORD *)(v8 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                   + 16LL * (unsigned __int8)v9
                   + 8) )
    {
      v10 = *(_QWORD *)v8 + 24LL * v9;
    }
  }
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)this > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(v5, (unsigned __int16)v4, 1) + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)v4;
    }
  }
  if ( v4 >= v7
    || (v4 >= v6
      ? (v11 = *((_QWORD *)v5 + ((v4 - v6) >> 16) + 2), v4 += -65536 * ((v4 - v6) >> 16) - v6)
      : (v11 = *((_QWORD *)v5 + 1)),
        v4 >= *(_DWORD *)(v11 + 20)) )
  {
    v12 = 0LL;
  }
  else
  {
    v12 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v4 >> 8))
                            + 16LL * (unsigned __int8)v4
                            + 8);
  }
  if ( v12 != a2 )
    return 0LL;
  return (struct _ENTRY *)v10;
}
