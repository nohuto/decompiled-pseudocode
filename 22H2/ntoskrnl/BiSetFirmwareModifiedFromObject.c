/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x14037431C
 * Callers:
 *     BcdDeleteObject @ 0x140805284 (BcdDeleteObject.c)
 *     BiDeleteElement @ 0x140805C00 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14080669C (BcdSetElementDataWithFlags.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x140374368 (BiSetFirmwareModified.c)
 *     BiOpenStoreKeyFromObject @ 0x1403744EC (BiOpenStoreKeyFromObject.c)
 *     BiCloseKey @ 0x1408077DC (BiCloseKey.c)
 */

__int64 __fastcall BiSetFirmwareModifiedFromObject(void *a1)
{
  __int64 v1; // rdx
  int v2; // edi

  v2 = BiOpenStoreKeyFromObject(a1);
  if ( v2 >= 0 )
  {
    LOBYTE(v1) = 1;
    BiSetFirmwareModified(0LL, v1);
  }
  return (unsigned int)v2;
}
