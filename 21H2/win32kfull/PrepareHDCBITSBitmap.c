/*
 * XREFs of PrepareHDCBITSBitmap @ 0x1C00C37D8
 * Callers:
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C00B967C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 *     xxxDrawMenuItem @ 0x1C00BE508 (xxxDrawMenuItem.c)
 *     BitBltSysBmp @ 0x1C00C2FD4 (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C014C140 (NtUserBitBltSysBmp.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0242E14 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0246DE4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C00671E0 (GetDpiCacheSlot.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C00BF48C (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     GreGetDCDpiScaleValue @ 0x1C00C3E00 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall PrepareHDCBITSBitmap(HDC a1, __int64 a2)
{
  int DpiForSystem; // eax
  unsigned int DpiCacheSlot; // esi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  int DCDpiScaleValue; // eax

  DpiForSystem = GetDpiForSystem((__int64)a1, a2);
  DpiCacheSlot = GetDpiCacheSlot(DpiForSystem);
  v5 = 0LL;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v7, v6) & 0xF) == 0 )
  {
    if ( a1 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
        DpiCacheSlot = GetDpiCacheSlot(96 * DCDpiScaleValue);
    }
  }
  v8 = 760LL * DpiCacheSlot;
  v9 = *(_QWORD *)((char *)&gOemBitmapSet + v8);
  if ( v9 || (CreateDPIBitmapStrip(DpiCacheSlot), (v9 = *(_QWORD *)((char *)&gOemBitmapSet + v8)) != 0) )
  {
    v5 = *(_QWORD *)(gpDispInfo + 64LL);
    GreSelectBitmap(v5, v9);
  }
  return v5;
}
