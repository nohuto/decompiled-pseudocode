/*
 * XREFs of ?IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z @ 0x1802AC870
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800DECD0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CColorKey::IsColorKey(CColorKey *this, const struct _D3DCOLORVALUE *a2)
{
  float a; // xmm1_4
  float g; // xmm1_4
  float b; // xmm1_4
  bool result; // al

  a = a2->a;
  result = 0;
  if ( a >= *((float *)this + 3)
    && *((float *)this + 7) >= a
    && a2->r >= *(float *)this
    && *((float *)this + 4) >= a2->r )
  {
    g = a2->g;
    if ( g >= *((float *)this + 1) && *((float *)this + 5) >= g )
    {
      b = a2->b;
      if ( b >= *((float *)this + 2) && *((float *)this + 6) >= b )
        return 1;
    }
  }
  return result;
}
