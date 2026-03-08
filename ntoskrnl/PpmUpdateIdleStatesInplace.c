/*
 * XREFs of PpmUpdateIdleStatesInplace @ 0x140583EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmUpdateIdleStatesInplace(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  int *v7; // rdx
  unsigned int v8; // ecx

  v2 = *(_QWORD *)(a1 + 33600);
  v3 = 0;
  if ( v2 )
  {
    v4 = *(unsigned int *)(a2 + 116);
    if ( (_DWORD)v4 == *(_DWORD *)(v2 + 40) )
    {
      *(_QWORD *)(v2 + 688) = *(_QWORD *)(a2 + 8);
      if ( (_DWORD)v4 )
      {
        v5 = v2 + 1392;
        v6 = v4;
        v7 = (int *)(a2 + 120);
        do
        {
          *(_BYTE *)(v5 + 63) = (*v7 & 0x40000000) != 0;
          *(_DWORD *)v5 = v7[1];
          v5 += 344LL;
          *(_DWORD *)(v5 - 336) = v7[3];
          *(_DWORD *)(v5 - 340) = v7[2];
          *(_BYTE *)(v5 - 287) = *v7 < 0;
          v8 = *v7;
          v7 += 8;
          *(_DWORD *)(v5 - 332) = v8 >> 31;
          --v6;
        }
        while ( v6 );
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
