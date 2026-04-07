/*
 * XREFs of PacksRGBColor @ 0x180089020
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001E320 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 * Callees:
 *     floorf_0 @ 0x180058156 (floorf_0.c)
 */

__int64 __fastcall PacksRGBColor(float *a1, _BYTE *a2)
{
  int v4; // eax
  float v5; // xmm0_4
  int v6; // eax
  float v7; // xmm0_4
  int v8; // eax
  float v9; // xmm0_4
  __int64 result; // rax

  v4 = (int)fminf(floorf_0((float)(*a1 * 255.0) + 0.5), 255.0);
  v5 = a1[1];
  a2[2] = v4;
  v6 = (int)fminf(floorf_0((float)(v5 * 255.0) + 0.5), 255.0);
  v7 = a1[2];
  a2[1] = v6;
  v8 = (int)fminf(floorf_0((float)(v7 * 255.0) + 0.5), 255.0);
  v9 = a1[3];
  *a2 = v8;
  result = (unsigned int)(int)fminf(floorf_0((float)(v9 * 255.0) + 0.5), 255.0);
  a2[3] = result;
  return result;
}
