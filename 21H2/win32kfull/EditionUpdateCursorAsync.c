/*
 * XREFs of EditionUpdateCursorAsync @ 0x1C01051A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall EditionUpdateCursorAsync(__int64 a1, __int64 a2)
{
  LONG_PTR result; // rax
  void *v3; // rbx
  _OWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+48h] [rbp-10h]

  result = ReferenceDwmApiPort(a1, a2);
  v3 = (void *)result;
  if ( result )
  {
    v6 = 1073741911;
    v5 = 0LL;
    memset(v4, 0, sizeof(v4));
    LODWORD(v4[0]) = 2883588;
    WORD2(v4[0]) = 0x8000;
    LpcRequestPort(result, v4);
    return ObfDereferenceObject(v3);
  }
  return result;
}
