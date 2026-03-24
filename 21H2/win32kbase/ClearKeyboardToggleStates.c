/*
 * XREFs of ClearKeyboardToggleStates @ 0x1C00993C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

__int64 ClearKeyboardToggleStates()
{
  unsigned int v0; // r9d
  __int64 v1; // r8
  __int64 result; // rax
  unsigned int v3; // r9d
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  _BYTE v6[16]; // [rsp+20h] [rbp-28h]

  GetDomainLockRef(16);
  v0 = 0;
  v1 = 0LL;
  do
  {
    ++v0;
    v6[v1] = *((_BYTE *)&gafAsyncKeyState + ((unsigned __int64)byte_1C0212328[v1] >> 2)) & (1 << (2
                                                                                                * (byte_1C0212328[v1] & 3)
                                                                                                + 1));
    ++v1;
  }
  while ( v0 < 0xE );
  for ( result = 0LL; result < 64; result += 16LL )
    *(__int128 *)((char *)&gafAsyncKeyState + result) = (__int128)_mm_and_si128(
                                                                    _mm_loadu_si128((const __m128i *)((char *)&gafAsyncKeyState + result)),
                                                                    (__m128i)_xmm);
  v3 = 0;
  v4 = 0LL;
  do
  {
    if ( v6[v4] )
    {
      v5 = byte_1C0212328[v4];
      result = 2 * (unsigned int)(v5 & 3) + 1;
      *((_BYTE *)&gafAsyncKeyState + (v5 >> 2)) |= 1 << (2 * (v5 & 3) + 1);
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 0xE );
  return result;
}
