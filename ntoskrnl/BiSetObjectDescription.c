/*
 * XREFs of BiSetObjectDescription @ 0x14082BB8C
 * Callers:
 *     BiCreateObject @ 0x14082CA14 (BiCreateObject.c)
 * Callees:
 *     BiSetRegistryValue @ 0x14082D198 (BiSetRegistryValue.c)
 *     BiCreateKey @ 0x14082D580 (BiCreateKey.c)
 *     BiCloseKey @ 0x14082E938 (BiCloseKey.c)
 */

__int64 __fastcall BiSetObjectDescription(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  result = BiCreateKey(a1, L"Description", 131097LL, 1LL, &v4, &v3);
  if ( (int)result >= 0 )
  {
    BiCloseKey(v4);
    return BiSetRegistryValue(a1, L"Type", L"Description");
  }
  return result;
}
