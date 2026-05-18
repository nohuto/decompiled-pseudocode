/*
 * XREFs of sub_180013090 @ 0x180013090
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D54C @ 0x18008D54C (sub_18008D54C.c)
 */

__int64 __fastcall sub_180013090(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 16);
  try
  {
    sub_18008D54C(v1, &qword_18020B478);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000DC98(retaddr, 165, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
