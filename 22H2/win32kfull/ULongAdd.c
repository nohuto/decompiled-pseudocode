/*
 * XREFs of ULongAdd @ 0x1C0024308
 * Callers:
 *     SfnINLPCREATESTRUCT @ 0x1C0023990 (SfnINLPCREATESTRUCT.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongAdd(ULONG ulAugend, ULONG ulAddend, ULONG *pulResult)
{
  ULONG v3; // eax
  ULONG v4; // edx
  HRESULT result; // eax

  v3 = ulAugend + ulAddend;
  v4 = -1;
  if ( v3 >= ulAugend )
    v4 = v3;
  result = v3 < ulAugend ? 0x80070216 : 0;
  *pulResult = v4;
  return result;
}
