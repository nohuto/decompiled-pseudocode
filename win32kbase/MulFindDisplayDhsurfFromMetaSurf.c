/*
 * XREFs of MulFindDisplayDhsurfFromMetaSurf @ 0x1C018BCD8
 * Callers:
 *     bDfbSurfacesMigrated @ 0x1C0186C20 (bDfbSurfacesMigrated.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MulFindDisplayDhsurfFromMetaSurf(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 **v5; // r8
  __int64 v6; // r10
  _QWORD *v7; // r9
  __int64 v8; // rax

  if ( *((_WORD *)a1 + 38) != 3 )
    return 0LL;
  v2 = a1[3];
  v3 = 0LL;
  v4 = *a1;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 40) & 0x20000) != 0 )
    {
      if ( v4 )
      {
        v5 = *(__int64 ***)a1[2];
        if ( v5 )
        {
          v6 = *(_QWORD *)(v4 + 8);
          while ( 1 )
          {
            v7 = *(_QWORD **)(v6 + 8LL * *((unsigned int *)v5 + 4));
            if ( v7 )
            {
              v8 = v7[3];
              if ( !v8 || *(_DWORD *)(*(_QWORD *)(v8 + 1760) + 24LL) == 1 )
                break;
            }
            v5 = (__int64 **)*v5;
            if ( !v5 )
              return v3;
          }
          return *v7;
        }
      }
    }
  }
  return v3;
}
