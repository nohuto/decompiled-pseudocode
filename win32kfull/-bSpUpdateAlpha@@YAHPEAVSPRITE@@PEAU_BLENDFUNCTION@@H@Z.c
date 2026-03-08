/*
 * XREFs of ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C02813A8
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0056EF0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSpUpdateAlpha(struct SPRITE *a1, struct _BLENDFUNCTION *a2, int a3)
{
  unsigned int v4; // r9d
  int v5; // r8d
  __int64 v6; // rax

  v4 = 0;
  if ( !a2->BlendOp && !a2->BlendFlags && (a2->AlphaFormat & 0xFE) == 0 )
  {
    v5 = *((_DWORD *)a1 + 1);
    if ( (v5 & 2) != 0 || !*((_QWORD *)a1 + 16) )
    {
      v4 = 1;
      if ( a3 )
        *((_BYTE *)a1 + 202) = a2->SourceConstantAlpha;
      else
        *((struct _BLENDFUNCTION *)a1 + 50) = *a2;
      v6 = *((_QWORD *)a1 + 2);
      *((_DWORD *)a1 + 1) = v5 & 0xFFFFFFF9 | 2;
      if ( *(_DWORD *)(v6 + 108) <= 3u || (a2->AlphaFormat & 1) == 0 && a2->SourceConstantAlpha == 0xFF )
        *(_DWORD *)a1 |= 8u;
      else
        *(_DWORD *)a1 &= ~8u;
    }
  }
  return v4;
}
