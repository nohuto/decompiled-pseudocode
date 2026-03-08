/*
 * XREFs of HvlQueryProcessorTopologyEx @ 0x14053DFB0
 * Callers:
 *     HvlQueryProcessorTopology @ 0x14053DF50 (HvlQueryProcessorTopology.c)
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x1403C8E08 (HvlpGetLpcbByLpIndex.c)
 */

__int64 __fastcall HvlQueryProcessorTopologyEx(unsigned int a1, _WORD *a2, _DWORD *a3, __int64 a4, int *a5)
{
  int *LpcbByLpIndex; // rax
  _DWORD *v9; // r11
  int *v10; // r10
  int v11; // ecx
  int v12; // eax

  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  if ( a1 >= 0x400 )
    return 3221225485LL;
  LpcbByLpIndex = HvlpGetLpcbByLpIndex(a1);
  v10 = LpcbByLpIndex;
  if ( !LpcbByLpIndex )
    return 3221225485LL;
  if ( a2 )
    *a2 = *((_WORD *)LpcbByLpIndex + 7);
  if ( a3 )
    *a3 = LpcbByLpIndex[4];
  if ( v9 )
    *v9 = LpcbByLpIndex[5];
  if ( a5 )
  {
    v11 = LpcbByLpIndex[6];
    v12 = -1;
    if ( v11 != -1 )
      v12 = v10[6];
    *a5 = v12;
  }
  return 0LL;
}
