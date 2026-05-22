/*
 * XREFs of ?AddRef@InputStateManager@@UEAAKXZ @ 0x18001BC20
 * Callers:
 *     ?AddRef@DWMLegacyInputTarget@@W7EAAKXZ @ 0x18004B4D0 (-AddRef@DWMLegacyInputTarget@@W7EAAKXZ.c)
 *     ?AddRef@InputStateManager@@WBA@EAAKXZ @ 0x18004B4E0 (-AddRef@InputStateManager@@WBA@EAAKXZ.c)
 *     ?AddRef@InputRedirectionProcessor@@WBI@EAAKXZ @ 0x18004B4F0 (-AddRef@InputRedirectionProcessor@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::AddRef(InputStateManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
