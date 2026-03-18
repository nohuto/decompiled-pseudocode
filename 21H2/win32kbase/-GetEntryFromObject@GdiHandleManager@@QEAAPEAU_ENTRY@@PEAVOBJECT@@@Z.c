/*
 * XREFs of ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0021CD0
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C001783C (-vCleanupDCs@@YAXK@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0018268 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001E8AC (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C001E9A4 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveObject @ 0x1C001F4E0 (HmgRemoveObject.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00201E0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0020AE0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0024CD8 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C0026498 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C0064500 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008E200 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiCreateRectRgn @ 0x1C008E4C0 (NtGdiCreateRectRgn.c)
 *     HmgIsObjectOwnedByW32Pid @ 0x1C0093110 (HmgIsObjectOwnedByW32Pid.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C00C1628 (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x1C0169940 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C016D4E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

struct _ENTRY *__fastcall GdiHandleManager::GetEntryFromObject(GdiHandleEntryDirectory **this, struct OBJECT *a2)
{
  unsigned int v4; // ebx
  GdiHandleEntryDirectory *v5; // r15
  unsigned int v6; // edx
  __int64 v7; // r8
  unsigned int v8; // eax
  struct OBJECT *v9; // rbp
  __int64 v10; // rsi
  unsigned int v11; // edx
  __int64 v12; // rax

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
  if ( v4 >= v6 + ((*((unsigned __int16 *)v5 + 1) + 0xFFFF) << 16) )
  {
    v9 = 0LL;
    v10 = 0LL;
  }
  else
  {
    if ( v4 >= v6 )
    {
      v7 = *((_QWORD *)v5 + ((v4 - v6) >> 16) + 2);
      v8 = v4 + -65536 * ((v4 - v6) >> 16) - v6;
    }
    else
    {
      v7 = *((_QWORD *)v5 + 1);
      v8 = v4;
    }
    v9 = 0LL;
    v10 = 0LL;
    if ( v8 < *(_DWORD *)(v7 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v7 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                   + 16LL * (unsigned __int8)v8
                   + 8) )
    {
      v10 = *(_QWORD *)v7 + 24LL * v8;
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
  v11 = *((_DWORD *)v5 + 514);
  if ( v4 < v11 + ((*((unsigned __int16 *)v5 + 1) + 0xFFFF) << 16) )
  {
    if ( v4 >= v11 )
    {
      v12 = *((_QWORD *)v5 + ((v4 - v11) >> 16) + 2);
      v4 += -65536 * ((v4 - v11) >> 16) - v11;
    }
    else
    {
      v12 = *((_QWORD *)v5 + 1);
    }
    if ( v4 < *(_DWORD *)(v12 + 20) )
      v9 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v4 >> 8))
                             + 16LL * (unsigned __int8)v4
                             + 8);
  }
  if ( v9 == a2 )
    return (struct _ENTRY *)v10;
  else
    return 0LL;
}
