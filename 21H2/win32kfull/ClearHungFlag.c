/*
 * XREFs of ClearHungFlag @ 0x1C005F8F0
 * Callers:
 *     InternalInvalidate3 @ 0x1C004C894 (InternalInvalidate3.c)
 *     xxxBeginPaint @ 0x1C005E22C (xxxBeginPaint.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00720D0 (xxxSimpleDoSyncPaint.c)
 *     ?xxxHungAppDaemon@@YAXXZ @ 0x1C00765A0 (-xxxHungAppDaemon@@YAXXZ.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00786B0 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 */

__int64 __fastcall ClearHungFlag(struct tagWND *a1, unsigned __int16 a2)
{
  int v3; // edi
  unsigned __int64 v4; // rdx
  int v5; // r9d
  __int64 result; // rax

  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL) & 0x18;
  SetOrClrWF(0LL, a1, a2, 1LL);
  result = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(result + 19) & 0x18) == 0 )
  {
    if ( v3 )
      return VWPLRemoveBase(gpvwplHungRedraw, v4, a1, v5, 0LL);
  }
  return result;
}
