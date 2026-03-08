/*
 * XREFs of HUBHTX_GetClearTtBufferInfoForEndpoint @ 0x1C000696C
 * Callers:
 *     HUBHTX_ClearTTBuffer @ 0x1C0006BA0 (HUBHTX_ClearTTBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHTX_GetClearTtBufferInfoForEndpoint(__int64 a1, __int64 a2, char a3, _WORD *a4)
{
  bool v5; // cc
  unsigned int v7; // r10d
  _QWORD *v8; // rdi
  _QWORD *i; // rax
  _QWORD *v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int16 v15; // dx
  __int16 v16; // cx

  v5 = *(_DWORD *)(a1 + 172) <= 1u;
  v7 = -1073741823;
  *a4 = 0;
  if ( v5 )
  {
    if ( a2 == *(_QWORD *)(a1 + 88) )
    {
      *a4 = a3 & 0xF | (16 * (*(_WORD *)(a1 + 1648) & 0x7F));
      return 0;
    }
    else
    {
      v8 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
      for ( i = (_QWORD *)*v8; ; i = (_QWORD *)v10[1] )
      {
        v10 = i - 1;
        if ( v8 == i )
          break;
        v11 = *((_DWORD *)v10 + 6);
        v12 = 0LL;
        if ( v11 )
        {
          v13 = v10 + 5;
          while ( *v13 != a2 )
          {
            v12 = (unsigned int)(v12 + 1);
            v13 += 9;
            if ( (unsigned int)v12 >= v11 )
              goto LABEL_10;
          }
          v14 = v10[9 * v12 + 9];
          if ( (*(_BYTE *)(v14 + 3) & 3) != 0 )
          {
            if ( (*(_BYTE *)(v14 + 3) & 3) != 2 )
              return v7;
            v15 = 4096;
          }
          else
          {
            v15 = 0;
          }
          v16 = v15 | a3 & 0xF | (16 * (*(_WORD *)(a1 + 1648) & 0x7F));
          *a4 = v16;
          if ( a3 < 0 )
            *a4 = v16 | 0x8000;
          return 0;
        }
LABEL_10:
        ;
      }
    }
  }
  return v7;
}
