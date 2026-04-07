/*
 * XREFs of floorf_0 @ 0x180057E36
 * Callers:
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001D520 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001DAE0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18002C058 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18003DD04 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     DwmpCalculateColorizationColor @ 0x18003E5F8 (DwmpCalculateColorizationColor.c)
 *     PacksRGBColor @ 0x180088DB0 (PacksRGBColor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf_0(float X)
{
  return floorf(X);
}
