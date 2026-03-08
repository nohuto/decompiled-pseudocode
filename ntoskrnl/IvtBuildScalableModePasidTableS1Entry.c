/*
 * XREFs of IvtBuildScalableModePasidTableS1Entry @ 0x14052991C
 * Callers:
 *     IvtSetPasidAddressSpace @ 0x14052B2E0 (IvtSetPasidAddressSpace.c)
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x14052BA10 (IvtUpdateScalableModePasidTablesForPasid.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

unsigned __int64 __fastcall IvtBuildScalableModePasidTableS1Entry(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned __int64 *a6)
{
  unsigned __int64 result; // rax
  int v10; // r9d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int16 v13; // cx
  int v14; // r10d
  unsigned int v15; // r8d
  unsigned __int64 v16; // rdx

  result = (unsigned __int64)memset(a6, 0, 0x40uLL);
  v10 = 0;
  if ( a3 )
  {
    v11 = ((unsigned __int64)(a2 & 7) << 6) | 1;
    *a6 = v11;
    *a6 = v11 | (4LL * (*(_DWORD *)(a1 + 248) & 7));
    if ( (*(_BYTE *)(a1 + 230) & 1) != 0 )
      a6[1] |= 0x800000uLL;
    v12 = a6[2] & 0xFFFFFFFFFFFFFFFCuLL;
    v13 = v12 | a5 & 1 | 0x20;
    if ( a5 )
      v13 = v12 | a5 & 1 | 0x70;
    a6[2] = (a3 << 12) | v13 & 0xFF3;
    result = *(unsigned int *)(a1 + 224);
    if ( (result & 0x2000000) != 0 )
    {
      result = __readmsr(0x277u);
      v14 = 0;
      v15 = 0;
      do
      {
        v16 = result >> v15;
        v15 += 8;
        LODWORD(v16) = (v16 & 0xF) << v14;
        v14 += 4;
        v10 |= v16;
      }
      while ( v15 < 0x40 );
      *((_DWORD *)a6 + 3) = v10;
    }
  }
  return result;
}
