/*
 * XREFs of EditionGetInputTransform @ 0x1C01CCAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTransform@InputTransform@@YAHPEBUtagWND@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0007A70 (-GetTransform@InputTransform@@YAHPEBUtagWND@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall EditionGetInputTransform(__int64 a1, const struct tagWND *a2, struct tagINPUT_TRANSFORM *a3)
{
  InputTransform *v3; // rcx
  __int64 result; // rax

  v3 = *(InputTransform **)(a1 + 80);
  if ( v3 )
    return InputTransform::GetTransform(v3, a2, a3);
  return result;
}
