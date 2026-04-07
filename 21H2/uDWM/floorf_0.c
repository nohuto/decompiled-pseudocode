/*
 * XREFs of floorf_0 @ 0x180058156
 * Callers:
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001DD60 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001E320 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18002C898 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18003DDB4 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     DwmpCalculateColorizationColor @ 0x18003E6A8 (DwmpCalculateColorizationColor.c)
 *     PacksRGBColor @ 0x180089020 (PacksRGBColor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf_0(float X)
{
  return floorf(X);
}
