/*
 * XREFs of SepMatchCapability @ 0x1402371FC
 * Callers:
 *     SepNormalAccessCheck @ 0x14035B720 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x14035BFF0 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140373714 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14037383C (SepNormalAccessCheckEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x14026C7E4 (SepSidInTokenSidHash.c)
 */

_BYTE *__fastcall SepMatchCapability(__int64 a1, int a2, __int64 a3, int a4, _BYTE *a5, _DWORD *a6)
{
  _BYTE *result; // rax

  result = (_BYTE *)SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(a1 + 808), 1, 0, 0);
  if ( (_BYTE)result )
  {
    *a6 |= a4 & a2;
    result = a5;
    *a5 = 1;
  }
  return result;
}
