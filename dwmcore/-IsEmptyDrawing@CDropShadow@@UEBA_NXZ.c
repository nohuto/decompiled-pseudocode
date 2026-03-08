/*
 * XREFs of ?IsEmptyDrawing@CDropShadow@@UEBA_NXZ @ 0x18012E5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReadyToDraw@CDropShadow@@AEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1802270E0 (-IsReadyToDraw@CDropShadow@@AEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 */

char __fastcall CDropShadow::IsEmptyDrawing(CDropShadow *this)
{
  char v1; // bl
  bool v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0;
  if ( !CDropShadow::IsReadyToDraw(this, 0LL, &v3) || v3 )
    return 1;
  return v1;
}
