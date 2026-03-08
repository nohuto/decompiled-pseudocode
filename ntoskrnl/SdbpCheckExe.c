/*
 * XREFs of SdbpCheckExe @ 0x14085F610
 * Callers:
 *     SdbpSearchDB @ 0x14079F878 (SdbpSearchDB.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpCheckForMatch @ 0x1407A1468 (SdbpCheckForMatch.c)
 */

__int64 __fastcall SdbpCheckExe(int a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, int a6, int *a7, void *a8)
{
  unsigned int v9; // ebx
  int v10; // ebp
  int v12; // edi
  __int64 v13; // rdx
  int v14; // eax
  int v15; // [rsp+30h] [rbp-18h] BYREF
  int v16[5]; // [rsp+34h] [rbp-14h] BYREF

  v15 = 2;
  v9 = 0;
  v16[0] = 0;
  v10 = a3;
  if ( (unsigned int)SdbpCheckForMatch(a1, a2, a3, a5, &v15, (__int64)v16) )
  {
    v12 = v15;
    if ( (a6 != 1 || v15 == 2) && (a6 != 2 || v15 != 2) )
    {
      if ( v15 == 1 )
      {
        memset(a8, 0, 0x80uLL);
        *a4 = 0;
      }
      v13 = (unsigned int)*a4;
      if ( (unsigned int)v13 < 0x10 )
      {
        v14 = v16[0];
        *((_DWORD *)a8 + 2 * v13) = v10;
        *((_DWORD *)a8 + 2 * v13 + 1) = v14;
        *a4 = v13 + 1;
        v9 = 1;
        if ( a7 )
          *a7 = v12;
      }
      else
      {
        AslLogCallPrintf(1LL);
        ++*a4;
        return 0;
      }
    }
  }
  return v9;
}
