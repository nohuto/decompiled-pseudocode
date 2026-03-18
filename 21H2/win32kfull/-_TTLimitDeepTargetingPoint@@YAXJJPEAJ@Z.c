/*
 * XREFs of ?_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z @ 0x1C025C03C
 * Callers:
 *     TouchTargetingRankForRectDeep @ 0x1C025CF50 (TouchTargetingRankForRectDeep.c)
 * Callees:
 *     _TTHmToPixels @ 0x1C016E604 (_TTHmToPixels.c)
 *     _TTPixelsToHm @ 0x1C016E64A (_TTPixelsToHm.c)
 */

void __fastcall _TTLimitDeepTargetingPoint(int a1, int a2, int *a3)
{
  int v3; // edi
  int v5; // eax
  int v6; // r10d
  _DWORD *v7; // r11
  int v8; // edx

  v3 = *a3;
  if ( (int)TTPixelsToHm(abs32(a1 - *a3), a2) > 200 )
  {
    v5 = TTHmToPixels(200, a2);
    v8 = v6 - v5;
    if ( v6 <= v3 )
      v8 = v5 + v6;
    *v7 = v8;
  }
}
