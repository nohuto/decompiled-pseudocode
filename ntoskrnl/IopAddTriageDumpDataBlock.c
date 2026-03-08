/*
 * XREFs of IopAddTriageDumpDataBlock @ 0x1403848EC
 * Callers:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x14054FDC8 (IopAddRunTimeTriageDataBlocks.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x1403849BC (KiIsAddressRangeValid.c)
 */

char __fastcall IopAddTriageDumpDataBlock(
        unsigned int a1,
        __int64 a2,
        unsigned int *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v6; // rdi
  unsigned int v9; // r8d
  unsigned __int64 i; // rdx
  unsigned int v11; // r10d
  unsigned __int64 *j; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned __int64 *v15; // rcx

  v6 = a4;
  if ( a5 - 1 > 0x3FFFE || !(unsigned __int8)KiIsAddressRangeValid(a4) )
    return 0;
  v9 = 0;
  for ( i = a5 + v6; v9 < a1; a2 += 16LL )
  {
    v11 = 0;
    for ( j = *(unsigned __int64 **)(a2 + 8); v11 < *(_DWORD *)a2; j += 2 )
    {
      v13 = j[1];
      if ( v6 < v13 && i > *j )
      {
        if ( v6 < *j )
        {
          if ( i <= v13 )
            i = *j;
        }
        else
        {
          if ( i <= v13 )
            return 1;
          v6 = j[1];
        }
      }
      ++v11;
    }
    ++v9;
  }
  if ( !a3 )
    return 0;
  v14 = *a3;
  if ( *a3 >= a3[1] )
    return 0;
  v15 = (unsigned __int64 *)(*((_QWORD *)a3 + 1) + 16LL * v14);
  *a3 = v14 + 1;
  *v15 = v6;
  v15[1] = i;
  return 1;
}
