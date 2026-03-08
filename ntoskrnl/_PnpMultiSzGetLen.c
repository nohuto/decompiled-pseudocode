/*
 * XREFs of _PnpMultiSzGetLen @ 0x1406C8258
 * Callers:
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406C9418 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA2A4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceSiblings @ 0x140839C1C (_CmGetDeviceSiblings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpMultiSzGetLen(_WORD *a1)
{
  unsigned int v1; // edx
  _WORD *i; // rax
  __int64 v3; // r8

  v1 = 0;
  if ( a1 )
  {
    for ( i = a1; *i; i += v3 + 1 )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( i[v3] );
    }
    return (unsigned int)(i - a1) + 1;
  }
  return v1;
}
