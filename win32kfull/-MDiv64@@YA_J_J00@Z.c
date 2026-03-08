/*
 * XREFs of ?MDiv64@@YA_J_J00@Z @ 0x1C0017A70
 * Callers:
 *     ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C00175F0 (-bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECT.c)
 *     ?bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z @ 0x1C028EFD4 (-bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MDiv64(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 result; // rax

  v3 = 0;
  result = 0LL;
  if ( a1 && a2 )
  {
    if ( a1 >= 0 )
    {
      if ( a2 >= 0 )
        goto LABEL_9;
      a2 = -a2;
    }
    else
    {
      a1 = -a1;
    }
    v3 = 1;
LABEL_9:
    result = (a2 * a1 - v3) / a3;
    if ( v3 )
      return ~result;
  }
  return result;
}
