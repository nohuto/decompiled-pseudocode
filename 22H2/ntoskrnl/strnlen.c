/*
 * XREFs of strnlen @ 0x1403DAF60
 * Callers:
 *     EtwpGetEventNameFromEventMetadata @ 0x14046A996 (EtwpGetEventNameFromEventMetadata.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406BE544 (EtwpSetProviderTraitsCommon.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1406BE800 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAllocateEventNameFilter @ 0x1409F462C (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     <none>
 */

size_t __cdecl strnlen(const char *Str, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Str )
  {
    if ( !*Str )
      break;
    ++result;
  }
  return result;
}
