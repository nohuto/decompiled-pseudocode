/*
 * XREFs of KsepRegistryCloseKey @ 0x1407BEFF4
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x140A6A22C (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A6A47C (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(dword_140C2AA9C);
  }
  return result;
}
