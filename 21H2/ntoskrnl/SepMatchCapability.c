/*
 * XREFs of SepMatchCapability @ 0x140244144
 * Callers:
 *     SepMaximumAccessCheck @ 0x1402F9680 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1402FB0E0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140384600 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14038473C (SepNormalAccessCheckEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x1402FD65C (SepSidInTokenSidHash.c)
 */

_BYTE *__fastcall SepMatchCapability(__int64 a1, int a2, __int64 a3, int a4, _BYTE *a5, _DWORD *a6)
{
  _BYTE *result; // rax
  char v9; // [rsp+20h] [rbp-18h]
  char v10; // [rsp+28h] [rbp-10h]

  v10 = 0;
  v9 = 1;
  result = (_BYTE *)SepSidInTokenSidHash(a1 + 808, 0LL, a3, 0LL, v9, v10);
  if ( (_BYTE)result )
  {
    *a6 |= a4 & a2;
    result = a5;
    *a5 = 1;
  }
  return result;
}
