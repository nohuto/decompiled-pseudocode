/*
 * XREFs of HsaFlConfigureLeafPhysicalPte @ 0x14052F450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaFlConfigureLeafPhysicalPte(unsigned __int64 *a1, unsigned __int64 a2, char a3, unsigned int a4)
{
  unsigned __int64 v4; // rdx
  int v5; // ebx
  unsigned int i; // r10d
  __int64 v8; // r8

  v4 = a2 >> 12;
  v5 = a3 & 2;
  for ( i = 0; i < a4; ++a1 )
  {
    if ( *a1 )
      break;
    v8 = (v4 & 0xFFFFFFFFFFLL) << 12;
    ++i;
    ++v4;
    *a1 = (v5 != 0 ? 3LL : 1LL) | v8 | 0x8000000000000004uLL;
  }
  return i;
}
