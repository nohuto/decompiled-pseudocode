bool __fastcall PnpIsAnyDeviceInUse(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rdx
  int v4; // r9d
  int v5; // r10d

  i = 0LL;
  v4 = 0;
  v5 = 0;
  do
  {
    if ( v4 )
      break;
    for ( i = *a1; i; i = *(_QWORD *)(i + 24) )
    {
      v4 = *(_DWORD *)(i + 4);
      if ( v4 )
        break;
    }
    ++v5;
    ++a1;
  }
  while ( !v5 );
  if ( a3 )
    *a3 = i;
  return v4 != 0;
}
