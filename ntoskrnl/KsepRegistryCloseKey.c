/*
 * XREFs of KsepRegistryCloseKey @ 0x140800168
 * Callers:
 *     KsepEngineReadFlags @ 0x140B34F48 (KsepEngineReadFlags.c)
 *     KsepMatchInitBiosInfo @ 0x140B35308 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(dword_140C4039C);
  }
  return result;
}
