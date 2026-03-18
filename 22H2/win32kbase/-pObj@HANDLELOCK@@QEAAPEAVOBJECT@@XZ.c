/*
 * XREFs of ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C00440F0
 * Callers:
 *     HmgUnlock @ 0x1C000B4A8 (HmgUnlock.c)
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00408D0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgLockEx @ 0x1C0043B50 (HmgLockEx.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0045680 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0046E44 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     HmgLockIgnoreOwner @ 0x1C005C9F0 (HmgLockIgnoreOwner.c)
 *     GreSetBrushOwner @ 0x1C00601D0 (GreSetBrushOwner.c)
 *     HmgFree @ 0x1C0088BA0 (HmgFree.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C008B090 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgMarkLazyDelete @ 0x1C0094880 (HmgMarkLazyDelete.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C00AC70C (HmgShareLockIgnoreStockBit.c)
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0158E5C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C0159680 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
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
