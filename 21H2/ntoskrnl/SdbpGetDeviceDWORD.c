/*
 * XREFs of SdbpGetDeviceDWORD @ 0x140965B38
 * Callers:
 *     SdbpMatchDeviceDWORD @ 0x1409660D8 (SdbpMatchDeviceDWORD.c)
 * Callees:
 *     SdbReadDWORDTag @ 0x140759F54 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpGetDeviceDWORD(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebx
  unsigned int FirstTag; // eax
  __int64 v7; // r9

  v3 = a3;
  v5 = -1;
  FirstTag = SdbFindFirstTag(a1, a2, a3);
  if ( FirstTag )
    return (unsigned int)SdbReadDWORDTag(a1, FirstTag, v3, v7);
  return v5;
}
