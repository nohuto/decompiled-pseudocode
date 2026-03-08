/*
 * XREFs of ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C007F064
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C004EEA0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreUpdateSpriteVisRgn @ 0x1C007ED24 (GreUpdateSpriteVisRgn.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0127FDC (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0128ACC (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0268520 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C0268C70 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     DwmAsyncShowSprite @ 0x1C00248D0 (DwmAsyncShowSprite.c)
 */

void __fastcall vSpDwmUpdateSpriteVisibility(struct DWMSPRITE *a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v4; // rbx
  void *v5; // rax

  v3 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 != (*((_DWORD *)a1 + 35) & 1) )
  {
    *((_DWORD *)a1 + 35) = (unsigned __int8)a2 | *((_DWORD *)a1 + 35) & 0xFFFFFFFE;
    v4 = *(_QWORD *)a1;
    v5 = (void *)UserReferenceDwmApiPort(a1, a2, a3);
    DwmAsyncShowSprite(v5, v4, v3);
  }
}
