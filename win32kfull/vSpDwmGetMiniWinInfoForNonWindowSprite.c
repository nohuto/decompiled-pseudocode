/*
 * XREFs of vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C012957C
 * Callers:
 *     bSetDevDragRect @ 0x1C001DE80 (bSetDevDragRect.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C002A9BC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C004EEA0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     bSetDevPreviewRect @ 0x1C0286B70 (bSetDevPreviewRect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vSpDwmGetMiniWinInfoForNonWindowSprite(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  if ( a2 )
  {
    v2 = *a2;
    *(_OWORD *)a1 = *a2;
    *(_OWORD *)(a1 + 16) = v2;
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  result = gdwRitInputDesktopId;
  *(_QWORD *)(a1 + 48) = gdwRitInputDesktopId;
  return result;
}
