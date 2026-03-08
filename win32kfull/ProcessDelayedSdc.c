/*
 * XREFs of ProcessDelayedSdc @ 0x1C0129370
 * Callers:
 *     PowerOnGdi @ 0x1C0129280 (PowerOnGdi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessDelayedSdc(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  if ( *(_DWORD *)(SGDGetUserGdiSessionState() + 16) && !gProtocolType )
  {
    v3 = SGDGetUserGdiSessionState();
    xxxUserSetDisplayConfig(0LL, 0LL, *(unsigned int *)(v3 + 16), 0LL, grpdeskRitInput, 0, 0LL, 0LL, 0LL, a1, 0LL);
  }
  result = SGDGetUserGdiSessionState();
  *(_DWORD *)(result + 16) = 0;
  return result;
}
