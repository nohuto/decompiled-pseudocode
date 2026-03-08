/*
 * XREFs of IvtSlConfigureLeafPhysicalPte @ 0x14039D000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtSlConfigureLeafPhysicalPte(__int64 *a1, unsigned __int64 a2, char a3, unsigned int a4)
{
  unsigned int v5; // ebx
  bool v6; // r9
  bool v7; // al
  int v9; // r8d
  unsigned __int64 v10; // r11
  unsigned int i; // edx
  unsigned __int64 v12; // rcx

  v5 = a3 & 1;
  v6 = 0;
  v7 = !(a3 & 1);
  v9 = a3 & 2;
  if ( !v9 )
    v6 = v7;
  v10 = a2 >> 12;
  for ( i = 0; i < a4; v10 = v12 )
  {
    if ( *a1 )
      break;
    ++i;
    *a1++ = v5 | ((v10 & 0xFFFFFFFFFFLL) << 12) | (v9 != 0 ? 2 : 0);
    v12 = v10 + 1;
    if ( v6 )
      v12 = v10;
  }
  return i;
}
