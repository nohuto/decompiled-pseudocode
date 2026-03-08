/*
 * XREFs of TraitsCompare @ 0x14076B1A4
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x140695C68 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 */

int __fastcall TraitsCompare(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 *v3; // rdx

  v2 = *(_WORD *)(a1 + 28);
  v3 = (unsigned __int16 *)(a2 + 28);
  if ( v2 > *v3 )
    return 1;
  if ( v2 < *v3 )
    return -1;
  return memcmp((const void *)(a1 + 28), v3, *(unsigned __int16 *)(a1 + 28));
}
