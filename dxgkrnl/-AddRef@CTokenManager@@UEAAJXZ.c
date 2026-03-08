/*
 * XREFs of ?AddRef@CTokenManager@@UEAAJXZ @ 0x1C0019E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTokenManager::AddRef(CTokenManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
