/*
 * XREFs of SdbpBinarySearchUnique @ 0x14079E1DC
 * Callers:
 *     SdbpGetFirstIndexedRecord @ 0x14079F5A8 (SdbpGetFirstIndexedRecord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpBinarySearchUnique(__int64 a1, unsigned int a2, unsigned __int64 a3, int *a4)
{
  int v4; // r11d
  int v5; // r10d
  int v6; // eax
  unsigned int v7; // ecx

  *a4 = -1;
  v4 = a2 - 1;
  v5 = 0;
  v6 = -1;
  if ( (int)(a2 - 1) < 0 )
  {
LABEL_7:
    v7 = 1;
    if ( v5 - v4 > 1 )
      *a4 = v6;
    else
      return 0;
    return v7;
  }
  else
  {
    while ( 1 )
    {
      v6 = (v4 + v5) / 2;
      if ( v6 < 0 || v6 >= a2 )
        return 0LL;
      if ( a3 > *(_QWORD *)(a1 + 12LL * v6) || (v4 = v6 - 1, a3 >= *(_QWORD *)(a1 + 12LL * v6)) )
        v5 = v6 + 1;
      if ( v4 < v5 )
        goto LABEL_7;
    }
  }
}
