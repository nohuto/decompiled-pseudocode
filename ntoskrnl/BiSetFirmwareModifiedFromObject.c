/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x1403902F4
 * Callers:
 *     BcdDeleteObject @ 0x14082C47C (BcdDeleteObject.c)
 *     BiDeleteElement @ 0x14082CDF8 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14082D894 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x140390340 (BiSetFirmwareModified.c)
 *     BiOpenStoreKeyFromObject @ 0x1403904AC (BiOpenStoreKeyFromObject.c)
 *     BiCloseKey @ 0x14082E938 (BiCloseKey.c)
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
