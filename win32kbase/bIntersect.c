/*
 * XREFs of bIntersect @ 0x1C018BD50
 * Callers:
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C018B320 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bIntersect(_DWORD *a1, _DWORD *a2)
{
  return *a1 < a2[2] && a1[1] < a2[3] && a1[2] > *a2 && a1[3] > a2[1];
}
