/*
 * XREFs of HsaSlConfigureLeafPhysicalPte @ 0x14052F670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaSlConfigureLeafPhysicalPte(unsigned __int64 *a1, unsigned __int64 a2, char a3, unsigned int a4)
{
  unsigned int v5; // edi
  bool v6; // r9
  int v7; // ebx
  unsigned __int64 v9; // r11
  unsigned int i; // r8d
  unsigned __int64 v11; // rcx

  v5 = a3 & 1;
  v6 = 0;
  v7 = a3 & 2;
  if ( (a3 & 2) == 0 )
    v6 = !(a3 & 1);
  v9 = a2 >> 12;
  for ( i = 0; i < a4; v9 = v11 )
  {
    if ( *a1 )
      break;
    ++i;
    v11 = v9 + 1;
    *a1++ = ((-(__int64)(v7 != 0) & 0x4000000000000000LL) + 1) | ((v9 & 0xFFFFFFFFFFLL | ((unsigned __int64)v5 << 49)) << 12);
    if ( v6 )
      v11 = v9;
  }
  return i;
}
