/*
 * XREFs of PiAuCreateSecurityObjects @ 0x140B5A978
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PiAuFreeUserSids @ 0x140B5B340 (PiAuFreeUserSids.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B5B3D8 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateUserSids @ 0x140B5B564 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B5B788 (PiAuCreateStandardSecurityObject.c)
 */

__int64 PiAuCreateSecurityObjects()
{
  int UserSids; // ebx
  _BYTE v2[72]; // [rsp+20h] [rbp-48h] BYREF

  memset(v2, 0, 0x40uLL);
  UserSids = PiAuCreateUserSids(v2);
  if ( UserSids >= 0 )
  {
    UserSids = PiAuCreateStandardSecurityObject(v2);
    if ( UserSids >= 0 )
      UserSids = PiAuCreateLocalSystemSecurityObject(v2);
  }
  PiAuFreeUserSids(v2);
  return (unsigned int)UserSids;
}
