__int64 __fastcall RtlMergeBitMaps(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax
  __int64 v4; // r8

  v2 = *(_DWORD *)a1;
  result = *a2;
  if ( *(_DWORD *)a1 >= (unsigned int)result )
    v2 = *a2;
  v4 = 0LL;
  if ( v2 )
  {
    while ( 1 )
    {
      result = *((_QWORD *)a2 + 1);
      if ( v2 < 0x20 )
        break;
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v4) |= *(_DWORD *)(result + 4 * v4);
      v4 = (unsigned int)(v4 + 1);
      v2 -= 32;
      if ( !v2 )
        return result;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL * (unsigned int)v4) |= *(_DWORD *)(result + 4LL * (unsigned int)v4) & ((1LL << v2) - 1);
  }
  return result;
}
