/*
 * XREFs of bOutOfBounds @ 0x1C02A2130
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C02A2214 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 * Callees:
 *     STROBJ_bEnum @ 0x1C02DD9A0 (STROBJ_bEnum.c)
 */

__int64 __fastcall bOutOfBounds(STROBJ *pstro, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 result; // rax
  BOOL v6; // eax
  __int64 v7; // rdx
  GLYPHBITS *pgb; // r8
  LONG v9; // ecx
  LONG v10; // r9d
  ULONG pc; // [rsp+48h] [rbp+10h] BYREF
  PGLYPHPOS ppgpos; // [rsp+50h] [rbp+18h] BYREF

  v2 = *a2;
  v3 = 0;
  pc = 0;
  ppgpos = 0LL;
  if ( *(float *)(v2 + 140) == 0.0 && *(float *)(v2 + 144) == 0.0 )
    return 0LL;
  do
  {
    v6 = STROBJ_bEnum(pstro, &pc, &ppgpos);
    if ( pc )
    {
      v7 = 0LL;
      while ( 1 )
      {
        pgb = ppgpos[v7].pgdf->pgb;
        if ( pgb )
        {
          v9 = pgb->ptlOrigin.x + ppgpos[v7].ptl.x;
          v10 = ppgpos[v7].ptl.y + pgb->ptlOrigin.y;
          if ( v9 < pstro->rclBkGround.left
            || pgb->sizlBitmap.cx + v9 > pstro->rclBkGround.right
            || v10 < pstro->rclBkGround.top
            || v10 + pgb->sizlBitmap.cy > pstro->rclBkGround.bottom )
          {
            break;
          }
        }
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= pc )
          goto LABEL_14;
      }
      v3 = 1;
    }
LABEL_14:
    ;
  }
  while ( v6 );
  pstro[1].cGlyphs = 0;
  result = v3;
  pstro[1].flAccel = 0;
  return result;
}
