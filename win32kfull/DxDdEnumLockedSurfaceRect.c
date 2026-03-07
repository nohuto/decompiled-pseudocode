__int64 *__fastcall DxDdEnumLockedSurfaceRect(__int64 a1, __int64 *a2, _OWORD *a3)
{
  __int64 *v3; // rcx
  __int64 *result; // rax

  v3 = (__int64 *)(a1 + 2600);
  if ( !a2 )
    a2 = v3;
  while ( 1 )
  {
    a2 = (__int64 *)*a2;
    if ( a2 == v3 )
      break;
    if ( *((_DWORD *)a2 + 5) )
    {
      result = a2;
      *a3 = *(_OWORD *)((char *)a2 + 28);
      return result;
    }
  }
  return 0LL;
}
