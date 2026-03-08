/*
 * XREFs of ?IsOfType@CRadialGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C2560
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C23E4 (-IsOfType@CGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CRadialGradientBrush::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 137 )
    return 1;
  v2 = CGradientBrush::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
