/*
 * XREFs of PpmPerfResetHistory @ 0x1403C2848
 * Callers:
 *     PpmPerfRecordUtility @ 0x140206590 (PpmPerfRecordUtility.c)
 *     PpmPerfResetHistoryAll @ 0x1407BC134 (PpmPerfResetHistoryAll.c)
 *     PpmPerfResizeHistory @ 0x1408E6428 (PpmPerfResizeHistory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfResetHistory(__int64 a1)
{
  unsigned int *v1; // r8
  unsigned __int16 v2; // r9
  unsigned int v3; // edx
  int v4; // eax
  unsigned __int16 v5; // r10
  int v6; // eax
  unsigned int v7; // edx
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rcx

  v1 = *(unsigned int **)(a1 + 32);
  if ( v1 )
  {
    v2 = *(_WORD *)(a1 + 40);
    v3 = *v1;
    v4 = *v1 * v2;
    v1[1] = 0;
    v1[3] = 0;
    v1[2] = v4;
    v5 = *(_WORD *)(a1 + 54);
    v6 = v3 * v5;
    v7 = 0;
    v1[4] = v6;
    result = 0LL;
    *(_QWORD *)(v1 + 5) = 0LL;
    for ( v1[7] = 0; v7 < *v1; *((_BYTE *)v1 + 2 * v10 + 40) = 0 )
    {
      v9 = v7++;
      v10 = 5 * v9;
      result = 0LL;
      *((_WORD *)v1 + v10 + 17) = 0;
      *((_WORD *)v1 + v10 + 16) = v2;
      *((_WORD *)v1 + v10 + 18) = v5;
      *((_WORD *)v1 + v10 + 19) = 0;
    }
  }
  return result;
}
