/*
 * XREFs of SdbpBinarySearchFirst @ 0x14079F190
 * Callers:
 *     SdbpGetFirstIndexedRecord @ 0x14079F5A8 (SdbpGetFirstIndexedRecord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpBinarySearchFirst(__int64 a1, unsigned int a2, unsigned __int64 a3, int *a4)
{
  int v4; // r11d
  unsigned int v5; // r10d
  int v6; // ebx
  int v7; // eax

  *a4 = -1;
  v4 = a2 - 1;
  v5 = 0;
  v6 = 0;
  if ( (int)(a2 - 1) >= 0 )
  {
    while ( 1 )
    {
      v7 = (v4 + v6) / 2;
      if ( v7 < 0 || v7 >= a2 )
        break;
      if ( a3 == *(_QWORD *)(a1 + 12LL * v7) )
      {
        if ( !v7 || (v4 = v7 - 1, *(_QWORD *)(a1 + 12LL * v7 - 12) != a3) )
        {
          v5 = 1;
          *a4 = v7;
          return v5;
        }
      }
      else if ( a3 >= *(_QWORD *)(a1 + 12LL * v7) )
      {
        v6 = v7 + 1;
      }
      else
      {
        v4 = v7 - 1;
      }
      if ( v4 < v6 )
        return v5;
    }
  }
  return 0LL;
}
