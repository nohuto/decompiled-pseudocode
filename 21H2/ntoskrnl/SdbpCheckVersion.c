/*
 * XREFs of SdbpCheckVersion @ 0x140A146C0
 * Callers:
 *     SdbpCheckAttribute @ 0x140841858 (SdbpCheckAttribute.c)
 *     SdbpMatchOsVersion @ 0x1408436C0 (SdbpMatchOsVersion.c)
 *     SdbpCheckPackageAttributes @ 0x140A11F60 (SdbpCheckPackageAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckVersion(unsigned __int64 a1, unsigned __int64 a2)
{
  int v3; // ecx

  v3 = 48;
  while ( (unsigned __int16)(a1 >> v3) == (unsigned __int16)(a2 >> v3) || (unsigned __int16)(a1 >> v3) == 0xFFFF )
  {
    v3 -= 16;
    if ( v3 < 0 )
      return 1LL;
  }
  return 0LL;
}
