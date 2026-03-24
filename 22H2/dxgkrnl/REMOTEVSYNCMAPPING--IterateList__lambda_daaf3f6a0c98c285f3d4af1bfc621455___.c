/*
 * XREFs of REMOTEVSYNCMAPPING::IterateList__lambda_daaf3f6a0c98c285f3d4af1bfc621455___ @ 0x1C004EFC8
 * Callers:
 *     ?AddMapping@REMOTEVSYNCMAPPING@@QEAAJPEAUREMOTE_VYSNC_MAPPING@1@@Z @ 0x1C004F390 (-AddMapping@REMOTEVSYNCMAPPING@@QEAAJPEAUREMOTE_VYSNC_MAPPING@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall REMOTEVSYNCMAPPING::IterateList__lambda_daaf3f6a0c98c285f3d4af1bfc621455___(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // r8
  __int64 result; // rax
  _QWORD *v5; // r9
  unsigned int *v6; // rdx

  v2 = *a1;
  while ( v2 != a1 )
  {
    result = *(_QWORD *)(a2 + 16);
    v5 = v2;
    v2 = (_QWORD *)*v2;
    if ( v5[4] == *(_QWORD *)(result + 16) )
    {
      ++**(_DWORD **)a2;
      v6 = *(unsigned int **)(a2 + 16);
      result = *v6;
      if ( *((_DWORD *)v5 + 4) == (_DWORD)result )
      {
        result = v6[1];
        if ( *((_DWORD *)v5 + 5) == (_DWORD)result )
        {
          result = v6[2];
          if ( *((_DWORD *)v5 + 6) == (_DWORD)result )
          {
            result = *((_QWORD *)v6 + 3);
            if ( v5[5] == result )
            {
              result = *(_QWORD *)(a2 + 8);
              *(_BYTE *)result = 1;
            }
          }
        }
      }
    }
  }
  return result;
}
