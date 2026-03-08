/*
 * XREFs of ?bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z @ 0x1C00A6620
 * Callers:
 *     GreRectInRegion @ 0x1C00A65A0 (GreRectInRegion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RGNOBJ::bInside(RGNOBJ *this, struct _RECTL *a2)
{
  __int64 v2; // rax
  LONG left; // ebx
  LONG right; // r10d
  LONG top; // r9d
  LONG bottom; // r11d
  int v7; // r8d
  unsigned int *v8; // rdx
  __int64 v9; // r9
  LONG *i; // rax

  v2 = *(_QWORD *)this;
  left = a2->left;
  if ( a2->left < *(_DWORD *)(*(_QWORD *)this + 64LL) )
  {
    right = a2->right;
    if ( right > *(_DWORD *)(v2 + 56) )
    {
      top = a2->top;
      if ( top < *(_DWORD *)(v2 + 68) )
      {
        bottom = a2->bottom;
        if ( bottom > *(_DWORD *)(v2 + 60) )
        {
          v7 = *(_DWORD *)(v2 + 52);
          v8 = *(unsigned int **)(v2 + 32);
          if ( v7 )
          {
            while ( top >= (int)v8[2] )
            {
              v8 += *v8 + 4;
              if ( !--v7 )
                return 1LL;
            }
            do
            {
              if ( bottom <= (int)v8[1] )
                break;
              v9 = *v8;
              for ( i = (LONG *)(v8 + 3); i < (LONG *)&v8[v9 + 3]; i += 2 )
              {
                if ( left < i[1] )
                {
                  if ( right > *i )
                    return 2LL;
                  break;
                }
              }
              v8 = (unsigned int *)((char *)v8 + (unsigned int)(4 * v9 + 16));
              --v7;
            }
            while ( v7 );
          }
        }
      }
    }
  }
  return 1LL;
}
