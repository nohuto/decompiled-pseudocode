/*
 * XREFs of EditionUpdateCursorAsync @ 0x1C00D3C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall EditionUpdateCursorAsync(__int64 a1)
{
  LONG_PTR result; // rax
  void *v2; // rbx
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+48h] [rbp-10h]

  result = ReferenceDwmApiPort(a1);
  v2 = (void *)result;
  if ( result )
  {
    v5 = 1073741912;
    v4 = 0LL;
    memset(v3, 0, sizeof(v3));
    LODWORD(v3[0]) = 2883588;
    WORD2(v3[0]) = 0x8000;
    LpcRequestPort(result, v3);
    return ObfDereferenceObject(v2);
  }
  return result;
}
