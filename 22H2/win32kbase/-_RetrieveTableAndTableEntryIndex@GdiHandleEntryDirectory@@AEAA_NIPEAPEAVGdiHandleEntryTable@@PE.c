/*
 * XREFs of ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0044240
 * Callers:
 *     HmgReplaceObject @ 0x1C003C700 (HmgReplaceObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0046370 (--1SURFMEM@@QEAA@XZ.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C0047C58 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C0159680 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     <none>
 */

char __fastcall GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(
        GdiHandleEntryDirectory *this,
        unsigned int a2,
        struct GdiHandleEntryTable **a3,
        unsigned int *a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // r11d
  __int64 v7; // rdx

  v4 = a2;
  v5 = *((_DWORD *)this + 514);
  if ( a2 >= v5 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0;
  if ( a2 >= v5 )
  {
    v7 = ((a2 - v5) >> 16) + 1;
    *a3 = (struct GdiHandleEntryTable *)*((_QWORD *)this + v7 + 1);
    v4 += ((1 - (_DWORD)v7) << 16) - v5;
  }
  else
  {
    *a3 = (struct GdiHandleEntryTable *)*((_QWORD *)this + 1);
  }
  *a4 = v4;
  return 1;
}
