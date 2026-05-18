/*
 * XREFs of sub_180012FC0 @ 0x180012FC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008CE44 @ 0x18008CE44 (sub_18008CE44.c)
 */

__int64 __fastcall sub_180012FC0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 16);
  try
  {
    sub_18008CE44(v1, &qword_18020B4B8);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000DC98(retaddr, 109, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
