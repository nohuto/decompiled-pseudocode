/*
 * XREFs of CmQueryBuildVersionInformation @ 0x14078C8A8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpQueryDowncastString @ 0x14078C9F4 (CmpQueryDowncastString.c)
 */

__int64 __fastcall CmQueryBuildVersionInformation(int *a1, int a2, _WORD *a3, unsigned int a4, _DWORD *a5)
{
  int v6; // edi
  _DWORD *v7; // rbx

  if ( a2 == 4 && a4 >= 0x244 )
  {
    v6 = *a1;
    if ( *a1 >= (unsigned int)CmpLayerVersionCount )
    {
      *a5 = 0;
      return 2147483674LL;
    }
    else
    {
      v7 = (_DWORD *)CmpLayerVersions[v6];
      memset(a3, 0, a4);
      *a3 = v6;
      a3[1] = CmpLayerVersionCount;
      *((_DWORD *)a3 + 1) = *v7;
      *((_DWORD *)a3 + 2) = v7[1];
      *((_DWORD *)a3 + 3) = v7[2];
      *((_DWORD *)a3 + 4) = v7[3];
      *((_DWORD *)a3 + 144) = v7[200];
      CmpQueryDowncastString(a3 + 10, 128LL, v7 + 4);
      CmpQueryDowncastString(a3 + 74, 128LL, v7 + 16);
      CmpQueryDowncastString(a3 + 138, 128LL, v7 + 20);
      CmpQueryDowncastString(a3 + 202, 128LL, v7 + 24);
      CmpQueryDowncastString(a3 + 266, 26LL, v7 + 8);
      CmpQueryDowncastString(a3 + 279, 16LL, v7 + 12);
      *a5 = 580;
      return 0LL;
    }
  }
  else
  {
    *a5 = 0;
    return 3221225476LL;
  }
}
