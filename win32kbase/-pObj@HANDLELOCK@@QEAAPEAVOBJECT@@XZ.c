/*
 * XREFs of ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C004B3B0
 * Callers:
 *     HmgUnlock @ 0x1C0009E98 (HmgUnlock.c)
 *     GreSetBrushOwner @ 0x1C001BD80 (GreSetBrushOwner.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C00438B0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     GreDeleteObject @ 0x1C0043CD0 (GreDeleteObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0045E40 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00466C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0047D20 (NtGdiDeleteObjectApp.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0048B20 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     HmgLockEx @ 0x1C004AED0 (HmgLockEx.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreGetBounds @ 0x1C004D5B0 (GreGetBounds.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C005162C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgSetOwner @ 0x1C00522C0 (HmgSetOwner.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0057B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     HmgFree @ 0x1C0059850 (HmgFree.c)
 *     HmgMarkLazyDelete @ 0x1C00A3410 (HmgMarkLazyDelete.c)
 *     HmgLockIgnoreOwner @ 0x1C00A93E0 (HmgLockIgnoreOwner.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C00BC754 (HmgShareLockIgnoreStockBit.c)
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0185B1C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C0186370 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

struct OBJECT *__fastcall HANDLELOCK::pObj(HANDLELOCK *this)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned int v5; // r9d
  __int64 v6; // r8

  v2 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 8008LL);
  v3 = **(_DWORD **)this & 0xFFFFFF;
  if ( v3 >= 0x10000 )
  {
    if ( *(_DWORD *)v2 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v2 + 16),
                                  (unsigned __int16)v3,
                                  1)
           + 13) == HIWORD(v3) )
        v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)v3;
    }
  }
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
    return 0LL;
  if ( v3 >= v5 )
  {
    v6 = *(_QWORD *)(v4 + 8LL * (((v3 - v5) >> 16) + 1) + 8);
    v3 += -65536 * ((v3 - v5) >> 16) - v5;
  }
  else
  {
    v6 = *(_QWORD *)(v4 + 8);
  }
  if ( v3 >= *(_DWORD *)(v6 + 20) )
    return 0LL;
  else
    return *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v6 + 24) + 8 * ((unsigned __int64)v3 >> 8))
                             + 16LL * (unsigned __int8)v3
                             + 8);
}
