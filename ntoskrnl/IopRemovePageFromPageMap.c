/*
 * XREFs of IopRemovePageFromPageMap @ 0x140551334
 * Callers:
 *     IoFreeDumpRange @ 0x14054E080 (IoFreeDumpRange.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14020FC50 (RtlClearBitsEx.c)
 */

__int64 __fastcall IopRemovePageFromPageMap(
        unsigned __int64 *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  _QWORD *v15; // rbx
  __int64 i; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx

  v5 = a3;
  if ( !a4 )
    return 0LL;
  v8 = *a1;
  v9 = a3 + a4 - 1;
  if ( a3 < *a1 )
  {
    if ( v9 >= v8 )
    {
      if ( !a5 )
        return 3221225793LL;
      v9 = v8 - 1;
      a4 = v8 - a3;
    }
    if ( a4 )
    {
      if ( a2 )
      {
        do
        {
          v11 = a1[1];
          v12 = v5 & -(__int64)(v5 < *a1);
          v13 = *a1 - 1;
          while ( 1 )
          {
            if ( v13 - v12 == -1LL )
              goto LABEL_14;
            v15 = (_QWORD *)(v11 + 8 * (v12 >> 6));
            for ( i = ~*v15 | ((1LL << (v12 & 0x3F)) - 1); i == -1; i = ~*v15 )
            {
              if ( (unsigned __int64)++v15 > v11 + 8 * (v13 >> 6) )
                goto LABEL_14;
            }
            _BitScanForward64(&v17, ~i);
            v14 = v17 + ((__int64)((__int64)v15 - v11) >> 3 << 6);
            if ( v14 > v13 )
            {
LABEL_14:
              v14 = -1LL;
            }
            else if ( v14 != -1LL )
            {
              break;
            }
            if ( !v12 )
              break;
            v18 = v5 + 1;
            if ( v5 + 1 > *a1 )
              v18 = *a1;
            v13 = v18 - 1;
            v12 = 0LL;
          }
          if ( v14 < v5 )
            break;
          if ( v14 == -1LL )
            break;
          RtlClearBitsEx((__int64)a1, v14, 1uLL);
          ++*a2;
          v5 = v14 + 1;
        }
        while ( v14 + 1 <= v9 );
      }
      else
      {
        RtlClearBitsEx((__int64)a1, a3, a4);
      }
    }
    return 0LL;
  }
  if ( !a5 )
    return 3221225793LL;
  return 0LL;
}
