/*
 * XREFs of RtlIntersectBitMaps @ 0x1405E62F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlIntersectBitMaps(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  __int64 v6; // r11
  __int64 v7; // rdx
  int v8; // ecx

  v2 = *(_DWORD *)a1;
  result = *a2;
  if ( *(_DWORD *)a1 >= (unsigned int)result )
    v2 = *a2;
  v6 = 0LL;
  if ( v2 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      result = *((_QWORD *)a2 + 1);
      if ( v2 < 0x20 )
        break;
      v8 = *(_DWORD *)(result + 4 * v6);
      result = v2 - 32;
      *(_DWORD *)(v7 + 4 * v6) &= v8;
      v2 = result;
      v6 = (unsigned int)(v6 + 1);
      if ( !(_DWORD)result )
        return result;
    }
    *(_DWORD *)(v7 + 4 * v6) &= *(_DWORD *)(result + 4 * v6) | -(int)(1LL << v2);
  }
  return result;
}
