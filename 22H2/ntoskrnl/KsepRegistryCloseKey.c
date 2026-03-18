/*
 * XREFs of KsepRegistryCloseKey @ 0x1408465B8
 * Callers:
 *     KsepEngineReadFlags @ 0x140B64DDC (KsepEngineReadFlags.c)
 *     KsepMatchInitBiosInfo @ 0x140B6519C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(dword_140C407DC);
  }
  return result;
}
