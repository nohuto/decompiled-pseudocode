/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x1405C3A74
 * Callers:
 *     BiDeleteElement @ 0x14078309C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140783EDC (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x14096ED00 (BcdDeleteObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14039AD98 (BiSetFirmwareModified.c)
 *     BiOpenStoreKeyFromObject @ 0x1405C3990 (BiOpenStoreKeyFromObject.c)
 *     BiCloseKey @ 0x14078448C (BiCloseKey.c)
 */

__int64 __fastcall BiSetFirmwareModifiedFromObject(void *a1)
{
  int v1; // edi
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v1 = BiOpenStoreKeyFromObject(a1, &v3);
  if ( v1 >= 0 )
    BiSetFirmwareModified(v3, 1);
  if ( v3 )
    BiCloseKey(v3);
  return (unsigned int)v1;
}
