/*
 * XREFs of ?IsTokenManagerReady@CTokenManager@@UEAAHXZ @ 0x1C0014CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CTokenManager::IsTokenManagerReady(CTokenManager *this)
{
  return *((_QWORD *)this + 3) != 0LL;
}
