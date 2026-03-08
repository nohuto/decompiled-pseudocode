/*
 * XREFs of RtlDescribeChunkLZNT1 @ 0x1409C0C10
 * Callers:
 *     RtlReserveChunkLZNT1 @ 0x1409C0CF0 (RtlReserveChunkLZNT1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDescribeChunkLZNT1(__int16 **a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  __int16 *v5; // rcx
  unsigned int v7; // r10d
  __int16 v8; // ax
  __int16 *v9; // r8
  __int64 v10; // rcx
  __int16 *v11; // r8

  *(_QWORD *)a3 = *a1;
  *a4 = 0;
  v5 = *a1;
  v7 = -2147483622;
  if ( (unsigned __int64)v5 <= a2 - 4 )
  {
    v8 = *v5;
    if ( *v5 )
    {
      v7 = 0;
      *a4 = (v8 & 0xFFF) + 3;
      v9 = (__int16 *)((char *)*a1 + (v8 & 0xFFFu) + 3);
      *a1 = v9;
      if ( (unsigned __int64)v9 > a2 || (v8 & 0x7000) != 0x3000 )
      {
        v11 = (__int16 *)((char *)v9 - (unsigned int)*a4);
        goto LABEL_14;
      }
      v10 = (unsigned int)*a4;
      if ( v8 < 0 )
      {
        if ( (_DWORD)v10 == 6 && *(_BYTE *)(*(_QWORD *)a3 + 2LL) == 2 && !*(_BYTE *)(*(_QWORD *)a3 + 3LL) )
          *a4 = 0;
      }
      else
      {
        if ( (_DWORD)v10 != 4098 )
        {
          v11 = (__int16 *)((char *)v9 - v10);
LABEL_14:
          v7 = -1073741246;
          *a1 = v11;
          return v7;
        }
        *(_QWORD *)a3 += 2LL;
        *a4 -= 2;
      }
    }
  }
  return v7;
}
