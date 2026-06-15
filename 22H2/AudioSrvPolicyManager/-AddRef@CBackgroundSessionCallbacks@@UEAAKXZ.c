/*
 * XREFs of ?AddRef@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x18000A450
 * Callers:
 *     ?AddRef@CPlaybackManager@@WBA@EAAKXZ @ 0x180019790 (-AddRef@CPlaybackManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CProcess@@WBI@EAAKXZ @ 0x1800197B0 (-AddRef@CProcess@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBackgroundSessionCallbacks::AddRef(CBackgroundSessionCallbacks *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
