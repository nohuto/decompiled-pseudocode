/*
 * XREFs of ULongMult @ 0x1C01B0354
 * Callers:
 *     SfnINLPCREATESTRUCT @ 0x1C0023990 (SfnINLPCREATESTRUCT.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongMult(ULONG ulMultiplicand, ULONG ulMultiplier, ULONG *pulResult)
{
  unsigned __int64 v3; // r9
  ULONG v4; // ecx

  v3 = ulMultiplier * (unsigned __int64)ulMultiplicand;
  v4 = -1;
  if ( v3 <= 0xFFFFFFFF )
    v4 = v3;
  *pulResult = v4;
  return v3 > 0xFFFFFFFF ? 0x80070216 : 0;
}
