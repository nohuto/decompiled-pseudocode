/*
 * XREFs of PsAcquireSiloHardReference @ 0x140200A10
 * Callers:
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14071F81C (IopAllocateFoExtensionsOnCreate.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PsAcquireSiloHardReference(_DWORD *Object)
{
  signed __int64 v2; // rax
  unsigned __int64 i; // rcx
  signed __int64 v4; // rtt

  if ( !Object )
    return 0LL;
  if ( (Object[330] & 0x40000000) == 0 )
    __int2c();
  _m_prefetchw(Object + 380);
  v2 = *((_QWORD *)Object + 190);
  for ( i = v2 + 1; i > 1; i = v2 + 1 )
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 190, i, v2);
    if ( v4 == v2 )
    {
      ObfReferenceObjectWithTag(Object, 0x486C6953u);
      return 0LL;
    }
  }
  if ( i != 1 )
    __fastfail(0xEu);
  return 3221225738LL;
}
