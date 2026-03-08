/*
 * XREFs of RtlIntersectBitMaps @ 0x1405A6530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlIntersectBitMaps(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  __int64 v5; // r11
  __int64 v6; // rdx

  v2 = *(_DWORD *)a1;
  result = *a2;
  if ( *(_DWORD *)a1 >= (unsigned int)result )
    v2 = *a2;
  v5 = 0LL;
  if ( v2 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      result = *((_QWORD *)a2 + 1);
      if ( v2 < 0x20 )
        break;
      *(_DWORD *)(v6 + 4 * v5) &= *(_DWORD *)(result + 4 * v5);
      v5 = (unsigned int)(v5 + 1);
      v2 -= 32;
      if ( !v2 )
        return result;
    }
    *(_DWORD *)(v6 + 4 * v5) &= *(_DWORD *)(result + 4 * v5) | -(int)(1LL << v2);
  }
  return result;
}
