/*
 * XREFs of HvpProtectBin @ 0x140723D50
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x14065702C (HvpRemapAndEnlistHiveBins.c)
 *     HvpAddBin @ 0x140721E28 (HvpAddBin.c)
 *     HvpMapHiveImage @ 0x140873EE4 (HvpMapHiveImage.c)
 * Callees:
 *     ExProtectPool @ 0x140362298 (ExProtectPool.c)
 */

__int64 __fastcall HvpProtectBin(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a4 )
  {
    if ( !(unsigned int)ExProtectPool(a3, a2, 4u) )
      return (unsigned int)-1073741670;
  }
  else
  {
    ExProtectPool(a3, a2, 2u);
  }
  return v4;
}
